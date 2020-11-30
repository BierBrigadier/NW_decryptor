import donna25519
import CONSTS


def gen_curve_key(pk, sk):
    try:
        publ = donna25519.PublicKey(pk)
        priv = donna25519.PrivateKey.load(sk)
        sharedkey = priv.do_exchange(public_key=publ)
        CONSTS.curve_25591_shared = sharedkey
    except Exception:
        return False
    return True
