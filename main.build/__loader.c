
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 57 > 0
static unsigned char *bytecode_data[57];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_CONSTS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$AES(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$ARC2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$DES(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$DES3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$Salsa20(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_EKSBlowfish(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_cbc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ccm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_cfb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ctr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_eax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ecb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_gcm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ocb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ofb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_openpgp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_siv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$BLAKE2s(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$CMAC(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$HMAC(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$MD5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA224(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA256(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA384(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA512(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO$PEM(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO$PKCS8(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO$_PBES(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$Numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$Primality(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerBase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerCustom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerGMP(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerNative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Protocol$KDF(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$PublicKey(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$PublicKey$RSA(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$PublicKey$_openssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Random$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$Counter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$Padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$_cpu_features(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$_file_system(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$_raw_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$number(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$py3compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$strxor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CryptoUtils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_LogUtils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bcrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bcrypt$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cffi_opcode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$recompiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$cmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$decode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$encode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$poly1305(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$constant_time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf$scrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$pkcs7(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$ssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$certificate_transparency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$general_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_donna25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_donna25519$keys(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_enum(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_enum$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ipaddress(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_box(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_generichash(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_hash(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_kx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_pwhash(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_scalarmult(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_secretbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_secretstream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_shorthash(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$crypto_sign(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$randombytes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$sodium_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$bindings$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$encoding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$public(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_nacl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sha3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_termcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"CONSTS", modulecode_CONSTS, 0, 0, },
    {"Crypto", modulecode_Crypto, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Cipher", modulecode_Crypto$Cipher, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Cipher.AES", modulecode_Crypto$Cipher$AES, 0, 0, },
    {"Crypto.Cipher.ARC2", modulecode_Crypto$Cipher$ARC2, 0, 0, },
    {"Crypto.Cipher.DES", modulecode_Crypto$Cipher$DES, 0, 0, },
    {"Crypto.Cipher.DES3", modulecode_Crypto$Cipher$DES3, 0, 0, },
    {"Crypto.Cipher.Salsa20", modulecode_Crypto$Cipher$Salsa20, 0, 0, },
    {"Crypto.Cipher._EKSBlowfish", modulecode_Crypto$Cipher$_EKSBlowfish, 0, 0, },
    {"Crypto.Cipher._mode_cbc", modulecode_Crypto$Cipher$_mode_cbc, 0, 0, },
    {"Crypto.Cipher._mode_ccm", modulecode_Crypto$Cipher$_mode_ccm, 0, 0, },
    {"Crypto.Cipher._mode_cfb", modulecode_Crypto$Cipher$_mode_cfb, 0, 0, },
    {"Crypto.Cipher._mode_ctr", modulecode_Crypto$Cipher$_mode_ctr, 0, 0, },
    {"Crypto.Cipher._mode_eax", modulecode_Crypto$Cipher$_mode_eax, 0, 0, },
    {"Crypto.Cipher._mode_ecb", modulecode_Crypto$Cipher$_mode_ecb, 0, 0, },
    {"Crypto.Cipher._mode_gcm", modulecode_Crypto$Cipher$_mode_gcm, 0, 0, },
    {"Crypto.Cipher._mode_ocb", modulecode_Crypto$Cipher$_mode_ocb, 0, 0, },
    {"Crypto.Cipher._mode_ofb", modulecode_Crypto$Cipher$_mode_ofb, 0, 0, },
    {"Crypto.Cipher._mode_openpgp", modulecode_Crypto$Cipher$_mode_openpgp, 0, 0, },
    {"Crypto.Cipher._mode_siv", modulecode_Crypto$Cipher$_mode_siv, 0, 0, },
    {"Crypto.Hash", modulecode_Crypto$Hash, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Hash.BLAKE2s", modulecode_Crypto$Hash$BLAKE2s, 0, 0, },
    {"Crypto.Hash.CMAC", modulecode_Crypto$Hash$CMAC, 0, 0, },
    {"Crypto.Hash.HMAC", modulecode_Crypto$Hash$HMAC, 0, 0, },
    {"Crypto.Hash.MD5", modulecode_Crypto$Hash$MD5, 0, 0, },
    {"Crypto.Hash.SHA1", modulecode_Crypto$Hash$SHA1, 0, 0, },
    {"Crypto.Hash.SHA224", modulecode_Crypto$Hash$SHA224, 0, 0, },
    {"Crypto.Hash.SHA256", modulecode_Crypto$Hash$SHA256, 0, 0, },
    {"Crypto.Hash.SHA384", modulecode_Crypto$Hash$SHA384, 0, 0, },
    {"Crypto.Hash.SHA512", modulecode_Crypto$Hash$SHA512, 0, 0, },
    {"Crypto.IO", modulecode_Crypto$IO, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.IO.PEM", modulecode_Crypto$IO$PEM, 0, 0, },
    {"Crypto.IO.PKCS8", modulecode_Crypto$IO$PKCS8, 0, 0, },
    {"Crypto.IO._PBES", modulecode_Crypto$IO$_PBES, 0, 0, },
    {"Crypto.Math", modulecode_Crypto$Math, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Math.Numbers", modulecode_Crypto$Math$Numbers, 0, 0, },
    {"Crypto.Math.Primality", modulecode_Crypto$Math$Primality, 0, 0, },
    {"Crypto.Math._IntegerBase", modulecode_Crypto$Math$_IntegerBase, 0, 0, },
    {"Crypto.Math._IntegerCustom", modulecode_Crypto$Math$_IntegerCustom, 0, 0, },
    {"Crypto.Math._IntegerGMP", modulecode_Crypto$Math$_IntegerGMP, 0, 0, },
    {"Crypto.Math._IntegerNative", modulecode_Crypto$Math$_IntegerNative, 0, 0, },
    {"Crypto.Protocol", modulecode_Crypto$Protocol, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Protocol.KDF", modulecode_Crypto$Protocol$KDF, 0, 0, },
    {"Crypto.PublicKey", modulecode_Crypto$PublicKey, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.PublicKey.RSA", modulecode_Crypto$PublicKey$RSA, 0, 0, },
    {"Crypto.PublicKey._openssh", modulecode_Crypto$PublicKey$_openssh, 0, 0, },
    {"Crypto.Random", modulecode_Crypto$Random, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Random.random", modulecode_Crypto$Random$random, 0, 0, },
    {"Crypto.Util", modulecode_Crypto$Util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"Crypto.Util.Counter", modulecode_Crypto$Util$Counter, 0, 0, },
    {"Crypto.Util.Padding", modulecode_Crypto$Util$Padding, 0, 0, },
    {"Crypto.Util._cpu_features", modulecode_Crypto$Util$_cpu_features, 0, 0, },
    {"Crypto.Util._file_system", modulecode_Crypto$Util$_file_system, 0, 0, },
    {"Crypto.Util._raw_api", modulecode_Crypto$Util$_raw_api, 0, 0, },
    {"Crypto.Util.asn1", modulecode_Crypto$Util$asn1, 0, 0, },
    {"Crypto.Util.number", modulecode_Crypto$Util$number, 0, 0, },
    {"Crypto.Util.py3compat", modulecode_Crypto$Util$py3compat, 0, 0, },
    {"Crypto.Util.strxor", modulecode_Crypto$Util$strxor, 0, 0, },
    {"CryptoUtils", modulecode_CryptoUtils, 0, 0, },
    {"Helpers", modulecode_Helpers, 0, 0, },
    {"LogUtils", modulecode_LogUtils, 0, 0, },
    {"__main__", modulecode___main__, 0, 0, },
    {"backports", modulecode_backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"bcrypt", modulecode_bcrypt, 0, 0, NUITKA_PACKAGE_FLAG},
    {"bcrypt.__about__", modulecode_bcrypt$__about__, 0, 0, },
    {"certifi", modulecode_certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, },
    {"cffi", modulecode_cffi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cffi.api", modulecode_cffi$api, 0, 0, },
    {"cffi.cffi_opcode", modulecode_cffi$cffi_opcode, 0, 0, },
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, },
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, },
    {"cffi.error", modulecode_cffi$error, 0, 0, },
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, },
    {"cffi.lock", modulecode_cffi$lock, 0, 0, },
    {"cffi.model", modulecode_cffi$model, 0, 0, },
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, },
    {"cffi.recompiler", modulecode_cffi$recompiler, 0, 0, },
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, },
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, },
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, },
    {"cryptography", modulecode_cryptography, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.__about__", modulecode_cryptography$__about__, 0, 0, },
    {"cryptography.exceptions", modulecode_cryptography$exceptions, 0, 0, },
    {"cryptography.hazmat", modulecode_cryptography$hazmat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat._der", modulecode_cryptography$hazmat$_der, 0, 0, },
    {"cryptography.hazmat._oid", modulecode_cryptography$hazmat$_oid, 0, 0, },
    {"cryptography.hazmat.backends", modulecode_cryptography$hazmat$backends, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.interfaces", modulecode_cryptography$hazmat$backends$interfaces, 0, 0, },
    {"cryptography.hazmat.backends.openssl", modulecode_cryptography$hazmat$backends$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.openssl.aead", modulecode_cryptography$hazmat$backends$openssl$aead, 0, 0, },
    {"cryptography.hazmat.backends.openssl.backend", modulecode_cryptography$hazmat$backends$openssl$backend, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ciphers", modulecode_cryptography$hazmat$backends$openssl$ciphers, 0, 0, },
    {"cryptography.hazmat.backends.openssl.cmac", modulecode_cryptography$hazmat$backends$openssl$cmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.decode_asn1", modulecode_cryptography$hazmat$backends$openssl$decode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dh", modulecode_cryptography$hazmat$backends$openssl$dh, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dsa", modulecode_cryptography$hazmat$backends$openssl$dsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ec", modulecode_cryptography$hazmat$backends$openssl$ec, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed25519", modulecode_cryptography$hazmat$backends$openssl$ed25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed448", modulecode_cryptography$hazmat$backends$openssl$ed448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.encode_asn1", modulecode_cryptography$hazmat$backends$openssl$encode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hashes", modulecode_cryptography$hazmat$backends$openssl$hashes, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hmac", modulecode_cryptography$hazmat$backends$openssl$hmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ocsp", modulecode_cryptography$hazmat$backends$openssl$ocsp, 0, 0, },
    {"cryptography.hazmat.backends.openssl.poly1305", modulecode_cryptography$hazmat$backends$openssl$poly1305, 0, 0, },
    {"cryptography.hazmat.backends.openssl.rsa", modulecode_cryptography$hazmat$backends$openssl$rsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.utils", modulecode_cryptography$hazmat$backends$openssl$utils, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x25519", modulecode_cryptography$hazmat$backends$openssl$x25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x448", modulecode_cryptography$hazmat$backends$openssl$x448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x509", modulecode_cryptography$hazmat$backends$openssl$x509, 0, 0, },
    {"cryptography.hazmat.bindings", modulecode_cryptography$hazmat$bindings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl", modulecode_cryptography$hazmat$bindings$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl._conditional", modulecode_cryptography$hazmat$bindings$openssl$_conditional, 0, 0, },
    {"cryptography.hazmat.bindings.openssl.binding", modulecode_cryptography$hazmat$bindings$openssl$binding, 0, 0, },
    {"cryptography.hazmat.primitives", modulecode_cryptography$hazmat$primitives, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric", modulecode_cryptography$hazmat$primitives$asymmetric, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dh", modulecode_cryptography$hazmat$primitives$asymmetric$dh, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.dsa", modulecode_cryptography$hazmat$primitives$asymmetric$dsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ec", modulecode_cryptography$hazmat$primitives$asymmetric$ec, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed25519", modulecode_cryptography$hazmat$primitives$asymmetric$ed25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed448", modulecode_cryptography$hazmat$primitives$asymmetric$ed448, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.padding", modulecode_cryptography$hazmat$primitives$asymmetric$padding, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.rsa", modulecode_cryptography$hazmat$primitives$asymmetric$rsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.utils", modulecode_cryptography$hazmat$primitives$asymmetric$utils, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x25519", modulecode_cryptography$hazmat$primitives$asymmetric$x25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x448", modulecode_cryptography$hazmat$primitives$asymmetric$x448, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers", modulecode_cryptography$hazmat$primitives$ciphers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.ciphers.aead", modulecode_cryptography$hazmat$primitives$ciphers$aead, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.algorithms", modulecode_cryptography$hazmat$primitives$ciphers$algorithms, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.base", modulecode_cryptography$hazmat$primitives$ciphers$base, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.modes", modulecode_cryptography$hazmat$primitives$ciphers$modes, 0, 0, },
    {"cryptography.hazmat.primitives.constant_time", modulecode_cryptography$hazmat$primitives$constant_time, 0, 0, },
    {"cryptography.hazmat.primitives.hashes", modulecode_cryptography$hazmat$primitives$hashes, 0, 0, },
    {"cryptography.hazmat.primitives.kdf", modulecode_cryptography$hazmat$primitives$kdf, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.kdf.scrypt", modulecode_cryptography$hazmat$primitives$kdf$scrypt, 0, 0, },
    {"cryptography.hazmat.primitives.serialization", modulecode_cryptography$hazmat$primitives$serialization, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.serialization.base", modulecode_cryptography$hazmat$primitives$serialization$base, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.pkcs7", modulecode_cryptography$hazmat$primitives$serialization$pkcs7, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.ssh", modulecode_cryptography$hazmat$primitives$serialization$ssh, 0, 0, },
    {"cryptography.utils", modulecode_cryptography$utils, 0, 0, },
    {"cryptography.x509", modulecode_cryptography$x509, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.x509.base", modulecode_cryptography$x509$base, 0, 0, },
    {"cryptography.x509.certificate_transparency", modulecode_cryptography$x509$certificate_transparency, 0, 0, },
    {"cryptography.x509.extensions", modulecode_cryptography$x509$extensions, 0, 0, },
    {"cryptography.x509.general_name", modulecode_cryptography$x509$general_name, 0, 0, },
    {"cryptography.x509.name", modulecode_cryptography$x509$name, 0, 0, },
    {"cryptography.x509.ocsp", modulecode_cryptography$x509$ocsp, 0, 0, },
    {"cryptography.x509.oid", modulecode_cryptography$x509$oid, 0, 0, },
    {"donna25519", modulecode_donna25519, 0, 0, NUITKA_PACKAGE_FLAG},
    {"donna25519.keys", modulecode_donna25519$keys, 0, 0, },
    {"enum", modulecode_enum, 0, 0, NUITKA_PACKAGE_FLAG},
    {"enum-postLoad", modulecode_enum$$45$postLoad, 0, 0, },
    {"ipaddress", modulecode_ipaddress, 0, 0, },
    {"nacl", modulecode_nacl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nacl.bindings", modulecode_nacl$bindings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"nacl.bindings.crypto_aead", modulecode_nacl$bindings$crypto_aead, 0, 0, },
    {"nacl.bindings.crypto_box", modulecode_nacl$bindings$crypto_box, 0, 0, },
    {"nacl.bindings.crypto_core", modulecode_nacl$bindings$crypto_core, 0, 0, },
    {"nacl.bindings.crypto_generichash", modulecode_nacl$bindings$crypto_generichash, 0, 0, },
    {"nacl.bindings.crypto_hash", modulecode_nacl$bindings$crypto_hash, 0, 0, },
    {"nacl.bindings.crypto_kx", modulecode_nacl$bindings$crypto_kx, 0, 0, },
    {"nacl.bindings.crypto_pwhash", modulecode_nacl$bindings$crypto_pwhash, 0, 0, },
    {"nacl.bindings.crypto_scalarmult", modulecode_nacl$bindings$crypto_scalarmult, 0, 0, },
    {"nacl.bindings.crypto_secretbox", modulecode_nacl$bindings$crypto_secretbox, 0, 0, },
    {"nacl.bindings.crypto_secretstream", modulecode_nacl$bindings$crypto_secretstream, 0, 0, },
    {"nacl.bindings.crypto_shorthash", modulecode_nacl$bindings$crypto_shorthash, 0, 0, },
    {"nacl.bindings.crypto_sign", modulecode_nacl$bindings$crypto_sign, 0, 0, },
    {"nacl.bindings.randombytes", modulecode_nacl$bindings$randombytes, 0, 0, },
    {"nacl.bindings.sodium_core", modulecode_nacl$bindings$sodium_core, 0, 0, },
    {"nacl.bindings.utils", modulecode_nacl$bindings$utils, 0, 0, },
    {"nacl.encoding", modulecode_nacl$encoding, 0, 0, },
    {"nacl.exceptions", modulecode_nacl$exceptions, 0, 0, },
    {"nacl.public", modulecode_nacl$public, 0, 0, },
    {"nacl.utils", modulecode_nacl$utils, 0, 0, },
    {"pkg_resources", NULL, 0, 129625, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 1, 176, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 2, 23795, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 3, 637, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 4, 815, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 5, 1372, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 6, 4879, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 7, 13144, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 8, 5468, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 9, 27733, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 10, 16100, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 11, 250165, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.six", NULL, 12, 34295, NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 13, 3156, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources.py31compat", NULL, 14, 812, NUITKA_BYTECODE_FLAG},
    {"pycparser", NULL, 15, 2848, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pycparser.ast_transforms", NULL, 16, 2895, NUITKA_BYTECODE_FLAG},
    {"pycparser.c_ast", NULL, 17, 55733, NUITKA_BYTECODE_FLAG},
    {"pycparser.c_lexer", NULL, 18, 16786, NUITKA_BYTECODE_FLAG},
    {"pycparser.c_parser", NULL, 19, 75770, NUITKA_BYTECODE_FLAG},
    {"pycparser.lextab", NULL, 20, 6626, NUITKA_BYTECODE_FLAG},
    {"pycparser.ply", NULL, 21, 241, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pycparser.ply.lex", NULL, 22, 28683, NUITKA_BYTECODE_FLAG},
    {"pycparser.ply.yacc", NULL, 23, 69858, NUITKA_BYTECODE_FLAG},
    {"pycparser.plyparser", NULL, 24, 6203, NUITKA_BYTECODE_FLAG},
    {"pycparser.yacctab", NULL, 25, 139531, NUITKA_BYTECODE_FLAG},
    {"setuptools", NULL, 26, 10935, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools._deprecation_warning", NULL, 27, 636, NUITKA_BYTECODE_FLAG},
    {"setuptools._imp", NULL, 28, 2574, NUITKA_BYTECODE_FLAG},
    {"setuptools.archive_util", NULL, 29, 6382, NUITKA_BYTECODE_FLAG},
    {"setuptools.command", NULL, 30, 873, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.command.bdist_egg", NULL, 31, 19192, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.easy_install", NULL, 32, 85052, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.egg_info", NULL, 33, 28472, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install_scripts", NULL, 34, 3038, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.py36compat", NULL, 35, 5914, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.sdist", NULL, 36, 10598, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.setopt", NULL, 37, 6352, NUITKA_BYTECODE_FLAG},
    {"setuptools.config", NULL, 38, 22002, NUITKA_BYTECODE_FLAG},
    {"setuptools.depends", NULL, 39, 6750, NUITKA_BYTECODE_FLAG},
    {"setuptools.dist", NULL, 40, 50342, NUITKA_BYTECODE_FLAG},
    {"setuptools.extension", NULL, 41, 2596, NUITKA_BYTECODE_FLAG},
    {"setuptools.extern", NULL, 42, 3154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.glob", NULL, 43, 5050, NUITKA_BYTECODE_FLAG},
    {"setuptools.installer", NULL, 44, 5266, NUITKA_BYTECODE_FLAG},
    {"setuptools.monkey", NULL, 45, 6167, NUITKA_BYTECODE_FLAG},
    {"setuptools.package_index", NULL, 46, 42907, NUITKA_BYTECODE_FLAG},
    {"setuptools.py27compat", NULL, 47, 2568, NUITKA_BYTECODE_FLAG},
    {"setuptools.py31compat", NULL, 48, 1589, NUITKA_BYTECODE_FLAG},
    {"setuptools.py33compat", NULL, 49, 1887, NUITKA_BYTECODE_FLAG},
    {"setuptools.py34compat", NULL, 50, 600, NUITKA_BYTECODE_FLAG},
    {"setuptools.sandbox", NULL, 51, 20566, NUITKA_BYTECODE_FLAG},
    {"setuptools.ssl_support", NULL, 52, 9129, NUITKA_BYTECODE_FLAG},
    {"setuptools.unicode_utils", NULL, 53, 1588, NUITKA_BYTECODE_FLAG},
    {"setuptools.version", NULL, 54, 345, NUITKA_BYTECODE_FLAG},
    {"setuptools.wheel", NULL, 55, 9879, NUITKA_BYTECODE_FLAG},
    {"setuptools.windows_support", NULL, 56, 1390, NUITKA_BYTECODE_FLAG},
    {"sha3", modulecode_sha3, 0, 0, },
    {"six", modulecode_six, 0, 0, },
    {"termcolor", modulecode_termcolor, 0, 0, },
    {NULL, NULL, 0, 0, 0}
};


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 57);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 57);

    struct frozen_desc *current = _frozen_modules;

    for(;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


