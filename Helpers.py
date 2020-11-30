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
            crc_2_hash_offset = config.get(active_ransomware, "CRC_2_hash_offset")
            crc_2_hash_length = config.get(active_ransomware, "CRC_2_hash_length")
            crc_2_data_offset = config.get(active_ransomware, "CRC_2_data_offset")
            crc_2_data_length = config.get(active_ransomware, "CRC_2_data_length")

            crc_2_hash = get_data(path=f, offset=int(crc_2_hash_offset), length=int(crc_2_hash_length))
            crc_2_data = get_data(path=f, offset=int(crc_2_data_offset), length=int(crc_2_data_length))
            retval = validate_crc32(crc_2_hash, crc_2_data)
            return retval
        except Exception as e:
            LogUtils.write_log(log_file, e)
        return False
    elif method == "CRC_3":
        try:
            crc_3_hash_offset = config.get(active_ransomware, "CRC_3_hash_offset")
            crc_3_hash_length = config.get(active_ransomware, "CRC_3_hash_length")
            crc_3_data_offset = config.get(active_ransomware, "CRC_3_data_offset")
            crc_3_data_length = config.get(active_ransomware, "CRC_3_data_length")

            crc_3_hash = get_data(path=f, offset=int(crc_3_hash_offset), length=int(crc_3_hash_length))
            crc_3_data = get_data(path=f, offset=int(crc_3_data_offset), length=int(crc_3_data_length))
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
            print(val)
            CONSTS.decode_key_1 = base64.b64decode(val)
            print(CONSTS.decode_key_1)
        except BaseException as e:
            LogUtils.write_log(log_file, "ERROR: Decoding key: " + str(e))
            return False
        return True

    elif method == "Curve25591_1":
        try:
            curve_public_offset = config.get(active_ransomware, "Curve25591_1_public_offset")
            curve_public_length = config.get(active_ransomware, "Curve25591_1_public_length")
            CONSTS.curve_25591_public = get_data(f, curve_public_offset, curve_public_length)
            print(CONSTS.curve_25591_public)
            if CryptoUtils.gen_curve_key(CONSTS.curve_25591_public, CONSTS.master_sk):
                return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Decoding key: " + str(e))
            return False
        return True
    elif method == "SHA3":
        return True
    elif method == "AES":
        return True
    elif method == "Cut":
        return True
    elif method == "Salsa20":
        return True
    else:
        print("no method fouund")


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
