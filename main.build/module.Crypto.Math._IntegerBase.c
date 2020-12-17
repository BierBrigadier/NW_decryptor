/* Generated code for Python module 'Crypto.Math._IntegerBase'
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

/* The "module_Crypto$Math$_IntegerBase" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Math$_IntegerBase;
PyDictObject *moduledict_Crypto$Math$_IntegerBase;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[134];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "Crypto.Math._IntegerBase", 134);

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
void checkModuleConstants_Crypto$Math$_IntegerBase(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "Crypto.Math._IntegerBase", 134);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e1089bb1d1b11f0e195a86ba3a8a0c49;
static PyCodeObject *codeobj_174a3fe7136e5ce824fdfeff5c1d1668;
static PyCodeObject *codeobj_fcd0520d18d76230e308e272fbb94a85;
static PyCodeObject *codeobj_3a9e267370f062e93893eac17dd17049;
static PyCodeObject *codeobj_50fe524d32ba5fbe96ae50b68ccaca99;
static PyCodeObject *codeobj_8a1b5cba4853831d13e5eb5e666d94ac;
static PyCodeObject *codeobj_d396c0ee0f29f1ff93fc46ac98e05c85;
static PyCodeObject *codeobj_61367ff8250b7dd0c6dd2fb90231860d;
static PyCodeObject *codeobj_9cd9783e36df94ab9131ba30317f63b3;
static PyCodeObject *codeobj_6c15ce6ccf5ffdb30f06895919cf4b18;
static PyCodeObject *codeobj_1316b390dc7d36dcf9af1bac8eeadc56;
static PyCodeObject *codeobj_30f8022cfe51daf1fa3b66ba125fbab8;
static PyCodeObject *codeobj_17e2e074c0444e317fbebee56c05c22f;
static PyCodeObject *codeobj_c04401f98a5b052bd650454ed0686567;
static PyCodeObject *codeobj_197d1685f4a660632ffe58ee37518c6a;
static PyCodeObject *codeobj_a362c2e887bf3a25e54c76c0706a2b26;
static PyCodeObject *codeobj_e8304c8b30c291de9efcb497dbd3f129;
static PyCodeObject *codeobj_74657d20fc23a695496cdc5c9d32c8ae;
static PyCodeObject *codeobj_195b4d5e31e7900a5b7e1d129145ce4d;
static PyCodeObject *codeobj_69765c863d8e99cdb46895909ae5c35c;
static PyCodeObject *codeobj_fad6f7f0b28689b9863c919808bf59d1;
static PyCodeObject *codeobj_69a1d38ce039cf38a4d5fc0532eccd8b;
static PyCodeObject *codeobj_4286c7aba15e970a0f20ffec803a6afa;
static PyCodeObject *codeobj_07ec0430e7cd9c8ada376bd7b92ee1e3;
static PyCodeObject *codeobj_e37ee5233f0fd33d4c0529b1f74beef4;
static PyCodeObject *codeobj_52534046930318b3f524ac1e42f5bdfa;
static PyCodeObject *codeobj_521cf37f40a22c88bea36de89ef9da68;
static PyCodeObject *codeobj_07fb6859c33bef0306865c0cb86a999f;
static PyCodeObject *codeobj_4d34992dcd7fb4dfa0e16a2bbb0fa582;
static PyCodeObject *codeobj_e12b3c2b252b03e77fe935bade507e22;
static PyCodeObject *codeobj_a5c43c19f9844d079b0fb4c7210268a1;
static PyCodeObject *codeobj_3ddc433a9c3b1b6593ced32f5779c3c6;
static PyCodeObject *codeobj_23363a7f673697bd6aa62ac3974dcde9;
static PyCodeObject *codeobj_7e168f586da743c55233ea76c32302e0;
static PyCodeObject *codeobj_00f703ae353487617b58f9842f699d1b;
static PyCodeObject *codeobj_417b76468b06eb376309e83ca4c73831;
static PyCodeObject *codeobj_b477ad23f647b0cec7e25b01281482a9;
static PyCodeObject *codeobj_c749603d4c9e499fd7e884ce20b59383;
static PyCodeObject *codeobj_52511013513a3b4fe3e433605b4a98fe;
static PyCodeObject *codeobj_6305324d58108b9a323aad47b4bf63e3;
static PyCodeObject *codeobj_5024c569057b52be0819d2b636fa9d89;
static PyCodeObject *codeobj_0807bc1021454d61841e467874b76e32;
static PyCodeObject *codeobj_59fd72e3397c867e622222cdaadf0811;
static PyCodeObject *codeobj_eb9dc12e81480fcee7d90dc0b4586c1e;
static PyCodeObject *codeobj_21ee15774d3966873e32a89b3b5b2efe;
static PyCodeObject *codeobj_32622f6d33c88b6244055165a4ab5291;
static PyCodeObject *codeobj_cca08f7531978de3d485f43dd36bb149;
static PyCodeObject *codeobj_b4c9f1b9a06f8c9a66eeaa56a1f4f198;
static PyCodeObject *codeobj_e23b7a1b19fa6b2b69506ca66ddddf6f;
static PyCodeObject *codeobj_4391d2f792454c2fd2adf8606d53398e;
static PyCodeObject *codeobj_ed4fa264a723b0b249a4389a426c7ffb;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[54]; CHECK_OBJECT(module_filename_obj);
    codeobj_e1089bb1d1b11f0e195a86ba3a8a0c49 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[116], NULL, NULL, 0, 0, 0);
    codeobj_174a3fe7136e5ce824fdfeff5c1d1668 = MAKE_CODEOBJECT(module_filename_obj, 38, CO_NEWLOCALS | CO_NOFREE, mod_consts[115], NULL, NULL, 0, 0, 0);
    codeobj_fcd0520d18d76230e308e272fbb94a85 = MAKE_CODEOBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[87], mod_consts[117], NULL, 1, 0, 0);
    codeobj_3a9e267370f062e93893eac17dd17049 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_NOFREE, mod_consts[79], mod_consts[118], NULL, 2, 0, 0);
    codeobj_50fe524d32ba5fbe96ae50b68ccaca99 = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[93], mod_consts[118], NULL, 2, 0, 0);
    codeobj_8a1b5cba4853831d13e5eb5e666d94ac = MAKE_CODEOBJECT(module_filename_obj, 63, CO_NOFREE, mod_consts[70], mod_consts[118], NULL, 2, 0, 0);
    codeobj_d396c0ee0f29f1ff93fc46ac98e05c85 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_NOFREE, mod_consts[82], mod_consts[119], NULL, 2, 0, 0);
    codeobj_61367ff8250b7dd0c6dd2fb90231860d = MAKE_CODEOBJECT(module_filename_obj, 83, CO_NOFREE, mod_consts[75], mod_consts[118], NULL, 2, 0, 0);
    codeobj_9cd9783e36df94ab9131ba30317f63b3 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[74], mod_consts[118], NULL, 2, 0, 0);
    codeobj_6c15ce6ccf5ffdb30f06895919cf4b18 = MAKE_CODEOBJECT(module_filename_obj, 133, CO_NOFREE, mod_consts[89], mod_consts[118], NULL, 2, 0, 0);
    codeobj_1316b390dc7d36dcf9af1bac8eeadc56 = MAKE_CODEOBJECT(module_filename_obj, 170, CO_NOFREE, mod_consts[98], mod_consts[120], NULL, 2, 0, 0);
    codeobj_30f8022cfe51daf1fa3b66ba125fbab8 = MAKE_CODEOBJECT(module_filename_obj, 145, CO_NOFREE, mod_consts[92], mod_consts[118], NULL, 2, 0, 0);
    codeobj_17e2e074c0444e317fbebee56c05c22f = MAKE_CODEOBJECT(module_filename_obj, 141, CO_NOFREE, mod_consts[91], mod_consts[118], NULL, 2, 0, 0);
    codeobj_c04401f98a5b052bd650454ed0686567 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_NOFREE, mod_consts[65], mod_consts[117], NULL, 1, 0, 0);
    codeobj_197d1685f4a660632ffe58ee37518c6a = MAKE_CODEOBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[96], mod_consts[120], NULL, 2, 0, 0);
    codeobj_a362c2e887bf3a25e54c76c0706a2b26 = MAKE_CODEOBJECT(module_filename_obj, 137, CO_NOFREE, mod_consts[90], mod_consts[118], NULL, 2, 0, 0);
    codeobj_e8304c8b30c291de9efcb497dbd3f129 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_NOFREE, mod_consts[73], mod_consts[118], NULL, 2, 0, 0);
    codeobj_74657d20fc23a695496cdc5c9d32c8ae = MAKE_CODEOBJECT(module_filename_obj, 166, CO_NOFREE, mod_consts[97], mod_consts[120], NULL, 2, 0, 0);
    codeobj_195b4d5e31e7900a5b7e1d129145ce4d = MAKE_CODEOBJECT(module_filename_obj, 71, CO_NOFREE, mod_consts[72], mod_consts[118], NULL, 2, 0, 0);
    codeobj_69765c863d8e99cdb46895909ae5c35c = MAKE_CODEOBJECT(module_filename_obj, 113, CO_NOFREE, mod_consts[83], mod_consts[119], NULL, 2, 0, 0);
    codeobj_fad6f7f0b28689b9863c919808bf59d1 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_NOFREE, mod_consts[81], mod_consts[121], NULL, 2, 0, 0);
    codeobj_69a1d38ce039cf38a4d5fc0532eccd8b = MAKE_CODEOBJECT(module_filename_obj, 67, CO_NOFREE, mod_consts[71], mod_consts[118], NULL, 2, 0, 0);
    codeobj_4286c7aba15e970a0f20ffec803a6afa = MAKE_CODEOBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[76], mod_consts[117], NULL, 1, 0, 0);
    codeobj_07ec0430e7cd9c8ada376bd7b92ee1e3 = MAKE_CODEOBJECT(module_filename_obj, 154, CO_NOFREE, mod_consts[94], mod_consts[118], NULL, 2, 0, 0);
    codeobj_e37ee5233f0fd33d4c0529b1f74beef4 = MAKE_CODEOBJECT(module_filename_obj, 121, CO_NOFREE, mod_consts[86], mod_consts[122], NULL, 3, 0, 0);
    codeobj_52534046930318b3f524ac1e42f5bdfa = MAKE_CODEOBJECT(module_filename_obj, 49, CO_NOFREE, mod_consts[67], mod_consts[117], NULL, 1, 0, 0);
    codeobj_521cf37f40a22c88bea36de89ef9da68 = MAKE_CODEOBJECT(module_filename_obj, 158, CO_NOFREE, mod_consts[95], mod_consts[120], NULL, 2, 0, 0);
    codeobj_07fb6859c33bef0306865c0cb86a999f = MAKE_CODEOBJECT(module_filename_obj, 45, CO_NOFREE, mod_consts[66], mod_consts[117], NULL, 1, 0, 0);
    codeobj_4d34992dcd7fb4dfa0e16a2bbb0fa582 = MAKE_CODEOBJECT(module_filename_obj, 101, CO_NOFREE, mod_consts[80], mod_consts[118], NULL, 2, 0, 0);
    codeobj_e12b3c2b252b03e77fe935bade507e22 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[123], NULL, 2, 0, 0);
    codeobj_a5c43c19f9844d079b0fb4c7210268a1 = MAKE_CODEOBJECT(module_filename_obj, 199, CO_NOFREE, mod_consts[104], mod_consts[124], NULL, 2, 0, 0);
    codeobj_3ddc433a9c3b1b6593ced32f5779c3c6 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_NOFREE, mod_consts[33], mod_consts[125], NULL, 1, 0, 0);
    codeobj_23363a7f673697bd6aa62ac3974dcde9 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_NOFREE, mod_consts[109], mod_consts[118], NULL, 2, 0, 0);
    codeobj_7e168f586da743c55233ea76c32302e0 = MAKE_CODEOBJECT(module_filename_obj, 174, CO_NOFREE, mod_consts[99], mod_consts[126], NULL, 2, 0, 0);
    codeobj_00f703ae353487617b58f9842f699d1b = MAKE_CODEOBJECT(module_filename_obj, 211, CO_NOFREE, mod_consts[107], mod_consts[127], NULL, 2, 0, 0);
    codeobj_417b76468b06eb376309e83ca4c73831 = MAKE_CODEOBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[85], mod_consts[122], NULL, 3, 0, 0);
    codeobj_b477ad23f647b0cec7e25b01281482a9 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_NOFREE, mod_consts[108], mod_consts[127], NULL, 2, 0, 0);
    codeobj_c749603d4c9e499fd7e884ce20b59383 = MAKE_CODEOBJECT(module_filename_obj, 183, CO_NOFREE, mod_consts[101], mod_consts[117], NULL, 1, 0, 0);
    codeobj_52511013513a3b4fe3e433605b4a98fe = MAKE_CODEOBJECT(module_filename_obj, 92, CO_NOFREE, mod_consts[78], mod_consts[117], NULL, 1, 0, 0);
    codeobj_6305324d58108b9a323aad47b4bf63e3 = MAKE_CODEOBJECT(module_filename_obj, 179, CO_NOFREE, mod_consts[100], mod_consts[117], NULL, 1, 0, 0);
    codeobj_5024c569057b52be0819d2b636fa9d89 = MAKE_CODEOBJECT(module_filename_obj, 195, CO_NOFREE, mod_consts[103], mod_consts[117], NULL, 1, 0, 0);
    codeobj_0807bc1021454d61841e467874b76e32 = MAKE_CODEOBJECT(module_filename_obj, 227, CO_NOFREE, mod_consts[111], mod_consts[128], NULL, 2, 0, 0);
    codeobj_59fd72e3397c867e622222cdaadf0811 = MAKE_CODEOBJECT(module_filename_obj, 223, CO_NOFREE, mod_consts[110], mod_consts[118], NULL, 2, 0, 0);
    codeobj_eb9dc12e81480fcee7d90dc0b4586c1e = MAKE_CODEOBJECT(module_filename_obj, 203, CO_NOFREE, mod_consts[105], mod_consts[129], NULL, 3, 0, 0);
    codeobj_21ee15774d3966873e32a89b3b5b2efe = MAKE_CODEOBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[48], mod_consts[130], NULL, 1, 0, 0);
    codeobj_32622f6d33c88b6244055165a4ab5291 = MAKE_CODEOBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[113], mod_consts[131], NULL, 1, 0, 0);
    codeobj_cca08f7531978de3d485f43dd36bb149 = MAKE_CODEOBJECT(module_filename_obj, 207, CO_NOFREE, mod_consts[106], mod_consts[132], NULL, 2, 0, 0);
    codeobj_b4c9f1b9a06f8c9a66eeaa56a1f4f198 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_NOFREE, mod_consts[43], mod_consts[117], NULL, 1, 0, 0);
    codeobj_e23b7a1b19fa6b2b69506ca66ddddf6f = MAKE_CODEOBJECT(module_filename_obj, 191, CO_NOFREE, mod_consts[102], mod_consts[117], NULL, 1, 0, 0);
    codeobj_4391d2f792454c2fd2adf8606d53398e = MAKE_CODEOBJECT(module_filename_obj, 129, CO_NOFREE, mod_consts[88], mod_consts[127], NULL, 2, 0, 0);
    codeobj_ed4fa264a723b0b249a4389a426c7ffb = MAKE_CODEOBJECT(module_filename_obj, 53, CO_NOFREE, mod_consts[69], mod_consts[133], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_10___gt__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_11___ge__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_12___nonzero__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_13_is_negative();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_14___add__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_15___sub__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_16___mul__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_17___floordiv__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_18___mod__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_19_inplace_pow(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_1___int__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_20___pow__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_21___abs__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_22_sqrt(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_23___iadd__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_24___isub__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_25___imul__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_26___imod__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_27___and__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_28___or__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_29___rshift__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_2___str__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_30___irshift__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_31___lshift__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_32___ilshift__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_33_get_bit();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_34_is_odd();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_35_is_even();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_36_size_in_bits();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_37_size_in_bytes();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_38_is_perfect_square();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_39_fail_if_divisible_by();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_3___repr__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_40_multiply_accumulate();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_41_set();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_42_inplace_inverse();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_43_inverse();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_44_gcd();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_45_lcm();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_46_jacobi_symbol();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_47__tonelli_shanks();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_48_random();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_49_random_range();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_4_to_bytes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_5_from_bytes();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_6___eq__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_7___ne__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_8___lt__();


static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_9___le__();


// The module function definitions.
static PyObject *impl_Crypto$Math$_IntegerBase$$$function_47__tonelli_shanks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_p = python_pars[1];
    PyObject *var_root = NULL;
    PyObject *var_s = NULL;
    PyObject *var_q = NULL;
    PyObject *var_z = NULL;
    PyObject *var_euler = NULL;
    PyObject *var_m = NULL;
    PyObject *var_c = NULL;
    PyObject *var_t = NULL;
    PyObject *var_r = NULL;
    PyObject *var_i = NULL;
    PyObject *var_b = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e12b3c2b252b03e77fe935bade507e22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e12b3c2b252b03e77fe935bade507e22 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e12b3c2b252b03e77fe935bade507e22)) {
        Py_XDECREF(cache_frame_e12b3c2b252b03e77fe935bade507e22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e12b3c2b252b03e77fe935bade507e22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e12b3c2b252b03e77fe935bade507e22 = MAKE_FUNCTION_FRAME(codeobj_e12b3c2b252b03e77fe935bade507e22, module_Crypto$Math$_IntegerBase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e12b3c2b252b03e77fe935bade507e22->m_type_description == NULL);
    frame_e12b3c2b252b03e77fe935bade507e22 = cache_frame_e12b3c2b252b03e77fe935bade507e22;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e12b3c2b252b03e77fe935bade507e22);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e12b3c2b252b03e77fe935bade507e22) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_n);
        tmp_compexpr_left_1 = par_n;
        tmp_compexpr_right_1 = mod_consts[0];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_n);
    tmp_return_value = par_n;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_p);
        tmp_left_name_1 = par_p;
        tmp_right_name_1 = mod_consts[1];
        tmp_compexpr_left_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[2];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_1 != NULL);
        CHECK_OBJECT(par_n);
        tmp_args_element_name_1 = par_n;
        CHECK_OBJECT(par_p);
        tmp_left_name_3 = par_p;
        tmp_right_name_2 = mod_consts[4];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[1];
        tmp_args_element_name_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_args_element_name_3 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_root == NULL);
        var_root = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_2 != NULL);
        CHECK_OBJECT(var_root);
        tmp_args_element_name_4 = var_root;
        tmp_args_element_name_5 = mod_consts[5];
        CHECK_OBJECT(par_p);
        tmp_args_element_name_6 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_compexpr_right_3 = par_n;
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[6];
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 255;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 255;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    CHECK_OBJECT(var_root);
    tmp_return_value = var_root;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[4];
        assert(var_s == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_s = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(par_p);
        tmp_left_name_5 = par_p;
        tmp_right_name_4 = mod_consts[4];
        tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_5, tmp_right_name_4);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = mod_consts[5];
        tmp_assign_source_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;

            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_q;
        tmp_right_name_6 = mod_consts[4];
        tmp_operand_name_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_INT(tmp_left_name_6, tmp_right_name_6);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        if (var_s == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;

            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = var_s;
        tmp_right_name_7 = mod_consts[4];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        assert(!(tmp_result == false));
        tmp_assign_source_4 = tmp_left_name_7;
        var_s = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;

            exception_lineno = 262;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_q;
        tmp_right_name_8 = mod_consts[4];
        tmp_result = BINARY_OPERATION_RSHIFT_OBJECT_INT_INPLACE(&tmp_left_name_8, tmp_right_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_8;
        var_q = tmp_assign_source_5;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 260;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_n);
        tmp_expression_name_1 = par_n;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 264;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[5]);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_6;
    }
    loop_start_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_4 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_4 != NULL);
        if (var_z == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = var_z;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_10 = par_p;
        tmp_right_name_9 = mod_consts[4];
        tmp_left_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_10, tmp_right_name_9);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = mod_consts[5];
        tmp_args_element_name_8 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_9, tmp_right_name_10);
        Py_DECREF(tmp_left_name_9);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_args_element_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_euler;
            var_euler = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_euler);
        tmp_compexpr_left_4 = var_euler;
        tmp_compexpr_right_4 = mod_consts[4];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        if (var_z == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;

            exception_lineno = 268;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_11 = var_z;
        tmp_right_name_11 = mod_consts[4];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_11, tmp_right_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_left_name_11;
        var_z = tmp_assign_source_8;

    }
    goto loop_start_2;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT(var_euler);
        tmp_compexpr_left_5 = var_euler;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 270;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_12 = par_p;
        tmp_right_name_12 = mod_consts[4];
        tmp_compexpr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_12, tmp_right_name_12);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    goto loop_end_2;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[6];
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 273;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 273;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 265;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_9;
        if (var_s == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;

            exception_lineno = 275;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_9 = var_s;
        assert(var_m == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_m = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_5 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_5 != NULL);
        if (var_z == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;

            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = var_z;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;

            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = var_q;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_called_name_6 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_6 != NULL);
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_13 = par_n;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;

            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_14 = var_q;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_15 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_args_element_name_18;
        tmp_called_name_7 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_7 != NULL);
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = par_n;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;

            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_14 = var_q;
        tmp_right_name_13 = mod_consts[4];
        tmp_left_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_14, tmp_right_name_13);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = mod_consts[5];
        tmp_args_element_name_17 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_13, tmp_right_name_14);
        Py_DECREF(tmp_left_name_13);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_args_element_name_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_18 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_args_element_name_17);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_12;
    }
    loop_start_3:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        if (var_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;

            exception_lineno = 280;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_6 = var_t;
        tmp_compexpr_right_6 = mod_consts[4];
        tmp_operand_name_3 = RICH_COMPARE_NE_OBJECT_OBJECT_INT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_end_3;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[13]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = mod_consts[14];
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;

            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_20 = var_m;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 281;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_15;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_args_element_name_23;
        tmp_called_name_9 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_9 != NULL);
        if (var_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;

            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_21 = var_t;
        tmp_left_name_15 = mod_consts[5];
        CHECK_OBJECT(var_i);
        tmp_right_name_15 = var_i;
        tmp_args_element_name_22 = BINARY_OPERATION_POW_OBJECT_INT_OBJECT(tmp_left_name_15, tmp_right_name_15);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_args_element_name_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_23 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23};
            tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_args_element_name_22);
        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_7 = mod_consts[4];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_INT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        Py_DECREF(tmp_compexpr_left_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    goto loop_end_4;
    branch_no_8:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 281;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;

            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_8 = var_i;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;

            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = var_m;
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_16 = mod_consts[17];
        if (par_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_n;
        tmp_right_name_16 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_16, 0, tmp_tuple_element_1);
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_p;
        PyTuple_SET_ITEM0(tmp_right_name_16, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_STR_TUPLE(tmp_left_name_16, tmp_right_name_16);
        Py_DECREF(tmp_right_name_16);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 285;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 285;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_args_element_name_26;
        tmp_called_name_10 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_10 != NULL);
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_24 = var_c;
        tmp_left_name_17 = mod_consts[5];
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_19 = var_m;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_18 = var_i;
        tmp_left_name_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_19, tmp_right_name_18);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_19 = mod_consts[4];
        tmp_right_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_18, tmp_right_name_19);
        Py_DECREF(tmp_left_name_18);
        if (tmp_right_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_25 = BINARY_OPERATION_POW_OBJECT_INT_OBJECT(tmp_left_name_17, tmp_right_name_17);
        Py_DECREF(tmp_right_name_17);
        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_args_element_name_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_26 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_args_element_name_25);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;

            exception_lineno = 287;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_17 = var_i;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_17;
            Py_INCREF(var_m);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        CHECK_OBJECT(var_b);
        tmp_left_name_21 = var_b;
        tmp_right_name_20 = mod_consts[5];
        tmp_left_name_20 = BINARY_OPERATION_POW_OBJECT_OBJECT_INT(tmp_left_name_21, tmp_right_name_20);
        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_left_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 288;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_21 = par_p;
        tmp_assign_source_18 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_name_20, tmp_right_name_21);
        Py_DECREF(tmp_left_name_20);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_22;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_23;
        PyObject *tmp_right_name_24;
        if (var_t == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_23 = var_t;
        CHECK_OBJECT(var_b);
        tmp_left_name_24 = var_b;
        tmp_right_name_23 = mod_consts[5];
        tmp_right_name_22 = BINARY_OPERATION_POW_OBJECT_OBJECT_INT(tmp_left_name_24, tmp_right_name_23);
        if (tmp_right_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_23, tmp_right_name_22);
        Py_DECREF(tmp_right_name_22);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_left_name_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_24 = par_p;
        tmp_assign_source_19 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_name_22, tmp_right_name_24);
        Py_DECREF(tmp_left_name_22);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;

            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_26 = var_r;
        CHECK_OBJECT(var_b);
        tmp_right_name_25 = var_b;
        tmp_left_name_25 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_26, tmp_right_name_25);
        if (tmp_left_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_left_name_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_26 = par_p;
        tmp_assign_source_20 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_name_25, tmp_right_name_26);
        Py_DECREF(tmp_left_name_25);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 280;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        tmp_called_name_11 = LOOKUP_BUILTIN(mod_consts[3]);
        assert(tmp_called_name_11 != NULL);
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;

            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_27 = var_r;
        tmp_args_element_name_28 = mod_consts[5];
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_29 = par_p;
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_compexpr_left_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_11, call_args);
        }

        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_n == NULL) {
            Py_DECREF(tmp_compexpr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_9 = par_n;
        tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[6];
        frame_e12b3c2b252b03e77fe935bade507e22->m_frame.f_lineno = 293;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 293;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    if (var_r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
        exception_tb = NULL;

        exception_lineno = 295;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e12b3c2b252b03e77fe935bade507e22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e12b3c2b252b03e77fe935bade507e22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e12b3c2b252b03e77fe935bade507e22);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e12b3c2b252b03e77fe935bade507e22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e12b3c2b252b03e77fe935bade507e22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e12b3c2b252b03e77fe935bade507e22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e12b3c2b252b03e77fe935bade507e22,
        type_description_1,
        par_n,
        par_p,
        var_root,
        var_s,
        var_q,
        var_z,
        var_euler,
        var_m,
        var_c,
        var_t,
        var_r,
        var_i,
        var_b
    );


    // Release cached frame if used for exception.
    if (frame_e12b3c2b252b03e77fe935bade507e22 == cache_frame_e12b3c2b252b03e77fe935bade507e22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e12b3c2b252b03e77fe935bade507e22);
        cache_frame_e12b3c2b252b03e77fe935bade507e22 = NULL;
    }

    assertFrameObject(frame_e12b3c2b252b03e77fe935bade507e22);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_n);
    par_n = NULL;
    Py_XDECREF(var_root);
    var_root = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_euler);
    var_euler = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_n);
    par_n = NULL;
    Py_XDECREF(var_root);
    var_root = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_euler);
    var_euler = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Math$_IntegerBase$$$function_48_random(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_exact_bits = NULL;
    PyObject *var_max_bits = NULL;
    PyObject *var_randfunc = NULL;
    PyObject *var_bits = NULL;
    PyObject *var_bytes_needed = NULL;
    PyObject *var_significant_bits_msb = NULL;
    PyObject *var_msb = NULL;
    struct Nuitka_FrameObject *frame_21ee15774d3966873e32a89b3b5b2efe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_21ee15774d3966873e32a89b3b5b2efe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_21ee15774d3966873e32a89b3b5b2efe)) {
        Py_XDECREF(cache_frame_21ee15774d3966873e32a89b3b5b2efe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21ee15774d3966873e32a89b3b5b2efe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21ee15774d3966873e32a89b3b5b2efe = MAKE_FUNCTION_FRAME(codeobj_21ee15774d3966873e32a89b3b5b2efe, module_Crypto$Math$_IntegerBase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_21ee15774d3966873e32a89b3b5b2efe->m_type_description == NULL);
    frame_21ee15774d3966873e32a89b3b5b2efe = cache_frame_21ee15774d3966873e32a89b3b5b2efe;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_21ee15774d3966873e32a89b3b5b2efe);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_21ee15774d3966873e32a89b3b5b2efe) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 322;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[22], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_exact_bits == NULL);
        var_exact_bits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_kwargs;
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 323;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[24], 0));

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_bits == NULL);
        var_max_bits = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_kwargs;
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 324;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[25], 0));

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_randfunc == NULL);
        var_randfunc = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_randfunc);
        tmp_compexpr_left_1 = var_randfunc;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[26]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 327;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[27]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[28]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_randfunc;
            assert(old != NULL);
            var_randfunc = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_exact_bits);
        tmp_compexpr_left_2 = var_exact_bits;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_max_bits);
        tmp_compexpr_left_3 = var_max_bits;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[29];
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 330;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 330;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_exact_bits);
        tmp_compexpr_left_4 = var_exact_bits;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_max_bits);
        tmp_compexpr_left_5 = var_max_bits;
        tmp_compexpr_right_5 = Py_None;
        tmp_and_right_value_2 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? true : false;
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[30];
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 333;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 333;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(var_exact_bits);
        tmp_or_left_value_1 = var_exact_bits;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_max_bits);
        tmp_or_right_value_1 = var_max_bits;
        tmp_assign_source_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_5 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_bits == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_bits = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(var_bits);
        tmp_left_name_3 = var_bits;
        tmp_right_name_1 = mod_consts[4];
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_3, tmp_right_name_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[31];
        tmp_left_name_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[4];
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_1, tmp_right_name_3);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bytes_needed == NULL);
        var_bytes_needed = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        tmp_left_name_4 = mod_consts[31];
        CHECK_OBJECT(var_bytes_needed);
        tmp_left_name_6 = var_bytes_needed;
        tmp_right_name_5 = mod_consts[31];
        tmp_left_name_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_INT(tmp_left_name_6, tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bits);
        tmp_right_name_6 = var_bits;
        tmp_right_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_INT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_significant_bits_msb == NULL);
        var_significant_bits_msb = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[32]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_randfunc);
        tmp_called_name_2 = var_randfunc;
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 338;
        tmp_expression_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[4]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[14];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 338;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msb == NULL);
        var_msb = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_exact_bits);
        tmp_compexpr_left_6 = var_exact_bits;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(var_msb);
        tmp_left_name_7 = var_msb;
        tmp_left_name_8 = mod_consts[4];
        CHECK_OBJECT(var_significant_bits_msb);
        tmp_left_name_9 = var_significant_bits_msb;
        tmp_right_name_9 = mod_consts[4];
        tmp_right_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_9, tmp_right_name_9);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = BINARY_OPERATION_LSHIFT_OBJECT_INT_OBJECT(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_7;
        var_msb = tmp_assign_source_9;

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT(var_msb);
        tmp_left_name_10 = var_msb;
        tmp_left_name_12 = mod_consts[4];
        CHECK_OBJECT(var_significant_bits_msb);
        tmp_right_name_11 = var_significant_bits_msb;
        tmp_left_name_11 = BINARY_OPERATION_LSHIFT_OBJECT_INT_OBJECT(tmp_left_name_12, tmp_right_name_11);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = mod_consts[4];
        tmp_right_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_11, tmp_right_name_12);
        Py_DECREF(tmp_left_name_11);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITAND_OBJECT_OBJECT_INPLACE(&tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_left_name_10;
        var_msb = tmp_assign_source_10;

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT(par_cls);
        tmp_expression_name_3 = par_cls;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[33]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[34]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msb);
        tmp_args_element_name_3 = var_msb;
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 343;
        tmp_left_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_randfunc);
        tmp_called_name_5 = var_randfunc;
        CHECK_OBJECT(var_bytes_needed);
        tmp_left_name_14 = var_bytes_needed;
        tmp_right_name_14 = mod_consts[4];
        tmp_args_element_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_14, tmp_right_name_14);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 343;
        tmp_right_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_left_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_21ee15774d3966873e32a89b3b5b2efe->m_frame.f_lineno = 343;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21ee15774d3966873e32a89b3b5b2efe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_21ee15774d3966873e32a89b3b5b2efe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21ee15774d3966873e32a89b3b5b2efe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21ee15774d3966873e32a89b3b5b2efe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21ee15774d3966873e32a89b3b5b2efe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21ee15774d3966873e32a89b3b5b2efe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21ee15774d3966873e32a89b3b5b2efe,
        type_description_1,
        par_cls,
        par_kwargs,
        var_exact_bits,
        var_max_bits,
        var_randfunc,
        var_bits,
        var_bytes_needed,
        var_significant_bits_msb,
        var_msb
    );


    // Release cached frame if used for exception.
    if (frame_21ee15774d3966873e32a89b3b5b2efe == cache_frame_21ee15774d3966873e32a89b3b5b2efe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_21ee15774d3966873e32a89b3b5b2efe);
        cache_frame_21ee15774d3966873e32a89b3b5b2efe = NULL;
    }

    assertFrameObject(frame_21ee15774d3966873e32a89b3b5b2efe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_exact_bits);
    Py_DECREF(var_exact_bits);
    var_exact_bits = NULL;
    CHECK_OBJECT(var_max_bits);
    Py_DECREF(var_max_bits);
    var_max_bits = NULL;
    CHECK_OBJECT(var_randfunc);
    Py_DECREF(var_randfunc);
    var_randfunc = NULL;
    CHECK_OBJECT(var_bits);
    Py_DECREF(var_bits);
    var_bits = NULL;
    CHECK_OBJECT(var_bytes_needed);
    Py_DECREF(var_bytes_needed);
    var_bytes_needed = NULL;
    CHECK_OBJECT(var_significant_bits_msb);
    Py_DECREF(var_significant_bits_msb);
    var_significant_bits_msb = NULL;
    CHECK_OBJECT(var_msb);
    Py_DECREF(var_msb);
    var_msb = NULL;
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

    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_exact_bits);
    var_exact_bits = NULL;
    Py_XDECREF(var_max_bits);
    var_max_bits = NULL;
    Py_XDECREF(var_randfunc);
    var_randfunc = NULL;
    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_bytes_needed);
    var_bytes_needed = NULL;
    Py_XDECREF(var_significant_bits_msb);
    var_significant_bits_msb = NULL;
    Py_XDECREF(var_msb);
    var_msb = NULL;
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


static PyObject *impl_Crypto$Math$_IntegerBase$$$function_49_random_range(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_min_inclusive = NULL;
    PyObject *var_max_inclusive = NULL;
    PyObject *var_max_exclusive = NULL;
    PyObject *var_randfunc = NULL;
    PyObject *var_norm_maximum = NULL;
    PyObject *var_bits_needed = NULL;
    PyObject *var_norm_candidate = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_32622f6d33c88b6244055165a4ab5291;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_32622f6d33c88b6244055165a4ab5291 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_32622f6d33c88b6244055165a4ab5291)) {
        Py_XDECREF(cache_frame_32622f6d33c88b6244055165a4ab5291);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32622f6d33c88b6244055165a4ab5291 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32622f6d33c88b6244055165a4ab5291 = MAKE_FUNCTION_FRAME(codeobj_32622f6d33c88b6244055165a4ab5291, module_Crypto$Math$_IntegerBase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_32622f6d33c88b6244055165a4ab5291->m_type_description == NULL);
    frame_32622f6d33c88b6244055165a4ab5291 = cache_frame_32622f6d33c88b6244055165a4ab5291;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_32622f6d33c88b6244055165a4ab5291);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_32622f6d33c88b6244055165a4ab5291) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 364;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[36], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_min_inclusive == NULL);
        var_min_inclusive = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_kwargs;
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 365;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[37], 0));

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_inclusive == NULL);
        var_max_inclusive = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 366;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_kwargs;
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 366;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[38], 0));

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_exclusive == NULL);
        var_max_exclusive = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 367;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_kwargs;
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 367;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[25], 0));

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_randfunc == NULL);
        var_randfunc = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 369;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(par_kwargs);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_expression_name_1;
        tmp_left_name_1 = mod_consts[39];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;

            exception_lineno = 370;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_kwargs;
        tmp_str_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[40]);
        if (tmp_str_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyObject_Str(tmp_str_arg_1);
        Py_DECREF(tmp_str_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 370;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 370;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_compexpr_left_1 = Py_None;
        CHECK_OBJECT(var_max_inclusive);
        tmp_tuple_element_1 = var_max_inclusive;
        tmp_compexpr_right_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_compexpr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_max_exclusive);
        tmp_tuple_element_1 = var_max_exclusive;
        PyTuple_SET_ITEM0(tmp_compexpr_right_1, 1, tmp_tuple_element_1);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
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
        tmp_make_exception_arg_2 = mod_consts[41];
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 372;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 372;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_max_exclusive);
        tmp_compexpr_left_2 = var_max_exclusive;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_max_exclusive);
        tmp_left_name_2 = var_max_exclusive;
        tmp_right_name_2 = mod_consts[4];
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_max_inclusive;
            assert(old != NULL);
            var_max_inclusive = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tuple_element_2;
        tmp_compexpr_left_3 = Py_None;
        CHECK_OBJECT(var_min_inclusive);
        tmp_tuple_element_2 = var_min_inclusive;
        tmp_compexpr_right_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_compexpr_right_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_max_inclusive);
        tmp_tuple_element_2 = var_max_inclusive;
        PyTuple_SET_ITEM0(tmp_compexpr_right_3, 1, tmp_tuple_element_2);
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[42];
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 377;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 377;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_randfunc);
        tmp_compexpr_left_4 = var_randfunc;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[26]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 380;
        tmp_expression_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[27]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[28]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_randfunc;
            assert(old != NULL);
            var_randfunc = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(var_max_inclusive);
        tmp_left_name_3 = var_max_inclusive;
        CHECK_OBJECT(var_min_inclusive);
        tmp_right_name_3 = var_min_inclusive;
        tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_norm_maximum == NULL);
        var_norm_maximum = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_cls);
        tmp_called_name_1 = par_cls;
        CHECK_OBJECT(var_norm_maximum);
        tmp_args_element_name_1 = var_norm_maximum;
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 383;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 383;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[43]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bits_needed == NULL);
        var_bits_needed = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[44];
        assert(var_norm_candidate == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_norm_candidate = tmp_assign_source_9;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            if (var_norm_candidate == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;

                exception_lineno = 386;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_assign_source_10 = var_norm_candidate;
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_10;
                Py_INCREF(tmp_comparison_chain_1__operand_2);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = mod_consts[14];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_5 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_11 = RICH_COMPARE_LE_OBJECT_INT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_3;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_3 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_name_2);
        goto try_return_handler_2;
        branch_no_7:;
        {
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_6 = tmp_comparison_chain_1__operand_2;
            if (var_norm_maximum == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;

                exception_lineno = 386;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_compexpr_right_6 = var_norm_maximum;
            tmp_operand_name_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_operand_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    goto loop_end_1;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;

            exception_lineno = 387;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_cls;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[48]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_bits_needed == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;

            exception_lineno = 388;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = var_bits_needed;
        tmp_dict_key_1 = mod_consts[50];
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (var_randfunc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;

            exception_lineno = 389;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_randfunc;
        tmp_dict_key_1 = mod_consts[51];
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_32622f6d33c88b6244055165a4ab5291->m_frame.f_lineno = 387;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_norm_candidate;
            var_norm_candidate = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 386;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (var_norm_candidate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;

            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_norm_candidate;
        CHECK_OBJECT(var_min_inclusive);
        tmp_right_name_4 = var_min_inclusive;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32622f6d33c88b6244055165a4ab5291);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32622f6d33c88b6244055165a4ab5291);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32622f6d33c88b6244055165a4ab5291);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32622f6d33c88b6244055165a4ab5291, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32622f6d33c88b6244055165a4ab5291->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32622f6d33c88b6244055165a4ab5291, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32622f6d33c88b6244055165a4ab5291,
        type_description_1,
        par_cls,
        par_kwargs,
        var_min_inclusive,
        var_max_inclusive,
        var_max_exclusive,
        var_randfunc,
        var_norm_maximum,
        var_bits_needed,
        var_norm_candidate
    );


    // Release cached frame if used for exception.
    if (frame_32622f6d33c88b6244055165a4ab5291 == cache_frame_32622f6d33c88b6244055165a4ab5291) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_32622f6d33c88b6244055165a4ab5291);
        cache_frame_32622f6d33c88b6244055165a4ab5291 = NULL;
    }

    assertFrameObject(frame_32622f6d33c88b6244055165a4ab5291);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_min_inclusive);
    Py_DECREF(var_min_inclusive);
    var_min_inclusive = NULL;
    CHECK_OBJECT(var_max_inclusive);
    Py_DECREF(var_max_inclusive);
    var_max_inclusive = NULL;
    CHECK_OBJECT(var_max_exclusive);
    Py_DECREF(var_max_exclusive);
    var_max_exclusive = NULL;
    Py_XDECREF(var_randfunc);
    var_randfunc = NULL;
    Py_XDECREF(var_norm_maximum);
    var_norm_maximum = NULL;
    Py_XDECREF(var_bits_needed);
    var_bits_needed = NULL;
    Py_XDECREF(var_norm_candidate);
    var_norm_candidate = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_min_inclusive);
    var_min_inclusive = NULL;
    Py_XDECREF(var_max_inclusive);
    var_max_inclusive = NULL;
    Py_XDECREF(var_max_exclusive);
    var_max_exclusive = NULL;
    Py_XDECREF(var_randfunc);
    var_randfunc = NULL;
    Py_XDECREF(var_norm_maximum);
    var_norm_maximum = NULL;
    Py_XDECREF(var_bits_needed);
    var_bits_needed = NULL;
    Py_XDECREF(var_norm_candidate);
    var_norm_candidate = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

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



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_10___gt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[74],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9cd9783e36df94ab9131ba30317f63b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_11___ge__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[75],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_61367ff8250b7dd0c6dd2fb90231860d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_12___nonzero__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4286c7aba15e970a0f20ffec803a6afa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_13_is_negative() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[78],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52511013513a3b4fe3e433605b4a98fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_14___add__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[79],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a9e267370f062e93893eac17dd17049,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_15___sub__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[80],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d34992dcd7fb4dfa0e16a2bbb0fa582,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_16___mul__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[81],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fad6f7f0b28689b9863c919808bf59d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_17___floordiv__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[82],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d396c0ee0f29f1ff93fc46ac98e05c85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_18___mod__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[83],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_69765c863d8e99cdb46895909ae5c35c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_19_inplace_pow(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_417b76468b06eb376309e83ca4c73831,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_1___int__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[65],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c04401f98a5b052bd650454ed0686567,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_20___pow__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[86],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e37ee5233f0fd33d4c0529b1f74beef4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_21___abs__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[87],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fcd0520d18d76230e308e272fbb94a85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_22_sqrt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4391d2f792454c2fd2adf8606d53398e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_23___iadd__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[89],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c15ce6ccf5ffdb30f06895919cf4b18,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_24___isub__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a362c2e887bf3a25e54c76c0706a2b26,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_25___imul__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[91],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_17e2e074c0444e317fbebee56c05c22f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_26___imod__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_30f8022cfe51daf1fa3b66ba125fbab8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_27___and__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[93],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_50fe524d32ba5fbe96ae50b68ccaca99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_28___or__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_07ec0430e7cd9c8ada376bd7b92ee1e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_29___rshift__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[95],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_521cf37f40a22c88bea36de89ef9da68,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_2___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_07fb6859c33bef0306865c0cb86a999f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_30___irshift__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[96],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_197d1685f4a660632ffe58ee37518c6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_31___lshift__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[97],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_74657d20fc23a695496cdc5c9d32c8ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_32___ilshift__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[98],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1316b390dc7d36dcf9af1bac8eeadc56,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_33_get_bit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7e168f586da743c55233ea76c32302e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_34_is_odd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6305324d58108b9a323aad47b4bf63e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_35_is_even() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[101],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c749603d4c9e499fd7e884ce20b59383,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_36_size_in_bits() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[43],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4c9f1b9a06f8c9a66eeaa56a1f4f198,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_37_size_in_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[102],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e23b7a1b19fa6b2b69506ca66ddddf6f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_38_is_perfect_square() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[103],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5024c569057b52be0819d2b636fa9d89,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_39_fail_if_divisible_by() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[104],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a5c43c19f9844d079b0fb4c7210268a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_3___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[67],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52534046930318b3f524ac1e42f5bdfa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_40_multiply_accumulate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[105],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb9dc12e81480fcee7d90dc0b4586c1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_41_set() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cca08f7531978de3d485f43dd36bb149,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_42_inplace_inverse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[107],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_00f703ae353487617b58f9842f699d1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_43_inverse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b477ad23f647b0cec7e25b01281482a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_44_gcd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[109],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23363a7f673697bd6aa62ac3974dcde9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_45_lcm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[110],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59fd72e3397c867e622222cdaadf0811,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_46_jacobi_symbol() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[111],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0807bc1021454d61841e467874b76e32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_47__tonelli_shanks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Math$_IntegerBase$$$function_47__tonelli_shanks,
        mod_consts[112],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e12b3c2b252b03e77fe935bade507e22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_48_random() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Math$_IntegerBase$$$function_48_random,
        mod_consts[48],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_21ee15774d3966873e32a89b3b5b2efe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_49_random_range() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Math$_IntegerBase$$$function_49_random_range,
        mod_consts[113],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_32622f6d33c88b6244055165a4ab5291,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_4_to_bytes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[69],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed4fa264a723b0b249a4389a426c7ffb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_5_from_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3ddc433a9c3b1b6593ced32f5779c3c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_6___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[70],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8a1b5cba4853831d13e5eb5e666d94ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_7___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_69a1d38ce039cf38a4d5fc0532eccd8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_8___lt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_195b4d5e31e7900a5b7e1d129145ce4d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_9___le__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8304c8b30c291de9efcb497dbd3f129,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Math$_IntegerBase,
        NULL,
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

function_impl_code functable_Crypto$Math$_IntegerBase[] = {
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
    impl_Crypto$Math$_IntegerBase$$$function_47__tonelli_shanks,
    impl_Crypto$Math$_IntegerBase$$$function_48_random,
    impl_Crypto$Math$_IntegerBase$$$function_49_random_range,
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

    function_impl_code *current = functable_Crypto$Math$_IntegerBase;
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

    if (offset > sizeof(functable_Crypto$Math$_IntegerBase) || offset < 0) {
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
        functable_Crypto$Math$_IntegerBase[offset],
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
        module_Crypto$Math$_IntegerBase,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "Crypto.Math._IntegerBase";

// Internal entry point for module code.
PyObject *modulecode_Crypto$Math$_IntegerBase(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_Crypto$Math$_IntegerBase = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("Crypto.Math._IntegerBase: Skipping module init, already done.\n");
#endif

        return module_Crypto$Math$_IntegerBase;
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
    PRINT_STRING("Crypto.Math._IntegerBase: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Crypto.Math._IntegerBase: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Crypto.Math._IntegerBase: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initCrypto$Math$_IntegerBase\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_Crypto$Math$_IntegerBase = MODULE_DICT(module_Crypto$Math$_IntegerBase);

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
        moduledict_Crypto$Math$_IntegerBase,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Crypto$Math$_IntegerBase,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Crypto$Math$_IntegerBase,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Math$_IntegerBase,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Math$_IntegerBase,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Crypto$Math$_IntegerBase);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Crypto$Math$_IntegerBase);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_e1089bb1d1b11f0e195a86ba3a8a0c49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_174a3fe7136e5ce824fdfeff5c1d1668_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e1089bb1d1b11f0e195a86ba3a8a0c49 = MAKE_MODULE_FRAME(codeobj_e1089bb1d1b11f0e195a86ba3a8a0c49, module_Crypto$Math$_IntegerBase);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e1089bb1d1b11f0e195a86ba3a8a0c49);
    assert(Py_REFCNT(frame_e1089bb1d1b11f0e195a86ba3a8a0c49) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = mod_consts[56];
        tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Math$_IntegerBase;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_e1089bb1d1b11f0e195a86ba3a8a0c49->m_frame.f_lineno = 31;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = mod_consts[57];
        tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Math$_IntegerBase;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[58];
        frame_e1089bb1d1b11f0e195a86ba3a8a0c49->m_frame.f_lineno = 33;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[32]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[34]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[59]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = mod_consts[60];
        tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Math$_IntegerBase;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[61];
        frame_e1089bb1d1b11f0e195a86ba3a8a0c49->m_frame.f_lineno = 35;
        tmp_import_name_from_5 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[26]);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        tmp_assign_source_10 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[63], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2)) {
            Py_XDECREF(cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2 = MAKE_FUNCTION_FRAME(codeobj_174a3fe7136e5ce824fdfeff5c1d1668, module_Crypto$Math$_IntegerBase, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_type_description == NULL);
        frame_174a3fe7136e5ce824fdfeff5c1d1668_2 = cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_174a3fe7136e5ce824fdfeff5c1d1668_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_174a3fe7136e5ce824fdfeff5c1d1668_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_1 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_1___int__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[64], tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_2 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_2___str__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 45;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[64], tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_3 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_3___repr__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 49;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[64], tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_defaults_1;
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = mod_consts[68];
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_name_4 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_4_to_bytes(tmp_defaults_1);

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[64], tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_5;
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_5 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_5_from_bytes();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 58;
            tmp_staticmethod_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[64], tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_staticmethod_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_6;
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_6 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_6___eq__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[64], tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_7;
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_7 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_7___ne__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[64], tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_8;
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_8 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_8___lt__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[64], tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_9 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_9___le__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[64], tmp_args_element_name_9);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_10;
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_10 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_10___gt__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 79;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[64], tmp_args_element_name_10);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_11 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_11___ge__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 83;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[64], tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_name_12;
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_12 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_12___nonzero__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 87;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[64], tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = DICT_GET_ITEM0(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[76]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[76]);

            exception_lineno = 90;

            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_2;
        }
        tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[77], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_name_13;
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_13 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_13_is_negative();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[64], tmp_args_element_name_13);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_name_14;
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_14 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_14___add__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[64], tmp_args_element_name_14);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_name_15;
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_15 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_15___sub__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 101;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[64], tmp_args_element_name_15);
            Py_DECREF(tmp_args_element_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_name_16;
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_16 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_16___mul__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 105;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[64], tmp_args_element_name_16);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_name_17;
            tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_17 == NULL)) {
                tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_17 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_17___floordiv__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[64], tmp_args_element_name_17);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_name_18;
            tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_18 == NULL)) {
                tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_18 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_18___mod__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[64], tmp_args_element_name_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_defaults_2;
            tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_19 == NULL)) {
                tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[84];
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_name_19 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_19_inplace_pow(tmp_defaults_2);

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[64], tmp_args_element_name_19);
            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_defaults_3;
            tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_20 == NULL)) {
                tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto frame_exception_exit_2;
            }
            tmp_defaults_3 = mod_consts[84];
            Py_INCREF(tmp_defaults_3);


            tmp_args_element_name_20 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_20___pow__(tmp_defaults_3);

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[64], tmp_args_element_name_20);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_name_21;
            tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_21 == NULL)) {
                tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_21 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_21___abs__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 125;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[64], tmp_args_element_name_21);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_defaults_4;
            tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_22 == NULL)) {
                tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto frame_exception_exit_2;
            }
            tmp_defaults_4 = mod_consts[84];
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_name_22 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_22_sqrt(tmp_defaults_4);

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 129;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[64], tmp_args_element_name_22);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_name_23;
            tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_23 == NULL)) {
                tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_23 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_23___iadd__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 133;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[64], tmp_args_element_name_23);
            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_name_24;
            tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_24 == NULL)) {
                tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_24 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_24___isub__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[64], tmp_args_element_name_24);
            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_name_25;
            tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_25 == NULL)) {
                tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_25 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_25___imul__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 141;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[64], tmp_args_element_name_25);
            Py_DECREF(tmp_args_element_name_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_name_26;
            tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_26 == NULL)) {
                tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_26 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_26___imod__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 145;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[64], tmp_args_element_name_26);
            Py_DECREF(tmp_args_element_name_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_name_27;
            tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_27 == NULL)) {
                tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_27 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_27___and__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[64], tmp_args_element_name_27);
            Py_DECREF(tmp_args_element_name_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_name_28;
            tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_28 == NULL)) {
                tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_28 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_28___or__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[64], tmp_args_element_name_28);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_name_29;
            tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_29 == NULL)) {
                tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_29 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_29___rshift__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[64], tmp_args_element_name_29);
            Py_DECREF(tmp_args_element_name_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_name_30;
            tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_30 == NULL)) {
                tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_30 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_30___irshift__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[64], tmp_args_element_name_30);
            Py_DECREF(tmp_args_element_name_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_name_31;
            tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_31 == NULL)) {
                tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_31 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_31___lshift__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[64], tmp_args_element_name_31);
            Py_DECREF(tmp_args_element_name_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_name_32;
            tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_32 == NULL)) {
                tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_32 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_32___ilshift__();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[64], tmp_args_element_name_32);
            Py_DECREF(tmp_args_element_name_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_name_33;
            tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_33 == NULL)) {
                tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_33 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_33_get_bit();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[64], tmp_args_element_name_33);
            Py_DECREF(tmp_args_element_name_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_name_34;
            tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_34 == NULL)) {
                tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_34 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_34_is_odd();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[64], tmp_args_element_name_34);
            Py_DECREF(tmp_args_element_name_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_name_35;
            tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_35 == NULL)) {
                tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_35 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_35_is_even();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 183;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_35, mod_consts[64], tmp_args_element_name_35);
            Py_DECREF(tmp_args_element_name_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_name_36;
            tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_36 == NULL)) {
                tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_36 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_36_size_in_bits();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 187;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_36, mod_consts[64], tmp_args_element_name_36);
            Py_DECREF(tmp_args_element_name_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_name_37;
            tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_37 == NULL)) {
                tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_37 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_37_size_in_bytes();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_37, mod_consts[64], tmp_args_element_name_37);
            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_name_38;
            tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_38 == NULL)) {
                tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_38 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_38_is_perfect_square();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 195;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[64], tmp_args_element_name_38);
            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_name_39;
            tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_39 == NULL)) {
                tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_39 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_39_fail_if_divisible_by();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 199;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_39, mod_consts[64], tmp_args_element_name_39);
            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_name_40;
            tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_40 == NULL)) {
                tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_40 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_40_multiply_accumulate();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 203;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[64], tmp_args_element_name_40);
            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_name_41;
            tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_41 == NULL)) {
                tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_41 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_41_set();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_41, mod_consts[64], tmp_args_element_name_41);
            Py_DECREF(tmp_args_element_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_name_42;
            tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_42 == NULL)) {
                tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_42 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_42_inplace_inverse();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[64], tmp_args_element_name_42);
            Py_DECREF(tmp_args_element_name_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_name_43;
            tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_43 == NULL)) {
                tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_43 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_43_inverse();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 215;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_43, mod_consts[64], tmp_args_element_name_43);
            Py_DECREF(tmp_args_element_name_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_name_44;
            tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_44 == NULL)) {
                tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_44 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_44_gcd();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_44, mod_consts[64], tmp_args_element_name_44);
            Py_DECREF(tmp_args_element_name_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_name_45;
            tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_45 == NULL)) {
                tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_45 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_45_lcm();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 223;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_45, mod_consts[64], tmp_args_element_name_45);
            Py_DECREF(tmp_args_element_name_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_staticmethod_arg_2;
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_name_46;
            tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_instance_46 == NULL)) {
                tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_instance_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_46 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_46_jacobi_symbol();

            frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame.f_lineno = 228;
            tmp_staticmethod_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_46, mod_consts[64], tmp_args_element_name_46);
            Py_DECREF(tmp_args_element_name_46);
            if (tmp_staticmethod_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_2);
            Py_DECREF(tmp_staticmethod_arg_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_174a3fe7136e5ce824fdfeff5c1d1668_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_174a3fe7136e5ce824fdfeff5c1d1668_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_174a3fe7136e5ce824fdfeff5c1d1668_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_174a3fe7136e5ce824fdfeff5c1d1668_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_174a3fe7136e5ce824fdfeff5c1d1668_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_174a3fe7136e5ce824fdfeff5c1d1668_2,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_174a3fe7136e5ce824fdfeff5c1d1668_2 == cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2);
            cache_frame_174a3fe7136e5ce824fdfeff5c1d1668_2 = NULL;
        }

        assertFrameObject(frame_174a3fe7136e5ce824fdfeff5c1d1668_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_staticmethod_arg_3;


            tmp_staticmethod_arg_3 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_47__tonelli_shanks();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_3);
            Py_DECREF(tmp_staticmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_1;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_48_random();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_2;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_Crypto$Math$_IntegerBase$$$function_49_random_range();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_assign_source_11 = locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38);
        locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38 = NULL;
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

        Py_DECREF(locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38);
        locals_Crypto$Math$_IntegerBase$$$class_1_IntegerBase_38 = NULL;
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
        exception_lineno = 38;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = mod_consts[114];
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
        tmp_key_name_2 = mod_consts[114];
        tmp_assign_source_12 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_expression_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_expression_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = mod_consts[14];
            tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_2;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_13;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_2;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_expression_name_2 = tmp_select_metaclass_1__base;
            tmp_assign_source_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

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
            tmp_assign_source_12 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_12 == NULL));
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
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_47 = mod_consts[115];
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_48 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_49 = tmp_class_creation_1__class_dict;
        frame_e1089bb1d1b11f0e195a86ba3a8a0c49->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_14;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1089bb1d1b11f0e195a86ba3a8a0c49);
#endif
    popFrameStack();

    assertFrameObject(frame_e1089bb1d1b11f0e195a86ba3a8a0c49);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1089bb1d1b11f0e195a86ba3a8a0c49);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1089bb1d1b11f0e195a86ba3a8a0c49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1089bb1d1b11f0e195a86ba3a8a0c49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1089bb1d1b11f0e195a86ba3a8a0c49, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_15 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_Crypto$Math$_IntegerBase, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_15);
    }
    CHECK_OBJECT(tmp_class_creation_1__class);
    Py_DECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    return module_Crypto$Math$_IntegerBase;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

