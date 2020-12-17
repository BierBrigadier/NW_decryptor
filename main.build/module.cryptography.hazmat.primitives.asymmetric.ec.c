/* Generated code for Python module 'cryptography.hazmat.primitives.asymmetric.ec'
 * created by Nuitka version 0.6.10.1
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$primitives$asymmetric$ec" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$ec;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$ec;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[241];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.hazmat.primitives.asymmetric.ec", 241);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if _NUITKA_PLUGIN_MULTIPROCESSING_ENABLED && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$ec(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.hazmat.primitives.asymmetric.ec", 241);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_aa33720a2f0e907682cc8dbcbb54cd96;
static PyCodeObject *codeobj_33d0b8fb2bf023d37381929b4bfaf0cd;
static PyCodeObject *codeobj_f5448020a25462efe99f2e2ae545bebb;
static PyCodeObject *codeobj_ebaecd61bb83cd5b06911f055dddf3d5;
static PyCodeObject *codeobj_75423583ba3b3d8a866258b4e7b81b99;
static PyCodeObject *codeobj_a41cc0d1e02c68e238f918c4d33018a1;
static PyCodeObject *codeobj_72f65678d7a47b0fc2a89dc86b8ce020;
static PyCodeObject *codeobj_928cd31f30e3491c5806ac058b28e621;
static PyCodeObject *codeobj_259bfadd72ea4c7f4ee0c01619649dc4;
static PyCodeObject *codeobj_61376432281f147b19eaf9619f10a11a;
static PyCodeObject *codeobj_8e31b5e1144926f7baeba5edffabb9f6;
static PyCodeObject *codeobj_3c0b252593dd3f616208fad89a8d769a;
static PyCodeObject *codeobj_e49f4a76deca2afae38c520482701344;
static PyCodeObject *codeobj_377a2bf8c7d0ea073ee6e5b8cd61be2a;
static PyCodeObject *codeobj_ba0abbc83048ec2a5377b27b5b2f99b0;
static PyCodeObject *codeobj_2c5c86b7f824158c6022e4ebb0fca033;
static PyCodeObject *codeobj_385fbba201cac6203977ac63d41fdcfd;
static PyCodeObject *codeobj_beefc8bd70c45aa3639fbedf3c9912c0;
static PyCodeObject *codeobj_a8e5bb0daf5dd6467c300e2ed2397f03;
static PyCodeObject *codeobj_8fcd936f53f5d487eedfc0975f6931d1;
static PyCodeObject *codeobj_d4b1d5027e0f4b97fcc9d790fb16f35b;
static PyCodeObject *codeobj_b150fcf7718389b911734d815b7315f7;
static PyCodeObject *codeobj_ffe9dd69e230d6c35b48e4f334a1f95c;
static PyCodeObject *codeobj_9f9a580246d421b6db20a4e1c4a9891e;
static PyCodeObject *codeobj_69eb5d0706d468fc34bfda436dc19b42;
static PyCodeObject *codeobj_e50b5b8c9133501aec02fe2ab5719c2b;
static PyCodeObject *codeobj_6fd5031003312356382ab9fa0f5e653f;
static PyCodeObject *codeobj_b3da62f85515bd81461f6b812c8c4e35;
static PyCodeObject *codeobj_6778a7ae86dc4a41f6907f9dc4e43caf;
static PyCodeObject *codeobj_91d59f1de46142ffb76adbaa50f6a719;
static PyCodeObject *codeobj_1d88499762b9c3eeaab906919c93a472;
static PyCodeObject *codeobj_a09e0696d1f553e022dea3a87eb8074f;
static PyCodeObject *codeobj_1cd3571b80f13d02410b391dbb641a04;
static PyCodeObject *codeobj_9520d26628fda6fd623552993479145c;
static PyCodeObject *codeobj_fa256fadcb184f43170cfb2976b008ec;
static PyCodeObject *codeobj_e9f7ed5bd3c0d1015ef9df9f3f166c04;
static PyCodeObject *codeobj_62837e82d6cb99951296833e80b3e621;
static PyCodeObject *codeobj_414254c4eb295443facf7e5d00d9f52d;
static PyCodeObject *codeobj_6e8ae8521206f63ced9812ef8fbb840c;
static PyCodeObject *codeobj_638fdf2614c6dcbdba6b3db5836556e8;
static PyCodeObject *codeobj_59b8931e0b716f643b1a64cdad2d55bb;
static PyCodeObject *codeobj_108ef25319a89b30f0b50c8911be3a63;
static PyCodeObject *codeobj_e7771590e0a2bcbe64ad0a4477add090;
static PyCodeObject *codeobj_661921f8092fa4b1fac51c00941b70f4;
static PyCodeObject *codeobj_da0b5afef9b2284ccb173f9600d97071;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[66]; CHECK_OBJECT(module_filename_obj);
    codeobj_aa33720a2f0e907682cc8dbcbb54cd96 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[221], NULL, NULL, 0, 0, 0);
    codeobj_33d0b8fb2bf023d37381929b4bfaf0cd = MAKE_CODEOBJECT(module_filename_obj, 317, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[203], NULL, NULL, 0, 0, 0);
    codeobj_f5448020a25462efe99f2e2ae545bebb = MAKE_CODEOBJECT(module_filename_obj, 40, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[3], NULL, NULL, 0, 0, 0);
    codeobj_ebaecd61bb83cd5b06911f055dddf3d5 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[120], NULL, NULL, 0, 0, 0);
    codeobj_75423583ba3b3d8a866258b4e7b81b99 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[140], NULL, NULL, 0, 0, 0);
    codeobj_a41cc0d1e02c68e238f918c4d33018a1 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[145], NULL, NULL, 0, 0, 0);
    codeobj_72f65678d7a47b0fc2a89dc86b8ce020 = MAKE_CODEOBJECT(module_filename_obj, 431, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[60], NULL, NULL, 0, 0, 0);
    codeobj_928cd31f30e3491c5806ac058b28e621 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[153], NULL, NULL, 0, 0, 0);
    codeobj_259bfadd72ea4c7f4ee0c01619649dc4 = MAKE_CODEOBJECT(module_filename_obj, 343, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[50], NULL, NULL, 0, 0, 0);
    codeobj_61376432281f147b19eaf9619f10a11a = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_8e31b5e1144926f7baeba5edffabb9f6 = MAKE_CODEOBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[211], mod_consts[222], NULL, 2, 0, 0);
    codeobj_3c0b252593dd3f616208fad89a8d769a = MAKE_CODEOBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[211], mod_consts[222], NULL, 2, 0, 0);
    codeobj_e49f4a76deca2afae38c520482701344 = MAKE_CODEOBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[213], mod_consts[223], NULL, 1, 0, 0);
    codeobj_377a2bf8c7d0ea073ee6e5b8cd61be2a = MAKE_CODEOBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[213], mod_consts[223], NULL, 1, 0, 0);
    codeobj_ba0abbc83048ec2a5377b27b5b2f99b0 = MAKE_CODEOBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[200], mod_consts[224], NULL, 2, 0, 0);
    codeobj_2c5c86b7f824158c6022e4ebb0fca033 = MAKE_CODEOBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[200], mod_consts[225], NULL, 3, 0, 0);
    codeobj_385fbba201cac6203977ac63d41fdcfd = MAKE_CODEOBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[200], mod_consts[226], NULL, 4, 0, 0);
    codeobj_beefc8bd70c45aa3639fbedf3c9912c0 = MAKE_CODEOBJECT(module_filename_obj, 418, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[212], mod_consts[222], NULL, 2, 0, 0);
    codeobj_a8e5bb0daf5dd6467c300e2ed2397f03 = MAKE_CODEOBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[212], mod_consts[222], NULL, 2, 0, 0);
    codeobj_8fcd936f53f5d487eedfc0975f6931d1 = MAKE_CODEOBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[214], mod_consts[223], NULL, 1, 0, 0);
    codeobj_d4b1d5027e0f4b97fcc9d790fb16f35b = MAKE_CODEOBJECT(module_filename_obj, 56, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[128], mod_consts[223], NULL, 1, 0, 0);
    codeobj_b150fcf7718389b911734d815b7315f7 = MAKE_CODEOBJECT(module_filename_obj, 84, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[33], mod_consts[223], NULL, 1, 0, 0);
    codeobj_ffe9dd69e230d6c35b48e4f334a1f95c = MAKE_CODEOBJECT(module_filename_obj, 126, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[33], mod_consts[223], NULL, 1, 0, 0);
    codeobj_9f9a580246d421b6db20a4e1c4a9891e = MAKE_CODEOBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[206], mod_consts[227], NULL, 3, 0, 0);
    codeobj_69eb5d0706d468fc34bfda436dc19b42 = MAKE_CODEOBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[207], mod_consts[228], NULL, 1, 0, 0);
    codeobj_e50b5b8c9133501aec02fe2ab5719c2b = MAKE_CODEOBJECT(module_filename_obj, 71, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[134], mod_consts[229], NULL, 3, 0, 0);
    codeobj_6fd5031003312356382ab9fa0f5e653f = MAKE_CODEOBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[152], mod_consts[230], NULL, 3, 0, 0);
    codeobj_b3da62f85515bd81461f6b812c8c4e35 = MAKE_CODEOBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[152], mod_consts[231], NULL, 3, 0, 0);
    codeobj_6778a7ae86dc4a41f6907f9dc4e43caf = MAKE_CODEOBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[205], mod_consts[232], NULL, 2, 0, 0);
    codeobj_91d59f1de46142ffb76adbaa50f6a719 = MAKE_CODEOBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[220], mod_consts[233], NULL, 1, 0, 0);
    codeobj_1d88499762b9c3eeaab906919c93a472 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[34], mod_consts[223], NULL, 1, 0, 0);
    codeobj_a09e0696d1f553e022dea3a87eb8074f = MAKE_CODEOBJECT(module_filename_obj, 90, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[34], mod_consts[223], NULL, 1, 0, 0);
    codeobj_1cd3571b80f13d02410b391dbb641a04 = MAKE_CODEOBJECT(module_filename_obj, 132, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[34], mod_consts[223], NULL, 1, 0, 0);
    codeobj_9520d26628fda6fd623552993479145c = MAKE_CODEOBJECT(module_filename_obj, 41, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[52], mod_consts[223], NULL, 1, 0, 0);
    codeobj_fa256fadcb184f43170cfb2976b008ec = MAKE_CODEOBJECT(module_filename_obj, 111, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[144], mod_consts[234], NULL, 4, 0, 0);
    codeobj_e9f7ed5bd3c0d1015ef9df9f3f166c04 = MAKE_CODEOBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[215], mod_consts[235], NULL, 2, 0, 0);
    codeobj_62837e82d6cb99951296833e80b3e621 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[142], mod_consts[223], NULL, 1, 0, 0);
    codeobj_414254c4eb295443facf7e5d00d9f52d = MAKE_CODEOBJECT(module_filename_obj, 144, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[149], mod_consts[236], NULL, 3, 0, 0);
    codeobj_6e8ae8521206f63ced9812ef8fbb840c = MAKE_CODEOBJECT(module_filename_obj, 78, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[136], mod_consts[223], NULL, 1, 0, 0);
    codeobj_638fdf2614c6dcbdba6b3db5836556e8 = MAKE_CODEOBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[136], mod_consts[235], NULL, 2, 0, 0);
    codeobj_59b8931e0b716f643b1a64cdad2d55bb = MAKE_CODEOBJECT(module_filename_obj, 138, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[62], mod_consts[223], NULL, 1, 0, 0);
    codeobj_108ef25319a89b30f0b50c8911be3a63 = MAKE_CODEOBJECT(module_filename_obj, 96, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[139], mod_consts[237], NULL, 3, 0, 0);
    codeobj_e7771590e0a2bcbe64ad0a4477add090 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[132], mod_consts[238], NULL, 2, 0, 0);
    codeobj_661921f8092fa4b1fac51c00941b70f4 = MAKE_CODEOBJECT(module_filename_obj, 120, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[147], mod_consts[239], NULL, 3, 0, 0);
    codeobj_da0b5afef9b2284ccb173f9600d97071 = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[151], mod_consts[240], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_curve = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_6fd5031003312356382ab9fa0f5e653f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fd5031003312356382ab9fa0f5e653f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6fd5031003312356382ab9fa0f5e653f)) {
        Py_XDECREF(cache_frame_6fd5031003312356382ab9fa0f5e653f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fd5031003312356382ab9fa0f5e653f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fd5031003312356382ab9fa0f5e653f = MAKE_FUNCTION_FRAME(codeobj_6fd5031003312356382ab9fa0f5e653f, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6fd5031003312356382ab9fa0f5e653f->m_type_description == NULL);
    frame_6fd5031003312356382ab9fa0f5e653f = cache_frame_6fd5031003312356382ab9fa0f5e653f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6fd5031003312356382ab9fa0f5e653f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6fd5031003312356382ab9fa0f5e653f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[2];
        CHECK_OBJECT(par_data);
        tmp_args_element_name_2 = par_data;
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[1], call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_curve);
        tmp_isinstance_inst_1 = par_curve;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[3]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[4];
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 161;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 161;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[6];
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 164;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 164;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_3 = par_data;
        tmp_args_element_name_4 = mod_consts[5];
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[8], call_args);
        }

        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LIST_COPY(mod_consts[9]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[10];
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 167;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 167;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[11];
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[12];
        tmp_level_name_1 = mod_consts[5];
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 169;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_3 = var_backend;
        CHECK_OBJECT(par_curve);
        tmp_args_element_name_5 = par_curve;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_6 = par_data;
        frame_6fd5031003312356382ab9fa0f5e653f->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[14], call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fd5031003312356382ab9fa0f5e653f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fd5031003312356382ab9fa0f5e653f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fd5031003312356382ab9fa0f5e653f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fd5031003312356382ab9fa0f5e653f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fd5031003312356382ab9fa0f5e653f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fd5031003312356382ab9fa0f5e653f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fd5031003312356382ab9fa0f5e653f,
        type_description_1,
        par_cls,
        par_curve,
        par_data,
        var_backend
    );


    // Release cached frame if used for exception.
    if (frame_6fd5031003312356382ab9fa0f5e653f == cache_frame_6fd5031003312356382ab9fa0f5e653f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6fd5031003312356382ab9fa0f5e653f);
        cache_frame_6fd5031003312356382ab9fa0f5e653f = NULL;
    }

    assertFrameObject(frame_6fd5031003312356382ab9fa0f5e653f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_backend);
    var_backend = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_backend);
    var_backend = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    struct Nuitka_FrameObject *frame_ba0abbc83048ec2a5377b27b5b2f99b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0)) {
        Py_XDECREF(cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0 = MAKE_FUNCTION_FRAME(codeobj_ba0abbc83048ec2a5377b27b5b2f99b0, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0->m_type_description == NULL);
    frame_ba0abbc83048ec2a5377b27b5b2f99b0 = cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba0abbc83048ec2a5377b27b5b2f99b0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba0abbc83048ec2a5377b27b5b2f99b0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_algorithm);
        tmp_assattr_name_1 = par_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba0abbc83048ec2a5377b27b5b2f99b0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba0abbc83048ec2a5377b27b5b2f99b0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba0abbc83048ec2a5377b27b5b2f99b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba0abbc83048ec2a5377b27b5b2f99b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba0abbc83048ec2a5377b27b5b2f99b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba0abbc83048ec2a5377b27b5b2f99b0,
        type_description_1,
        par_self,
        par_algorithm
    );


    // Release cached frame if used for exception.
    if (frame_ba0abbc83048ec2a5377b27b5b2f99b0 == cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0);
        cache_frame_ba0abbc83048ec2a5377b27b5b2f99b0 = NULL;
    }

    assertFrameObject(frame_ba0abbc83048ec2a5377b27b5b2f99b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_curve = python_pars[0];
    PyObject *par_backend = python_pars[1];
    struct Nuitka_FrameObject *frame_6778a7ae86dc4a41f6907f9dc4e43caf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf)) {
        Py_XDECREF(cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf = MAKE_FUNCTION_FRAME(codeobj_6778a7ae86dc4a41f6907f9dc4e43caf, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf->m_type_description == NULL);
    frame_6778a7ae86dc4a41f6907f9dc4e43caf = cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6778a7ae86dc4a41f6907f9dc4e43caf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6778a7ae86dc4a41f6907f9dc4e43caf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_1 = par_backend;
        frame_6778a7ae86dc4a41f6907f9dc4e43caf->m_frame.f_lineno = 325;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_backend;
            assert(old != NULL);
            par_backend = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_backend);
        tmp_called_instance_1 = par_backend;
        CHECK_OBJECT(par_curve);
        tmp_args_element_name_2 = par_curve;
        frame_6778a7ae86dc4a41f6907f9dc4e43caf->m_frame.f_lineno = 326;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[17], tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6778a7ae86dc4a41f6907f9dc4e43caf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6778a7ae86dc4a41f6907f9dc4e43caf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6778a7ae86dc4a41f6907f9dc4e43caf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6778a7ae86dc4a41f6907f9dc4e43caf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6778a7ae86dc4a41f6907f9dc4e43caf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6778a7ae86dc4a41f6907f9dc4e43caf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6778a7ae86dc4a41f6907f9dc4e43caf,
        type_description_1,
        par_curve,
        par_backend
    );


    // Release cached frame if used for exception.
    if (frame_6778a7ae86dc4a41f6907f9dc4e43caf == cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf);
        cache_frame_6778a7ae86dc4a41f6907f9dc4e43caf = NULL;
    }

    assertFrameObject(frame_6778a7ae86dc4a41f6907f9dc4e43caf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_backend);
    par_backend = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_backend);
    par_backend = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_private_value = python_pars[0];
    PyObject *par_curve = python_pars[1];
    PyObject *par_backend = python_pars[2];
    struct Nuitka_FrameObject *frame_9f9a580246d421b6db20a4e1c4a9891e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9f9a580246d421b6db20a4e1c4a9891e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9f9a580246d421b6db20a4e1c4a9891e)) {
        Py_XDECREF(cache_frame_9f9a580246d421b6db20a4e1c4a9891e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f9a580246d421b6db20a4e1c4a9891e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f9a580246d421b6db20a4e1c4a9891e = MAKE_FUNCTION_FRAME(codeobj_9f9a580246d421b6db20a4e1c4a9891e, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9f9a580246d421b6db20a4e1c4a9891e->m_type_description == NULL);
    frame_9f9a580246d421b6db20a4e1c4a9891e = cache_frame_9f9a580246d421b6db20a4e1c4a9891e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9f9a580246d421b6db20a4e1c4a9891e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9f9a580246d421b6db20a4e1c4a9891e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_1 = par_backend;
        frame_9f9a580246d421b6db20a4e1c4a9891e->m_frame.f_lineno = 330;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_backend;
            assert(old != NULL);
            par_backend = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_private_value);
        tmp_isinstance_inst_1 = par_private_value;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[7]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[18]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[19];
        frame_9f9a580246d421b6db20a4e1c4a9891e->m_frame.f_lineno = 332;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 332;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_private_value);
        tmp_compexpr_left_1 = par_private_value;
        tmp_compexpr_right_1 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[20];
        frame_9f9a580246d421b6db20a4e1c4a9891e->m_frame.f_lineno = 335;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 335;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_curve);
        tmp_isinstance_inst_2 = par_curve;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[3]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[21];
        frame_9f9a580246d421b6db20a4e1c4a9891e->m_frame.f_lineno = 338;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 338;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_backend);
        tmp_called_instance_1 = par_backend;
        CHECK_OBJECT(par_private_value);
        tmp_args_element_name_2 = par_private_value;
        CHECK_OBJECT(par_curve);
        tmp_args_element_name_3 = par_curve;
        frame_9f9a580246d421b6db20a4e1c4a9891e->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[22], call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f9a580246d421b6db20a4e1c4a9891e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f9a580246d421b6db20a4e1c4a9891e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9f9a580246d421b6db20a4e1c4a9891e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f9a580246d421b6db20a4e1c4a9891e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f9a580246d421b6db20a4e1c4a9891e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f9a580246d421b6db20a4e1c4a9891e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f9a580246d421b6db20a4e1c4a9891e,
        type_description_1,
        par_private_value,
        par_curve,
        par_backend
    );


    // Release cached frame if used for exception.
    if (frame_9f9a580246d421b6db20a4e1c4a9891e == cache_frame_9f9a580246d421b6db20a4e1c4a9891e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9f9a580246d421b6db20a4e1c4a9891e);
        cache_frame_9f9a580246d421b6db20a4e1c4a9891e = NULL;
    }

    assertFrameObject(frame_9f9a580246d421b6db20a4e1c4a9891e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_backend);
    par_backend = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_backend);
    par_backend = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_private_value);
    Py_DECREF(par_private_value);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_private_value);
    Py_DECREF(par_private_value);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_curve = python_pars[3];
    struct Nuitka_FrameObject *frame_385fbba201cac6203977ac63d41fdcfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_385fbba201cac6203977ac63d41fdcfd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_385fbba201cac6203977ac63d41fdcfd)) {
        Py_XDECREF(cache_frame_385fbba201cac6203977ac63d41fdcfd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_385fbba201cac6203977ac63d41fdcfd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_385fbba201cac6203977ac63d41fdcfd = MAKE_FUNCTION_FRAME(codeobj_385fbba201cac6203977ac63d41fdcfd, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_385fbba201cac6203977ac63d41fdcfd->m_type_description == NULL);
    frame_385fbba201cac6203977ac63d41fdcfd = cache_frame_385fbba201cac6203977ac63d41fdcfd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_385fbba201cac6203977ac63d41fdcfd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_385fbba201cac6203977ac63d41fdcfd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[7]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[18]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_y);
        tmp_isinstance_inst_2 = par_y;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[7]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[18]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[23];
        frame_385fbba201cac6203977ac63d41fdcfd->m_frame.f_lineno = 348;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 348;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_curve);
        tmp_isinstance_inst_3 = par_curve;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[3]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[21];
        frame_385fbba201cac6203977ac63d41fdcfd->m_frame.f_lineno = 351;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 351;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_y);
        tmp_assattr_name_1 = par_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_x);
        tmp_assattr_name_2 = par_x;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[25], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_curve);
        tmp_assattr_name_3 = par_curve;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[26], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_385fbba201cac6203977ac63d41fdcfd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_385fbba201cac6203977ac63d41fdcfd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_385fbba201cac6203977ac63d41fdcfd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_385fbba201cac6203977ac63d41fdcfd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_385fbba201cac6203977ac63d41fdcfd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_385fbba201cac6203977ac63d41fdcfd,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_curve
    );


    // Release cached frame if used for exception.
    if (frame_385fbba201cac6203977ac63d41fdcfd == cache_frame_385fbba201cac6203977ac63d41fdcfd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_385fbba201cac6203977ac63d41fdcfd);
        cache_frame_385fbba201cac6203977ac63d41fdcfd = NULL;
    }

    assertFrameObject(frame_385fbba201cac6203977ac63d41fdcfd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_backend = python_pars[1];
    struct Nuitka_FrameObject *frame_638fdf2614c6dcbdba6b3db5836556e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_638fdf2614c6dcbdba6b3db5836556e8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_638fdf2614c6dcbdba6b3db5836556e8)) {
        Py_XDECREF(cache_frame_638fdf2614c6dcbdba6b3db5836556e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_638fdf2614c6dcbdba6b3db5836556e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_638fdf2614c6dcbdba6b3db5836556e8 = MAKE_FUNCTION_FRAME(codeobj_638fdf2614c6dcbdba6b3db5836556e8, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_638fdf2614c6dcbdba6b3db5836556e8->m_type_description == NULL);
    frame_638fdf2614c6dcbdba6b3db5836556e8 = cache_frame_638fdf2614c6dcbdba6b3db5836556e8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_638fdf2614c6dcbdba6b3db5836556e8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_638fdf2614c6dcbdba6b3db5836556e8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_1 = par_backend;
        frame_638fdf2614c6dcbdba6b3db5836556e8->m_frame.f_lineno = 358;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_backend;
            assert(old != NULL);
            par_backend = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_backend);
        tmp_called_instance_1 = par_backend;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_2 = par_self;
        frame_638fdf2614c6dcbdba6b3db5836556e8->m_frame.f_lineno = 359;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[27], tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_638fdf2614c6dcbdba6b3db5836556e8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_638fdf2614c6dcbdba6b3db5836556e8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_638fdf2614c6dcbdba6b3db5836556e8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_638fdf2614c6dcbdba6b3db5836556e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_638fdf2614c6dcbdba6b3db5836556e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_638fdf2614c6dcbdba6b3db5836556e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_638fdf2614c6dcbdba6b3db5836556e8,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame if used for exception.
    if (frame_638fdf2614c6dcbdba6b3db5836556e8 == cache_frame_638fdf2614c6dcbdba6b3db5836556e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_638fdf2614c6dcbdba6b3db5836556e8);
        cache_frame_638fdf2614c6dcbdba6b3db5836556e8 = NULL;
    }

    assertFrameObject(frame_638fdf2614c6dcbdba6b3db5836556e8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_backend);
    par_backend = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_backend);
    par_backend = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_byte_length = NULL;
    struct Nuitka_FrameObject *frame_69eb5d0706d468fc34bfda436dc19b42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69eb5d0706d468fc34bfda436dc19b42 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_69eb5d0706d468fc34bfda436dc19b42)) {
        Py_XDECREF(cache_frame_69eb5d0706d468fc34bfda436dc19b42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69eb5d0706d468fc34bfda436dc19b42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69eb5d0706d468fc34bfda436dc19b42 = MAKE_FUNCTION_FRAME(codeobj_69eb5d0706d468fc34bfda436dc19b42, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_69eb5d0706d468fc34bfda436dc19b42->m_type_description == NULL);
    frame_69eb5d0706d468fc34bfda436dc19b42 = cache_frame_69eb5d0706d468fc34bfda436dc19b42;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_69eb5d0706d468fc34bfda436dc19b42);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_69eb5d0706d468fc34bfda436dc19b42) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[28]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[29]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[30];
        tmp_args_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[32]);
        frame_69eb5d0706d468fc34bfda436dc19b42->m_frame.f_lineno = 362;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[33]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[34]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[35];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[36];
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_byte_length == NULL);
        var_byte_length = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_4;
        tmp_left_name_4 = mod_consts[37];
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[38]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;

            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[40]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_byte_length);
        tmp_args_element_name_2 = var_byte_length;
        frame_69eb5d0706d468fc34bfda436dc19b42->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_4, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[38]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_left_name_3);
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[41]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_byte_length);
        tmp_args_element_name_4 = var_byte_length;
        frame_69eb5d0706d468fc34bfda436dc19b42->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69eb5d0706d468fc34bfda436dc19b42);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_69eb5d0706d468fc34bfda436dc19b42);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69eb5d0706d468fc34bfda436dc19b42);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69eb5d0706d468fc34bfda436dc19b42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69eb5d0706d468fc34bfda436dc19b42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69eb5d0706d468fc34bfda436dc19b42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69eb5d0706d468fc34bfda436dc19b42,
        type_description_1,
        par_self,
        var_byte_length
    );


    // Release cached frame if used for exception.
    if (frame_69eb5d0706d468fc34bfda436dc19b42 == cache_frame_69eb5d0706d468fc34bfda436dc19b42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_69eb5d0706d468fc34bfda436dc19b42);
        cache_frame_69eb5d0706d468fc34bfda436dc19b42 = NULL;
    }

    assertFrameObject(frame_69eb5d0706d468fc34bfda436dc19b42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_byte_length);
    Py_DECREF(var_byte_length);
    var_byte_length = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_byte_length);
    var_byte_length = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_curve = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *var_byte_length = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    struct Nuitka_FrameObject *frame_b3da62f85515bd81461f6b812c8c4e35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b3da62f85515bd81461f6b812c8c4e35 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b3da62f85515bd81461f6b812c8c4e35)) {
        Py_XDECREF(cache_frame_b3da62f85515bd81461f6b812c8c4e35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3da62f85515bd81461f6b812c8c4e35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3da62f85515bd81461f6b812c8c4e35 = MAKE_FUNCTION_FRAME(codeobj_b3da62f85515bd81461f6b812c8c4e35, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b3da62f85515bd81461f6b812c8c4e35->m_type_description == NULL);
    frame_b3da62f85515bd81461f6b812c8c4e35 = cache_frame_b3da62f85515bd81461f6b812c8c4e35;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b3da62f85515bd81461f6b812c8c4e35);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b3da62f85515bd81461f6b812c8c4e35) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_curve);
        tmp_isinstance_inst_1 = par_curve;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[3]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[4];
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 381;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 381;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[28]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[29]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[42];
        tmp_args_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_name_1 = PyDict_Copy(mod_consts[32]);
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 383;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_data);
        tmp_called_instance_1 = par_data;
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 391;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[43], &PyTuple_GET_ITEM(mod_consts[44], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 391;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_curve);
        tmp_expression_name_3 = par_curve;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[34]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[35];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[36];
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_byte_length == NULL);
        var_byte_length = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_data;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = mod_consts[45];
        CHECK_OBJECT(var_byte_length);
        tmp_right_name_3 = var_byte_length;
        tmp_left_name_3 = BINARY_OPERATION_MULT_OBJECT_INT_OBJECT(tmp_left_name_4, tmp_right_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = mod_consts[46];
        tmp_compexpr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[47]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_data == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_slice_source_1 = par_data;
        tmp_slice_lower_1 = mod_consts[46];
        CHECK_OBJECT(var_byte_length);
        tmp_left_name_5 = var_byte_length;
        tmp_right_name_5 = mod_consts[46];
        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[48];
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_lower_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[47]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_data == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_slice_source_2 = par_data;
        CHECK_OBJECT(var_byte_length);
        tmp_left_name_6 = var_byte_length;
        tmp_right_name_6 = mod_consts[46];
        tmp_slice_lower_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_6, tmp_right_name_6);
        if (tmp_slice_lower_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_SLICE(tmp_slice_source_2, tmp_slice_lower_2, Py_None);
        Py_DECREF(tmp_slice_lower_2);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = mod_consts[48];
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(par_cls);
        tmp_called_name_4 = par_cls;
        CHECK_OBJECT(var_x);
        tmp_args_element_name_5 = var_x;
        CHECK_OBJECT(var_y);
        tmp_args_element_name_6 = var_y;
        if (par_curve == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;

            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_curve;
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[49];
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 399;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 399;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[10];
        frame_b3da62f85515bd81461f6b812c8c4e35->m_frame.f_lineno = 401;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 401;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3da62f85515bd81461f6b812c8c4e35);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3da62f85515bd81461f6b812c8c4e35);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3da62f85515bd81461f6b812c8c4e35);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3da62f85515bd81461f6b812c8c4e35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3da62f85515bd81461f6b812c8c4e35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3da62f85515bd81461f6b812c8c4e35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3da62f85515bd81461f6b812c8c4e35,
        type_description_1,
        par_cls,
        par_curve,
        par_data,
        var_byte_length,
        var_x,
        var_y
    );


    // Release cached frame if used for exception.
    if (frame_b3da62f85515bd81461f6b812c8c4e35 == cache_frame_b3da62f85515bd81461f6b812c8c4e35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b3da62f85515bd81461f6b812c8c4e35);
        cache_frame_b3da62f85515bd81461f6b812c8c4e35 = NULL;
    }

    assertFrameObject(frame_b3da62f85515bd81461f6b812c8c4e35);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_curve);
    par_curve = NULL;
    Py_XDECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(var_byte_length);
    Py_DECREF(var_byte_length);
    var_byte_length = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_curve);
    par_curve = NULL;
    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var_byte_length);
    var_byte_length = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_8e31b5e1144926f7baeba5edffabb9f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e31b5e1144926f7baeba5edffabb9f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8e31b5e1144926f7baeba5edffabb9f6)) {
        Py_XDECREF(cache_frame_8e31b5e1144926f7baeba5edffabb9f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e31b5e1144926f7baeba5edffabb9f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e31b5e1144926f7baeba5edffabb9f6 = MAKE_FUNCTION_FRAME(codeobj_8e31b5e1144926f7baeba5edffabb9f6, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8e31b5e1144926f7baeba5edffabb9f6->m_type_description == NULL);
    frame_8e31b5e1144926f7baeba5edffabb9f6 = cache_frame_8e31b5e1144926f7baeba5edffabb9f6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8e31b5e1144926f7baeba5edffabb9f6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8e31b5e1144926f7baeba5edffabb9f6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[50]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[40]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_name_2 = par_other;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[40]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;

            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[41]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_compexpr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;

            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_other;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[41]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[33]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[52]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_compexpr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_other;
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[33]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_3);

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[52]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_3);

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[33]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[34]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_compexpr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_other;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[33]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_4);

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[34]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_4);

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_and_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8e31b5e1144926f7baeba5edffabb9f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8e31b5e1144926f7baeba5edffabb9f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8e31b5e1144926f7baeba5edffabb9f6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e31b5e1144926f7baeba5edffabb9f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e31b5e1144926f7baeba5edffabb9f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e31b5e1144926f7baeba5edffabb9f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e31b5e1144926f7baeba5edffabb9f6,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_8e31b5e1144926f7baeba5edffabb9f6 == cache_frame_8e31b5e1144926f7baeba5edffabb9f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8e31b5e1144926f7baeba5edffabb9f6);
        cache_frame_8e31b5e1144926f7baeba5edffabb9f6 = NULL;
    }

    assertFrameObject(frame_8e31b5e1144926f7baeba5edffabb9f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_other);
    par_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_other);
    par_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_beefc8bd70c45aa3639fbedf3c9912c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_beefc8bd70c45aa3639fbedf3c9912c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_beefc8bd70c45aa3639fbedf3c9912c0)) {
        Py_XDECREF(cache_frame_beefc8bd70c45aa3639fbedf3c9912c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_beefc8bd70c45aa3639fbedf3c9912c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_beefc8bd70c45aa3639fbedf3c9912c0 = MAKE_FUNCTION_FRAME(codeobj_beefc8bd70c45aa3639fbedf3c9912c0, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_beefc8bd70c45aa3639fbedf3c9912c0->m_type_description == NULL);
    frame_beefc8bd70c45aa3639fbedf3c9912c0 = cache_frame_beefc8bd70c45aa3639fbedf3c9912c0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_beefc8bd70c45aa3639fbedf3c9912c0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_beefc8bd70c45aa3639fbedf3c9912c0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_beefc8bd70c45aa3639fbedf3c9912c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_beefc8bd70c45aa3639fbedf3c9912c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_beefc8bd70c45aa3639fbedf3c9912c0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_beefc8bd70c45aa3639fbedf3c9912c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_beefc8bd70c45aa3639fbedf3c9912c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_beefc8bd70c45aa3639fbedf3c9912c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_beefc8bd70c45aa3639fbedf3c9912c0,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_beefc8bd70c45aa3639fbedf3c9912c0 == cache_frame_beefc8bd70c45aa3639fbedf3c9912c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_beefc8bd70c45aa3639fbedf3c9912c0);
        cache_frame_beefc8bd70c45aa3639fbedf3c9912c0 = NULL;
    }

    assertFrameObject(frame_beefc8bd70c45aa3639fbedf3c9912c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e49f4a76deca2afae38c520482701344;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e49f4a76deca2afae38c520482701344 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e49f4a76deca2afae38c520482701344)) {
        Py_XDECREF(cache_frame_e49f4a76deca2afae38c520482701344);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e49f4a76deca2afae38c520482701344 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e49f4a76deca2afae38c520482701344 = MAKE_FUNCTION_FRAME(codeobj_e49f4a76deca2afae38c520482701344, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e49f4a76deca2afae38c520482701344->m_type_description == NULL);
    frame_e49f4a76deca2afae38c520482701344 = cache_frame_e49f4a76deca2afae38c520482701344;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e49f4a76deca2afae38c520482701344);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e49f4a76deca2afae38c520482701344) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[40]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_hash_arg_1 = PyTuple_New(4);
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_expression_name_3;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyTuple_SET_ITEM(tmp_hash_arg_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
                exception_tb = NULL;

                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[41]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_hash_arg_1, 1, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
                exception_tb = NULL;

                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[33]);
            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[52]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_hash_arg_1, 2, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
                exception_tb = NULL;

                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_6 = par_self;
            tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[33]);
            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[34]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_hash_arg_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_hash_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e49f4a76deca2afae38c520482701344);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e49f4a76deca2afae38c520482701344);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e49f4a76deca2afae38c520482701344);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e49f4a76deca2afae38c520482701344, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e49f4a76deca2afae38c520482701344->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e49f4a76deca2afae38c520482701344, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e49f4a76deca2afae38c520482701344,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e49f4a76deca2afae38c520482701344 == cache_frame_e49f4a76deca2afae38c520482701344) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e49f4a76deca2afae38c520482701344);
        cache_frame_e49f4a76deca2afae38c520482701344 = NULL;
    }

    assertFrameObject(frame_e49f4a76deca2afae38c520482701344);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8fcd936f53f5d487eedfc0975f6931d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8fcd936f53f5d487eedfc0975f6931d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8fcd936f53f5d487eedfc0975f6931d1)) {
        Py_XDECREF(cache_frame_8fcd936f53f5d487eedfc0975f6931d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fcd936f53f5d487eedfc0975f6931d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fcd936f53f5d487eedfc0975f6931d1 = MAKE_FUNCTION_FRAME(codeobj_8fcd936f53f5d487eedfc0975f6931d1, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8fcd936f53f5d487eedfc0975f6931d1->m_type_description == NULL);
    frame_8fcd936f53f5d487eedfc0975f6931d1 = cache_frame_8fcd936f53f5d487eedfc0975f6931d1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8fcd936f53f5d487eedfc0975f6931d1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8fcd936f53f5d487eedfc0975f6931d1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = mod_consts[53];
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        frame_8fcd936f53f5d487eedfc0975f6931d1->m_frame.f_lineno = 426;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[54], tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fcd936f53f5d487eedfc0975f6931d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fcd936f53f5d487eedfc0975f6931d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fcd936f53f5d487eedfc0975f6931d1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fcd936f53f5d487eedfc0975f6931d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fcd936f53f5d487eedfc0975f6931d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fcd936f53f5d487eedfc0975f6931d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fcd936f53f5d487eedfc0975f6931d1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8fcd936f53f5d487eedfc0975f6931d1 == cache_frame_8fcd936f53f5d487eedfc0975f6931d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8fcd936f53f5d487eedfc0975f6931d1);
        cache_frame_8fcd936f53f5d487eedfc0975f6931d1 = NULL;
    }

    assertFrameObject(frame_8fcd936f53f5d487eedfc0975f6931d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_private_value = python_pars[1];
    PyObject *par_public_numbers = python_pars[2];
    struct Nuitka_FrameObject *frame_2c5c86b7f824158c6022e4ebb0fca033;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2c5c86b7f824158c6022e4ebb0fca033 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c5c86b7f824158c6022e4ebb0fca033)) {
        Py_XDECREF(cache_frame_2c5c86b7f824158c6022e4ebb0fca033);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c5c86b7f824158c6022e4ebb0fca033 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c5c86b7f824158c6022e4ebb0fca033 = MAKE_FUNCTION_FRAME(codeobj_2c5c86b7f824158c6022e4ebb0fca033, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2c5c86b7f824158c6022e4ebb0fca033->m_type_description == NULL);
    frame_2c5c86b7f824158c6022e4ebb0fca033 = cache_frame_2c5c86b7f824158c6022e4ebb0fca033;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2c5c86b7f824158c6022e4ebb0fca033);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2c5c86b7f824158c6022e4ebb0fca033) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_private_value);
        tmp_isinstance_inst_1 = par_private_value;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[7]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[18]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[55];
        frame_2c5c86b7f824158c6022e4ebb0fca033->m_frame.f_lineno = 434;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 434;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_public_numbers);
        tmp_isinstance_inst_2 = par_public_numbers;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[50]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[56];
        frame_2c5c86b7f824158c6022e4ebb0fca033->m_frame.f_lineno = 437;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 437;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_private_value);
        tmp_assattr_name_1 = par_private_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[57], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_public_numbers);
        tmp_assattr_name_2 = par_public_numbers;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c5c86b7f824158c6022e4ebb0fca033);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c5c86b7f824158c6022e4ebb0fca033);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c5c86b7f824158c6022e4ebb0fca033, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c5c86b7f824158c6022e4ebb0fca033->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c5c86b7f824158c6022e4ebb0fca033, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c5c86b7f824158c6022e4ebb0fca033,
        type_description_1,
        par_self,
        par_private_value,
        par_public_numbers
    );


    // Release cached frame if used for exception.
    if (frame_2c5c86b7f824158c6022e4ebb0fca033 == cache_frame_2c5c86b7f824158c6022e4ebb0fca033) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2c5c86b7f824158c6022e4ebb0fca033);
        cache_frame_2c5c86b7f824158c6022e4ebb0fca033 = NULL;
    }

    assertFrameObject(frame_2c5c86b7f824158c6022e4ebb0fca033);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_private_value);
    Py_DECREF(par_private_value);
    CHECK_OBJECT(par_public_numbers);
    Py_DECREF(par_public_numbers);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_private_value);
    Py_DECREF(par_private_value);
    CHECK_OBJECT(par_public_numbers);
    Py_DECREF(par_public_numbers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_backend = python_pars[1];
    struct Nuitka_FrameObject *frame_e9f7ed5bd3c0d1015ef9df9f3f166c04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04)) {
        Py_XDECREF(cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04 = MAKE_FUNCTION_FRAME(codeobj_e9f7ed5bd3c0d1015ef9df9f3f166c04, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04->m_type_description == NULL);
    frame_e9f7ed5bd3c0d1015ef9df9f3f166c04 = cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_1 = par_backend;
        frame_e9f7ed5bd3c0d1015ef9df9f3f166c04->m_frame.f_lineno = 446;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_backend;
            assert(old != NULL);
            par_backend = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_backend);
        tmp_called_instance_1 = par_backend;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_2 = par_self;
        frame_e9f7ed5bd3c0d1015ef9df9f3f166c04->m_frame.f_lineno = 447;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9f7ed5bd3c0d1015ef9df9f3f166c04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9f7ed5bd3c0d1015ef9df9f3f166c04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9f7ed5bd3c0d1015ef9df9f3f166c04,
        type_description_1,
        par_self,
        par_backend
    );


    // Release cached frame if used for exception.
    if (frame_e9f7ed5bd3c0d1015ef9df9f3f166c04 == cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);
        cache_frame_e9f7ed5bd3c0d1015ef9df9f3f166c04 = NULL;
    }

    assertFrameObject(frame_e9f7ed5bd3c0d1015ef9df9f3f166c04);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_backend);
    par_backend = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_backend);
    par_backend = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_3c0b252593dd3f616208fad89a8d769a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3c0b252593dd3f616208fad89a8d769a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3c0b252593dd3f616208fad89a8d769a)) {
        Py_XDECREF(cache_frame_3c0b252593dd3f616208fad89a8d769a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c0b252593dd3f616208fad89a8d769a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c0b252593dd3f616208fad89a8d769a = MAKE_FUNCTION_FRAME(codeobj_3c0b252593dd3f616208fad89a8d769a, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3c0b252593dd3f616208fad89a8d769a->m_type_description == NULL);
    frame_3c0b252593dd3f616208fad89a8d769a = cache_frame_3c0b252593dd3f616208fad89a8d769a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3c0b252593dd3f616208fad89a8d769a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3c0b252593dd3f616208fad89a8d769a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[60]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[61]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_name_2 = par_other;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[61]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 457;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 458;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;

            exception_lineno = 458;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[62]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_compexpr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;

            exception_lineno = 458;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_other;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[62]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 458;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c0b252593dd3f616208fad89a8d769a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c0b252593dd3f616208fad89a8d769a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c0b252593dd3f616208fad89a8d769a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c0b252593dd3f616208fad89a8d769a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c0b252593dd3f616208fad89a8d769a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c0b252593dd3f616208fad89a8d769a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c0b252593dd3f616208fad89a8d769a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_3c0b252593dd3f616208fad89a8d769a == cache_frame_3c0b252593dd3f616208fad89a8d769a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3c0b252593dd3f616208fad89a8d769a);
        cache_frame_3c0b252593dd3f616208fad89a8d769a = NULL;
    }

    assertFrameObject(frame_3c0b252593dd3f616208fad89a8d769a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_other);
    par_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_other);
    par_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_a8e5bb0daf5dd6467c300e2ed2397f03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03)) {
        Py_XDECREF(cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03 = MAKE_FUNCTION_FRAME(codeobj_a8e5bb0daf5dd6467c300e2ed2397f03, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03->m_type_description == NULL);
    frame_a8e5bb0daf5dd6467c300e2ed2397f03 = cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a8e5bb0daf5dd6467c300e2ed2397f03);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a8e5bb0daf5dd6467c300e2ed2397f03) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8e5bb0daf5dd6467c300e2ed2397f03);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8e5bb0daf5dd6467c300e2ed2397f03);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8e5bb0daf5dd6467c300e2ed2397f03);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8e5bb0daf5dd6467c300e2ed2397f03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8e5bb0daf5dd6467c300e2ed2397f03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8e5bb0daf5dd6467c300e2ed2397f03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8e5bb0daf5dd6467c300e2ed2397f03,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_a8e5bb0daf5dd6467c300e2ed2397f03 == cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03);
        cache_frame_a8e5bb0daf5dd6467c300e2ed2397f03 = NULL;
    }

    assertFrameObject(frame_a8e5bb0daf5dd6467c300e2ed2397f03);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_377a2bf8c7d0ea073ee6e5b8cd61be2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a)) {
        Py_XDECREF(cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a = MAKE_FUNCTION_FRAME(codeobj_377a2bf8c7d0ea073ee6e5b8cd61be2a, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a->m_type_description == NULL);
    frame_377a2bf8c7d0ea073ee6e5b8cd61be2a = cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[61]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_hash_arg_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM(tmp_hash_arg_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
                exception_tb = NULL;

                exception_lineno = 465;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[62]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_hash_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_hash_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_377a2bf8c7d0ea073ee6e5b8cd61be2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_377a2bf8c7d0ea073ee6e5b8cd61be2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_377a2bf8c7d0ea073ee6e5b8cd61be2a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_377a2bf8c7d0ea073ee6e5b8cd61be2a == cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);
        cache_frame_377a2bf8c7d0ea073ee6e5b8cd61be2a = NULL;
    }

    assertFrameObject(frame_377a2bf8c7d0ea073ee6e5b8cd61be2a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_oid = python_pars[0];
    struct Nuitka_FrameObject *frame_91d59f1de46142ffb76adbaa50f6a719;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_91d59f1de46142ffb76adbaa50f6a719 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91d59f1de46142ffb76adbaa50f6a719)) {
        Py_XDECREF(cache_frame_91d59f1de46142ffb76adbaa50f6a719);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91d59f1de46142ffb76adbaa50f6a719 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91d59f1de46142ffb76adbaa50f6a719 = MAKE_FUNCTION_FRAME(codeobj_91d59f1de46142ffb76adbaa50f6a719, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_91d59f1de46142ffb76adbaa50f6a719->m_type_description == NULL);
    frame_91d59f1de46142ffb76adbaa50f6a719 = cache_frame_91d59f1de46142ffb76adbaa50f6a719;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_91d59f1de46142ffb76adbaa50f6a719);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_91d59f1de46142ffb76adbaa50f6a719) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[63]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_oid);
        tmp_subscript_name_1 = par_oid;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_91d59f1de46142ffb76adbaa50f6a719);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_91d59f1de46142ffb76adbaa50f6a719, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_91d59f1de46142ffb76adbaa50f6a719, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[64];
        frame_91d59f1de46142ffb76adbaa50f6a719->m_frame.f_lineno = 499;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_LookupError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 499;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 496;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_91d59f1de46142ffb76adbaa50f6a719->m_frame) frame_91d59f1de46142ffb76adbaa50f6a719->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_91d59f1de46142ffb76adbaa50f6a719);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_91d59f1de46142ffb76adbaa50f6a719);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_91d59f1de46142ffb76adbaa50f6a719);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91d59f1de46142ffb76adbaa50f6a719, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91d59f1de46142ffb76adbaa50f6a719->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91d59f1de46142ffb76adbaa50f6a719, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91d59f1de46142ffb76adbaa50f6a719,
        type_description_1,
        par_oid
    );


    // Release cached frame if used for exception.
    if (frame_91d59f1de46142ffb76adbaa50f6a719 == cache_frame_91d59f1de46142ffb76adbaa50f6a719) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_91d59f1de46142ffb76adbaa50f6a719);
        cache_frame_91d59f1de46142ffb76adbaa50f6a719 = NULL;
    }

    assertFrameObject(frame_91d59f1de46142ffb76adbaa50f6a719);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_oid);
    Py_DECREF(par_oid);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_oid);
    Py_DECREF(par_oid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[142],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62837e82d6cb99951296833e80b3e621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[144],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa256fadcb184f43170cfb2976b008ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[147],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_661921f8092fa4b1fac51c00941b70f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ffe9dd69e230d6c35b48e4f334a1f95c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[34],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1cd3571b80f13d02410b391dbb641a04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[62],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59b8931e0b716f643b1a64cdad2d55bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[148],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[149],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_414254c4eb295443facf7e5d00d9f52d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[151],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_da0b5afef9b2284ccb173f9600d97071,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[150],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point,
        mod_consts[152],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6fd5031003312356382ab9fa0f5e653f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__,
        mod_consts[200],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba0abbc83048ec2a5377b27b5b2f99b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[52],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9520d26628fda6fd623552993479145c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key,
        mod_consts[205],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6778a7ae86dc4a41f6907f9dc4e43caf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key,
        mod_consts[206],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9f9a580246d421b6db20a4e1c4a9891e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__,
        mod_consts[200],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_385fbba201cac6203977ac63d41fdcfd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key,
        mod_consts[136],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_638fdf2614c6dcbdba6b3db5836556e8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point,
        mod_consts[207],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_69eb5d0706d468fc34bfda436dc19b42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point,
        mod_consts[152],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b3da62f85515bd81461f6b812c8c4e35,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__,
        mod_consts[211],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8e31b5e1144926f7baeba5edffabb9f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__,
        mod_consts[212],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_beefc8bd70c45aa3639fbedf3c9912c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__,
        mod_consts[213],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e49f4a76deca2afae38c520482701344,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__,
        mod_consts[214],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8fcd936f53f5d487eedfc0975f6931d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[34],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1d88499762b9c3eeaab906919c93a472,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__,
        mod_consts[200],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c5c86b7f824158c6022e4ebb0fca033,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key,
        mod_consts[215],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9f7ed5bd3c0d1015ef9df9f3f166c04,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__,
        mod_consts[211],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3c0b252593dd3f616208fad89a8d769a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__,
        mod_consts[212],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8e5bb0daf5dd6467c300e2ed2397f03,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__,
        mod_consts[213],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_377a2bf8c7d0ea073ee6e5b8cd61be2a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid,
        mod_consts[220],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_91d59f1de46142ffb76adbaa50f6a719,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[128],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d4b1d5027e0f4b97fcc9d790fb16f35b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[132],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e7771590e0a2bcbe64ad0a4477add090,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[134],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e50b5b8c9133501aec02fe2ab5719c2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[136],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6e8ae8521206f63ced9812ef8fbb840c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b150fcf7718389b911734d815b7315f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[34],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a09e0696d1f553e022dea3a87eb8074f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[139],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_108ef25319a89b30f0b50c8911be3a63,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_cryptography$hazmat$primitives$asymmetric$ec[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__,
    impl_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$primitives$asymmetric$ec;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$primitives$asymmetric$ec) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$primitives$asymmetric$ec[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.hazmat.primitives.asymmetric.ec";

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$hazmat$primitives$asymmetric$ec = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.primitives.asymmetric.ec: Skipping module init, already done.\n");
#endif

        return module_cryptography$hazmat$primitives$asymmetric$ec;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.asymmetric.ec: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.asymmetric.ec: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.asymmetric.ec: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$primitives$asymmetric$ec\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$primitives$asymmetric$ec = MODULE_DICT(module_cryptography$hazmat$primitives$asymmetric$ec);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$ec,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$ec,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$asymmetric$ec);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$primitives$asymmetric$ec);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_14__class = NULL;
    PyObject *tmp_class_creation_14__class_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_15__class = NULL;
    PyObject *tmp_class_creation_15__class_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_16__class = NULL;
    PyObject *tmp_class_creation_16__class_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_17__class = NULL;
    PyObject *tmp_class_creation_17__class_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_18__class = NULL;
    PyObject *tmp_class_creation_18__class_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_19__class = NULL;
    PyObject *tmp_class_creation_19__class_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_20__class = NULL;
    PyObject *tmp_class_creation_20__class_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_21__class = NULL;
    PyObject *tmp_class_creation_21__class_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_22__class = NULL;
    PyObject *tmp_class_creation_22__class_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_23__class = NULL;
    PyObject *tmp_class_creation_23__class_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_24__class = NULL;
    PyObject *tmp_class_creation_24__class_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_25__class = NULL;
    PyObject *tmp_class_creation_25__class_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_26__class = NULL;
    PyObject *tmp_class_creation_26__class_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_27__class = NULL;
    PyObject *tmp_class_creation_27__class_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_28__class = NULL;
    PyObject *tmp_class_creation_28__class_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_29__class = NULL;
    PyObject *tmp_class_creation_29__class_dict = NULL;
    PyObject *tmp_class_creation_29__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_12__base = NULL;
    PyObject *tmp_select_metaclass_13__base = NULL;
    PyObject *tmp_select_metaclass_14__base = NULL;
    PyObject *tmp_select_metaclass_15__base = NULL;
    PyObject *tmp_select_metaclass_16__base = NULL;
    PyObject *tmp_select_metaclass_17__base = NULL;
    PyObject *tmp_select_metaclass_18__base = NULL;
    PyObject *tmp_select_metaclass_19__base = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_20__base = NULL;
    PyObject *tmp_select_metaclass_21__base = NULL;
    PyObject *tmp_select_metaclass_22__base = NULL;
    PyObject *tmp_select_metaclass_23__base = NULL;
    PyObject *tmp_select_metaclass_24__base = NULL;
    PyObject *tmp_select_metaclass_25__base = NULL;
    PyObject *tmp_select_metaclass_26__base = NULL;
    PyObject *tmp_select_metaclass_27__base = NULL;
    PyObject *tmp_select_metaclass_28__base = NULL;
    PyObject *tmp_select_metaclass_29__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_aa33720a2f0e907682cc8dbcbb54cd96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_ebaecd61bb83cd5b06911f055dddf3d5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40 = NULL;
    struct Nuitka_FrameObject *frame_f5448020a25462efe99f2e2ae545bebb_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f5448020a25462efe99f2e2ae545bebb_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55 = NULL;
    struct Nuitka_FrameObject *frame_61376432281f147b19eaf9619f10a11a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_61376432281f147b19eaf9619f10a11a_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64 = NULL;
    struct Nuitka_FrameObject *frame_75423583ba3b3d8a866258b4e7b81b99_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_75423583ba3b3d8a866258b4e7b81b99_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104 = NULL;
    struct Nuitka_FrameObject *frame_a41cc0d1e02c68e238f918c4d33018a1_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119 = NULL;
    struct Nuitka_FrameObject *frame_928cd31f30e3491c5806ac058b28e621_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_928cd31f30e3491c5806ac058b28e621_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317 = NULL;
    struct Nuitka_FrameObject *frame_33d0b8fb2bf023d37381929b4bfaf0cd_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8 = NULL;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343 = NULL;
    struct Nuitka_FrameObject *frame_259bfadd72ea4c7f4ee0c01619649dc4_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9 = NULL;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431 = NULL;
    struct Nuitka_FrameObject *frame_72f65678d7a47b0fc2a89dc86b8ce020_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10 = NULL;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyImport_ImportModule("__future__");
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Frame without reuse.
    frame_aa33720a2f0e907682cc8dbcbb54cd96 = MAKE_MODULE_FRAME(codeobj_aa33720a2f0e907682cc8dbcbb54cd96, module_cryptography$hazmat$primitives$asymmetric$ec);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_aa33720a2f0e907682cc8dbcbb54cd96);
    assert(Py_REFCNT(frame_aa33720a2f0e907682cc8dbcbb54cd96) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[68]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[69]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[70]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_6);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[71];
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[5];
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[28];
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[5];
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[7];
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[5];
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 10;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[72];
        tmp_globals_name_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[73];
        tmp_level_name_4 = mod_consts[5];
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[0]);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[74];
        tmp_globals_name_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[75];
        tmp_level_name_5 = mod_consts[5];
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[76]);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[77];
        tmp_globals_name_6 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[78];
        tmp_level_name_6 = mod_consts[5];
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 14;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[16]);
        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_12);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2)) {
            Py_XDECREF(cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2 = MAKE_FUNCTION_FRAME(codeobj_ebaecd61bb83cd5b06911f055dddf3d5, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_type_description == NULL);
        frame_ebaecd61bb83cd5b06911f055dddf3d5_2 = cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ebaecd61bb83cd5b06911f055dddf3d5_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ebaecd61bb83cd5b06911f055dddf3d5_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 18;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[81]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 19;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[83]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_3;
            tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_3 == NULL)) {
                tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[85]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_4;
            tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_4 == NULL)) {
                tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 21;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, mod_consts[87]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_5 == NULL)) {
                tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 22;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[89]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_6 == NULL)) {
                tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 23;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, mod_consts[91]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_7;
            tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_7 == NULL)) {
                tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 24;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, mod_consts[93]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_8;
            tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_8 == NULL)) {
                tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 25;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, mod_consts[95]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_9;
            tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_9 == NULL)) {
                tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, mod_consts[97]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_10;
            tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_10 == NULL)) {
                tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 27;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, mod_consts[99]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_11;
            tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_11 == NULL)) {
                tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 28;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, mod_consts[101]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_12;
            tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_12 == NULL)) {
                tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, mod_consts[103]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_13;
            tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_13 == NULL)) {
                tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[105]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_14;
            tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_14 == NULL)) {
                tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, mod_consts[107]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_15;
            tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_15 == NULL)) {
                tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 32;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, mod_consts[109]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_16;
            tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_16 == NULL)) {
                tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 33;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, mod_consts[111]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_17;
            tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_17 == NULL)) {
                tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, mod_consts[113]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_18;
            tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_18 == NULL)) {
                tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, mod_consts[115]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_19;
            tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_called_name_19 == NULL)) {
                tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_called_name_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto frame_exception_exit_2;
            }
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame.f_lineno = 36;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, mod_consts[117]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ebaecd61bb83cd5b06911f055dddf3d5_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ebaecd61bb83cd5b06911f055dddf3d5_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ebaecd61bb83cd5b06911f055dddf3d5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ebaecd61bb83cd5b06911f055dddf3d5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ebaecd61bb83cd5b06911f055dddf3d5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ebaecd61bb83cd5b06911f055dddf3d5_2,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_ebaecd61bb83cd5b06911f055dddf3d5_2 == cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2);
            cache_frame_ebaecd61bb83cd5b06911f055dddf3d5_2 = NULL;
        }

        assertFrameObject(frame_ebaecd61bb83cd5b06911f055dddf3d5_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_assign_source_13 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_1_EllipticCurveOID_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_dict;
        tmp_key_name_2 = mod_consts[119];
        tmp_assign_source_14 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_1__base == NULL);
            Py_INCREF(tmp_assign_source_15);
            tmp_select_metaclass_1__base = tmp_assign_source_15;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_expression_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_14 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_14 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_14 == NULL));
            goto try_return_handler_4;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;
        goto outline_result_2;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_20 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = mod_consts[120];
        tmp_args_element_name_2 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_20, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_16;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_17 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_17);
    }
    CHECK_OBJECT(tmp_class_creation_1__class);
    Py_DECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40 = tmp_set_locals_2;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_f5448020a25462efe99f2e2ae545bebb_3)) {
            Py_XDECREF(cache_frame_f5448020a25462efe99f2e2ae545bebb_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f5448020a25462efe99f2e2ae545bebb_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f5448020a25462efe99f2e2ae545bebb_3 = MAKE_FUNCTION_FRAME(codeobj_f5448020a25462efe99f2e2ae545bebb, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f5448020a25462efe99f2e2ae545bebb_3->m_type_description == NULL);
        frame_f5448020a25462efe99f2e2ae545bebb_3 = cache_frame_f5448020a25462efe99f2e2ae545bebb_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f5448020a25462efe99f2e2ae545bebb_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f5448020a25462efe99f2e2ae545bebb_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_4;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_1_name();

            frame_f5448020a25462efe99f2e2ae545bebb_3->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[122], tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_5;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_5 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_2_key_size();

            frame_f5448020a25462efe99f2e2ae545bebb_3->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[122], tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f5448020a25462efe99f2e2ae545bebb_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f5448020a25462efe99f2e2ae545bebb_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f5448020a25462efe99f2e2ae545bebb_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f5448020a25462efe99f2e2ae545bebb_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f5448020a25462efe99f2e2ae545bebb_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f5448020a25462efe99f2e2ae545bebb_3,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_f5448020a25462efe99f2e2ae545bebb_3 == cache_frame_f5448020a25462efe99f2e2ae545bebb_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f5448020a25462efe99f2e2ae545bebb_3);
            cache_frame_f5448020a25462efe99f2e2ae545bebb_3 = NULL;
        }

        assertFrameObject(frame_f5448020a25462efe99f2e2ae545bebb_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        tmp_assign_source_18 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40 = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_2_EllipticCurve_40 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 40;
        goto try_except_handler_6;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_dict_name_3 = tmp_class_creation_2__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_dict;
        tmp_key_name_4 = mod_consts[119];
        tmp_assign_source_19 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_2__base == NULL);
            Py_INCREF(tmp_assign_source_20);
            tmp_select_metaclass_2__base = tmp_assign_source_20;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_2;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_expression_name_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_19 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_9;
            }
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_19 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_19 == NULL));
            goto try_return_handler_8;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;
        goto outline_result_4;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_21 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_6 = mod_consts[3];
        tmp_args_element_name_7 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_8 = tmp_class_creation_2__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_21, call_args);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_10;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[125]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[126]);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 39;

            goto try_except_handler_6;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 39;
        tmp_called_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_args_element_name_10 = tmp_class_creation_2__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 39;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_22);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert(old != NULL);
            tmp_class_creation_2__class = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;
    Py_XDECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_23 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_23);
    }
    CHECK_OBJECT(tmp_class_creation_2__class);
    Py_DECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55 = tmp_set_locals_3;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_61376432281f147b19eaf9619f10a11a_4)) {
            Py_XDECREF(cache_frame_61376432281f147b19eaf9619f10a11a_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_61376432281f147b19eaf9619f10a11a_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_61376432281f147b19eaf9619f10a11a_4 = MAKE_FUNCTION_FRAME(codeobj_61376432281f147b19eaf9619f10a11a, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_61376432281f147b19eaf9619f10a11a_4->m_type_description == NULL);
        frame_61376432281f147b19eaf9619f10a11a_4 = cache_frame_61376432281f147b19eaf9619f10a11a_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_61376432281f147b19eaf9619f10a11a_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_61376432281f147b19eaf9619f10a11a_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_4;
            }


            tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_3_algorithm();

            frame_61376432281f147b19eaf9619f10a11a_4->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[122], tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_61376432281f147b19eaf9619f10a11a_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_61376432281f147b19eaf9619f10a11a_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_61376432281f147b19eaf9619f10a11a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_61376432281f147b19eaf9619f10a11a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_61376432281f147b19eaf9619f10a11a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_61376432281f147b19eaf9619f10a11a_4,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_61376432281f147b19eaf9619f10a11a_4 == cache_frame_61376432281f147b19eaf9619f10a11a_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_61376432281f147b19eaf9619f10a11a_4);
            cache_frame_61376432281f147b19eaf9619f10a11a_4 = NULL;
        }

        assertFrameObject(frame_61376432281f147b19eaf9619f10a11a_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        tmp_assign_source_24 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55 = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_3_EllipticCurveSignatureAlgorithm_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 55;
        goto try_except_handler_10;
        outline_result_5:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_5;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        tmp_key_name_5 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_dict_name_5 = tmp_class_creation_3__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_5, tmp_key_name_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_dict_name_6 = tmp_class_creation_3__class_dict;
        tmp_key_name_6 = mod_consts[119];
        tmp_assign_source_25 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_3__base == NULL);
            Py_INCREF(tmp_assign_source_26);
            tmp_select_metaclass_3__base = tmp_assign_source_26;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_5;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_expression_name_5 = tmp_select_metaclass_3__base;
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_5);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_13;
            }
            goto try_return_handler_12;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_type_arg_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_25 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_25 == NULL));
            goto try_return_handler_12;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        goto outline_result_6;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_24;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_name_24 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_12 = mod_consts[129];
        tmp_args_element_name_13 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_name_14 = tmp_class_creation_3__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_24, call_args);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_25;
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_16;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_10;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[125]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_10;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 54;

            goto try_except_handler_10;
        }
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[126]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 54;

            goto try_except_handler_10;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 54;
        tmp_called_name_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_10;
        }
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_args_element_name_16 = tmp_class_creation_3__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 54;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_25);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert(old != NULL);
            tmp_class_creation_3__class = tmp_assign_source_28;
            Py_DECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__class);
    tmp_class_creation_3__class = NULL;
    Py_XDECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_29 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_29);
    }
    CHECK_OBJECT(tmp_class_creation_3__class);
    Py_DECREF(tmp_class_creation_3__class);
    tmp_class_creation_3__class = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_dict);
    Py_DECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64 = tmp_set_locals_4;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_75423583ba3b3d8a866258b4e7b81b99_5)) {
            Py_XDECREF(cache_frame_75423583ba3b3d8a866258b4e7b81b99_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_75423583ba3b3d8a866258b4e7b81b99_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_75423583ba3b3d8a866258b4e7b81b99_5 = MAKE_FUNCTION_FRAME(codeobj_75423583ba3b3d8a866258b4e7b81b99, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_75423583ba3b3d8a866258b4e7b81b99_5->m_type_description == NULL);
        frame_75423583ba3b3d8a866258b4e7b81b99_5 = cache_frame_75423583ba3b3d8a866258b4e7b81b99_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_75423583ba3b3d8a866258b4e7b81b99_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_75423583ba3b3d8a866258b4e7b81b99_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_17;
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_4_signer();

            frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[130], tmp_args_element_name_17);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_18;
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_5_exchange();

            frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[130], tmp_args_element_name_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_19;
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_6_public_key();

            frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[130], tmp_args_element_name_19);
            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_20;
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_7_curve();

            frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[122], tmp_args_element_name_20);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_21;
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_8_key_size();

            frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[122], tmp_args_element_name_21);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_22;
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_9_sign();

            frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame.f_lineno = 96;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[130], tmp_args_element_name_22);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_75423583ba3b3d8a866258b4e7b81b99_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_75423583ba3b3d8a866258b4e7b81b99_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_75423583ba3b3d8a866258b4e7b81b99_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_75423583ba3b3d8a866258b4e7b81b99_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_75423583ba3b3d8a866258b4e7b81b99_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_75423583ba3b3d8a866258b4e7b81b99_5,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_75423583ba3b3d8a866258b4e7b81b99_5 == cache_frame_75423583ba3b3d8a866258b4e7b81b99_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_75423583ba3b3d8a866258b4e7b81b99_5);
            cache_frame_75423583ba3b3d8a866258b4e7b81b99_5 = NULL;
        }

        assertFrameObject(frame_75423583ba3b3d8a866258b4e7b81b99_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        tmp_assign_source_30 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64 = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_4_EllipticCurvePrivateKey_64 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 64;
        goto try_except_handler_14;
        outline_result_7:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_dict_name_7 = tmp_class_creation_4__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_dict_name_8 = tmp_class_creation_4__class_dict;
        tmp_key_name_8 = mod_consts[119];
        tmp_assign_source_31 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_14;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_4__base == NULL);
            Py_INCREF(tmp_assign_source_32);
            tmp_select_metaclass_4__base = tmp_assign_source_32;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_8;
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_expression_name_8 = tmp_select_metaclass_4__base;
            tmp_assign_source_31 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_8);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_17;
            }
            goto try_return_handler_16;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF(exception_keeper_type_12);
            Py_XDECREF(exception_keeper_value_12);
            Py_XDECREF(exception_keeper_tb_12);
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_type_arg_4 = tmp_select_metaclass_4__base;
            tmp_assign_source_31 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_assign_source_31 == NULL));
            goto try_return_handler_16;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(tmp_select_metaclass_4__base);
        tmp_select_metaclass_4__base = NULL;
        goto outline_result_8;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_4__base);
        tmp_select_metaclass_4__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_name_27 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_23 = mod_consts[140];
        tmp_args_element_name_24 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_name_25 = tmp_class_creation_4__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_27, call_args);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_27;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_14;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[125]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_14;
        }
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 63;

            goto try_except_handler_14;
        }
        tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[126]);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 63;

            goto try_except_handler_14;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 63;
        tmp_called_name_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_14;
        }
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_args_element_name_27 = tmp_class_creation_4__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 63;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_28);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert(old != NULL);
            tmp_class_creation_4__class = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__class);
    tmp_class_creation_4__class = NULL;
    Py_XDECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_35 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_35);
    }
    CHECK_OBJECT(tmp_class_creation_4__class);
    Py_DECREF(tmp_class_creation_4__class);
    tmp_class_creation_4__class = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_dict);
    Py_DECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_18;
        }
        tmp_assign_source_36 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104 = tmp_set_locals_5;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6)) {
            Py_XDECREF(cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6 = MAKE_FUNCTION_FRAME(codeobj_a41cc0d1e02c68e238f918c4d33018a1, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6->m_type_description == NULL);
        frame_a41cc0d1e02c68e238f918c4d33018a1_6 = cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a41cc0d1e02c68e238f918c4d33018a1_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a41cc0d1e02c68e238f918c4d33018a1_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_28;
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_6;
            }


            tmp_args_element_name_28 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_10_private_numbers();

            frame_a41cc0d1e02c68e238f918c4d33018a1_6->m_frame.f_lineno = 105;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[130], tmp_args_element_name_28);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_name_29;
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto frame_exception_exit_6;
            }


            tmp_args_element_name_29 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_11_private_bytes();

            frame_a41cc0d1e02c68e238f918c4d33018a1_6->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[130], tmp_args_element_name_29);
            Py_DECREF(tmp_args_element_name_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a41cc0d1e02c68e238f918c4d33018a1_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a41cc0d1e02c68e238f918c4d33018a1_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a41cc0d1e02c68e238f918c4d33018a1_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a41cc0d1e02c68e238f918c4d33018a1_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a41cc0d1e02c68e238f918c4d33018a1_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a41cc0d1e02c68e238f918c4d33018a1_6,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_a41cc0d1e02c68e238f918c4d33018a1_6 == cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6);
            cache_frame_a41cc0d1e02c68e238f918c4d33018a1_6 = NULL;
        }

        assertFrameObject(frame_a41cc0d1e02c68e238f918c4d33018a1_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_19;
        skip_nested_handling_5:;
        tmp_assign_source_37 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104 = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_5_EllipticCurvePrivateKeyWithSerialization_104 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 104;
        goto try_except_handler_18;
        outline_result_9:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_dict_name_9 = tmp_class_creation_5__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_dict_name_10 = tmp_class_creation_5__class_dict;
        tmp_key_name_10 = mod_consts[119];
        tmp_assign_source_38 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_18;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_expression_name_11;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_expression_name_11 = tmp_class_creation_5__bases;
            tmp_subscript_name_1 = mod_consts[5];
            tmp_assign_source_39 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_11, tmp_subscript_name_1, 0);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto try_except_handler_18;
            }
            assert(tmp_select_metaclass_5__base == NULL);
            tmp_select_metaclass_5__base = tmp_assign_source_39;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_12;
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_expression_name_12 = tmp_select_metaclass_5__base;
            tmp_assign_source_38 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_12);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto try_except_handler_21;
            }
            goto try_return_handler_20;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF(exception_keeper_type_15);
            Py_XDECREF(exception_keeper_value_15);
            Py_XDECREF(exception_keeper_tb_15);
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_type_arg_5 = tmp_select_metaclass_5__base;
            tmp_assign_source_38 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_assign_source_38 == NULL));
            goto try_return_handler_20;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_XDECREF(tmp_select_metaclass_5__base);
        tmp_select_metaclass_5__base = NULL;
        goto outline_result_10;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_5__base);
        tmp_select_metaclass_5__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_10:;
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_30;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_name_30 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_30 = mod_consts[145];
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_args_element_name_31 = tmp_class_creation_5__bases;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_name_32 = tmp_class_creation_5__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_30, call_args);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_31;
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_34;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_18;
        }
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[125]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_18;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 103;

            goto try_except_handler_18;
        }
        tmp_args_element_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[126]);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 103;

            goto try_except_handler_18;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 103;
        tmp_called_name_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_32);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_18;
        }
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_args_element_name_34 = tmp_class_creation_5__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 103;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_31);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_class_creation_5__class;
            assert(old != NULL);
            tmp_class_creation_5__class = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_42 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_42);
    }
    CHECK_OBJECT(tmp_class_creation_5__class);
    Py_DECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119 = tmp_set_locals_6;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_928cd31f30e3491c5806ac058b28e621_7)) {
            Py_XDECREF(cache_frame_928cd31f30e3491c5806ac058b28e621_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_928cd31f30e3491c5806ac058b28e621_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_928cd31f30e3491c5806ac058b28e621_7 = MAKE_FUNCTION_FRAME(codeobj_928cd31f30e3491c5806ac058b28e621, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_928cd31f30e3491c5806ac058b28e621_7->m_type_description == NULL);
        frame_928cd31f30e3491c5806ac058b28e621_7 = cache_frame_928cd31f30e3491c5806ac058b28e621_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_928cd31f30e3491c5806ac058b28e621_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_928cd31f30e3491c5806ac058b28e621_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_name_35;
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_12_verifier();

            frame_928cd31f30e3491c5806ac058b28e621_7->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[130], tmp_args_element_name_35);
            Py_DECREF(tmp_args_element_name_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_name_36;
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_13_curve();

            frame_928cd31f30e3491c5806ac058b28e621_7->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[122], tmp_args_element_name_36);
            Py_DECREF(tmp_args_element_name_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_name_37;
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_14_key_size();

            frame_928cd31f30e3491c5806ac058b28e621_7->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[122], tmp_args_element_name_37);
            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_name_38;
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_15_public_numbers();

            frame_928cd31f30e3491c5806ac058b28e621_7->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[130], tmp_args_element_name_38);
            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_name_39;
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_16_public_bytes();

            frame_928cd31f30e3491c5806ac058b28e621_7->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[130], tmp_args_element_name_39);
            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_name_40;
            tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_instance_17 == NULL)) {
                tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_17_verify();

            frame_928cd31f30e3491c5806ac058b28e621_7->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[130], tmp_args_element_name_40);
            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[151], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_928cd31f30e3491c5806ac058b28e621_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_928cd31f30e3491c5806ac058b28e621_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_928cd31f30e3491c5806ac058b28e621_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_928cd31f30e3491c5806ac058b28e621_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_928cd31f30e3491c5806ac058b28e621_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_928cd31f30e3491c5806ac058b28e621_7,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_928cd31f30e3491c5806ac058b28e621_7 == cache_frame_928cd31f30e3491c5806ac058b28e621_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_928cd31f30e3491c5806ac058b28e621_7);
            cache_frame_928cd31f30e3491c5806ac058b28e621_7 = NULL;
        }

        assertFrameObject(frame_928cd31f30e3491c5806ac058b28e621_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;
        {
            PyObject *tmp_classmethod_arg_1;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_18_from_encoded_point();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_assign_source_43 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119 = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_6_EllipticCurvePublicKey_119 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 119;
        goto try_except_handler_22;
        outline_result_11:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_dict_name_11 = tmp_class_creation_6__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_11, tmp_key_name_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_dict_name_12 = tmp_class_creation_6__class_dict;
        tmp_key_name_12 = mod_consts[119];
        tmp_assign_source_44 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_22;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_6__base == NULL);
            Py_INCREF(tmp_assign_source_45);
            tmp_select_metaclass_6__base = tmp_assign_source_45;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_15;
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_expression_name_15 = tmp_select_metaclass_6__base;
            tmp_assign_source_44 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_15);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto try_except_handler_25;
            }
            goto try_return_handler_24;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_6;
            Py_DECREF(exception_keeper_type_18);
            Py_XDECREF(exception_keeper_value_18);
            Py_XDECREF(exception_keeper_tb_18);
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_type_arg_6 = tmp_select_metaclass_6__base;
            tmp_assign_source_44 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_assign_source_44 == NULL));
            goto try_return_handler_24;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_XDECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        goto outline_result_12;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_12:;
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_33;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_name_33 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_41 = mod_consts[153];
        tmp_args_element_name_42 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_name_43 = tmp_class_creation_6__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_33, call_args);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_34;
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_45;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_22;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[125]);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_22;
        }
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 118;

            goto try_except_handler_22;
        }
        tmp_args_element_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[126]);
        if (tmp_args_element_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 118;

            goto try_except_handler_22;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 118;
        tmp_called_name_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_44);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_44);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_22;
        }
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_args_element_name_45 = tmp_class_creation_6__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 118;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_34);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_class_creation_6__class;
            assert(old != NULL);
            tmp_class_creation_6__class = tmp_assign_source_47;
            Py_DECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class);
    tmp_class_creation_6__class = NULL;
    Py_XDECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_48 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_48);
    }
    CHECK_OBJECT(tmp_class_creation_6__class);
    Py_DECREF(tmp_class_creation_6__class);
    tmp_class_creation_6__class = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_dict);
    Py_DECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_assign_source_49 == NULL)) {
            tmp_assign_source_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = PyDict_Copy(mod_consts[155]);
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_50;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_dict_name_13 = tmp_class_creation_7__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_dict_name_14 = tmp_class_creation_7__class_dict;
        tmp_key_name_14 = mod_consts[119];
        tmp_assign_source_51 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_7__base == NULL);
            Py_INCREF(tmp_assign_source_52);
            tmp_select_metaclass_7__base = tmp_assign_source_52;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_18;
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_expression_name_18 = tmp_select_metaclass_7__base;
            tmp_assign_source_51 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_18);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_28;
            }
            goto try_return_handler_27;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF(exception_keeper_type_20);
            Py_XDECREF(exception_keeper_value_20);
            Py_XDECREF(exception_keeper_tb_20);
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_type_arg_7 = tmp_select_metaclass_7__base;
            tmp_assign_source_51 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_assign_source_51 == NULL));
            goto try_return_handler_27;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_XDECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        goto outline_result_13;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_13:;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_36;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_name_36 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_46 = mod_consts[118];
        tmp_args_element_name_47 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_name_48 = tmp_class_creation_7__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48};
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_36, call_args);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_37;
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_26;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[156]);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_26;
        }
        tmp_args_element_name_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_49 == NULL)) {
            tmp_args_element_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 177;

            goto try_except_handler_26;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 177;
        tmp_called_name_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_49);
        Py_DECREF(tmp_called_name_38);
        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_26;
        }
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_args_element_name_50 = tmp_class_creation_7__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 177;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_37);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert(old != NULL);
            tmp_class_creation_7__class = tmp_assign_source_54;
            Py_DECREF(old);
        }

    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__class);
    tmp_class_creation_7__class = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_dict);
    Py_DECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_55 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_55);
    }
    CHECK_OBJECT(tmp_class_creation_7__class);
    Py_DECREF(tmp_class_creation_7__class);
    tmp_class_creation_7__class = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_dict);
    Py_DECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = PyDict_Copy(mod_consts[157]);
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_56;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_dict_name_15 = tmp_class_creation_8__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_dict_name_16 = tmp_class_creation_8__class_dict;
        tmp_key_name_16 = mod_consts[119];
        tmp_assign_source_57 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_16, tmp_key_name_16);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_29;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_58;
            tmp_assign_source_58 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_8__base == NULL);
            Py_INCREF(tmp_assign_source_58);
            tmp_select_metaclass_8__base = tmp_assign_source_58;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_20;
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_expression_name_20 = tmp_select_metaclass_8__base;
            tmp_assign_source_57 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_20);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_31;
            }
            goto try_return_handler_30;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_8;
            Py_DECREF(exception_keeper_type_22);
            Py_XDECREF(exception_keeper_value_22);
            Py_XDECREF(exception_keeper_tb_22);
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_type_arg_8 = tmp_select_metaclass_8__base;
            tmp_assign_source_57 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_assign_source_57 == NULL));
            goto try_return_handler_30;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_XDECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        goto outline_result_14;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_14:;
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_39;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_name_39 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_51 = mod_consts[114];
        tmp_args_element_name_52 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_name_53 = tmp_class_creation_8__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_39, call_args);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_40;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_29;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[156]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_29;
        }
        tmp_args_element_name_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_54 == NULL)) {
            tmp_args_element_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 183;

            goto try_except_handler_29;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 183;
        tmp_called_name_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_54);
        Py_DECREF(tmp_called_name_41);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_29;
        }
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_args_element_name_55 = tmp_class_creation_8__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 183;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_55);
        Py_DECREF(tmp_called_name_40);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert(old != NULL);
            tmp_class_creation_8__class = tmp_assign_source_60;
            Py_DECREF(old);
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__class);
    tmp_class_creation_8__class = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_dict);
    Py_DECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_61 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_61);
    }
    CHECK_OBJECT(tmp_class_creation_8__class);
    Py_DECREF(tmp_class_creation_8__class);
    tmp_class_creation_8__class = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_dict);
    Py_DECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_Copy(mod_consts[158]);
        assert(tmp_class_creation_9__class_dict == NULL);
        tmp_class_creation_9__class_dict = tmp_assign_source_62;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_dict_name_17 = tmp_class_creation_9__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_17, tmp_key_name_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_dict_name_18 = tmp_class_creation_9__class_dict;
        tmp_key_name_18 = mod_consts[119];
        tmp_assign_source_63 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_18, tmp_key_name_18);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_32;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_9__base == NULL);
            Py_INCREF(tmp_assign_source_64);
            tmp_select_metaclass_9__base = tmp_assign_source_64;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_22;
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_expression_name_22 = tmp_select_metaclass_9__base;
            tmp_assign_source_63 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_22);
            if (tmp_assign_source_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_34;
            }
            goto try_return_handler_33;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_9;
            Py_DECREF(exception_keeper_type_24);
            Py_XDECREF(exception_keeper_value_24);
            Py_XDECREF(exception_keeper_tb_24);
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_type_arg_9 = tmp_select_metaclass_9__base;
            tmp_assign_source_63 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_assign_source_63 == NULL));
            goto try_return_handler_33;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_XDECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        goto outline_result_15;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_15:;
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_name_42;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_called_name_42 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_56 = mod_consts[110];
        tmp_args_element_name_57 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_args_element_name_58 = tmp_class_creation_9__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58};
            tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_42, call_args);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_9__class == NULL);
        tmp_class_creation_9__class = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_43;
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_32;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[156]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_32;
        }
        tmp_args_element_name_59 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_59 == NULL)) {
            tmp_args_element_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 189;

            goto try_except_handler_32;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 189;
        tmp_called_name_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_59);
        Py_DECREF(tmp_called_name_44);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_32;
        }
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_args_element_name_60 = tmp_class_creation_9__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 189;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, tmp_args_element_name_60);
        Py_DECREF(tmp_called_name_43);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_32;
        }
        {
            PyObject *old = tmp_class_creation_9__class;
            assert(old != NULL);
            tmp_class_creation_9__class = tmp_assign_source_66;
            Py_DECREF(old);
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__class);
    tmp_class_creation_9__class = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_dict);
    Py_DECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_assign_source_67 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_67);
    }
    CHECK_OBJECT(tmp_class_creation_9__class);
    Py_DECREF(tmp_class_creation_9__class);
    tmp_class_creation_9__class = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_dict);
    Py_DECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_Copy(mod_consts[159]);
        assert(tmp_class_creation_10__class_dict == NULL);
        tmp_class_creation_10__class_dict = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        tmp_key_name_19 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_dict_name_19 = tmp_class_creation_10__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_dict_name_20 = tmp_class_creation_10__class_dict;
        tmp_key_name_20 = mod_consts[119];
        tmp_assign_source_69 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_20, tmp_key_name_20);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_35;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_70;
            tmp_assign_source_70 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_10__base == NULL);
            Py_INCREF(tmp_assign_source_70);
            tmp_select_metaclass_10__base = tmp_assign_source_70;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_24;
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_expression_name_24 = tmp_select_metaclass_10__base;
            tmp_assign_source_69 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_24);
            if (tmp_assign_source_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto try_except_handler_37;
            }
            goto try_return_handler_36;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_10;
            Py_DECREF(exception_keeper_type_26);
            Py_XDECREF(exception_keeper_value_26);
            Py_XDECREF(exception_keeper_tb_26);
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_type_arg_10 = tmp_select_metaclass_10__base;
            tmp_assign_source_69 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_assign_source_69 == NULL));
            goto try_return_handler_36;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_XDECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        goto outline_result_16;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_16:;
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_name_45;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_called_name_45 = tmp_class_creation_10__metaclass;
        tmp_args_element_name_61 = mod_consts[106];
        tmp_args_element_name_62 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_args_element_name_63 = tmp_class_creation_10__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63};
            tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_45, call_args);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_10__class == NULL);
        tmp_class_creation_10__class = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_name_46;
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_args_element_name_65;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_35;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[156]);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_35;
        }
        tmp_args_element_name_64 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_64 == NULL)) {
            tmp_args_element_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 195;

            goto try_except_handler_35;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 195;
        tmp_called_name_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_64);
        Py_DECREF(tmp_called_name_47);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_35;
        }
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_args_element_name_65 = tmp_class_creation_10__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 195;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, tmp_args_element_name_65);
        Py_DECREF(tmp_called_name_46);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto try_except_handler_35;
        }
        {
            PyObject *old = tmp_class_creation_10__class;
            assert(old != NULL);
            tmp_class_creation_10__class = tmp_assign_source_72;
            Py_DECREF(old);
        }

    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__class);
    tmp_class_creation_10__class = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_dict);
    Py_DECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_assign_source_73 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_73);
    }
    CHECK_OBJECT(tmp_class_creation_10__class);
    Py_DECREF(tmp_class_creation_10__class);
    tmp_class_creation_10__class = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_dict);
    Py_DECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = PyDict_Copy(mod_consts[160]);
        assert(tmp_class_creation_11__class_dict == NULL);
        tmp_class_creation_11__class_dict = tmp_assign_source_74;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_key_name_22;
        tmp_key_name_21 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_dict_name_21 = tmp_class_creation_11__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_dict_name_22 = tmp_class_creation_11__class_dict;
        tmp_key_name_22 = mod_consts[119];
        tmp_assign_source_75 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_22, tmp_key_name_22);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_38;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_76;
            tmp_assign_source_76 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_11__base == NULL);
            Py_INCREF(tmp_assign_source_76);
            tmp_select_metaclass_11__base = tmp_assign_source_76;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_26;
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_expression_name_26 = tmp_select_metaclass_11__base;
            tmp_assign_source_75 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_26);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto try_except_handler_40;
            }
            goto try_return_handler_39;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_11;
            Py_DECREF(exception_keeper_type_28);
            Py_XDECREF(exception_keeper_value_28);
            Py_XDECREF(exception_keeper_tb_28);
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_type_arg_11 = tmp_select_metaclass_11__base;
            tmp_assign_source_75 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_assign_source_75 == NULL));
            goto try_return_handler_39;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_XDECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        goto outline_result_17;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_17:;
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_name_48;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_called_name_48 = tmp_class_creation_11__metaclass;
        tmp_args_element_name_66 = mod_consts[102];
        tmp_args_element_name_67 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_args_element_name_68 = tmp_class_creation_11__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_name_66, tmp_args_element_name_67, tmp_args_element_name_68};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_48, call_args);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_11__class == NULL);
        tmp_class_creation_11__class = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_name_49;
        PyObject *tmp_called_name_50;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_38;
        }
        tmp_called_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[156]);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_38;
        }
        tmp_args_element_name_69 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_69 == NULL)) {
            tmp_args_element_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 201;

            goto try_except_handler_38;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 201;
        tmp_called_name_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, tmp_args_element_name_69);
        Py_DECREF(tmp_called_name_50);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_38;
        }
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_args_element_name_70 = tmp_class_creation_11__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 201;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, tmp_args_element_name_70);
        Py_DECREF(tmp_called_name_49);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_38;
        }
        {
            PyObject *old = tmp_class_creation_11__class;
            assert(old != NULL);
            tmp_class_creation_11__class = tmp_assign_source_78;
            Py_DECREF(old);
        }

    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__class);
    tmp_class_creation_11__class = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_dict);
    Py_DECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_assign_source_79 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_79);
    }
    CHECK_OBJECT(tmp_class_creation_11__class);
    Py_DECREF(tmp_class_creation_11__class);
    tmp_class_creation_11__class = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_dict);
    Py_DECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = PyDict_Copy(mod_consts[161]);
        assert(tmp_class_creation_12__class_dict == NULL);
        tmp_class_creation_12__class_dict = tmp_assign_source_80;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_81;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_23;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_dict_name_24;
        PyObject *tmp_key_name_24;
        tmp_key_name_23 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_dict_name_23 = tmp_class_creation_12__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_23, tmp_key_name_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_dict_name_24 = tmp_class_creation_12__class_dict;
        tmp_key_name_24 = mod_consts[119];
        tmp_assign_source_81 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_24, tmp_key_name_24);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_41;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        {
            PyObject *tmp_assign_source_82;
            tmp_assign_source_82 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_12__base == NULL);
            Py_INCREF(tmp_assign_source_82);
            tmp_select_metaclass_12__base = tmp_assign_source_82;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_28;
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_expression_name_28 = tmp_select_metaclass_12__base;
            tmp_assign_source_81 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_28);
            if (tmp_assign_source_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_43;
            }
            goto try_return_handler_42;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_12;
            Py_DECREF(exception_keeper_type_30);
            Py_XDECREF(exception_keeper_value_30);
            Py_XDECREF(exception_keeper_tb_30);
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_type_arg_12 = tmp_select_metaclass_12__base;
            tmp_assign_source_81 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_assign_source_81 == NULL));
            goto try_return_handler_42;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        Py_XDECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        goto outline_result_18;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_18:;
        condexpr_end_12:;
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_name_51;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_called_name_51 = tmp_class_creation_12__metaclass;
        tmp_args_element_name_71 = mod_consts[116];
        tmp_args_element_name_72 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_args_element_name_73 = tmp_class_creation_12__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_51, call_args);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_12__class == NULL);
        tmp_class_creation_12__class = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_name_52;
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_args_element_name_75;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto try_except_handler_41;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[156]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto try_except_handler_41;
        }
        tmp_args_element_name_74 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_74 == NULL)) {
            tmp_args_element_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 207;

            goto try_except_handler_41;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 207;
        tmp_called_name_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, tmp_args_element_name_74);
        Py_DECREF(tmp_called_name_53);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto try_except_handler_41;
        }
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_args_element_name_75 = tmp_class_creation_12__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 207;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_52, tmp_args_element_name_75);
        Py_DECREF(tmp_called_name_52);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto try_except_handler_41;
        }
        {
            PyObject *old = tmp_class_creation_12__class;
            assert(old != NULL);
            tmp_class_creation_12__class = tmp_assign_source_84;
            Py_DECREF(old);
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__class);
    tmp_class_creation_12__class = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_dict);
    Py_DECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_assign_source_85 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_85);
    }
    CHECK_OBJECT(tmp_class_creation_12__class);
    Py_DECREF(tmp_class_creation_12__class);
    tmp_class_creation_12__class = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_dict);
    Py_DECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = PyDict_Copy(mod_consts[162]);
        assert(tmp_class_creation_13__class_dict == NULL);
        tmp_class_creation_13__class_dict = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        tmp_key_name_25 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_dict_name_25 = tmp_class_creation_13__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_25, tmp_key_name_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_dict_name_26 = tmp_class_creation_13__class_dict;
        tmp_key_name_26 = mod_consts[119];
        tmp_assign_source_87 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_26, tmp_key_name_26);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto try_except_handler_44;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        {
            PyObject *tmp_assign_source_88;
            tmp_assign_source_88 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_13__base == NULL);
            Py_INCREF(tmp_assign_source_88);
            tmp_select_metaclass_13__base = tmp_assign_source_88;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_30;
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_expression_name_30 = tmp_select_metaclass_13__base;
            tmp_assign_source_87 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_30);
            if (tmp_assign_source_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto try_except_handler_46;
            }
            goto try_return_handler_45;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_13;
            Py_DECREF(exception_keeper_type_32);
            Py_XDECREF(exception_keeper_value_32);
            Py_XDECREF(exception_keeper_tb_32);
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_type_arg_13 = tmp_select_metaclass_13__base;
            tmp_assign_source_87 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_assign_source_87 == NULL));
            goto try_return_handler_45;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_XDECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        goto outline_result_19;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_19:;
        condexpr_end_13:;
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_name_54;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_called_name_54 = tmp_class_creation_13__metaclass;
        tmp_args_element_name_76 = mod_consts[112];
        tmp_args_element_name_77 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_args_element_name_78 = tmp_class_creation_13__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78};
            tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_54, call_args);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_13__class == NULL);
        tmp_class_creation_13__class = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_name_55;
        PyObject *tmp_called_name_56;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_args_element_name_80;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_44;
        }
        tmp_called_name_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[156]);
        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_44;
        }
        tmp_args_element_name_79 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_79 == NULL)) {
            tmp_args_element_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 213;

            goto try_except_handler_44;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 213;
        tmp_called_name_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, tmp_args_element_name_79);
        Py_DECREF(tmp_called_name_56);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_44;
        }
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_args_element_name_80 = tmp_class_creation_13__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 213;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, tmp_args_element_name_80);
        Py_DECREF(tmp_called_name_55);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto try_except_handler_44;
        }
        {
            PyObject *old = tmp_class_creation_13__class;
            assert(old != NULL);
            tmp_class_creation_13__class = tmp_assign_source_90;
            Py_DECREF(old);
        }

    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__class);
    tmp_class_creation_13__class = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_dict);
    Py_DECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_assign_source_91 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_91);
    }
    CHECK_OBJECT(tmp_class_creation_13__class);
    Py_DECREF(tmp_class_creation_13__class);
    tmp_class_creation_13__class = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_dict);
    Py_DECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = PyDict_Copy(mod_consts[163]);
        assert(tmp_class_creation_14__class_dict == NULL);
        tmp_class_creation_14__class_dict = tmp_assign_source_92;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_name_27;
        PyObject *tmp_dict_name_28;
        PyObject *tmp_key_name_28;
        tmp_key_name_27 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_14__class_dict);
        tmp_dict_name_27 = tmp_class_creation_14__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_27, tmp_key_name_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_14__class_dict);
        tmp_dict_name_28 = tmp_class_creation_14__class_dict;
        tmp_key_name_28 = mod_consts[119];
        tmp_assign_source_93 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_28, tmp_key_name_28);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto try_except_handler_47;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        {
            PyObject *tmp_assign_source_94;
            tmp_assign_source_94 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_14__base == NULL);
            Py_INCREF(tmp_assign_source_94);
            tmp_select_metaclass_14__base = tmp_assign_source_94;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_32;
            CHECK_OBJECT(tmp_select_metaclass_14__base);
            tmp_expression_name_32 = tmp_select_metaclass_14__base;
            tmp_assign_source_93 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_32);
            if (tmp_assign_source_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto try_except_handler_49;
            }
            goto try_return_handler_48;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_14;
            Py_DECREF(exception_keeper_type_34);
            Py_XDECREF(exception_keeper_value_34);
            Py_XDECREF(exception_keeper_tb_34);
            CHECK_OBJECT(tmp_select_metaclass_14__base);
            tmp_type_arg_14 = tmp_select_metaclass_14__base;
            tmp_assign_source_93 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_assign_source_93 == NULL));
            goto try_return_handler_48;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_XDECREF(tmp_select_metaclass_14__base);
        tmp_select_metaclass_14__base = NULL;
        goto outline_result_20;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_14__base);
        tmp_select_metaclass_14__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_20:;
        condexpr_end_14:;
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_name_57;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_called_name_57 = tmp_class_creation_14__metaclass;
        tmp_args_element_name_81 = mod_consts[108];
        tmp_args_element_name_82 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_14__class_dict);
        tmp_args_element_name_83 = tmp_class_creation_14__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83};
            tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_57, call_args);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_14__class == NULL);
        tmp_class_creation_14__class = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_name_58;
        PyObject *tmp_called_name_59;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_47;
        }
        tmp_called_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[156]);
        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_47;
        }
        tmp_args_element_name_84 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_84 == NULL)) {
            tmp_args_element_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 219;

            goto try_except_handler_47;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 219;
        tmp_called_name_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_59, tmp_args_element_name_84);
        Py_DECREF(tmp_called_name_59);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_47;
        }
        CHECK_OBJECT(tmp_class_creation_14__class);
        tmp_args_element_name_85 = tmp_class_creation_14__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 219;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_85);
        Py_DECREF(tmp_called_name_58);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto try_except_handler_47;
        }
        {
            PyObject *old = tmp_class_creation_14__class;
            assert(old != NULL);
            tmp_class_creation_14__class = tmp_assign_source_96;
            Py_DECREF(old);
        }

    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__class);
    tmp_class_creation_14__class = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_dict);
    Py_DECREF(tmp_class_creation_14__class_dict);
    tmp_class_creation_14__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_class_creation_14__class);
        tmp_assign_source_97 = tmp_class_creation_14__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_97);
    }
    CHECK_OBJECT(tmp_class_creation_14__class);
    Py_DECREF(tmp_class_creation_14__class);
    tmp_class_creation_14__class = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_dict);
    Py_DECREF(tmp_class_creation_14__class_dict);
    tmp_class_creation_14__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = PyDict_Copy(mod_consts[164]);
        assert(tmp_class_creation_15__class_dict == NULL);
        tmp_class_creation_15__class_dict = tmp_assign_source_98;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_29;
        PyObject *tmp_dict_name_29;
        PyObject *tmp_dict_name_30;
        PyObject *tmp_key_name_30;
        tmp_key_name_29 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_15__class_dict);
        tmp_dict_name_29 = tmp_class_creation_15__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_29, tmp_key_name_29);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_15__class_dict);
        tmp_dict_name_30 = tmp_class_creation_15__class_dict;
        tmp_key_name_30 = mod_consts[119];
        tmp_assign_source_99 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_30, tmp_key_name_30);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_50;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        {
            PyObject *tmp_assign_source_100;
            tmp_assign_source_100 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_15__base == NULL);
            Py_INCREF(tmp_assign_source_100);
            tmp_select_metaclass_15__base = tmp_assign_source_100;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_34;
            CHECK_OBJECT(tmp_select_metaclass_15__base);
            tmp_expression_name_34 = tmp_select_metaclass_15__base;
            tmp_assign_source_99 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_34);
            if (tmp_assign_source_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto try_except_handler_52;
            }
            goto try_return_handler_51;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_15;
            Py_DECREF(exception_keeper_type_36);
            Py_XDECREF(exception_keeper_value_36);
            Py_XDECREF(exception_keeper_tb_36);
            CHECK_OBJECT(tmp_select_metaclass_15__base);
            tmp_type_arg_15 = tmp_select_metaclass_15__base;
            tmp_assign_source_99 = BUILTIN_TYPE1(tmp_type_arg_15);
            assert(!(tmp_assign_source_99 == NULL));
            goto try_return_handler_51;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_XDECREF(tmp_select_metaclass_15__base);
        tmp_select_metaclass_15__base = NULL;
        goto outline_result_21;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_15__base);
        tmp_select_metaclass_15__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_21:;
        condexpr_end_15:;
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_name_60;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_args_element_name_88;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_called_name_60 = tmp_class_creation_15__metaclass;
        tmp_args_element_name_86 = mod_consts[104];
        tmp_args_element_name_87 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_15__class_dict);
        tmp_args_element_name_88 = tmp_class_creation_15__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_name_86, tmp_args_element_name_87, tmp_args_element_name_88};
            tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_60, call_args);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_15__class == NULL);
        tmp_class_creation_15__class = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_name_61;
        PyObject *tmp_called_name_62;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_args_element_name_90;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_50;
        }
        tmp_called_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[156]);
        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_50;
        }
        tmp_args_element_name_89 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_89 == NULL)) {
            tmp_args_element_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 225;

            goto try_except_handler_50;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 225;
        tmp_called_name_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_62, tmp_args_element_name_89);
        Py_DECREF(tmp_called_name_62);
        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_50;
        }
        CHECK_OBJECT(tmp_class_creation_15__class);
        tmp_args_element_name_90 = tmp_class_creation_15__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 225;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, tmp_args_element_name_90);
        Py_DECREF(tmp_called_name_61);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_50;
        }
        {
            PyObject *old = tmp_class_creation_15__class;
            assert(old != NULL);
            tmp_class_creation_15__class = tmp_assign_source_102;
            Py_DECREF(old);
        }

    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__class);
    tmp_class_creation_15__class = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_dict);
    Py_DECREF(tmp_class_creation_15__class_dict);
    tmp_class_creation_15__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(tmp_class_creation_15__class);
        tmp_assign_source_103 = tmp_class_creation_15__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_103);
    }
    CHECK_OBJECT(tmp_class_creation_15__class);
    Py_DECREF(tmp_class_creation_15__class);
    tmp_class_creation_15__class = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_dict);
    Py_DECREF(tmp_class_creation_15__class_dict);
    tmp_class_creation_15__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = PyDict_Copy(mod_consts[165]);
        assert(tmp_class_creation_16__class_dict == NULL);
        tmp_class_creation_16__class_dict = tmp_assign_source_104;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_name_31;
        PyObject *tmp_dict_name_32;
        PyObject *tmp_key_name_32;
        tmp_key_name_31 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_16__class_dict);
        tmp_dict_name_31 = tmp_class_creation_16__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_31, tmp_key_name_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_16__class_dict);
        tmp_dict_name_32 = tmp_class_creation_16__class_dict;
        tmp_key_name_32 = mod_consts[119];
        tmp_assign_source_105 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_32, tmp_key_name_32);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_53;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        {
            PyObject *tmp_assign_source_106;
            tmp_assign_source_106 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_16__base == NULL);
            Py_INCREF(tmp_assign_source_106);
            tmp_select_metaclass_16__base = tmp_assign_source_106;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_36;
            CHECK_OBJECT(tmp_select_metaclass_16__base);
            tmp_expression_name_36 = tmp_select_metaclass_16__base;
            tmp_assign_source_105 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_36);
            if (tmp_assign_source_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto try_except_handler_55;
            }
            goto try_return_handler_54;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_16;
            Py_DECREF(exception_keeper_type_38);
            Py_XDECREF(exception_keeper_value_38);
            Py_XDECREF(exception_keeper_tb_38);
            CHECK_OBJECT(tmp_select_metaclass_16__base);
            tmp_type_arg_16 = tmp_select_metaclass_16__base;
            tmp_assign_source_105 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_assign_source_105 == NULL));
            goto try_return_handler_54;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        Py_XDECREF(tmp_select_metaclass_16__base);
        tmp_select_metaclass_16__base = NULL;
        goto outline_result_22;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_16__base);
        tmp_select_metaclass_16__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_22:;
        condexpr_end_16:;
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_name_63;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_called_name_63 = tmp_class_creation_16__metaclass;
        tmp_args_element_name_91 = mod_consts[100];
        tmp_args_element_name_92 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_16__class_dict);
        tmp_args_element_name_93 = tmp_class_creation_16__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93};
            tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_63, call_args);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_16__class == NULL);
        tmp_class_creation_16__class = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_name_64;
        PyObject *tmp_called_name_65;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_args_element_name_95;
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_53;
        }
        tmp_called_name_65 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[156]);
        if (tmp_called_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_53;
        }
        tmp_args_element_name_94 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_94 == NULL)) {
            tmp_args_element_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_65);

            exception_lineno = 231;

            goto try_except_handler_53;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 231;
        tmp_called_name_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_65, tmp_args_element_name_94);
        Py_DECREF(tmp_called_name_65);
        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_53;
        }
        CHECK_OBJECT(tmp_class_creation_16__class);
        tmp_args_element_name_95 = tmp_class_creation_16__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 231;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_64, tmp_args_element_name_95);
        Py_DECREF(tmp_called_name_64);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_53;
        }
        {
            PyObject *old = tmp_class_creation_16__class;
            assert(old != NULL);
            tmp_class_creation_16__class = tmp_assign_source_108;
            Py_DECREF(old);
        }

    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__class);
    tmp_class_creation_16__class = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_dict);
    Py_DECREF(tmp_class_creation_16__class_dict);
    tmp_class_creation_16__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    {
        PyObject *tmp_assign_source_109;
        CHECK_OBJECT(tmp_class_creation_16__class);
        tmp_assign_source_109 = tmp_class_creation_16__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_109);
    }
    CHECK_OBJECT(tmp_class_creation_16__class);
    Py_DECREF(tmp_class_creation_16__class);
    tmp_class_creation_16__class = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_dict);
    Py_DECREF(tmp_class_creation_16__class_dict);
    tmp_class_creation_16__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = PyDict_Copy(mod_consts[166]);
        assert(tmp_class_creation_17__class_dict == NULL);
        tmp_class_creation_17__class_dict = tmp_assign_source_110;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_name_33;
        PyObject *tmp_dict_name_34;
        PyObject *tmp_key_name_34;
        tmp_key_name_33 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_17__class_dict);
        tmp_dict_name_33 = tmp_class_creation_17__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_33, tmp_key_name_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_17__class_dict);
        tmp_dict_name_34 = tmp_class_creation_17__class_dict;
        tmp_key_name_34 = mod_consts[119];
        tmp_assign_source_111 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_34, tmp_key_name_34);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_56;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        {
            PyObject *tmp_assign_source_112;
            tmp_assign_source_112 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_17__base == NULL);
            Py_INCREF(tmp_assign_source_112);
            tmp_select_metaclass_17__base = tmp_assign_source_112;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_38;
            CHECK_OBJECT(tmp_select_metaclass_17__base);
            tmp_expression_name_38 = tmp_select_metaclass_17__base;
            tmp_assign_source_111 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_38);
            if (tmp_assign_source_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto try_except_handler_58;
            }
            goto try_return_handler_57;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_17;
            Py_DECREF(exception_keeper_type_40);
            Py_XDECREF(exception_keeper_value_40);
            Py_XDECREF(exception_keeper_tb_40);
            CHECK_OBJECT(tmp_select_metaclass_17__base);
            tmp_type_arg_17 = tmp_select_metaclass_17__base;
            tmp_assign_source_111 = BUILTIN_TYPE1(tmp_type_arg_17);
            assert(!(tmp_assign_source_111 == NULL));
            goto try_return_handler_57;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        Py_XDECREF(tmp_select_metaclass_17__base);
        tmp_select_metaclass_17__base = NULL;
        goto outline_result_23;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_17__base);
        tmp_select_metaclass_17__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_23:;
        condexpr_end_17:;
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_name_66;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_called_name_66 = tmp_class_creation_17__metaclass;
        tmp_args_element_name_96 = mod_consts[92];
        tmp_args_element_name_97 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_17__class_dict);
        tmp_args_element_name_98 = tmp_class_creation_17__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_name_96, tmp_args_element_name_97, tmp_args_element_name_98};
            tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_66, call_args);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_17__class == NULL);
        tmp_class_creation_17__class = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_name_67;
        PyObject *tmp_called_name_68;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_args_element_name_100;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_56;
        }
        tmp_called_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[156]);
        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_56;
        }
        tmp_args_element_name_99 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_99 == NULL)) {
            tmp_args_element_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 237;

            goto try_except_handler_56;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 237;
        tmp_called_name_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_68, tmp_args_element_name_99);
        Py_DECREF(tmp_called_name_68);
        if (tmp_called_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_56;
        }
        CHECK_OBJECT(tmp_class_creation_17__class);
        tmp_args_element_name_100 = tmp_class_creation_17__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 237;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_67, tmp_args_element_name_100);
        Py_DECREF(tmp_called_name_67);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_56;
        }
        {
            PyObject *old = tmp_class_creation_17__class;
            assert(old != NULL);
            tmp_class_creation_17__class = tmp_assign_source_114;
            Py_DECREF(old);
        }

    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__class);
    tmp_class_creation_17__class = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_dict);
    Py_DECREF(tmp_class_creation_17__class_dict);
    tmp_class_creation_17__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_class_creation_17__class);
        tmp_assign_source_115 = tmp_class_creation_17__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_115);
    }
    CHECK_OBJECT(tmp_class_creation_17__class);
    Py_DECREF(tmp_class_creation_17__class);
    tmp_class_creation_17__class = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_dict);
    Py_DECREF(tmp_class_creation_17__class_dict);
    tmp_class_creation_17__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = PyDict_Copy(mod_consts[167]);
        assert(tmp_class_creation_18__class_dict == NULL);
        tmp_class_creation_18__class_dict = tmp_assign_source_116;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_35;
        PyObject *tmp_dict_name_35;
        PyObject *tmp_dict_name_36;
        PyObject *tmp_key_name_36;
        tmp_key_name_35 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_18__class_dict);
        tmp_dict_name_35 = tmp_class_creation_18__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_35, tmp_key_name_35);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_18__class_dict);
        tmp_dict_name_36 = tmp_class_creation_18__class_dict;
        tmp_key_name_36 = mod_consts[119];
        tmp_assign_source_117 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_36, tmp_key_name_36);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto try_except_handler_59;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        {
            PyObject *tmp_assign_source_118;
            tmp_assign_source_118 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_18__base == NULL);
            Py_INCREF(tmp_assign_source_118);
            tmp_select_metaclass_18__base = tmp_assign_source_118;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_40;
            CHECK_OBJECT(tmp_select_metaclass_18__base);
            tmp_expression_name_40 = tmp_select_metaclass_18__base;
            tmp_assign_source_117 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_40);
            if (tmp_assign_source_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto try_except_handler_61;
            }
            goto try_return_handler_60;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_18;
            Py_DECREF(exception_keeper_type_42);
            Py_XDECREF(exception_keeper_value_42);
            Py_XDECREF(exception_keeper_tb_42);
            CHECK_OBJECT(tmp_select_metaclass_18__base);
            tmp_type_arg_18 = tmp_select_metaclass_18__base;
            tmp_assign_source_117 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_assign_source_117 == NULL));
            goto try_return_handler_60;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        Py_XDECREF(tmp_select_metaclass_18__base);
        tmp_select_metaclass_18__base = NULL;
        goto outline_result_24;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_18__base);
        tmp_select_metaclass_18__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_24:;
        condexpr_end_18:;
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_name_69;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_args_element_name_103;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_called_name_69 = tmp_class_creation_18__metaclass;
        tmp_args_element_name_101 = mod_consts[90];
        tmp_args_element_name_102 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_18__class_dict);
        tmp_args_element_name_103 = tmp_class_creation_18__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_name_101, tmp_args_element_name_102, tmp_args_element_name_103};
            tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_69, call_args);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_18__class == NULL);
        tmp_class_creation_18__class = tmp_assign_source_119;
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_name_70;
        PyObject *tmp_called_name_71;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_args_element_name_105;
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_59;
        }
        tmp_called_name_71 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[156]);
        if (tmp_called_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_59;
        }
        tmp_args_element_name_104 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_104 == NULL)) {
            tmp_args_element_name_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 243;

            goto try_except_handler_59;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 243;
        tmp_called_name_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_71, tmp_args_element_name_104);
        Py_DECREF(tmp_called_name_71);
        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_59;
        }
        CHECK_OBJECT(tmp_class_creation_18__class);
        tmp_args_element_name_105 = tmp_class_creation_18__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 243;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_70, tmp_args_element_name_105);
        Py_DECREF(tmp_called_name_70);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_59;
        }
        {
            PyObject *old = tmp_class_creation_18__class;
            assert(old != NULL);
            tmp_class_creation_18__class = tmp_assign_source_120;
            Py_DECREF(old);
        }

    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__class);
    tmp_class_creation_18__class = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_dict);
    Py_DECREF(tmp_class_creation_18__class_dict);
    tmp_class_creation_18__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    {
        PyObject *tmp_assign_source_121;
        CHECK_OBJECT(tmp_class_creation_18__class);
        tmp_assign_source_121 = tmp_class_creation_18__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_121);
    }
    CHECK_OBJECT(tmp_class_creation_18__class);
    Py_DECREF(tmp_class_creation_18__class);
    tmp_class_creation_18__class = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_dict);
    Py_DECREF(tmp_class_creation_18__class_dict);
    tmp_class_creation_18__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = PyDict_Copy(mod_consts[168]);
        assert(tmp_class_creation_19__class_dict == NULL);
        tmp_class_creation_19__class_dict = tmp_assign_source_122;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_name_37;
        PyObject *tmp_dict_name_38;
        PyObject *tmp_key_name_38;
        tmp_key_name_37 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_19__class_dict);
        tmp_dict_name_37 = tmp_class_creation_19__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_37, tmp_key_name_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_19__class_dict);
        tmp_dict_name_38 = tmp_class_creation_19__class_dict;
        tmp_key_name_38 = mod_consts[119];
        tmp_assign_source_123 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_38, tmp_key_name_38);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_62;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        {
            PyObject *tmp_assign_source_124;
            tmp_assign_source_124 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_19__base == NULL);
            Py_INCREF(tmp_assign_source_124);
            tmp_select_metaclass_19__base = tmp_assign_source_124;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_42;
            CHECK_OBJECT(tmp_select_metaclass_19__base);
            tmp_expression_name_42 = tmp_select_metaclass_19__base;
            tmp_assign_source_123 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_42);
            if (tmp_assign_source_123 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_64;
            }
            goto try_return_handler_63;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_64:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_19;
            Py_DECREF(exception_keeper_type_44);
            Py_XDECREF(exception_keeper_value_44);
            Py_XDECREF(exception_keeper_tb_44);
            CHECK_OBJECT(tmp_select_metaclass_19__base);
            tmp_type_arg_19 = tmp_select_metaclass_19__base;
            tmp_assign_source_123 = BUILTIN_TYPE1(tmp_type_arg_19);
            assert(!(tmp_assign_source_123 == NULL));
            goto try_return_handler_63;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        Py_XDECREF(tmp_select_metaclass_19__base);
        tmp_select_metaclass_19__base = NULL;
        goto outline_result_25;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_19__base);
        tmp_select_metaclass_19__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_25:;
        condexpr_end_19:;
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_name_72;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_args_element_name_107;
        PyObject *tmp_args_element_name_108;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_called_name_72 = tmp_class_creation_19__metaclass;
        tmp_args_element_name_106 = mod_consts[88];
        tmp_args_element_name_107 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_19__class_dict);
        tmp_args_element_name_108 = tmp_class_creation_19__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_name_106, tmp_args_element_name_107, tmp_args_element_name_108};
            tmp_assign_source_125 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_72, call_args);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_19__class == NULL);
        tmp_class_creation_19__class = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_name_73;
        PyObject *tmp_called_name_74;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_args_element_name_109;
        PyObject *tmp_args_element_name_110;
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_62;
        }
        tmp_called_name_74 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[156]);
        if (tmp_called_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_62;
        }
        tmp_args_element_name_109 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_109 == NULL)) {
            tmp_args_element_name_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_74);

            exception_lineno = 249;

            goto try_except_handler_62;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 249;
        tmp_called_name_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_74, tmp_args_element_name_109);
        Py_DECREF(tmp_called_name_74);
        if (tmp_called_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_62;
        }
        CHECK_OBJECT(tmp_class_creation_19__class);
        tmp_args_element_name_110 = tmp_class_creation_19__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 249;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_73, tmp_args_element_name_110);
        Py_DECREF(tmp_called_name_73);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_62;
        }
        {
            PyObject *old = tmp_class_creation_19__class;
            assert(old != NULL);
            tmp_class_creation_19__class = tmp_assign_source_126;
            Py_DECREF(old);
        }

    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__class);
    tmp_class_creation_19__class = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_dict);
    Py_DECREF(tmp_class_creation_19__class_dict);
    tmp_class_creation_19__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    {
        PyObject *tmp_assign_source_127;
        CHECK_OBJECT(tmp_class_creation_19__class);
        tmp_assign_source_127 = tmp_class_creation_19__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_127);
    }
    CHECK_OBJECT(tmp_class_creation_19__class);
    Py_DECREF(tmp_class_creation_19__class);
    tmp_class_creation_19__class = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_dict);
    Py_DECREF(tmp_class_creation_19__class_dict);
    tmp_class_creation_19__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = PyDict_Copy(mod_consts[169]);
        assert(tmp_class_creation_20__class_dict == NULL);
        tmp_class_creation_20__class_dict = tmp_assign_source_128;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_129;
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_name_39;
        PyObject *tmp_dict_name_40;
        PyObject *tmp_key_name_40;
        tmp_key_name_39 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_20__class_dict);
        tmp_dict_name_39 = tmp_class_creation_20__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_39, tmp_key_name_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_20__class_dict);
        tmp_dict_name_40 = tmp_class_creation_20__class_dict;
        tmp_key_name_40 = mod_consts[119];
        tmp_assign_source_129 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_40, tmp_key_name_40);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_65;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        {
            PyObject *tmp_assign_source_130;
            tmp_assign_source_130 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_20__base == NULL);
            Py_INCREF(tmp_assign_source_130);
            tmp_select_metaclass_20__base = tmp_assign_source_130;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_44;
            CHECK_OBJECT(tmp_select_metaclass_20__base);
            tmp_expression_name_44 = tmp_select_metaclass_20__base;
            tmp_assign_source_129 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_44);
            if (tmp_assign_source_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto try_except_handler_67;
            }
            goto try_return_handler_66;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_20;
            Py_DECREF(exception_keeper_type_46);
            Py_XDECREF(exception_keeper_value_46);
            Py_XDECREF(exception_keeper_tb_46);
            CHECK_OBJECT(tmp_select_metaclass_20__base);
            tmp_type_arg_20 = tmp_select_metaclass_20__base;
            tmp_assign_source_129 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_assign_source_129 == NULL));
            goto try_return_handler_66;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_66:;
        Py_XDECREF(tmp_select_metaclass_20__base);
        tmp_select_metaclass_20__base = NULL;
        goto outline_result_26;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_20__base);
        tmp_select_metaclass_20__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_26:;
        condexpr_end_20:;
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_name_75;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_args_element_name_112;
        PyObject *tmp_args_element_name_113;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_called_name_75 = tmp_class_creation_20__metaclass;
        tmp_args_element_name_111 = mod_consts[86];
        tmp_args_element_name_112 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_20__class_dict);
        tmp_args_element_name_113 = tmp_class_creation_20__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_name_111, tmp_args_element_name_112, tmp_args_element_name_113};
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_75, call_args);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_20__class == NULL);
        tmp_class_creation_20__class = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_name_76;
        PyObject *tmp_called_name_77;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_args_element_name_114;
        PyObject *tmp_args_element_name_115;
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_65;
        }
        tmp_called_name_77 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[156]);
        if (tmp_called_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_65;
        }
        tmp_args_element_name_114 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_114 == NULL)) {
            tmp_args_element_name_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_77);

            exception_lineno = 255;

            goto try_except_handler_65;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 255;
        tmp_called_name_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_77, tmp_args_element_name_114);
        Py_DECREF(tmp_called_name_77);
        if (tmp_called_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_65;
        }
        CHECK_OBJECT(tmp_class_creation_20__class);
        tmp_args_element_name_115 = tmp_class_creation_20__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 255;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_76, tmp_args_element_name_115);
        Py_DECREF(tmp_called_name_76);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_65;
        }
        {
            PyObject *old = tmp_class_creation_20__class;
            assert(old != NULL);
            tmp_class_creation_20__class = tmp_assign_source_132;
            Py_DECREF(old);
        }

    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__class);
    tmp_class_creation_20__class = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_dict);
    Py_DECREF(tmp_class_creation_20__class_dict);
    tmp_class_creation_20__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    {
        PyObject *tmp_assign_source_133;
        CHECK_OBJECT(tmp_class_creation_20__class);
        tmp_assign_source_133 = tmp_class_creation_20__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_133);
    }
    CHECK_OBJECT(tmp_class_creation_20__class);
    Py_DECREF(tmp_class_creation_20__class);
    tmp_class_creation_20__class = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_dict);
    Py_DECREF(tmp_class_creation_20__class_dict);
    tmp_class_creation_20__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = PyDict_Copy(mod_consts[170]);
        assert(tmp_class_creation_21__class_dict == NULL);
        tmp_class_creation_21__class_dict = tmp_assign_source_134;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_41;
        PyObject *tmp_dict_name_41;
        PyObject *tmp_dict_name_42;
        PyObject *tmp_key_name_42;
        tmp_key_name_41 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_21__class_dict);
        tmp_dict_name_41 = tmp_class_creation_21__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_41, tmp_key_name_41);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_21__class_dict);
        tmp_dict_name_42 = tmp_class_creation_21__class_dict;
        tmp_key_name_42 = mod_consts[119];
        tmp_assign_source_135 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_42, tmp_key_name_42);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_68;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        {
            PyObject *tmp_assign_source_136;
            tmp_assign_source_136 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_21__base == NULL);
            Py_INCREF(tmp_assign_source_136);
            tmp_select_metaclass_21__base = tmp_assign_source_136;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_46;
            CHECK_OBJECT(tmp_select_metaclass_21__base);
            tmp_expression_name_46 = tmp_select_metaclass_21__base;
            tmp_assign_source_135 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_46);
            if (tmp_assign_source_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto try_except_handler_70;
            }
            goto try_return_handler_69;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_70:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_21;
            Py_DECREF(exception_keeper_type_48);
            Py_XDECREF(exception_keeper_value_48);
            Py_XDECREF(exception_keeper_tb_48);
            CHECK_OBJECT(tmp_select_metaclass_21__base);
            tmp_type_arg_21 = tmp_select_metaclass_21__base;
            tmp_assign_source_135 = BUILTIN_TYPE1(tmp_type_arg_21);
            assert(!(tmp_assign_source_135 == NULL));
            goto try_return_handler_69;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_69:;
        Py_XDECREF(tmp_select_metaclass_21__base);
        tmp_select_metaclass_21__base = NULL;
        goto outline_result_27;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_21__base);
        tmp_select_metaclass_21__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_27:;
        condexpr_end_21:;
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_name_78;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_args_element_name_117;
        PyObject *tmp_args_element_name_118;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_called_name_78 = tmp_class_creation_21__metaclass;
        tmp_args_element_name_116 = mod_consts[84];
        tmp_args_element_name_117 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_21__class_dict);
        tmp_args_element_name_118 = tmp_class_creation_21__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = {tmp_args_element_name_116, tmp_args_element_name_117, tmp_args_element_name_118};
            tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_78, call_args);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_21__class == NULL);
        tmp_class_creation_21__class = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_name_79;
        PyObject *tmp_called_name_80;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_args_element_name_119;
        PyObject *tmp_args_element_name_120;
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_68;
        }
        tmp_called_name_80 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[156]);
        if (tmp_called_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_68;
        }
        tmp_args_element_name_119 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_119 == NULL)) {
            tmp_args_element_name_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_80);

            exception_lineno = 261;

            goto try_except_handler_68;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 261;
        tmp_called_name_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_80, tmp_args_element_name_119);
        Py_DECREF(tmp_called_name_80);
        if (tmp_called_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_68;
        }
        CHECK_OBJECT(tmp_class_creation_21__class);
        tmp_args_element_name_120 = tmp_class_creation_21__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 261;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_79, tmp_args_element_name_120);
        Py_DECREF(tmp_called_name_79);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_68;
        }
        {
            PyObject *old = tmp_class_creation_21__class;
            assert(old != NULL);
            tmp_class_creation_21__class = tmp_assign_source_138;
            Py_DECREF(old);
        }

    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__class);
    tmp_class_creation_21__class = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_dict);
    Py_DECREF(tmp_class_creation_21__class_dict);
    tmp_class_creation_21__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    {
        PyObject *tmp_assign_source_139;
        CHECK_OBJECT(tmp_class_creation_21__class);
        tmp_assign_source_139 = tmp_class_creation_21__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_139);
    }
    CHECK_OBJECT(tmp_class_creation_21__class);
    Py_DECREF(tmp_class_creation_21__class);
    tmp_class_creation_21__class = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_dict);
    Py_DECREF(tmp_class_creation_21__class_dict);
    tmp_class_creation_21__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = PyDict_Copy(mod_consts[171]);
        assert(tmp_class_creation_22__class_dict == NULL);
        tmp_class_creation_22__class_dict = tmp_assign_source_140;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_141;
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_key_name_43;
        PyObject *tmp_dict_name_43;
        PyObject *tmp_dict_name_44;
        PyObject *tmp_key_name_44;
        tmp_key_name_43 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_22__class_dict);
        tmp_dict_name_43 = tmp_class_creation_22__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_43, tmp_key_name_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_22__class_dict);
        tmp_dict_name_44 = tmp_class_creation_22__class_dict;
        tmp_key_name_44 = mod_consts[119];
        tmp_assign_source_141 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_44, tmp_key_name_44);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto try_except_handler_71;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        {
            PyObject *tmp_assign_source_142;
            tmp_assign_source_142 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_22__base == NULL);
            Py_INCREF(tmp_assign_source_142);
            tmp_select_metaclass_22__base = tmp_assign_source_142;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_48;
            CHECK_OBJECT(tmp_select_metaclass_22__base);
            tmp_expression_name_48 = tmp_select_metaclass_22__base;
            tmp_assign_source_141 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_48);
            if (tmp_assign_source_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto try_except_handler_73;
            }
            goto try_return_handler_72;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_73:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_22;
            Py_DECREF(exception_keeper_type_50);
            Py_XDECREF(exception_keeper_value_50);
            Py_XDECREF(exception_keeper_tb_50);
            CHECK_OBJECT(tmp_select_metaclass_22__base);
            tmp_type_arg_22 = tmp_select_metaclass_22__base;
            tmp_assign_source_141 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_assign_source_141 == NULL));
            goto try_return_handler_72;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_72:;
        Py_XDECREF(tmp_select_metaclass_22__base);
        tmp_select_metaclass_22__base = NULL;
        goto outline_result_28;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_22__base);
        tmp_select_metaclass_22__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_28:;
        condexpr_end_22:;
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_name_81;
        PyObject *tmp_args_element_name_121;
        PyObject *tmp_args_element_name_122;
        PyObject *tmp_args_element_name_123;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_called_name_81 = tmp_class_creation_22__metaclass;
        tmp_args_element_name_121 = mod_consts[82];
        tmp_args_element_name_122 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_22__class_dict);
        tmp_args_element_name_123 = tmp_class_creation_22__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = {tmp_args_element_name_121, tmp_args_element_name_122, tmp_args_element_name_123};
            tmp_assign_source_143 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_81, call_args);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_22__class == NULL);
        tmp_class_creation_22__class = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_name_82;
        PyObject *tmp_called_name_83;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_args_element_name_124;
        PyObject *tmp_args_element_name_125;
        tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_49 == NULL)) {
            tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_71;
        }
        tmp_called_name_83 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[156]);
        if (tmp_called_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_71;
        }
        tmp_args_element_name_124 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_124 == NULL)) {
            tmp_args_element_name_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_83);

            exception_lineno = 267;

            goto try_except_handler_71;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 267;
        tmp_called_name_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_83, tmp_args_element_name_124);
        Py_DECREF(tmp_called_name_83);
        if (tmp_called_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_71;
        }
        CHECK_OBJECT(tmp_class_creation_22__class);
        tmp_args_element_name_125 = tmp_class_creation_22__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 267;
        tmp_assign_source_144 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_82, tmp_args_element_name_125);
        Py_DECREF(tmp_called_name_82);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_71;
        }
        {
            PyObject *old = tmp_class_creation_22__class;
            assert(old != NULL);
            tmp_class_creation_22__class = tmp_assign_source_144;
            Py_DECREF(old);
        }

    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__class);
    tmp_class_creation_22__class = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_dict);
    Py_DECREF(tmp_class_creation_22__class_dict);
    tmp_class_creation_22__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    {
        PyObject *tmp_assign_source_145;
        CHECK_OBJECT(tmp_class_creation_22__class);
        tmp_assign_source_145 = tmp_class_creation_22__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_145);
    }
    CHECK_OBJECT(tmp_class_creation_22__class);
    Py_DECREF(tmp_class_creation_22__class);
    tmp_class_creation_22__class = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_dict);
    Py_DECREF(tmp_class_creation_22__class_dict);
    tmp_class_creation_22__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = PyDict_Copy(mod_consts[172]);
        assert(tmp_class_creation_23__class_dict == NULL);
        tmp_class_creation_23__class_dict = tmp_assign_source_146;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_key_name_45;
        PyObject *tmp_dict_name_45;
        PyObject *tmp_dict_name_46;
        PyObject *tmp_key_name_46;
        tmp_key_name_45 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_23__class_dict);
        tmp_dict_name_45 = tmp_class_creation_23__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_45, tmp_key_name_45);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_23__class_dict);
        tmp_dict_name_46 = tmp_class_creation_23__class_dict;
        tmp_key_name_46 = mod_consts[119];
        tmp_assign_source_147 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_46, tmp_key_name_46);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto try_except_handler_74;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        {
            PyObject *tmp_assign_source_148;
            tmp_assign_source_148 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_23__base == NULL);
            Py_INCREF(tmp_assign_source_148);
            tmp_select_metaclass_23__base = tmp_assign_source_148;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_50;
            CHECK_OBJECT(tmp_select_metaclass_23__base);
            tmp_expression_name_50 = tmp_select_metaclass_23__base;
            tmp_assign_source_147 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_50);
            if (tmp_assign_source_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto try_except_handler_76;
            }
            goto try_return_handler_75;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_76:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_23;
            Py_DECREF(exception_keeper_type_52);
            Py_XDECREF(exception_keeper_value_52);
            Py_XDECREF(exception_keeper_tb_52);
            CHECK_OBJECT(tmp_select_metaclass_23__base);
            tmp_type_arg_23 = tmp_select_metaclass_23__base;
            tmp_assign_source_147 = BUILTIN_TYPE1(tmp_type_arg_23);
            assert(!(tmp_assign_source_147 == NULL));
            goto try_return_handler_75;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_75:;
        Py_XDECREF(tmp_select_metaclass_23__base);
        tmp_select_metaclass_23__base = NULL;
        goto outline_result_29;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_23__base);
        tmp_select_metaclass_23__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_29:;
        condexpr_end_23:;
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_name_84;
        PyObject *tmp_args_element_name_126;
        PyObject *tmp_args_element_name_127;
        PyObject *tmp_args_element_name_128;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_called_name_84 = tmp_class_creation_23__metaclass;
        tmp_args_element_name_126 = mod_consts[173];
        tmp_args_element_name_127 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_23__class_dict);
        tmp_args_element_name_128 = tmp_class_creation_23__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = {tmp_args_element_name_126, tmp_args_element_name_127, tmp_args_element_name_128};
            tmp_assign_source_149 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_84, call_args);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_23__class == NULL);
        tmp_class_creation_23__class = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_name_85;
        PyObject *tmp_called_name_86;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_args_element_name_129;
        PyObject *tmp_args_element_name_130;
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_74;
        }
        tmp_called_name_86 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[156]);
        if (tmp_called_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_74;
        }
        tmp_args_element_name_129 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_129 == NULL)) {
            tmp_args_element_name_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_86);

            exception_lineno = 273;

            goto try_except_handler_74;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 273;
        tmp_called_name_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_86, tmp_args_element_name_129);
        Py_DECREF(tmp_called_name_86);
        if (tmp_called_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_74;
        }
        CHECK_OBJECT(tmp_class_creation_23__class);
        tmp_args_element_name_130 = tmp_class_creation_23__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 273;
        tmp_assign_source_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_85, tmp_args_element_name_130);
        Py_DECREF(tmp_called_name_85);
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_74;
        }
        {
            PyObject *old = tmp_class_creation_23__class;
            assert(old != NULL);
            tmp_class_creation_23__class = tmp_assign_source_150;
            Py_DECREF(old);
        }

    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__class);
    tmp_class_creation_23__class = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_dict);
    Py_DECREF(tmp_class_creation_23__class_dict);
    tmp_class_creation_23__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    {
        PyObject *tmp_assign_source_151;
        CHECK_OBJECT(tmp_class_creation_23__class);
        tmp_assign_source_151 = tmp_class_creation_23__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_151);
    }
    CHECK_OBJECT(tmp_class_creation_23__class);
    Py_DECREF(tmp_class_creation_23__class);
    tmp_class_creation_23__class = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_dict);
    Py_DECREF(tmp_class_creation_23__class_dict);
    tmp_class_creation_23__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = PyDict_Copy(mod_consts[174]);
        assert(tmp_class_creation_24__class_dict == NULL);
        tmp_class_creation_24__class_dict = tmp_assign_source_152;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_key_name_47;
        PyObject *tmp_dict_name_47;
        PyObject *tmp_dict_name_48;
        PyObject *tmp_key_name_48;
        tmp_key_name_47 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_24__class_dict);
        tmp_dict_name_47 = tmp_class_creation_24__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_47, tmp_key_name_47);
        assert(!(tmp_res == -1));
        tmp_condition_result_24 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_24__class_dict);
        tmp_dict_name_48 = tmp_class_creation_24__class_dict;
        tmp_key_name_48 = mod_consts[119];
        tmp_assign_source_153 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_48, tmp_key_name_48);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_77;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        {
            PyObject *tmp_assign_source_154;
            tmp_assign_source_154 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_24__base == NULL);
            Py_INCREF(tmp_assign_source_154);
            tmp_select_metaclass_24__base = tmp_assign_source_154;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_52;
            CHECK_OBJECT(tmp_select_metaclass_24__base);
            tmp_expression_name_52 = tmp_select_metaclass_24__base;
            tmp_assign_source_153 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_52);
            if (tmp_assign_source_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_79;
            }
            goto try_return_handler_78;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_79:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_24;
            Py_DECREF(exception_keeper_type_54);
            Py_XDECREF(exception_keeper_value_54);
            Py_XDECREF(exception_keeper_tb_54);
            CHECK_OBJECT(tmp_select_metaclass_24__base);
            tmp_type_arg_24 = tmp_select_metaclass_24__base;
            tmp_assign_source_153 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_assign_source_153 == NULL));
            goto try_return_handler_78;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_78:;
        Py_XDECREF(tmp_select_metaclass_24__base);
        tmp_select_metaclass_24__base = NULL;
        goto outline_result_30;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_24__base);
        tmp_select_metaclass_24__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_30:;
        condexpr_end_24:;
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_153;
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_name_87;
        PyObject *tmp_args_element_name_131;
        PyObject *tmp_args_element_name_132;
        PyObject *tmp_args_element_name_133;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_called_name_87 = tmp_class_creation_24__metaclass;
        tmp_args_element_name_131 = mod_consts[175];
        tmp_args_element_name_132 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_24__class_dict);
        tmp_args_element_name_133 = tmp_class_creation_24__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_name_131, tmp_args_element_name_132, tmp_args_element_name_133};
            tmp_assign_source_155 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_87, call_args);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_24__class == NULL);
        tmp_class_creation_24__class = tmp_assign_source_155;
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_name_88;
        PyObject *tmp_called_name_89;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_args_element_name_134;
        PyObject *tmp_args_element_name_135;
        tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_53 == NULL)) {
            tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_77;
        }
        tmp_called_name_89 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[156]);
        if (tmp_called_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_77;
        }
        tmp_args_element_name_134 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_134 == NULL)) {
            tmp_args_element_name_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_89);

            exception_lineno = 279;

            goto try_except_handler_77;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 279;
        tmp_called_name_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_89, tmp_args_element_name_134);
        Py_DECREF(tmp_called_name_89);
        if (tmp_called_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_77;
        }
        CHECK_OBJECT(tmp_class_creation_24__class);
        tmp_args_element_name_135 = tmp_class_creation_24__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 279;
        tmp_assign_source_156 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_88, tmp_args_element_name_135);
        Py_DECREF(tmp_called_name_88);
        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_77;
        }
        {
            PyObject *old = tmp_class_creation_24__class;
            assert(old != NULL);
            tmp_class_creation_24__class = tmp_assign_source_156;
            Py_DECREF(old);
        }

    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__class);
    tmp_class_creation_24__class = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_dict);
    Py_DECREF(tmp_class_creation_24__class_dict);
    tmp_class_creation_24__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    {
        PyObject *tmp_assign_source_157;
        CHECK_OBJECT(tmp_class_creation_24__class);
        tmp_assign_source_157 = tmp_class_creation_24__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_157);
    }
    CHECK_OBJECT(tmp_class_creation_24__class);
    Py_DECREF(tmp_class_creation_24__class);
    tmp_class_creation_24__class = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_dict);
    Py_DECREF(tmp_class_creation_24__class_dict);
    tmp_class_creation_24__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = PyDict_Copy(mod_consts[176]);
        assert(tmp_class_creation_25__class_dict == NULL);
        tmp_class_creation_25__class_dict = tmp_assign_source_158;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_159;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_49;
        PyObject *tmp_dict_name_49;
        PyObject *tmp_dict_name_50;
        PyObject *tmp_key_name_50;
        tmp_key_name_49 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_25__class_dict);
        tmp_dict_name_49 = tmp_class_creation_25__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_49, tmp_key_name_49);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_25__class_dict);
        tmp_dict_name_50 = tmp_class_creation_25__class_dict;
        tmp_key_name_50 = mod_consts[119];
        tmp_assign_source_159 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_50, tmp_key_name_50);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_80;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        {
            PyObject *tmp_assign_source_160;
            tmp_assign_source_160 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_25__base == NULL);
            Py_INCREF(tmp_assign_source_160);
            tmp_select_metaclass_25__base = tmp_assign_source_160;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_54;
            CHECK_OBJECT(tmp_select_metaclass_25__base);
            tmp_expression_name_54 = tmp_select_metaclass_25__base;
            tmp_assign_source_159 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_54);
            if (tmp_assign_source_159 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto try_except_handler_82;
            }
            goto try_return_handler_81;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_82:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_25;
            Py_DECREF(exception_keeper_type_56);
            Py_XDECREF(exception_keeper_value_56);
            Py_XDECREF(exception_keeper_tb_56);
            CHECK_OBJECT(tmp_select_metaclass_25__base);
            tmp_type_arg_25 = tmp_select_metaclass_25__base;
            tmp_assign_source_159 = BUILTIN_TYPE1(tmp_type_arg_25);
            assert(!(tmp_assign_source_159 == NULL));
            goto try_return_handler_81;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_81:;
        Py_XDECREF(tmp_select_metaclass_25__base);
        tmp_select_metaclass_25__base = NULL;
        goto outline_result_31;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_25__base);
        tmp_select_metaclass_25__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_31:;
        condexpr_end_25:;
        assert(tmp_class_creation_25__metaclass == NULL);
        tmp_class_creation_25__metaclass = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_name_90;
        PyObject *tmp_args_element_name_136;
        PyObject *tmp_args_element_name_137;
        PyObject *tmp_args_element_name_138;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_called_name_90 = tmp_class_creation_25__metaclass;
        tmp_args_element_name_136 = mod_consts[177];
        tmp_args_element_name_137 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_25__class_dict);
        tmp_args_element_name_138 = tmp_class_creation_25__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_name_136, tmp_args_element_name_137, tmp_args_element_name_138};
            tmp_assign_source_161 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_90, call_args);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_25__class == NULL);
        tmp_class_creation_25__class = tmp_assign_source_161;
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_name_91;
        PyObject *tmp_called_name_92;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_args_element_name_139;
        PyObject *tmp_args_element_name_140;
        tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_55 == NULL)) {
            tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_80;
        }
        tmp_called_name_92 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[156]);
        if (tmp_called_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_80;
        }
        tmp_args_element_name_139 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_name_139 == NULL)) {
            tmp_args_element_name_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_name_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_92);

            exception_lineno = 285;

            goto try_except_handler_80;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 285;
        tmp_called_name_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_92, tmp_args_element_name_139);
        Py_DECREF(tmp_called_name_92);
        if (tmp_called_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_80;
        }
        CHECK_OBJECT(tmp_class_creation_25__class);
        tmp_args_element_name_140 = tmp_class_creation_25__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 285;
        tmp_assign_source_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_91, tmp_args_element_name_140);
        Py_DECREF(tmp_called_name_91);
        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_80;
        }
        {
            PyObject *old = tmp_class_creation_25__class;
            assert(old != NULL);
            tmp_class_creation_25__class = tmp_assign_source_162;
            Py_DECREF(old);
        }

    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_25__class);
    tmp_class_creation_25__class = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_dict);
    Py_DECREF(tmp_class_creation_25__class_dict);
    tmp_class_creation_25__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    {
        PyObject *tmp_assign_source_163;
        CHECK_OBJECT(tmp_class_creation_25__class);
        tmp_assign_source_163 = tmp_class_creation_25__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_163);
    }
    CHECK_OBJECT(tmp_class_creation_25__class);
    Py_DECREF(tmp_class_creation_25__class);
    tmp_class_creation_25__class = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_dict);
    Py_DECREF(tmp_class_creation_25__class_dict);
    tmp_class_creation_25__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_25__metaclass);
    Py_DECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[178];
        tmp_assign_source_164 = _PyDict_NewPresized( 21 );
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[179];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[180];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[181];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[182];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[183];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[184];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[185];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[186];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[187];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[188];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[189];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[190];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[191];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[192];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[193];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[194];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[195];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[196];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[197];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[198];
        tmp_res = PyDict_SetItem(tmp_assign_source_164, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_164);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_164);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_165;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317 = tmp_set_locals_7;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_19___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317, mod_consts[200], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8)) {
            Py_XDECREF(cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8 = MAKE_FUNCTION_FRAME(codeobj_33d0b8fb2bf023d37381929b4bfaf0cd, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8->m_type_description == NULL);
        frame_33d0b8fb2bf023d37381929b4bfaf0cd_8 = cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_33d0b8fb2bf023d37381929b4bfaf0cd_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_33d0b8fb2bf023d37381929b4bfaf0cd_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_18;
            tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_18 == NULL)) {
                tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto frame_exception_exit_8;
            }
            frame_33d0b8fb2bf023d37381929b4bfaf0cd_8->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, mod_consts[201], &PyTuple_GET_ITEM(mod_consts[202], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_33d0b8fb2bf023d37381929b4bfaf0cd_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_33d0b8fb2bf023d37381929b4bfaf0cd_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_33d0b8fb2bf023d37381929b4bfaf0cd_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_33d0b8fb2bf023d37381929b4bfaf0cd_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_33d0b8fb2bf023d37381929b4bfaf0cd_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_33d0b8fb2bf023d37381929b4bfaf0cd_8,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_33d0b8fb2bf023d37381929b4bfaf0cd_8 == cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8);
            cache_frame_33d0b8fb2bf023d37381929b4bfaf0cd_8 = NULL;
        }

        assertFrameObject(frame_33d0b8fb2bf023d37381929b4bfaf0cd_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_84;
        skip_nested_handling_7:;
        tmp_assign_source_165 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317;
        Py_INCREF(tmp_assign_source_165);
        goto try_return_handler_84;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_84:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317 = NULL;
        goto outline_result_32;
        // Exception handler code:
        try_except_handler_84:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_26_ECDSA_317 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 317;
        goto try_except_handler_83;
        outline_result_32:;
        assert(tmp_class_creation_26__class_dict == NULL);
        tmp_class_creation_26__class_dict = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_key_name_51;
        PyObject *tmp_dict_name_51;
        PyObject *tmp_dict_name_52;
        PyObject *tmp_key_name_52;
        tmp_key_name_51 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_26__class_dict);
        tmp_dict_name_51 = tmp_class_creation_26__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_51, tmp_key_name_51);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_26__class_dict);
        tmp_dict_name_52 = tmp_class_creation_26__class_dict;
        tmp_key_name_52 = mod_consts[119];
        tmp_assign_source_166 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_52, tmp_key_name_52);
        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_83;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        {
            PyObject *tmp_assign_source_167;
            tmp_assign_source_167 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_26__base == NULL);
            Py_INCREF(tmp_assign_source_167);
            tmp_select_metaclass_26__base = tmp_assign_source_167;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_56;
            CHECK_OBJECT(tmp_select_metaclass_26__base);
            tmp_expression_name_56 = tmp_select_metaclass_26__base;
            tmp_assign_source_166 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_56);
            if (tmp_assign_source_166 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_86;
            }
            goto try_return_handler_85;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_86:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_26;
            Py_DECREF(exception_keeper_type_59);
            Py_XDECREF(exception_keeper_value_59);
            Py_XDECREF(exception_keeper_tb_59);
            CHECK_OBJECT(tmp_select_metaclass_26__base);
            tmp_type_arg_26 = tmp_select_metaclass_26__base;
            tmp_assign_source_166 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_assign_source_166 == NULL));
            goto try_return_handler_85;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_85:;
        Py_XDECREF(tmp_select_metaclass_26__base);
        tmp_select_metaclass_26__base = NULL;
        goto outline_result_33;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_26__base);
        tmp_select_metaclass_26__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_33:;
        condexpr_end_26:;
        assert(tmp_class_creation_26__metaclass == NULL);
        tmp_class_creation_26__metaclass = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_name_93;
        PyObject *tmp_args_element_name_141;
        PyObject *tmp_args_element_name_142;
        PyObject *tmp_args_element_name_143;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_called_name_93 = tmp_class_creation_26__metaclass;
        tmp_args_element_name_141 = mod_consts[203];
        tmp_args_element_name_142 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_26__class_dict);
        tmp_args_element_name_143 = tmp_class_creation_26__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_name_141, tmp_args_element_name_142, tmp_args_element_name_143};
            tmp_assign_source_168 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_93, call_args);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_26__class == NULL);
        tmp_class_creation_26__class = tmp_assign_source_168;
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_name_94;
        PyObject *tmp_called_name_95;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_args_element_name_144;
        PyObject *tmp_args_element_name_145;
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_83;
        }
        tmp_called_name_95 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[156]);
        if (tmp_called_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_83;
        }
        tmp_args_element_name_144 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_name_144 == NULL)) {
            tmp_args_element_name_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_name_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_95);

            exception_lineno = 316;

            goto try_except_handler_83;
        }
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 316;
        tmp_called_name_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_95, tmp_args_element_name_144);
        Py_DECREF(tmp_called_name_95);
        if (tmp_called_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_83;
        }
        CHECK_OBJECT(tmp_class_creation_26__class);
        tmp_args_element_name_145 = tmp_class_creation_26__class;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 316;
        tmp_assign_source_169 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_94, tmp_args_element_name_145);
        Py_DECREF(tmp_called_name_94);
        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_83;
        }
        {
            PyObject *old = tmp_class_creation_26__class;
            assert(old != NULL);
            tmp_class_creation_26__class = tmp_assign_source_169;
            Py_DECREF(old);
        }

    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_83:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_26__class);
    tmp_class_creation_26__class = NULL;
    Py_XDECREF(tmp_class_creation_26__class_dict);
    tmp_class_creation_26__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    {
        PyObject *tmp_assign_source_170;
        CHECK_OBJECT(tmp_class_creation_26__class);
        tmp_assign_source_170 = tmp_class_creation_26__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_170);
    }
    CHECK_OBJECT(tmp_class_creation_26__class);
    Py_DECREF(tmp_class_creation_26__class);
    tmp_class_creation_26__class = NULL;
    CHECK_OBJECT(tmp_class_creation_26__class_dict);
    Py_DECREF(tmp_class_creation_26__class_dict);
    tmp_class_creation_26__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_26__metaclass);
    Py_DECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[204];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_171 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_20_generate_private_key(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[204];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_172 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_21_derive_private_key(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_172);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_173;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343 = tmp_set_locals_8;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_22___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[200], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[204];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_23_public_key(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_24_encode_point();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[207], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_classmethod_arg_2;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_25_from_encoded_point();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9)) {
            Py_XDECREF(cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9 = MAKE_FUNCTION_FRAME(codeobj_259bfadd72ea4c7f4ee0c01619649dc4, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9->m_type_description == NULL);
        frame_259bfadd72ea4c7f4ee0c01619649dc4_9 = cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_259bfadd72ea4c7f4ee0c01619649dc4_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_259bfadd72ea4c7f4ee0c01619649dc4_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_19;
            tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_19 == NULL)) {
                tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;

                goto frame_exception_exit_9;
            }
            frame_259bfadd72ea4c7f4ee0c01619649dc4_9->m_frame.f_lineno = 403;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, mod_consts[201], &PyTuple_GET_ITEM(mod_consts[208], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_20 == NULL)) {
                tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;

                goto frame_exception_exit_9;
            }
            frame_259bfadd72ea4c7f4ee0c01619649dc4_9->m_frame.f_lineno = 404;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, mod_consts[201], &PyTuple_GET_ITEM(mod_consts[209], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_21 == NULL)) {
                tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;

                goto frame_exception_exit_9;
            }
            frame_259bfadd72ea4c7f4ee0c01619649dc4_9->m_frame.f_lineno = 405;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, mod_consts[201], &PyTuple_GET_ITEM(mod_consts[210], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;

                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_259bfadd72ea4c7f4ee0c01619649dc4_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_259bfadd72ea4c7f4ee0c01619649dc4_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_259bfadd72ea4c7f4ee0c01619649dc4_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_259bfadd72ea4c7f4ee0c01619649dc4_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_259bfadd72ea4c7f4ee0c01619649dc4_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_259bfadd72ea4c7f4ee0c01619649dc4_9,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_259bfadd72ea4c7f4ee0c01619649dc4_9 == cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9);
            cache_frame_259bfadd72ea4c7f4ee0c01619649dc4_9 = NULL;
        }

        assertFrameObject(frame_259bfadd72ea4c7f4ee0c01619649dc4_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_88;
        skip_nested_handling_8:;


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_26___eq__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_27___ne__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_28___hash__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[213], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_29___repr__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343, mod_consts[214], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_173 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343;
        Py_INCREF(tmp_assign_source_173);
        goto try_return_handler_88;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_88:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343 = NULL;
        goto outline_result_34;
        // Exception handler code:
        try_except_handler_88:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_27_EllipticCurvePublicNumbers_343 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 343;
        goto try_except_handler_87;
        outline_result_34:;
        assert(tmp_class_creation_27__class_dict == NULL);
        tmp_class_creation_27__class_dict = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_53;
        PyObject *tmp_dict_name_53;
        PyObject *tmp_dict_name_54;
        PyObject *tmp_key_name_54;
        tmp_key_name_53 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_27__class_dict);
        tmp_dict_name_53 = tmp_class_creation_27__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_53, tmp_key_name_53);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_27__class_dict);
        tmp_dict_name_54 = tmp_class_creation_27__class_dict;
        tmp_key_name_54 = mod_consts[119];
        tmp_assign_source_174 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_54, tmp_key_name_54);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_87;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        {
            PyObject *tmp_assign_source_175;
            tmp_assign_source_175 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_27__base == NULL);
            Py_INCREF(tmp_assign_source_175);
            tmp_select_metaclass_27__base = tmp_assign_source_175;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_58;
            CHECK_OBJECT(tmp_select_metaclass_27__base);
            tmp_expression_name_58 = tmp_select_metaclass_27__base;
            tmp_assign_source_174 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_58);
            if (tmp_assign_source_174 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto try_except_handler_90;
            }
            goto try_return_handler_89;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_90:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_27;
            Py_DECREF(exception_keeper_type_62);
            Py_XDECREF(exception_keeper_value_62);
            Py_XDECREF(exception_keeper_tb_62);
            CHECK_OBJECT(tmp_select_metaclass_27__base);
            tmp_type_arg_27 = tmp_select_metaclass_27__base;
            tmp_assign_source_174 = BUILTIN_TYPE1(tmp_type_arg_27);
            assert(!(tmp_assign_source_174 == NULL));
            goto try_return_handler_89;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_89:;
        Py_XDECREF(tmp_select_metaclass_27__base);
        tmp_select_metaclass_27__base = NULL;
        goto outline_result_35;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_27__base);
        tmp_select_metaclass_27__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_35:;
        condexpr_end_27:;
        assert(tmp_class_creation_27__metaclass == NULL);
        tmp_class_creation_27__metaclass = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_name_96;
        PyObject *tmp_args_element_name_146;
        PyObject *tmp_args_element_name_147;
        PyObject *tmp_args_element_name_148;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_called_name_96 = tmp_class_creation_27__metaclass;
        tmp_args_element_name_146 = mod_consts[50];
        tmp_args_element_name_147 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_27__class_dict);
        tmp_args_element_name_148 = tmp_class_creation_27__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_name_146, tmp_args_element_name_147, tmp_args_element_name_148};
            tmp_assign_source_176 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_96, call_args);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_87;
        }
        assert(tmp_class_creation_27__class == NULL);
        tmp_class_creation_27__class = tmp_assign_source_176;
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_87:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_27__class_dict);
    tmp_class_creation_27__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    {
        PyObject *tmp_assign_source_177;
        CHECK_OBJECT(tmp_class_creation_27__class);
        tmp_assign_source_177 = tmp_class_creation_27__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_177);
    }
    CHECK_OBJECT(tmp_class_creation_27__class);
    Py_DECREF(tmp_class_creation_27__class);
    tmp_class_creation_27__class = NULL;
    CHECK_OBJECT(tmp_class_creation_27__class_dict);
    Py_DECREF(tmp_class_creation_27__class_dict);
    tmp_class_creation_27__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_27__metaclass);
    Py_DECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_178;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431 = tmp_set_locals_9;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_30___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[200], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[204];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_31_private_key(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[215], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10)) {
            Py_XDECREF(cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10 = MAKE_FUNCTION_FRAME(codeobj_72f65678d7a47b0fc2a89dc86b8ce020, module_cryptography$hazmat$primitives$asymmetric$ec, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10->m_type_description == NULL);
        frame_72f65678d7a47b0fc2a89dc86b8ce020_10 = cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_72f65678d7a47b0fc2a89dc86b8ce020_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_72f65678d7a47b0fc2a89dc86b8ce020_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_22;
            tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_22 == NULL)) {
                tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto frame_exception_exit_10;
            }
            frame_72f65678d7a47b0fc2a89dc86b8ce020_10->m_frame.f_lineno = 449;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, mod_consts[201], &PyTuple_GET_ITEM(mod_consts[216], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_23 == NULL)) {
                tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;

                goto frame_exception_exit_10;
            }
            frame_72f65678d7a47b0fc2a89dc86b8ce020_10->m_frame.f_lineno = 450;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, mod_consts[201], &PyTuple_GET_ITEM(mod_consts[217], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;

                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_72f65678d7a47b0fc2a89dc86b8ce020_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_72f65678d7a47b0fc2a89dc86b8ce020_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_72f65678d7a47b0fc2a89dc86b8ce020_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_72f65678d7a47b0fc2a89dc86b8ce020_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_72f65678d7a47b0fc2a89dc86b8ce020_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_72f65678d7a47b0fc2a89dc86b8ce020_10,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_72f65678d7a47b0fc2a89dc86b8ce020_10 == cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10);
            cache_frame_72f65678d7a47b0fc2a89dc86b8ce020_10 = NULL;
        }

        assertFrameObject(frame_72f65678d7a47b0fc2a89dc86b8ce020_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_92;
        skip_nested_handling_9:;


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_32___eq__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_33___ne__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_34___hash__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431, mod_consts[213], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_178 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431;
        Py_INCREF(tmp_assign_source_178);
        goto try_return_handler_92;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_92:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431 = NULL;
        goto outline_result_36;
        // Exception handler code:
        try_except_handler_92:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431);
        locals_cryptography$hazmat$primitives$asymmetric$ec$$$class_28_EllipticCurvePrivateNumbers_431 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 431;
        goto try_except_handler_91;
        outline_result_36:;
        assert(tmp_class_creation_28__class_dict == NULL);
        tmp_class_creation_28__class_dict = tmp_assign_source_178;
    }
    {
        PyObject *tmp_assign_source_179;
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_key_name_55;
        PyObject *tmp_dict_name_55;
        PyObject *tmp_dict_name_56;
        PyObject *tmp_key_name_56;
        tmp_key_name_55 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_28__class_dict);
        tmp_dict_name_55 = tmp_class_creation_28__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_55, tmp_key_name_55);
        assert(!(tmp_res == -1));
        tmp_condition_result_28 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_28__class_dict);
        tmp_dict_name_56 = tmp_class_creation_28__class_dict;
        tmp_key_name_56 = mod_consts[119];
        tmp_assign_source_179 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_56, tmp_key_name_56);
        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto try_except_handler_91;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        {
            PyObject *tmp_assign_source_180;
            tmp_assign_source_180 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_28__base == NULL);
            Py_INCREF(tmp_assign_source_180);
            tmp_select_metaclass_28__base = tmp_assign_source_180;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_59;
            CHECK_OBJECT(tmp_select_metaclass_28__base);
            tmp_expression_name_59 = tmp_select_metaclass_28__base;
            tmp_assign_source_179 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_59);
            if (tmp_assign_source_179 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto try_except_handler_94;
            }
            goto try_return_handler_93;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_94:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_28;
            Py_DECREF(exception_keeper_type_65);
            Py_XDECREF(exception_keeper_value_65);
            Py_XDECREF(exception_keeper_tb_65);
            CHECK_OBJECT(tmp_select_metaclass_28__base);
            tmp_type_arg_28 = tmp_select_metaclass_28__base;
            tmp_assign_source_179 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_assign_source_179 == NULL));
            goto try_return_handler_93;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_93:;
        Py_XDECREF(tmp_select_metaclass_28__base);
        tmp_select_metaclass_28__base = NULL;
        goto outline_result_37;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_28__base);
        tmp_select_metaclass_28__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_37:;
        condexpr_end_28:;
        assert(tmp_class_creation_28__metaclass == NULL);
        tmp_class_creation_28__metaclass = tmp_assign_source_179;
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_name_97;
        PyObject *tmp_args_element_name_149;
        PyObject *tmp_args_element_name_150;
        PyObject *tmp_args_element_name_151;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_called_name_97 = tmp_class_creation_28__metaclass;
        tmp_args_element_name_149 = mod_consts[60];
        tmp_args_element_name_150 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_28__class_dict);
        tmp_args_element_name_151 = tmp_class_creation_28__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = {tmp_args_element_name_149, tmp_args_element_name_150, tmp_args_element_name_151};
            tmp_assign_source_181 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_97, call_args);
        }

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto try_except_handler_91;
        }
        assert(tmp_class_creation_28__class == NULL);
        tmp_class_creation_28__class = tmp_assign_source_181;
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_91:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_28__class_dict);
    tmp_class_creation_28__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    {
        PyObject *tmp_assign_source_182;
        CHECK_OBJECT(tmp_class_creation_28__class);
        tmp_assign_source_182 = tmp_class_creation_28__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_182);
    }
    CHECK_OBJECT(tmp_class_creation_28__class);
    Py_DECREF(tmp_class_creation_28__class);
    tmp_class_creation_28__class = NULL;
    CHECK_OBJECT(tmp_class_creation_28__class_dict);
    Py_DECREF(tmp_class_creation_28__class_dict);
    tmp_class_creation_28__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_28__metaclass);
    Py_DECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = PyDict_Copy(mod_consts[218]);
        assert(tmp_class_creation_29__class_dict == NULL);
        tmp_class_creation_29__class_dict = tmp_assign_source_183;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_184;
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_key_name_57;
        PyObject *tmp_dict_name_57;
        PyObject *tmp_dict_name_58;
        PyObject *tmp_key_name_58;
        tmp_key_name_57 = mod_consts[119];
        CHECK_OBJECT(tmp_class_creation_29__class_dict);
        tmp_dict_name_57 = tmp_class_creation_29__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_name_57, tmp_key_name_57);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_29;
        } else {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT(tmp_class_creation_29__class_dict);
        tmp_dict_name_58 = tmp_class_creation_29__class_dict;
        tmp_key_name_58 = mod_consts[119];
        tmp_assign_source_184 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_58, tmp_key_name_58);
        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto try_except_handler_95;
        }
        goto condexpr_end_29;
        condexpr_false_29:;
        {
            PyObject *tmp_assign_source_185;
            tmp_assign_source_185 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_29__base == NULL);
            Py_INCREF(tmp_assign_source_185);
            tmp_select_metaclass_29__base = tmp_assign_source_185;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_60;
            CHECK_OBJECT(tmp_select_metaclass_29__base);
            tmp_expression_name_60 = tmp_select_metaclass_29__base;
            tmp_assign_source_184 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_60);
            if (tmp_assign_source_184 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto try_except_handler_97;
            }
            goto try_return_handler_96;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_97:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_29;
            Py_DECREF(exception_keeper_type_67);
            Py_XDECREF(exception_keeper_value_67);
            Py_XDECREF(exception_keeper_tb_67);
            CHECK_OBJECT(tmp_select_metaclass_29__base);
            tmp_type_arg_29 = tmp_select_metaclass_29__base;
            tmp_assign_source_184 = BUILTIN_TYPE1(tmp_type_arg_29);
            assert(!(tmp_assign_source_184 == NULL));
            goto try_return_handler_96;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_96:;
        Py_XDECREF(tmp_select_metaclass_29__base);
        tmp_select_metaclass_29__base = NULL;
        goto outline_result_38;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_29__base);
        tmp_select_metaclass_29__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_38:;
        condexpr_end_29:;
        assert(tmp_class_creation_29__metaclass == NULL);
        tmp_class_creation_29__metaclass = tmp_assign_source_184;
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_name_98;
        PyObject *tmp_args_element_name_152;
        PyObject *tmp_args_element_name_153;
        PyObject *tmp_args_element_name_154;
        CHECK_OBJECT(tmp_class_creation_29__metaclass);
        tmp_called_name_98 = tmp_class_creation_29__metaclass;
        tmp_args_element_name_152 = mod_consts[219];
        tmp_args_element_name_153 = mod_consts[121];
        CHECK_OBJECT(tmp_class_creation_29__class_dict);
        tmp_args_element_name_154 = tmp_class_creation_29__class_dict;
        frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = {tmp_args_element_name_152, tmp_args_element_name_153, tmp_args_element_name_154};
            tmp_assign_source_186 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_98, call_args);
        }

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto try_except_handler_95;
        }
        assert(tmp_class_creation_29__class == NULL);
        tmp_class_creation_29__class = tmp_assign_source_186;
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_95:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_29__class_dict);
    Py_DECREF(tmp_class_creation_29__class_dict);
    tmp_class_creation_29__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_29__metaclass);
    tmp_class_creation_29__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    {
        PyObject *tmp_assign_source_187;
        CHECK_OBJECT(tmp_class_creation_29__class);
        tmp_assign_source_187 = tmp_class_creation_29__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_187);
    }
    CHECK_OBJECT(tmp_class_creation_29__class);
    Py_DECREF(tmp_class_creation_29__class);
    tmp_class_creation_29__class = NULL;
    CHECK_OBJECT(tmp_class_creation_29__class_dict);
    Py_DECREF(tmp_class_creation_29__class_dict);
    tmp_class_creation_29__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_29__metaclass);
    Py_DECREF(tmp_class_creation_29__metaclass);
    tmp_class_creation_29__metaclass = NULL;
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_61;
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[82]);
        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_188 = _PyDict_NewPresized( 19 );
        {
            PyObject *tmp_expression_name_62;
            PyObject *tmp_expression_name_63;
            PyObject *tmp_expression_name_64;
            PyObject *tmp_expression_name_65;
            PyObject *tmp_expression_name_66;
            PyObject *tmp_expression_name_67;
            PyObject *tmp_expression_name_68;
            PyObject *tmp_expression_name_69;
            PyObject *tmp_expression_name_70;
            PyObject *tmp_expression_name_71;
            PyObject *tmp_expression_name_72;
            PyObject *tmp_expression_name_73;
            PyObject *tmp_expression_name_74;
            PyObject *tmp_expression_name_75;
            PyObject *tmp_expression_name_76;
            PyObject *tmp_expression_name_77;
            PyObject *tmp_expression_name_78;
            PyObject *tmp_expression_name_79;
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_2;
            }
            tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_62 == NULL)) {
                tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[84]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;

                goto dict_build_exception_2;
            }
            tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_63 == NULL)) {
                tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[86]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[88]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto dict_build_exception_2;
            }
            tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_64 == NULL)) {
                tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[88]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;

                goto dict_build_exception_2;
            }
            tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_65 == NULL)) {
                tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[90]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_2;
            }
            tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_66 == NULL)) {
                tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[92]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[173]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_2;
            }
            tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_67 == NULL)) {
                tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[94]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[175]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto dict_build_exception_2;
            }
            tmp_expression_name_68 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_68 == NULL)) {
                tmp_expression_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[96]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[177]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto dict_build_exception_2;
            }
            tmp_expression_name_69 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_69 == NULL)) {
                tmp_expression_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[98]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;

                goto dict_build_exception_2;
            }
            tmp_expression_name_70 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_70 == NULL)) {
                tmp_expression_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[100]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto dict_build_exception_2;
            }
            tmp_expression_name_71 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_71 == NULL)) {
                tmp_expression_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[102]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto dict_build_exception_2;
            }
            tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_72 == NULL)) {
                tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[104]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto dict_build_exception_2;
            }
            tmp_expression_name_73 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_73 == NULL)) {
                tmp_expression_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[106]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto dict_build_exception_2;
            }
            tmp_expression_name_74 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_74 == NULL)) {
                tmp_expression_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[108]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto dict_build_exception_2;
            }
            tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_75 == NULL)) {
                tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[110]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto dict_build_exception_2;
            }
            tmp_expression_name_76 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_76 == NULL)) {
                tmp_expression_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[112]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto dict_build_exception_2;
            }
            tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_77 == NULL)) {
                tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[114]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_2;
            }
            tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_78 == NULL)) {
                tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[116]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_2;
            }
            tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_name_79 == NULL)) {
                tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_name_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[118]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_188, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_188);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_188);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa33720a2f0e907682cc8dbcbb54cd96);
#endif
    popFrameStack();

    assertFrameObject(frame_aa33720a2f0e907682cc8dbcbb54cd96);

    goto frame_no_exception_10;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa33720a2f0e907682cc8dbcbb54cd96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa33720a2f0e907682cc8dbcbb54cd96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa33720a2f0e907682cc8dbcbb54cd96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa33720a2f0e907682cc8dbcbb54cd96, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_10:;
    {
        PyObject *tmp_assign_source_189;


        tmp_assign_source_189 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function_35_get_curve_for_oid();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_189);
    }

    return module_cryptography$hazmat$primitives$asymmetric$ec;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

