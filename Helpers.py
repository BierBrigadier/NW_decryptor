import ConfigParser
import binascii
import zlib
import base64
from binascii import hexlify
import CONSTS
from termcolor import colored

import CryptoUtils
import LogUtils


def determine_method(active_ransomware, f, method, log_file):
    config = ConfigParser.ConfigParser()
    config.read("configs/" + active_ransomware)
    if method == "CRC_1":
        try:
            crc_1_hash_offset = config.get(active_ransomware, "CRC_1_hash_offset")
            crc_1_hash_length = config.get(active_ransomware, "CRC_1_hash_length")
            crc_1_data_offset = config.get(active_ransomware, "CRC_1_data_offset")
            crc_1_data_length = config.get(active_ransomware, "CRC_1_data_length")

            crc_1_hash = get_data(path=f, offset=int(crc_1_hash_offset), length=int(crc_1_hash_length))
            crc_1_data = get_data(path=f, offset=int(crc_1_data_offset), length=int(crc_1_data_length))

            retval = validate_crc32(crc_1_hash, crc_1_data)
            return retval
        except Exception as e:
            LogUtils.write_log(log_file, e)
        return False
    elif method == "CRC_2":
        try:
            crc_2_hash_offset = int(config.get(active_ransomware, "CRC_2_hash_offset"))
            crc_2_hash_length = int(config.get(active_ransomware, "CRC_2_hash_length"))
            crc_2_data_offset = int(config.get(active_ransomware, "CRC_2_data_offset"))
            crc_2_data_length = int(config.get(active_ransomware, "CRC_2_data_length"))

            crc_2_hash = get_data(path=f, offset=crc_2_hash_offset, length=crc_2_hash_length)
            crc_2_data = get_data(path=f, offset=crc_2_data_offset, length=crc_2_data_length)
            retval = validate_crc32(crc_2_hash, crc_2_data)
            return retval
        except Exception as e:
            LogUtils.write_log(log_file, e)
        return False
    elif method == "CRC_3":
        try:
            crc_3_hash_offset = int(config.get(active_ransomware, "CRC_3_hash_offset"))
            crc_3_hash_length = int(config.get(active_ransomware, "CRC_3_hash_length"))
            crc_3_data_offset = int(config.get(active_ransomware, "CRC_3_data_offset"))
            crc_3_data_length = int(config.get(active_ransomware, "CRC_3_data_length"))

            crc_3_hash = get_data(path=f, offset=crc_3_hash_offset, length=crc_3_hash_length)
            crc_3_data = get_data(path=f, offset=crc_3_data_offset, length=crc_3_data_length)
            retval = validate_crc32(crc_3_hash, crc_3_data)
            return retval
        except Exception as e:
            LogUtils.write_log(log_file, e)
        return False
    elif method == "Master_sk":
        try:
            master_sk = config.get(active_ransomware, "Master_sk")
            CONSTS.master_sk = master_sk
        except ConfigParser.NoSectionError as e:
            LogUtils.write_log(log_file, "ERROR: Master secret key: " + str(e))
            return False
        return True
    elif method == "Decode_key_1":
        try:
            decode_key_1 = config.get(active_ransomware, "Decode_key_1")
            val = config.get(active_ransomware, decode_key_1)
            # print(val)
            CONSTS.decode_key_1 = base64.b64decode(val)
        except BaseException as e:
            LogUtils.write_log(log_file, "ERROR: Decoding key: " + str(e))
            return False
        return True
    elif method == "Curve25591_1":
        try:
            curve_public_offset = int(config.get(active_ransomware, "Curve25591_1_public_offset"))
            curve_public_length = int(config.get(active_ransomware, "Curve25591_1_public_length"))
            CONSTS.curve_25591_public = get_data(f, curve_public_offset, curve_public_length)
            if CryptoUtils.gen_curve_key(CONSTS.curve_25591_public, CONSTS.decode_key_1):
                return True
        except Exception as e:
            print("exception")
            LogUtils.write_log(log_file, "ERROR: Generating shared key: " + str(e))
            return False
        return False
    elif method == "SHA3":
        try:
            CONSTS.sha_key_1 = CryptoUtils.hash_key(CONSTS.curve_25591_shared)
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Hashing key: " + str(e))
            return False
        return True
    elif method == "AES":
        try:
            CONSTS.aes_size = int(config.get(active_ransomware, "AES_size"))
            CONSTS.aes_mode = config.get(active_ransomware, "AES_mode")

            aes_iv_offset = int(config.get(active_ransomware, "AES_iv_offset"))
            aes_iv_length = int(config.get(active_ransomware, "AES_iv_length"))
            aes_data_offset = int(config.get(active_ransomware, "AES_data_offset"))
            aes_data_length = int(config.get(active_ransomware, "AES_data_length"))

            CONSTS.aes_iv = get_data(f, aes_iv_offset, aes_iv_length)
            CONSTS.aes_data = get_data(f, aes_data_offset, aes_data_length)
            CONSTS.aes_decrypted_data = CryptoUtils.aes_decrypt(CONSTS.sha_key_1, CONSTS.aes_iv, CONSTS.aes_mode,
                                                                CONSTS.aes_size, CONSTS.aes_data)
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: AES decryption: " + str(e))
        return True
    elif method == "Cut":
        try:
            CONSTS.cut_offset_start = int(config.get(active_ransomware, "Cut_offset_start"))
            CONSTS.cut_offset_end = int(config.get(active_ransomware, "Cut_offset_end"))
            CONSTS.aes_decrypted_data = cut_data(CONSTS.cut_offset_start, CONSTS.cut_offset_end,
                                                 CONSTS.aes_decrypted_data)
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Cutting: " + str(e))
            return False
        return True
    elif method == "Curve25591_2":
        try:
            curve_public_offset = int(config.get(active_ransomware, "Curve25591_2_public_offset"))
            curve_public_length = int(config.get(active_ransomware, "Curve25591_2_public_length"))
            CONSTS.curve_25591_public = get_data(f, curve_public_offset, curve_public_length)
            curve_secret = getattr(CONSTS, config.get(active_ransomware, "Curve25591_2_secret"))
            if CryptoUtils.gen_curve_key(CONSTS.curve_25591_public, curve_secret):
                return True
        except Exception as e:
            print("exception")
            LogUtils.write_log(log_file, "ERROR: Generating shared key: " + str(e))
            return False
        return False
    elif method == "Salsa20":
        return True
    else:
        print("no method fouund")
        return True


def get_data(path, offset, length):
    try:
        f = open(path, 'rb')
        f.seek(offset, 2)
        data = f.read(length)
        f.close()
        return data
    except IOError:
        print(IOError)
    return False


def validate_crc32(hash_of_crc32, data):
    hash_of_crc32 = hexlify(hash_of_crc32)
    data = hexlify(data)
    calculated_crc32 = hex(zlib.crc32(binascii.a2b_hex(data)) % 2 ** 32)
    hexlist = list(hash_of_crc32)
    crc32val = swappositions(hexlist)
    if crc32val == calculated_crc32:
        return True
    calculated_crc32 = calculated_crc32[:2] + "0" + calculated_crc32[2:]
    if crc32val == calculated_crc32:
        return True
    return False


def swappositions(hexlist):
    retval = "".join(map(str.__add__, hexlist[-2::-2], hexlist[-1::-2]))
    return "0x" + retval + "L"


def cut_data(offset_start, offset_end, data):
    return data[offset_start:offset_end]
