import CONSTS
import sha3
from binascii import unhexlify, hexlify
from Crypto.Util import Counter
from nacl.public import PrivateKey
from nacl.public import Box
import Helpers
import donna25519
import nacl.utils
from Crypto.Cipher import AES, Salsa20
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives import serialization
from cryptography.hazmat.primitives.asymmetric import padding


def gen_curve_key(pk, sk):
    try:
        publ = donna25519.PublicKey(pk)
        priv = donna25519.PrivateKey.load(sk)
        sharedkey = priv.do_exchange(public_key=publ)
        CONSTS.curve_25591_shared = sharedkey
        return True
    except Exception:
        return False


def hash_key(key):
    try:
        hashed = sha3.sha3_256(key).digest()
    except Exception:
        return False
    return hashed


def aes_decrypt(key, iv, mode, key_size, ciphertext):
    ctr = Counter.new(key_size / 2, initial_value=int(iv.encode('hex'), 16))
    aes = AES.new(key, getattr(AES, mode), counter=ctr)
    plaintext = aes.decrypt(ciphertext)
    return plaintext


def salsa_decryption(key, nonce, encd_null_bytes, encd_data, decryption_mode, skip_size, cipher_update):
    cipher = Salsa20.new(key=key, nonce=nonce)
    decd_null_bytes = cipher.decrypt(encd_null_bytes)
    if decd_null_bytes != "00000000".decode('hex'):
        return False
    dummy = cipher.decrypt(encd_null_bytes * cipher_update)
    plaintext = ""
    # Full decryption:
    if decryption_mode.encode('hex') == "00000000":
        plaintext = cipher.decrypt(encd_data)
    # Fast decryption:
    elif decryption_mode.encode('hex') == "01000000":
        encd = encd_data[:1048576]
        res = encd_data[1048576:]
        plaintext = cipher.decrypt(encd) + res
    # Interval decryption:
    elif decryption_mode.encode('hex') == "02000000":
        skip_size = int((skip_size.encode('hex')[:2]))
        decrypt = True
        pointer = 0
        for i in range(len(encd_data) / 1048576):
            if decrypt:
                plaintext += cipher.decrypt(encd_data[pointer:pointer + 1048576])
                pointer += 1048576
                decrypt = False
            else:
                plaintext += encd_data[pointer:pointer + (skip_size * 1048576)]
                pointer += skip_size * 1048576
                decrypt = True
    return plaintext


def decrypt_session_keys_ciphertext(default_length, private_key, encrypted):
    try:
        length = len(encrypted)
        if length < default_length:
            print("Length is less than default length!")
        else:
            offset = 0
            res = []
            i = 0
            while i < 5:
                if length - offset > default_length:
                    result = private_key.decrypt(encrypted[offset: offset + default_length], padding.PKCS1v15())
                    res.append(result)
                else:
                    result = private_key.decrypt(encrypted[offset:], padding.PKCS1v15())
                    res.append(result)
                offset += default_length
                i += 1
            decrypted_hex = hexlify(b''.join(res))
            return decrypted_hex
    except Exception as e:
        print(e)
    return False


def rsa_decrypt(default_length, aes_length, private_key, encrypted):
    try:
        length = len(encrypted)
        if length < default_length:
            print("Length is less than default length!")
            return 0, 0
        else:
            aes_hex_complete = hexlify(private_key.decrypt(encrypted, padding.PKCS1v15()))
            key = aes_hex_complete[:aes_length / 4].decode('hex')
            iv = aes_hex_complete[aes_length / 4:aes_length / 2].decode('hex')
            CONSTS.aes_key = key
            CONSTS.aes_iv = iv
            return True
    except Exception as e:
        print(e)
    return False
