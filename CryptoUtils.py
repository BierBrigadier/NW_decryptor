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
