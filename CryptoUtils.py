import CONSTS
import sha3
from binascii import unhexlify, hexlify
from Crypto.Util import Counter
from nacl.public import PrivateKey
from nacl.public import Box
import Helpers
import donna25519
import nacl.utils
import salsa20
from Crypto.Cipher import AES


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
