import ConfigParser
import binascii
import zlib
import base64
import os
import CONSTS
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives import serialization
from binascii import hexlify
from Crypto.PublicKey import RSA
import CryptoUtils
import LogUtils


def determine_method(active_ransomware, f, method, log_file):
    # Read configuration file:
    config = ConfigParser.ConfigParser()
    config.read("configs/" + active_ransomware)
    extension = config.get(active_ransomware, "Extension")

    # Check decryption blocks:
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
    elif method == "SHA3":
        try:
            CONSTS.sha_key_1 = CryptoUtils.hash_key(CONSTS.curve_25591_shared)
            return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Hashing key: " + str(e))
        return False
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
            return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: AES decryption: " + str(e))
        return False
    elif method == "Cut":
        try:
            CONSTS.cut_offset_start = int(config.get(active_ransomware, "Cut_offset_start"))
            CONSTS.cut_offset_end = int(config.get(active_ransomware, "Cut_offset_end"))
            CONSTS.aes_decrypted_data = cut_data(CONSTS.cut_offset_start, CONSTS.cut_offset_end,
                                                 CONSTS.aes_decrypted_data)
            return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Cutting: " + str(e))
        return False
    elif method == "Curve25591_2":
        try:
            curve_public_offset = int(config.get(active_ransomware, "Curve25591_2_public_offset"))
            curve_public_length = int(config.get(active_ransomware, "Curve25591_2_public_length"))
            CONSTS.curve_25591_public = get_data(f, curve_public_offset, curve_public_length)
            curve_secret = getattr(CONSTS, config.get(active_ransomware, "Curve25591_2_secret"))
            if CryptoUtils.gen_curve_key(CONSTS.curve_25591_public, curve_secret):
                return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Generating shared key: " + str(e))
        return False
    elif method == "Salsa20":
        try:
            # Read configuration data:
            salsa_nonce_offset = int(config.get(active_ransomware, "Salsa20_nonce_offset"))
            salsa_nonce_length = int(config.get(active_ransomware, "Salsa20_nonce_length"))
            salsa_encd_null_bytes_offset = int(config.get(active_ransomware, "Salsa20_encd_null_bytes_offset"))
            salsa_encd_null_bytes_length = int(config.get(active_ransomware, "Salsa20_encd_null_bytes_length"))
            salsa_decryption_mode_offset = int(config.get(active_ransomware, "Salsa20_decryption_mode_offset"))
            salsa_decryption_mode_length = int(config.get(active_ransomware, "Salsa20_decryption_mode_length"))
            salsa_skip_size_offset = int(config.get(active_ransomware, "Salsa20_skip_size_offset"))
            salsa_skip_size_length = int(config.get(active_ransomware, "Salsa20_skip_size_length"))
            salsa_cipher_update = int(config.get(active_ransomware, "Salsa20_cipher_update"))
            meta_data_offset = int(config.get(active_ransomware, "Meta_data_offset"))

            # Read data
            salsa_nonce = get_data(f, salsa_nonce_offset, salsa_nonce_length)
            salsa_encd_null_bytes = get_data(f, salsa_encd_null_bytes_offset, salsa_encd_null_bytes_length)
            salsa_decryption_mode = get_data(f, salsa_decryption_mode_offset, salsa_decryption_mode_length)
            salsa_skip_size = get_data(f, salsa_skip_size_offset, salsa_skip_size_length)
            encrypted_data = get_file_data(f, meta_data_offset)

            # Decrypt data:
            plaintext = CryptoUtils.salsa_decryption(CONSTS.sha_key_1, salsa_nonce, salsa_encd_null_bytes,
                                                     encrypted_data, salsa_decryption_mode, salsa_skip_size,
                                                     salsa_cipher_update)
            if plaintext:
                write_data(f[:-len(extension)], plaintext)
                return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Generating Salsa20 decryption: " + str(e))
        return False
    elif method == "Assemble_RSA":
        try:
            CONSTS.n = int(config.get(active_ransomware, "n"))
            CONSTS.e = int(config.get(active_ransomware, "e"))
            CONSTS.d = int(config.get(active_ransomware, "d"))
            CONSTS.p = int(config.get(active_ransomware, "p"))
            CONSTS.q = int(config.get(active_ransomware, "q"))
            CONSTS.e1 = int(config.get(active_ransomware, "e1"))
            CONSTS.e2 = int(config.get(active_ransomware, "e2"))
            CONSTS.coef = int(config.get(active_ransomware, "coef"))
            private_key = create_private_key(CONSTS.key_path, "private_key.txt", CONSTS.n, CONSTS.e, CONSTS.d, CONSTS.p,
                                             CONSTS.q,
                                             CONSTS.coef)
            if private_key:
                CONSTS.rsa_main_key = private_key
                return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Assembling RSA key: " + str(e))
        return False
    elif method == "Decrypt_RSA_big":
        try:
            # Read config values:
            offset = int(config.get(active_ransomware, "Encd_session_key_offset"))
            length = int(config.get(active_ransomware, "Encd_session_key_length"))
            CONSTS.rsa_size = int(config.get(active_ransomware, "RSA_size")) / 8

            CONSTS.rsa_data = get_data(f, offset, length)
            if len(CONSTS.rsa_data) == 1280:
                CONSTS.rsa_decrypted_data = CryptoUtils.decrypt_session_keys_ciphertext(CONSTS.rsa_size,
                                                                                        CONSTS.rsa_main_key,
                                                                                        CONSTS.rsa_data)
                if CONSTS.rsa_decrypted_data:
                    return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Decrypting RSA: " + str(e))
        return False
    elif method == "Assemble_session_RSA":
        try:
            if CONSTS.rsa_decrypted_data:
                # Read prime offsets:
                n_length = int(config.get(active_ransomware, "n_length"))
                e_length = int(config.get(active_ransomware, "e_length"))
                d_length = int(config.get(active_ransomware, "d_length"))
                p_length = int(config.get(active_ransomware, "p_length"))
                q_length = int(config.get(active_ransomware, "q_length"))
                dp_length = int(config.get(active_ransomware, "dp_length"))
                dq_length = int(config.get(active_ransomware, "dq_length"))
                qp_length = int(config.get(active_ransomware, "qp_length"))

                # Get pieces of substring:
                n = get_substring(CONSTS.rsa_decrypted_data, 0, n_length)
                e = get_substring(CONSTS.rsa_decrypted_data, n_length, e_length)
                d = get_substring(CONSTS.rsa_decrypted_data, e_length, d_length)
                p = get_substring(CONSTS.rsa_decrypted_data, d_length, p_length)
                q = get_substring(CONSTS.rsa_decrypted_data, p_length, q_length)
                dp = get_substring(CONSTS.rsa_decrypted_data, q_length, dp_length)
                dq = get_substring(CONSTS.rsa_decrypted_data, dp_length, dq_length)
                coef = get_substring(CONSTS.rsa_decrypted_data, dq_length, qp_length)

                # Assemble private key:
                CONSTS.rsa_session_key = create_private_key(CONSTS.key_path, "session_key.txt", n, e, d, p, q, coef)
                if CONSTS.rsa_session_key:
                    return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Assembling session RSA key: " + str(e))
        return False
    elif method == "Decrypt_RSA_small":
        try:
            # Read config values:
            CONSTS.aes_size = int(config.get(active_ransomware, "AES_size"))
            offset = int(config.get(active_ransomware, "RSA_encd_data_offset"))
            length = int(config.get(active_ransomware, "RSA_encd_data_length"))
            CONSTS.rsa_size = int(config.get(active_ransomware, "RSA_size")) / 8
            CONSTS.rsa_data = get_data(f, offset, length)

            if len(CONSTS.rsa_data) == 256:
                if CryptoUtils.rsa_decrypt(CONSTS.rsa_size, CONSTS.aes_size, CONSTS.rsa_session_key, CONSTS.rsa_data):
                    return True
        except Exception as e:
            LogUtils.write_log(log_file, "ERROR: Decrypting RSA small: " + str(e))
        return False
    elif method == "AES_CBC":
        CONSTS.aes_chunk_size = int(config.get(active_ransomware, "AES_chunk_size"))
        CONSTS.meta_offset = int(config.get(active_ransomware, "Meta_data_offset"))
        plaintext = CryptoUtils.aes_decrypt_cbc(CONSTS.aes_key, CONSTS.aes_iv, CONSTS.meta_offset,
                                                CONSTS.aes_chunk_size, f, f[:-len(extension)])
        if plaintext:
            return True
    else:
        print("No method found!")
        return False


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


def get_file_data(path, offset):
    try:
        f = open(path, 'rb')
        content = f.read()
        content = content[:(len(content) + offset)]
        return content
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


def write_data(path, data):
    try:
        f = open(path, 'wb')
        f.write(data)
        f.close()
        return True
    except IOError:
        print(IOError)
    return False


def create_private_key(path, name, n, e, d, p, q, coef):
    params = (n, long(e), d, p, q, coef)
    key = RSA.construct(params, consistency_check=False)
    private_key = key.exportKey(format='PEM', passphrase=None, pkcs=1)
    try:
        if not os.path.exists(path):
            os.makedirs(path)
        f = open(path + name, 'wb')
        f.write(private_key)
        f.close()
        CONSTS.rsa_main_key_path = path + name
    except IOError as e:
        print("IO Exception writing main RSA private key: " + str(e))
        return False
    return serialization.load_pem_private_key(private_key, password=None, backend=default_backend())


def get_substring(hex_string, start, end):
    x = int(hex_string[start:end], 16)
    return x
