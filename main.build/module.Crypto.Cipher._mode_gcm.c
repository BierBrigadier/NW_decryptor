/* Generated code for Python module 'Crypto.Cipher._mode_gcm'
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

/* The "module_Crypto$Cipher$_mode_gcm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Cipher$_mode_gcm;
PyDictObject *moduledict_Crypto$Cipher$_mode_gcm;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "Crypto.Cipher._mode_gcm", 198);

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
void checkModuleConstants_Crypto$Cipher$_mode_gcm(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "Crypto.Cipher._mode_gcm", 198);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2ac6f7f96dace0d0a031a5d9933a8ac8;
static PyCodeObject *codeobj_2a714b69d18343f2bf70a8ac845d496f;
static PyCodeObject *codeobj_1bc4376123579d9c5999850e04cdca88;
static PyCodeObject *codeobj_0b93cb99dcd8dffbc56cb51f3a1de76a;
static PyCodeObject *codeobj_c8efb386a348e629607bcde6e49a993b;
static PyCodeObject *codeobj_5178a68f291e5027e7c649b09c6fbd3d;
static PyCodeObject *codeobj_4191f4d175b4f8c445cde9f1c77b0ff9;
static PyCodeObject *codeobj_73449450f1c3897c9ef253c936982695;
static PyCodeObject *codeobj_b881537c6408595a529ce3a98725d0c8;
static PyCodeObject *codeobj_810ba0a2ffe3dc1a9dbf9b331257742e;
static PyCodeObject *codeobj_c75732eef394dba2911c20a3ca52020a;
static PyCodeObject *codeobj_146264e81f3c245277146ac6c708554d;
static PyCodeObject *codeobj_3dcf3df066b888c416a4ff4d81636850;
static PyCodeObject *codeobj_b536213da687cd94c861e3d5d2545abd;
static PyCodeObject *codeobj_9b46a4063e0c05a5439868c5cc1da830;
static PyCodeObject *codeobj_799346ec0fbf1921ed585f571a62310d;
static PyCodeObject *codeobj_6fae3e27b81680a00ecbb83f3a6d1d2e;
static PyCodeObject *codeobj_0a3ae2c0471a271b9037b0d2daa52e51;
static PyCodeObject *codeobj_422b19fcb94fc5f39eb1829a0b5d972d;
static PyCodeObject *codeobj_d9244188178a382e2b37ac63008f24ce;
static PyCodeObject *codeobj_5dc039b05ec4217e574154ae8d22a8ed;
static PyCodeObject *codeobj_e9163dacbf171ce8a81259180f33a5b0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[142]; CHECK_OBJECT(module_filename_obj);
    codeobj_2ac6f7f96dace0d0a031a5d9933a8ac8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[178], NULL, NULL, 0, 0, 0);
    codeobj_2a714b69d18343f2bf70a8ac845d496f = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[179], NULL, 7, 0, 0);
    codeobj_1bc4376123579d9c5999850e04cdca88 = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[180], NULL, 3, 0, 0);
    codeobj_0b93cb99dcd8dffbc56cb51f3a1de76a = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[181], NULL, 2, 0, 0);
    codeobj_c8efb386a348e629607bcde6e49a993b = MAKE_CODEOBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[182], NULL, 1, 0, 0);
    codeobj_5178a68f291e5027e7c649b09c6fbd3d = MAKE_CODEOBJECT(module_filename_obj, 571, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[177], mod_consts[183], NULL, 1, 0, 0);
    codeobj_4191f4d175b4f8c445cde9f1c77b0ff9 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[184], NULL, 0, 0, 0);
    codeobj_73449450f1c3897c9ef253c936982695 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[184], NULL, 0, 0, 0);
    codeobj_b881537c6408595a529ce3a98725d0c8 = MAKE_CODEOBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[185], NULL, 1, 0, 0);
    codeobj_810ba0a2ffe3dc1a9dbf9b331257742e = MAKE_CODEOBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[186], NULL, 2, 0, 0);
    codeobj_c75732eef394dba2911c20a3ca52020a = MAKE_CODEOBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[187], NULL, 3, 0, 0);
    codeobj_146264e81f3c245277146ac6c708554d = MAKE_CODEOBJECT(module_filename_obj, 547, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], mod_consts[188], NULL, 4, 0, 0);
    codeobj_3dcf3df066b888c416a4ff4d81636850 = MAKE_CODEOBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[189], NULL, 1, 0, 0);
    codeobj_b536213da687cd94c861e3d5d2545abd = MAKE_CODEOBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[189], NULL, 1, 0, 0);
    codeobj_9b46a4063e0c05a5439868c5cc1da830 = MAKE_CODEOBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[190], NULL, 3, 0, 0);
    codeobj_799346ec0fbf1921ed585f571a62310d = MAKE_CODEOBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[191], NULL, 3, 0, 0);
    codeobj_6fae3e27b81680a00ecbb83f3a6d1d2e = MAKE_CODEOBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[169], mod_consts[192], NULL, 0, 0, 0);
    codeobj_0a3ae2c0471a271b9037b0d2daa52e51 = MAKE_CODEOBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[193], NULL, 1, 0, 0);
    codeobj_422b19fcb94fc5f39eb1829a0b5d972d = MAKE_CODEOBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[173], mod_consts[194], NULL, 2, 0, 0);
    codeobj_d9244188178a382e2b37ac63008f24ce = MAKE_CODEOBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[195], NULL, 2, 0, 0);
    codeobj_5dc039b05ec4217e574154ae8d22a8ed = MAKE_CODEOBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[196], NULL, 2, 0, 0);
    codeobj_e9163dacbf171ce8a81259180f33a5b0 = MAKE_CODEOBJECT(module_filename_obj, 478, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[197], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_1_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_5_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_10__update();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_11__pad_cache_and_update();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_12_encrypt(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_13_decrypt(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_14_digest();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_15__compute_mac();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_16_hexdigest();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_17_verify();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_18_hexverify();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_19_encrypt_and_digest(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_1__build_impl();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_20_decrypt_and_verify(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_21__create_gcm_cipher();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_2__get_ghash_portable();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_3__get_ghash_clmul();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_4___init__();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_5_update();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_6_digest();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_7_enum();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_8___init__();


static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_9_update();


// The module function definitions.
static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_1__build_impl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lib = python_pars[0];
    PyObject *par_postfix = python_pars[1];
    PyObject *var_namedtuple = NULL;
    PyObject *var_funcs = NULL;
    PyObject *var_GHASH_Imp = NULL;
    PyObject *var_x = NULL;
    PyObject *var_imp_funcs = NULL;
    PyObject *var_params = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0b93cb99dcd8dffbc56cb51f3a1de76a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a)) {
        Py_XDECREF(cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a = MAKE_FUNCTION_FRAME(codeobj_0b93cb99dcd8dffbc56cb51f3a1de76a, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_type_description == NULL);
    frame_0b93cb99dcd8dffbc56cb51f3a1de76a = cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b93cb99dcd8dffbc56cb51f3a1de76a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b93cb99dcd8dffbc56cb51f3a1de76a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = mod_consts[0];
        tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[1];
        frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_frame.f_lineno = 67;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_namedtuple == NULL);
        var_namedtuple = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[3];
        assert(var_funcs == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_funcs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_namedtuple);
        tmp_called_name_1 = var_namedtuple;
        tmp_args_element_name_1 = mod_consts[4];
        CHECK_OBJECT(var_funcs);
        tmp_args_element_name_2 = var_funcs;
        frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_GHASH_Imp == NULL);
        var_GHASH_Imp = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_funcs);
            tmp_iter_arg_1 = var_funcs;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_list_contraction_1__$0 == NULL);
            tmp_list_contraction_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyList_New(0);
            assert(tmp_list_contraction_1__contraction_result == NULL);
            tmp_list_contraction_1__contraction_result = tmp_assign_source_6;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_list_contraction_1__$0);
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooo";
                    exception_lineno = 72;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_list_contraction_1__iter_value_0);
            tmp_assign_source_8 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_8;
                Py_INCREF(var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            if (par_lib == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
                exception_tb = NULL;

                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_getattr_target_1 = par_lib;
            CHECK_OBJECT(var_x);
            tmp_left_name_2 = var_x;
            tmp_right_name_1 = mod_consts[6];
            tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_STR(tmp_left_name_2, tmp_right_name_1);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            if (par_postfix == NULL) {
                Py_DECREF(tmp_left_name_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;

                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_right_name_2 = par_postfix;
            tmp_getattr_attr_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
            Py_DECREF(tmp_left_name_1);
            if (tmp_getattr_attr_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
            Py_DECREF(tmp_getattr_attr_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        tmp_assign_source_4 = tmp_list_contraction_1__contraction_result;
        Py_INCREF(tmp_assign_source_4);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_list_contraction_1__$0);
        Py_DECREF(tmp_list_contraction_1__$0);
        tmp_list_contraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        Py_DECREF(tmp_list_contraction_1__contraction_result);
        tmp_list_contraction_1__contraction_result = NULL;
        Py_XDECREF(tmp_list_contraction_1__iter_value_0);
        tmp_list_contraction_1__iter_value_0 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_list_contraction_1__$0);
        tmp_list_contraction_1__$0 = NULL;
        Py_XDECREF(tmp_list_contraction_1__contraction_result);
        tmp_list_contraction_1__contraction_result = NULL;
        Py_XDECREF(tmp_list_contraction_1__iter_value_0);
        tmp_list_contraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        assert(var_imp_funcs == NULL);
        var_imp_funcs = tmp_assign_source_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_0b93cb99dcd8dffbc56cb51f3a1de76a);
    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_0b93cb99dcd8dffbc56cb51f3a1de76a, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_0b93cb99dcd8dffbc56cb51f3a1de76a, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY(mod_consts[8]);
        assert(var_imp_funcs == NULL);
        var_imp_funcs = tmp_assign_source_9;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 71;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_frame) frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_name_2 != NULL);
        CHECK_OBJECT(var_funcs);
        tmp_args_element_name_3 = var_funcs;
        if (var_imp_funcs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;

            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_imp_funcs;
        frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_10;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_GHASH_Imp);
        tmp_dircall_arg1_1 = var_GHASH_Imp;
        CHECK_OBJECT(var_params);
        tmp_dircall_arg2_1 = var_params;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function_8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_0b93cb99dcd8dffbc56cb51f3a1de76a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_0b93cb99dcd8dffbc56cb51f3a1de76a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_0b93cb99dcd8dffbc56cb51f3a1de76a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b93cb99dcd8dffbc56cb51f3a1de76a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b93cb99dcd8dffbc56cb51f3a1de76a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b93cb99dcd8dffbc56cb51f3a1de76a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b93cb99dcd8dffbc56cb51f3a1de76a,
        type_description_1,
        par_lib,
        par_postfix,
        var_namedtuple,
        var_funcs,
        var_GHASH_Imp,
        var_x,
        var_imp_funcs,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_0b93cb99dcd8dffbc56cb51f3a1de76a == cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a);
        cache_frame_0b93cb99dcd8dffbc56cb51f3a1de76a = NULL;
    }

    assertFrameObject(frame_0b93cb99dcd8dffbc56cb51f3a1de76a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_namedtuple);
    Py_DECREF(var_namedtuple);
    var_namedtuple = NULL;
    CHECK_OBJECT(var_funcs);
    Py_DECREF(var_funcs);
    var_funcs = NULL;
    CHECK_OBJECT(var_GHASH_Imp);
    Py_DECREF(var_GHASH_Imp);
    var_GHASH_Imp = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_imp_funcs);
    var_imp_funcs = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_namedtuple);
    var_namedtuple = NULL;
    Py_XDECREF(var_funcs);
    var_funcs = NULL;
    Py_XDECREF(var_GHASH_Imp);
    var_GHASH_Imp = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_imp_funcs);
    var_imp_funcs = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lib);
    Py_DECREF(par_lib);
    CHECK_OBJECT(par_postfix);
    Py_DECREF(par_postfix);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lib);
    Py_DECREF(par_lib);
    CHECK_OBJECT(par_postfix);
    Py_DECREF(par_postfix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_2__get_ghash_portable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_api = NULL;
    PyObject *var_lib = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_73449450f1c3897c9ef253c936982695;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_73449450f1c3897c9ef253c936982695 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_73449450f1c3897c9ef253c936982695)) {
        Py_XDECREF(cache_frame_73449450f1c3897c9ef253c936982695);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73449450f1c3897c9ef253c936982695 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73449450f1c3897c9ef253c936982695 = MAKE_FUNCTION_FRAME(codeobj_73449450f1c3897c9ef253c936982695, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_73449450f1c3897c9ef253c936982695->m_type_description == NULL);
    frame_73449450f1c3897c9ef253c936982695 = cache_frame_73449450f1c3897c9ef253c936982695;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_73449450f1c3897c9ef253c936982695);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_73449450f1c3897c9ef253c936982695) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_73449450f1c3897c9ef253c936982695->m_frame.f_lineno = 80;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[12], &PyTuple_GET_ITEM(mod_consts[13], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_api == NULL);
        var_api = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[15];
        CHECK_OBJECT(var_api);
        tmp_args_element_name_2 = var_api;
        frame_73449450f1c3897c9ef253c936982695->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_lib == NULL);
        var_lib = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lib);
        tmp_args_element_name_3 = var_lib;
        tmp_args_element_name_4 = mod_consts[17];
        frame_73449450f1c3897c9ef253c936982695->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73449450f1c3897c9ef253c936982695);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73449450f1c3897c9ef253c936982695);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73449450f1c3897c9ef253c936982695, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73449450f1c3897c9ef253c936982695->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73449450f1c3897c9ef253c936982695, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73449450f1c3897c9ef253c936982695,
        type_description_1,
        var_api,
        var_lib,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_73449450f1c3897c9ef253c936982695 == cache_frame_73449450f1c3897c9ef253c936982695) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_73449450f1c3897c9ef253c936982695);
        cache_frame_73449450f1c3897c9ef253c936982695 = NULL;
    }

    assertFrameObject(frame_73449450f1c3897c9ef253c936982695);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_api);
    Py_DECREF(var_api);
    var_api = NULL;
    CHECK_OBJECT(var_lib);
    Py_DECREF(var_lib);
    var_lib = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_api);
    var_api = NULL;
    Py_XDECREF(var_lib);
    var_lib = NULL;
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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_3__get_ghash_clmul(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_api = NULL;
    PyObject *var_lib = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_4191f4d175b4f8c445cde9f1c77b0ff9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9)) {
        Py_XDECREF(cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9 = MAKE_FUNCTION_FRAME(codeobj_4191f4d175b4f8c445cde9f1c77b0ff9, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_type_description == NULL);
    frame_4191f4d175b4f8c445cde9f1c77b0ff9 = cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4191f4d175b4f8c445cde9f1c77b0ff9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4191f4d175b4f8c445cde9f1c77b0ff9) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame.f_lineno = 90;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[19]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame.f_lineno = 93;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[12], &PyTuple_GET_ITEM(mod_consts[20], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_api == NULL);
        var_api = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = mod_consts[21];
        CHECK_OBJECT(var_api);
        tmp_args_element_name_2 = var_api;
        frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_lib == NULL);
        var_lib = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lib);
        tmp_args_element_name_3 = var_lib;
        tmp_args_element_name_4 = mod_consts[22];
        frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_4191f4d175b4f8c445cde9f1c77b0ff9);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4191f4d175b4f8c445cde9f1c77b0ff9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4191f4d175b4f8c445cde9f1c77b0ff9, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_result = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 92;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame) frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_4191f4d175b4f8c445cde9f1c77b0ff9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_4191f4d175b4f8c445cde9f1c77b0ff9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_4191f4d175b4f8c445cde9f1c77b0ff9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4191f4d175b4f8c445cde9f1c77b0ff9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4191f4d175b4f8c445cde9f1c77b0ff9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4191f4d175b4f8c445cde9f1c77b0ff9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4191f4d175b4f8c445cde9f1c77b0ff9,
        type_description_1,
        var_api,
        var_lib,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_4191f4d175b4f8c445cde9f1c77b0ff9 == cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9);
        cache_frame_4191f4d175b4f8c445cde9f1c77b0ff9 = NULL;
    }

    assertFrameObject(frame_4191f4d175b4f8c445cde9f1c77b0ff9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_api);
    var_api = NULL;
    Py_XDECREF(var_lib);
    var_lib = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_api);
    var_api = NULL;
    Py_XDECREF(var_lib);
    var_lib = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_subkey = python_pars[1];
    PyObject *par_ghash_c = python_pars[2];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_1bc4376123579d9c5999850e04cdca88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1bc4376123579d9c5999850e04cdca88 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1bc4376123579d9c5999850e04cdca88)) {
        Py_XDECREF(cache_frame_1bc4376123579d9c5999850e04cdca88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bc4376123579d9c5999850e04cdca88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bc4376123579d9c5999850e04cdca88 = MAKE_FUNCTION_FRAME(codeobj_1bc4376123579d9c5999850e04cdca88, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1bc4376123579d9c5999850e04cdca88->m_type_description == NULL);
    frame_1bc4376123579d9c5999850e04cdca88 = cache_frame_1bc4376123579d9c5999850e04cdca88;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1bc4376123579d9c5999850e04cdca88);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1bc4376123579d9c5999850e04cdca88) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_subkey);
        tmp_len_arg_1 = par_subkey;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[25];
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ghash_c);
        tmp_assattr_name_1 = par_ghash_c;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[27]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 119;
        tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_ghash_c);
        tmp_expression_name_1 = par_ghash_c;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[29]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[30]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_subkey);
        tmp_args_element_name_2 = par_subkey;
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 120;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[28]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 121;
        tmp_args_element_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_result);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_result);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[32];
        CHECK_OBJECT(var_result);
        tmp_right_name_1 = var_result;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 123;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_3;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[33]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[28]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 125;
        tmp_args_element_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[35]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_ghash_c == NULL) {
            Py_DECREF(tmp_args_element_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;

            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_ghash_c;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[36]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[28], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_assattr_target_4;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[37]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1bc4376123579d9c5999850e04cdca88->m_frame.f_lineno = 129;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[25]);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[38], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bc4376123579d9c5999850e04cdca88);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bc4376123579d9c5999850e04cdca88);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bc4376123579d9c5999850e04cdca88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bc4376123579d9c5999850e04cdca88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bc4376123579d9c5999850e04cdca88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bc4376123579d9c5999850e04cdca88,
        type_description_1,
        par_self,
        par_subkey,
        par_ghash_c,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_1bc4376123579d9c5999850e04cdca88 == cache_frame_1bc4376123579d9c5999850e04cdca88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1bc4376123579d9c5999850e04cdca88);
        cache_frame_1bc4376123579d9c5999850e04cdca88 = NULL;
    }

    assertFrameObject(frame_1bc4376123579d9c5999850e04cdca88);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_ghash_c);
    par_ghash_c = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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
    Py_XDECREF(par_ghash_c);
    par_ghash_c = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_subkey);
    Py_DECREF(par_subkey);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_subkey);
    Py_DECREF(par_subkey);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_5_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_block_data = python_pars[1];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_5dc039b05ec4217e574154ae8d22a8ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5dc039b05ec4217e574154ae8d22a8ed = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5dc039b05ec4217e574154ae8d22a8ed)) {
        Py_XDECREF(cache_frame_5dc039b05ec4217e574154ae8d22a8ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5dc039b05ec4217e574154ae8d22a8ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5dc039b05ec4217e574154ae8d22a8ed = MAKE_FUNCTION_FRAME(codeobj_5dc039b05ec4217e574154ae8d22a8ed, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5dc039b05ec4217e574154ae8d22a8ed->m_type_description == NULL);
    frame_5dc039b05ec4217e574154ae8d22a8ed = cache_frame_5dc039b05ec4217e574154ae8d22a8ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5dc039b05ec4217e574154ae8d22a8ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5dc039b05ec4217e574154ae8d22a8ed) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_block_data);
        tmp_len_arg_1 = par_block_data;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[25];
        tmp_compexpr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[39];
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 132;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[26]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[40]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[38]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[30]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_block_data);
        tmp_args_element_name_3 = par_block_data;
        frame_5dc039b05ec4217e574154ae8d22a8ed->m_frame.f_lineno = 135;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[41]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_block_data);
        tmp_len_arg_2 = par_block_data;
        tmp_args_element_name_5 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5dc039b05ec4217e574154ae8d22a8ed->m_frame.f_lineno = 136;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[38]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[28]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5dc039b05ec4217e574154ae8d22a8ed->m_frame.f_lineno = 138;
        tmp_args_element_name_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[35]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5dc039b05ec4217e574154ae8d22a8ed->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_result);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_result);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[42];
        CHECK_OBJECT(var_result);
        tmp_right_name_2 = var_result;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_STR_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5dc039b05ec4217e574154ae8d22a8ed->m_frame.f_lineno = 140;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 140;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5dc039b05ec4217e574154ae8d22a8ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5dc039b05ec4217e574154ae8d22a8ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5dc039b05ec4217e574154ae8d22a8ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5dc039b05ec4217e574154ae8d22a8ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5dc039b05ec4217e574154ae8d22a8ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5dc039b05ec4217e574154ae8d22a8ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5dc039b05ec4217e574154ae8d22a8ed,
        type_description_1,
        par_self,
        par_block_data,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_5dc039b05ec4217e574154ae8d22a8ed == cache_frame_5dc039b05ec4217e574154ae8d22a8ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5dc039b05ec4217e574154ae8d22a8ed);
        cache_frame_5dc039b05ec4217e574154ae8d22a8ed = NULL;
    }

    assertFrameObject(frame_5dc039b05ec4217e574154ae8d22a8ed);

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
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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
    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_block_data);
    Py_DECREF(par_block_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_block_data);
    Py_DECREF(par_block_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_6_digest(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3dcf3df066b888c416a4ff4d81636850;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3dcf3df066b888c416a4ff4d81636850 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3dcf3df066b888c416a4ff4d81636850)) {
        Py_XDECREF(cache_frame_3dcf3df066b888c416a4ff4d81636850);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3dcf3df066b888c416a4ff4d81636850 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3dcf3df066b888c416a4ff4d81636850 = MAKE_FUNCTION_FRAME(codeobj_3dcf3df066b888c416a4ff4d81636850, module_Crypto$Cipher$_mode_gcm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3dcf3df066b888c416a4ff4d81636850->m_type_description == NULL);
    frame_3dcf3df066b888c416a4ff4d81636850 = cache_frame_3dcf3df066b888c416a4ff4d81636850;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3dcf3df066b888c416a4ff4d81636850);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3dcf3df066b888c416a4ff4d81636850) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[43]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[38]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3dcf3df066b888c416a4ff4d81636850->m_frame.f_lineno = 145;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dcf3df066b888c416a4ff4d81636850);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dcf3df066b888c416a4ff4d81636850);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dcf3df066b888c416a4ff4d81636850);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3dcf3df066b888c416a4ff4d81636850, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3dcf3df066b888c416a4ff4d81636850->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3dcf3df066b888c416a4ff4d81636850, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3dcf3df066b888c416a4ff4d81636850,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3dcf3df066b888c416a4ff4d81636850 == cache_frame_3dcf3df066b888c416a4ff4d81636850) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3dcf3df066b888c416a4ff4d81636850);
        cache_frame_3dcf3df066b888c416a4ff4d81636850 = NULL;
    }

    assertFrameObject(frame_3dcf3df066b888c416a4ff4d81636850);

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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_7_enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_enums = python_pars[0];
    struct Nuitka_FrameObject *frame_6fae3e27b81680a00ecbb83f3a6d1d2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e)) {
        Py_XDECREF(cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e = MAKE_FUNCTION_FRAME(codeobj_6fae3e27b81680a00ecbb83f3a6d1d2e, module_Crypto$Cipher$_mode_gcm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e->m_type_description == NULL);
    frame_6fae3e27b81680a00ecbb83f3a6d1d2e = cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6fae3e27b81680a00ecbb83f3a6d1d2e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6fae3e27b81680a00ecbb83f3a6d1d2e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_type_name_name_1;
        PyObject *tmp_bases_name_1;
        PyObject *tmp_dict_name_1;
        tmp_type_name_name_1 = mod_consts[44];
        tmp_bases_name_1 = mod_consts[45];
        CHECK_OBJECT(par_enums);
        tmp_dict_name_1 = par_enums;
        tmp_return_value = BUILTIN_TYPE3(mod_consts[46], tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fae3e27b81680a00ecbb83f3a6d1d2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fae3e27b81680a00ecbb83f3a6d1d2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fae3e27b81680a00ecbb83f3a6d1d2e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fae3e27b81680a00ecbb83f3a6d1d2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fae3e27b81680a00ecbb83f3a6d1d2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fae3e27b81680a00ecbb83f3a6d1d2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fae3e27b81680a00ecbb83f3a6d1d2e,
        type_description_1,
        par_enums
    );


    // Release cached frame if used for exception.
    if (frame_6fae3e27b81680a00ecbb83f3a6d1d2e == cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e);
        cache_frame_6fae3e27b81680a00ecbb83f3a6d1d2e = NULL;
    }

    assertFrameObject(frame_6fae3e27b81680a00ecbb83f3a6d1d2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_enums);
    Py_DECREF(par_enums);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_enums);
    Py_DECREF(par_enums);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_factory = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_nonce = python_pars[3];
    PyObject *par_mac_len = python_pars[4];
    PyObject *par_cipher_params = python_pars[5];
    PyObject *par_ghash_c = python_pars[6];
    PyObject *var_hash_subkey = NULL;
    PyObject *var_j0 = NULL;
    PyObject *var_fill = NULL;
    PyObject *var_ghash_in = NULL;
    PyObject *var_nonce_ctr = NULL;
    PyObject *var_iv_ctr = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_2a714b69d18343f2bf70a8ac845d496f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_2a714b69d18343f2bf70a8ac845d496f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2a714b69d18343f2bf70a8ac845d496f)) {
        Py_XDECREF(cache_frame_2a714b69d18343f2bf70a8ac845d496f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a714b69d18343f2bf70a8ac845d496f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a714b69d18343f2bf70a8ac845d496f = MAKE_FUNCTION_FRAME(codeobj_2a714b69d18343f2bf70a8ac845d496f, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2a714b69d18343f2bf70a8ac845d496f->m_type_description == NULL);
    frame_2a714b69d18343f2bf70a8ac845d496f = cache_frame_2a714b69d18343f2bf70a8ac845d496f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2a714b69d18343f2bf70a8ac845d496f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2a714b69d18343f2bf70a8ac845d496f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_factory);
        tmp_expression_name_1 = par_factory;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[47]);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[47], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[47]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[25];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[48];
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 184;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 184;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_1 = par_nonce;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[39];
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
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
        tmp_make_exception_arg_2 = mod_consts[49];
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 188;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 188;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[50]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nonce);
        tmp_args_element_name_1 = par_nonce;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 190;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooo";
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
        tmp_make_exception_arg_3 = mod_consts[51];
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 191;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 191;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_condition_result_4_object_1;
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_2 = par_nonce;
        tmp_compexpr_left_3 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[52];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        assert(!(tmp_tmp_condition_result_4_object_1 == NULL));
        tmp_condition_result_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[53];
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 195;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 195;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[54]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = Py_None;
        tmp_args_element_name_3 = Py_None;
        CHECK_OBJECT(par_nonce);
        tmp_args_element_name_4 = par_nonce;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 198;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[55], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        if (par_factory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;

            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = par_factory;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[57], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_assattr_target_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[54]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = Py_None;
        tmp_args_element_name_6 = Py_None;
        CHECK_OBJECT(par_key);
        tmp_args_element_name_7 = par_key;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 202;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[58], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 203;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[59], tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_mac_len);
        tmp_assattr_name_6 = par_mac_len;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 205;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[60], tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_2;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_mac_len);
            tmp_assign_source_1 = par_mac_len;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = mod_consts[61];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_4 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_INT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_3;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_3 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_name_2);
        goto try_return_handler_2;
        branch_no_6:;
        {
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_5 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_5 = mod_consts[25];
            tmp_operand_name_2 = RICH_COMPARE_LE_OBJECT_OBJECT_INT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_operand_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooooooo";
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
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


            exception_lineno = 206;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[62];
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 207;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 207;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 210;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[63]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_7 = PyList_New(5);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_expression_name_7;
            PyList_SET_ITEM(tmp_assattr_name_7, 0, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[64]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_7, 1, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_expression_name_5 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[65]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_7, 2, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 211;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_expression_name_6 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[66]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_7, 3, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 211;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_expression_name_7 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[67]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_7, 4, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 210;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[68], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_False;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[69], tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = mod_consts[39];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[70], tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = mod_consts[39];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 219;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[71], tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_factory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;

            exception_lineno = 223;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_factory;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[72]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_tuple_element_1 = par_key;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_9;
            PyObject *tmp_expression_name_10;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 224;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_10 = par_self;
            tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[57]);
            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[73]);
            Py_DECREF(tmp_expression_name_9);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(par_cipher_params);
        tmp_dircall_arg3_1 = par_cipher_params;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___main__$$$function_1_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 223;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[64], &PyTuple_GET_ITEM(mod_consts[74], 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hash_subkey == NULL);
        var_hash_subkey = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_name_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 229;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_self;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[55]);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_6 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = mod_consts[75];
        tmp_condition_result_7 = RICH_COMPARE_EQ_CBOOL_OBJECT_INT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_right_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[55]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[76];
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_STR(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_j0 == NULL);
        var_j0 = tmp_assign_source_4;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        tmp_left_name_4 = mod_consts[25];
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_4 = par_nonce;
        tmp_left_name_5 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[25];
        tmp_right_name_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_INT(tmp_left_name_5, tmp_right_name_3);
        Py_DECREF(tmp_left_name_5);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_INT_OBJECT(tmp_left_name_4, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        assert(!(tmp_left_name_3 == NULL));
        tmp_right_name_4 = mod_consts[25];
        tmp_left_name_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_INT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = mod_consts[77];
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_2, tmp_right_name_5);
        Py_DECREF(tmp_left_name_2);
        assert(!(tmp_assign_source_5 == NULL));
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_args_element_name_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 233;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = par_self;
        tmp_left_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[55]);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = mod_consts[78];
        CHECK_OBJECT(var_fill);
        tmp_right_name_7 = var_fill;
        tmp_right_name_6 = BINARY_OPERATION_MULT_OBJECT_STR_OBJECT(tmp_left_name_8, tmp_right_name_7);
        assert(!(tmp_right_name_6 == NULL));
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_STR(tmp_left_name_7, tmp_right_name_6);
        Py_DECREF(tmp_left_name_7);
        Py_DECREF(tmp_right_name_6);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[79]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = mod_consts[77];
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_5 = par_nonce;
        tmp_right_name_9 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_MULT_OBJECT_INT_OBJECT(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        assert(!(tmp_args_element_name_8 == NULL));
        tmp_args_element_name_9 = mod_consts[77];
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_8);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ghash_in == NULL);
        var_ghash_in = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[80]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hash_subkey);
        tmp_args_element_name_10 = var_hash_subkey;
        CHECK_OBJECT(par_ghash_c);
        tmp_args_element_name_11 = par_ghash_c;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ghash_in);
        tmp_args_element_name_12 = var_ghash_in;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 236;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[63], tmp_args_element_name_12);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 236;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[66]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_j0 == NULL);
        var_j0 = tmp_assign_source_7;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_8;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = 12;
        CHECK_OBJECT(var_j0);
        tmp_slice_source_1 = var_j0;
        tmp_assign_source_8 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nonce_ctr == NULL);
        var_nonce_ctr = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[81]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_j0);
        tmp_args_element_name_13 = var_j0;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 240;
        tmp_left_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_13);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = mod_consts[82];
        tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_INT(tmp_left_name_11, tmp_right_name_10);
        Py_DECREF(tmp_left_name_11);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = mod_consts[83];
        tmp_assign_source_9 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_10, tmp_right_name_11);
        Py_DECREF(tmp_left_name_10);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_iv_ctr == NULL);
        var_iv_ctr = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_11;
        if (par_factory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;

            exception_lineno = 241;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_factory;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[72]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_tuple_element_2 = par_key;
        tmp_dircall_arg2_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_15;
            PyObject *tmp_expression_name_16;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 242;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_expression_name_16 = par_self;
            tmp_expression_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[57]);
            if (tmp_expression_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[84]);
            Py_DECREF(tmp_expression_name_15);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_dircall_arg1_2);
        Py_DECREF(tmp_dircall_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        CHECK_OBJECT(var_iv_ctr);
        tmp_dict_value_1 = var_iv_ctr;
        tmp_dict_key_1 = mod_consts[85];
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_nonce_ctr);
        tmp_dict_value_1 = var_nonce_ctr;
        tmp_dict_key_1 = mod_consts[55];
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_cipher_params);
        tmp_dircall_arg4_1 = par_cipher_params;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
            tmp_assattr_name_11 = impl___main__$$$function_5_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 241;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[86], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_assattr_target_12;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[80]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hash_subkey);
        tmp_args_element_name_14 = var_hash_subkey;
        CHECK_OBJECT(par_ghash_c);
        tmp_args_element_name_15 = par_ghash_c;
        frame_2a714b69d18343f2bf70a8ac845d496f->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assattr_name_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 248;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[87], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_2;
        PyObject *tmp_assattr_target_13;
        if (par_factory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;

            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = par_factory;
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[72]);
        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_tuple_element_3 = par_key;
        tmp_dircall_arg2_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_18;
            PyObject *tmp_expression_name_19;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_3, 0, tmp_tuple_element_3);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 252;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_19 = par_self;
            tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[57]);
            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[84]);
            Py_DECREF(tmp_expression_name_18);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "ooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_dircall_arg1_3);
        Py_DECREF(tmp_dircall_arg2_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        CHECK_OBJECT(var_j0);
        tmp_dict_value_2 = var_j0;
        tmp_dict_key_2 = mod_consts[85];
        tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_value_2 = mod_consts[88];
        tmp_dict_key_2 = mod_consts[55];
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_cipher_params);
        tmp_dircall_arg4_2 = par_cipher_params;
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_2};
            tmp_assattr_name_13 = impl___main__$$$function_5_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[89], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_name_14 = mod_consts[88];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[90], tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_assattr_target_15;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[91]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[92]);
        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[93], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a714b69d18343f2bf70a8ac845d496f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a714b69d18343f2bf70a8ac845d496f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a714b69d18343f2bf70a8ac845d496f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a714b69d18343f2bf70a8ac845d496f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a714b69d18343f2bf70a8ac845d496f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a714b69d18343f2bf70a8ac845d496f,
        type_description_1,
        par_self,
        par_factory,
        par_key,
        par_nonce,
        par_mac_len,
        par_cipher_params,
        par_ghash_c,
        var_hash_subkey,
        var_j0,
        var_fill,
        var_ghash_in,
        var_nonce_ctr,
        var_iv_ctr
    );


    // Release cached frame if used for exception.
    if (frame_2a714b69d18343f2bf70a8ac845d496f == cache_frame_2a714b69d18343f2bf70a8ac845d496f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2a714b69d18343f2bf70a8ac845d496f);
        cache_frame_2a714b69d18343f2bf70a8ac845d496f = NULL;
    }

    assertFrameObject(frame_2a714b69d18343f2bf70a8ac845d496f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_factory);
    par_factory = NULL;
    CHECK_OBJECT(var_hash_subkey);
    Py_DECREF(var_hash_subkey);
    var_hash_subkey = NULL;
    CHECK_OBJECT(var_j0);
    Py_DECREF(var_j0);
    var_j0 = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_ghash_in);
    var_ghash_in = NULL;
    CHECK_OBJECT(var_nonce_ctr);
    Py_DECREF(var_nonce_ctr);
    var_nonce_ctr = NULL;
    CHECK_OBJECT(var_iv_ctr);
    Py_DECREF(var_iv_ctr);
    var_iv_ctr = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_factory);
    par_factory = NULL;
    Py_XDECREF(var_hash_subkey);
    var_hash_subkey = NULL;
    Py_XDECREF(var_j0);
    var_j0 = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_ghash_in);
    var_ghash_in = NULL;
    Py_XDECREF(var_nonce_ctr);
    var_nonce_ctr = NULL;
    Py_XDECREF(var_iv_ctr);
    var_iv_ctr = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_mac_len);
    Py_DECREF(par_mac_len);
    CHECK_OBJECT(par_cipher_params);
    Py_DECREF(par_cipher_params);
    CHECK_OBJECT(par_ghash_c);
    Py_DECREF(par_ghash_c);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_mac_len);
    Py_DECREF(par_mac_len);
    CHECK_OBJECT(par_cipher_params);
    Py_DECREF(par_cipher_params);
    CHECK_OBJECT(par_ghash_c);
    Py_DECREF(par_ghash_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_9_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_assoc_data = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_d9244188178a382e2b37ac63008f24ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9244188178a382e2b37ac63008f24ce = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9244188178a382e2b37ac63008f24ce)) {
        Py_XDECREF(cache_frame_d9244188178a382e2b37ac63008f24ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9244188178a382e2b37ac63008f24ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9244188178a382e2b37ac63008f24ce = MAKE_FUNCTION_FRAME(codeobj_d9244188178a382e2b37ac63008f24ce, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d9244188178a382e2b37ac63008f24ce->m_type_description == NULL);
    frame_d9244188178a382e2b37ac63008f24ce = cache_frame_d9244188178a382e2b37ac63008f24ce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d9244188178a382e2b37ac63008f24ce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d9244188178a382e2b37ac63008f24ce) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[63]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 285;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[68]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 285;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[94];
        frame_d9244188178a382e2b37ac63008f24ce->m_frame.f_lineno = 286;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 286;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[63]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = PyList_New(5);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_expression_name_7;
            PyList_SET_ITEM(tmp_assattr_name_1, 0, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 289;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[64]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_1, 1, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 289;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }

            tmp_expression_name_5 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[65]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_1, 2, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 290;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }

            tmp_expression_name_6 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[66]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_1, 3, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 290;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }

            tmp_expression_name_7 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[67]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_1, 4, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_assoc_data);
        tmp_args_element_name_1 = par_assoc_data;
        frame_d9244188178a382e2b37ac63008f24ce->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[95], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[70]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_assoc_data);
        tmp_len_arg_1 = par_assoc_data;
        tmp_right_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_left_name_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_2 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[70], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[70]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[52];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
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
        tmp_make_exception_arg_2 = mod_consts[96];
        frame_d9244188178a382e2b37ac63008f24ce->m_frame.f_lineno = 297;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 297;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
        exception_tb = NULL;

        exception_lineno = 299;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9244188178a382e2b37ac63008f24ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9244188178a382e2b37ac63008f24ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9244188178a382e2b37ac63008f24ce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9244188178a382e2b37ac63008f24ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9244188178a382e2b37ac63008f24ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9244188178a382e2b37ac63008f24ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9244188178a382e2b37ac63008f24ce,
        type_description_1,
        par_self,
        par_assoc_data
    );


    // Release cached frame if used for exception.
    if (frame_d9244188178a382e2b37ac63008f24ce == cache_frame_d9244188178a382e2b37ac63008f24ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d9244188178a382e2b37ac63008f24ce);
        cache_frame_d9244188178a382e2b37ac63008f24ce = NULL;
    }

    assertFrameObject(frame_d9244188178a382e2b37ac63008f24ce);

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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
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
    CHECK_OBJECT(par_assoc_data);
    Py_DECREF(par_assoc_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_assoc_data);
    Py_DECREF(par_assoc_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_10__update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_filler = NULL;
    PyObject *var_update_len = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_810ba0a2ffe3dc1a9dbf9b331257742e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e)) {
        Py_XDECREF(cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e = MAKE_FUNCTION_FRAME(codeobj_810ba0a2ffe3dc1a9dbf9b331257742e, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_type_description == NULL);
    frame_810ba0a2ffe3dc1a9dbf9b331257742e = cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_810ba0a2ffe3dc1a9dbf9b331257742e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_810ba0a2ffe3dc1a9dbf9b331257742e) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[90]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[25];
        tmp_condition_result_1 = RICH_COMPARE_GE_CBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 302;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[90]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[39];
        tmp_condition_result_2 = RICH_COMPARE_GT_CBOOL_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_len_arg_4;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[98]);
        assert(tmp_called_name_1 != NULL);
        tmp_left_name_1 = mod_consts[25];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[90]);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_INT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        assert(!(tmp_args_element_name_1 == NULL));
        CHECK_OBJECT(par_data);
        tmp_len_arg_4 = par_data;
        tmp_args_element_name_2 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_filler == NULL);
        var_filler = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[90]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_2 = tmp_inplace_assign_1__value;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[54]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_3 = Py_None;
        CHECK_OBJECT(var_filler);
        tmp_args_element_name_4 = var_filler;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_5 = par_data;
        frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_1 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 306;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[90], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        CHECK_OBJECT(par_data);
        tmp_slice_source_1 = par_data;
        CHECK_OBJECT(var_filler);
        tmp_slice_lower_1 = var_filler;
        tmp_assign_source_4 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, Py_None);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_expression_name_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_len_arg_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[90]);
        if (tmp_len_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = BUILTIN_LEN(tmp_len_arg_5);
        Py_DECREF(tmp_len_arg_5);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[25];
        tmp_condition_result_3 = RICH_COMPARE_LT_CBOOL_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[87]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[63]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[90]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_frame.f_lineno = 313;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = mod_consts[88];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[90], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(par_data);
        tmp_len_arg_6 = par_data;
        tmp_left_name_4 = BUILTIN_LEN(tmp_len_arg_6);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[25];
        tmp_left_name_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_INT(tmp_left_name_4, tmp_right_name_3);
        Py_DECREF(tmp_left_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = mod_consts[25];
        tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_INT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        assert(!(tmp_assign_source_5 == NULL));
        assert(var_update_len == NULL);
        var_update_len = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_assattr_target_3;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[54]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_update_len);
        tmp_args_element_name_7 = var_update_len;
        tmp_args_element_name_8 = Py_None;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_9 = par_data;
        frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[90], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_update_len);
        tmp_compexpr_left_4 = var_update_len;
        tmp_compexpr_right_4 = mod_consts[39];
        tmp_condition_result_4 = RICH_COMPARE_GT_CBOOL_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_upper_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[87]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[63]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_slice_source_2 = par_data;
        CHECK_OBJECT(var_update_len);
        tmp_slice_upper_1 = var_update_len;
        tmp_args_element_name_10 = LOOKUP_SLICE(tmp_slice_source_2, Py_None, tmp_slice_upper_1);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_frame.f_lineno = 319;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_810ba0a2ffe3dc1a9dbf9b331257742e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_810ba0a2ffe3dc1a9dbf9b331257742e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_810ba0a2ffe3dc1a9dbf9b331257742e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_810ba0a2ffe3dc1a9dbf9b331257742e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_810ba0a2ffe3dc1a9dbf9b331257742e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_810ba0a2ffe3dc1a9dbf9b331257742e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_810ba0a2ffe3dc1a9dbf9b331257742e,
        type_description_1,
        par_self,
        par_data,
        var_filler,
        var_update_len
    );


    // Release cached frame if used for exception.
    if (frame_810ba0a2ffe3dc1a9dbf9b331257742e == cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e);
        cache_frame_810ba0a2ffe3dc1a9dbf9b331257742e = NULL;
    }

    assertFrameObject(frame_810ba0a2ffe3dc1a9dbf9b331257742e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var_filler);
    var_filler = NULL;
    Py_XDECREF(var_update_len);
    var_update_len = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var_filler);
    var_filler = NULL;
    Py_XDECREF(var_update_len);
    var_update_len = NULL;
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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_11__pad_cache_and_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_len_cache = NULL;
    struct Nuitka_FrameObject *frame_b881537c6408595a529ce3a98725d0c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b881537c6408595a529ce3a98725d0c8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b881537c6408595a529ce3a98725d0c8)) {
        Py_XDECREF(cache_frame_b881537c6408595a529ce3a98725d0c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b881537c6408595a529ce3a98725d0c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b881537c6408595a529ce3a98725d0c8 = MAKE_FUNCTION_FRAME(codeobj_b881537c6408595a529ce3a98725d0c8, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b881537c6408595a529ce3a98725d0c8->m_type_description == NULL);
    frame_b881537c6408595a529ce3a98725d0c8 = cache_frame_b881537c6408595a529ce3a98725d0c8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b881537c6408595a529ce3a98725d0c8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b881537c6408595a529ce3a98725d0c8) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[90]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[25];
        tmp_condition_result_1 = RICH_COMPARE_GE_CBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 322;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 330;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[90]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_len_cache == NULL);
        var_len_cache = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_len_cache);
        tmp_compexpr_left_2 = var_len_cache;
        tmp_compexpr_right_2 = mod_consts[39];
        tmp_condition_result_2 = RICH_COMPARE_GT_CBOOL_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 332;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[95]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = mod_consts[78];
        tmp_left_name_2 = mod_consts[25];
        CHECK_OBJECT(var_len_cache);
        tmp_right_name_2 = var_len_cache;
        tmp_right_name_1 = BINARY_OPERATION_SUB_OBJECT_INT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        assert(!(tmp_right_name_1 == NULL));
        tmp_args_element_name_1 = BINARY_OPERATION_MULT_OBJECT_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        assert(!(tmp_args_element_name_1 == NULL));
        frame_b881537c6408595a529ce3a98725d0c8->m_frame.f_lineno = 332;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b881537c6408595a529ce3a98725d0c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b881537c6408595a529ce3a98725d0c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b881537c6408595a529ce3a98725d0c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b881537c6408595a529ce3a98725d0c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b881537c6408595a529ce3a98725d0c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b881537c6408595a529ce3a98725d0c8,
        type_description_1,
        par_self,
        var_len_cache
    );


    // Release cached frame if used for exception.
    if (frame_b881537c6408595a529ce3a98725d0c8 == cache_frame_b881537c6408595a529ce3a98725d0c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b881537c6408595a529ce3a98725d0c8);
        cache_frame_b881537c6408595a529ce3a98725d0c8 = NULL;
    }

    assertFrameObject(frame_b881537c6408595a529ce3a98725d0c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_len_cache);
    Py_DECREF(var_len_cache);
    var_len_cache = NULL;
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
    Py_XDECREF(var_len_cache);
    var_len_cache = NULL;
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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_12_encrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_plaintext = python_pars[1];
    PyObject *par_output = python_pars[2];
    PyObject *var_ciphertext = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_9b46a4063e0c05a5439868c5cc1da830;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9b46a4063e0c05a5439868c5cc1da830 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9b46a4063e0c05a5439868c5cc1da830)) {
        Py_XDECREF(cache_frame_9b46a4063e0c05a5439868c5cc1da830);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b46a4063e0c05a5439868c5cc1da830 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b46a4063e0c05a5439868c5cc1da830 = MAKE_FUNCTION_FRAME(codeobj_9b46a4063e0c05a5439868c5cc1da830, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9b46a4063e0c05a5439868c5cc1da830->m_type_description == NULL);
    frame_9b46a4063e0c05a5439868c5cc1da830 = cache_frame_9b46a4063e0c05a5439868c5cc1da830;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9b46a4063e0c05a5439868c5cc1da830);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9b46a4063e0c05a5439868c5cc1da830) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[64]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[68]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[99];
        frame_9b46a4063e0c05a5439868c5cc1da830->m_frame.f_lineno = 368;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 368;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[64]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = PyList_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyList_SET_ITEM(tmp_assattr_name_1, 0, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 370;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[66]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[86]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[64]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_plaintext);
        tmp_tuple_element_1 = par_plaintext;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_output);
        tmp_dict_value_1 = par_output;
        tmp_dict_key_1 = mod_consts[100];
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_9b46a4063e0c05a5439868c5cc1da830->m_frame.f_lineno = 372;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ciphertext == NULL);
        var_ciphertext = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[93]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[91]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[92]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 375;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_9b46a4063e0c05a5439868c5cc1da830->m_frame.f_lineno = 375;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_assattr_target_2;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[91]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[102]);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[93], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[95]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_output);
        tmp_compexpr_left_3 = par_output;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_ciphertext);
        tmp_args_element_name_1 = var_ciphertext;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_output);
        tmp_args_element_name_1 = par_output;
        condexpr_end_1:;
        frame_9b46a4063e0c05a5439868c5cc1da830->m_frame.f_lineno = 378;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[71]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_plaintext);
        tmp_len_arg_1 = par_plaintext;
        tmp_right_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_left_name_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_3 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 379;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[71], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[71]);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = mod_consts[103];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[104];
        frame_9b46a4063e0c05a5439868c5cc1da830->m_frame.f_lineno = 383;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 383;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b46a4063e0c05a5439868c5cc1da830);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b46a4063e0c05a5439868c5cc1da830);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b46a4063e0c05a5439868c5cc1da830, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b46a4063e0c05a5439868c5cc1da830->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b46a4063e0c05a5439868c5cc1da830, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b46a4063e0c05a5439868c5cc1da830,
        type_description_1,
        par_self,
        par_plaintext,
        par_output,
        var_ciphertext
    );


    // Release cached frame if used for exception.
    if (frame_9b46a4063e0c05a5439868c5cc1da830 == cache_frame_9b46a4063e0c05a5439868c5cc1da830) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9b46a4063e0c05a5439868c5cc1da830);
        cache_frame_9b46a4063e0c05a5439868c5cc1da830 = NULL;
    }

    assertFrameObject(frame_9b46a4063e0c05a5439868c5cc1da830);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_ciphertext);
    tmp_return_value = var_ciphertext;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_ciphertext);
    Py_DECREF(var_ciphertext);
    var_ciphertext = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_ciphertext);
    var_ciphertext = NULL;
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
    CHECK_OBJECT(par_plaintext);
    Py_DECREF(par_plaintext);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_plaintext);
    Py_DECREF(par_plaintext);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_13_decrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ciphertext = python_pars[1];
    PyObject *par_output = python_pars[2];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_c75732eef394dba2911c20a3ca52020a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c75732eef394dba2911c20a3ca52020a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c75732eef394dba2911c20a3ca52020a)) {
        Py_XDECREF(cache_frame_c75732eef394dba2911c20a3ca52020a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c75732eef394dba2911c20a3ca52020a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c75732eef394dba2911c20a3ca52020a = MAKE_FUNCTION_FRAME(codeobj_c75732eef394dba2911c20a3ca52020a, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c75732eef394dba2911c20a3ca52020a->m_type_description == NULL);
    frame_c75732eef394dba2911c20a3ca52020a = cache_frame_c75732eef394dba2911c20a3ca52020a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c75732eef394dba2911c20a3ca52020a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c75732eef394dba2911c20a3ca52020a) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[65]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[68]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[106];
        frame_c75732eef394dba2911c20a3ca52020a->m_frame.f_lineno = 421;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 421;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[65]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = PyList_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyList_SET_ITEM(tmp_assattr_name_1, 0, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 423;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[67]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_name_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[93]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[91]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[92]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_c75732eef394dba2911c20a3ca52020a->m_frame.f_lineno = 426;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_assattr_target_2;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[91]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[102]);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[93], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 429;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_ciphertext);
        tmp_args_element_name_1 = par_ciphertext;
        frame_c75732eef394dba2911c20a3ca52020a->m_frame.f_lineno = 429;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[95], tmp_args_element_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[71]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_ciphertext);
        tmp_len_arg_1 = par_ciphertext;
        tmp_right_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_left_name_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_3 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 430;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[71], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 432;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[86]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[65]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ciphertext);
        tmp_tuple_element_1 = par_ciphertext;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_output);
        tmp_dict_value_1 = par_output;
        tmp_dict_key_1 = mod_consts[100];
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_c75732eef394dba2911c20a3ca52020a->m_frame.f_lineno = 432;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c75732eef394dba2911c20a3ca52020a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c75732eef394dba2911c20a3ca52020a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c75732eef394dba2911c20a3ca52020a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c75732eef394dba2911c20a3ca52020a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c75732eef394dba2911c20a3ca52020a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c75732eef394dba2911c20a3ca52020a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c75732eef394dba2911c20a3ca52020a,
        type_description_1,
        par_self,
        par_ciphertext,
        par_output
    );


    // Release cached frame if used for exception.
    if (frame_c75732eef394dba2911c20a3ca52020a == cache_frame_c75732eef394dba2911c20a3ca52020a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c75732eef394dba2911c20a3ca52020a);
        cache_frame_c75732eef394dba2911c20a3ca52020a = NULL;
    }

    assertFrameObject(frame_c75732eef394dba2911c20a3ca52020a);

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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
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
    CHECK_OBJECT(par_ciphertext);
    Py_DECREF(par_ciphertext);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ciphertext);
    Py_DECREF(par_ciphertext);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_14_digest(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b536213da687cd94c861e3d5d2545abd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b536213da687cd94c861e3d5d2545abd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b536213da687cd94c861e3d5d2545abd)) {
        Py_XDECREF(cache_frame_b536213da687cd94c861e3d5d2545abd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b536213da687cd94c861e3d5d2545abd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b536213da687cd94c861e3d5d2545abd = MAKE_FUNCTION_FRAME(codeobj_b536213da687cd94c861e3d5d2545abd, module_Crypto$Cipher$_mode_gcm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b536213da687cd94c861e3d5d2545abd->m_type_description == NULL);
    frame_b536213da687cd94c861e3d5d2545abd = cache_frame_b536213da687cd94c861e3d5d2545abd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b536213da687cd94c861e3d5d2545abd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b536213da687cd94c861e3d5d2545abd) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[66]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[68]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[108];
        frame_b536213da687cd94c861e3d5d2545abd->m_frame.f_lineno = 446;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 446;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[66]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_1, 0, tmp_list_element_1);
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_b536213da687cd94c861e3d5d2545abd->m_frame.f_lineno = 450;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[109]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b536213da687cd94c861e3d5d2545abd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b536213da687cd94c861e3d5d2545abd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b536213da687cd94c861e3d5d2545abd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b536213da687cd94c861e3d5d2545abd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b536213da687cd94c861e3d5d2545abd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b536213da687cd94c861e3d5d2545abd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b536213da687cd94c861e3d5d2545abd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b536213da687cd94c861e3d5d2545abd == cache_frame_b536213da687cd94c861e3d5d2545abd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b536213da687cd94c861e3d5d2545abd);
        cache_frame_b536213da687cd94c861e3d5d2545abd = NULL;
    }

    assertFrameObject(frame_b536213da687cd94c861e3d5d2545abd);

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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_15__compute_mac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_s_tag = NULL;
    struct Nuitka_FrameObject *frame_c8efb386a348e629607bcde6e49a993b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c8efb386a348e629607bcde6e49a993b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c8efb386a348e629607bcde6e49a993b)) {
        Py_XDECREF(cache_frame_c8efb386a348e629607bcde6e49a993b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8efb386a348e629607bcde6e49a993b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8efb386a348e629607bcde6e49a993b = MAKE_FUNCTION_FRAME(codeobj_c8efb386a348e629607bcde6e49a993b, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c8efb386a348e629607bcde6e49a993b->m_type_description == NULL);
    frame_c8efb386a348e629607bcde6e49a993b = cache_frame_c8efb386a348e629607bcde6e49a993b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c8efb386a348e629607bcde6e49a993b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c8efb386a348e629607bcde6e49a993b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[59]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 455;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[59]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 459;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 459;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[95]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[79]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = mod_consts[77];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[70]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_MULT_OBJECT_INT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[77];
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 460;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[95]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[79]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[77];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[71]);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_MULT_OBJECT_INT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = mod_consts[77];
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 461;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 462;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[87]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 462;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[66]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_s_tag == NULL);
        var_s_tag = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[89]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s_tag);
        tmp_args_element_name_7 = var_s_tag;
        frame_c8efb386a348e629607bcde6e49a993b->m_frame.f_lineno = 465;
        tmp_slice_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[64], tmp_args_element_name_7);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_slice_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_slice_source_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_slice_upper_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[60]);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_slice_source_1);

            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = LOOKUP_SLICE(tmp_slice_source_1, Py_None, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_source_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_name_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[59]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8efb386a348e629607bcde6e49a993b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8efb386a348e629607bcde6e49a993b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8efb386a348e629607bcde6e49a993b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8efb386a348e629607bcde6e49a993b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8efb386a348e629607bcde6e49a993b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8efb386a348e629607bcde6e49a993b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8efb386a348e629607bcde6e49a993b,
        type_description_1,
        par_self,
        var_s_tag
    );


    // Release cached frame if used for exception.
    if (frame_c8efb386a348e629607bcde6e49a993b == cache_frame_c8efb386a348e629607bcde6e49a993b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c8efb386a348e629607bcde6e49a993b);
        cache_frame_c8efb386a348e629607bcde6e49a993b = NULL;
    }

    assertFrameObject(frame_c8efb386a348e629607bcde6e49a993b);

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
    Py_XDECREF(var_s_tag);
    var_s_tag = NULL;
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
    Py_XDECREF(var_s_tag);
    var_s_tag = NULL;
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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_16_hexdigest(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_x = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0a3ae2c0471a271b9037b0d2daa52e51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0a3ae2c0471a271b9037b0d2daa52e51 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a3ae2c0471a271b9037b0d2daa52e51)) {
        Py_XDECREF(cache_frame_0a3ae2c0471a271b9037b0d2daa52e51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a3ae2c0471a271b9037b0d2daa52e51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a3ae2c0471a271b9037b0d2daa52e51 = MAKE_FUNCTION_FRAME(codeobj_0a3ae2c0471a271b9037b0d2daa52e51, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a3ae2c0471a271b9037b0d2daa52e51->m_type_description == NULL);
    frame_0a3ae2c0471a271b9037b0d2daa52e51 = cache_frame_0a3ae2c0471a271b9037b0d2daa52e51;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a3ae2c0471a271b9037b0d2daa52e51);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a3ae2c0471a271b9037b0d2daa52e51) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = mod_consts[88];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[112]);
        assert(!(tmp_called_name_1 == NULL));
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_0a3ae2c0471a271b9037b0d2daa52e51->m_frame.f_lineno = 476;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[66]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(tmp_list_contraction_1__$0 == NULL);
            tmp_list_contraction_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New(0);
            assert(tmp_list_contraction_1__contraction_result == NULL);
            tmp_list_contraction_1__contraction_result = tmp_assign_source_2;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_list_contraction_1__$0);
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oo";
                    exception_lineno = 476;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_list_contraction_1__iter_value_0);
            tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_4;
                Py_INCREF(var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_left_name_1 = mod_consts[113];
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[114]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_x);
            tmp_args_element_name_2 = var_x;
            frame_0a3ae2c0471a271b9037b0d2daa52e51->m_frame.f_lineno = 476;
            tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        tmp_args_element_name_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF(tmp_args_element_name_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_list_contraction_1__$0);
        Py_DECREF(tmp_list_contraction_1__$0);
        tmp_list_contraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        Py_DECREF(tmp_list_contraction_1__contraction_result);
        tmp_list_contraction_1__contraction_result = NULL;
        Py_XDECREF(tmp_list_contraction_1__iter_value_0);
        tmp_list_contraction_1__iter_value_0 = NULL;
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

        Py_XDECREF(tmp_list_contraction_1__$0);
        tmp_list_contraction_1__$0 = NULL;
        Py_XDECREF(tmp_list_contraction_1__contraction_result);
        tmp_list_contraction_1__contraction_result = NULL;
        Py_XDECREF(tmp_list_contraction_1__iter_value_0);
        tmp_list_contraction_1__iter_value_0 = NULL;
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
        frame_0a3ae2c0471a271b9037b0d2daa52e51->m_frame.f_lineno = 476;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a3ae2c0471a271b9037b0d2daa52e51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a3ae2c0471a271b9037b0d2daa52e51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a3ae2c0471a271b9037b0d2daa52e51);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a3ae2c0471a271b9037b0d2daa52e51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a3ae2c0471a271b9037b0d2daa52e51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a3ae2c0471a271b9037b0d2daa52e51, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a3ae2c0471a271b9037b0d2daa52e51,
        type_description_1,
        par_self,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_0a3ae2c0471a271b9037b0d2daa52e51 == cache_frame_0a3ae2c0471a271b9037b0d2daa52e51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a3ae2c0471a271b9037b0d2daa52e51);
        cache_frame_0a3ae2c0471a271b9037b0d2daa52e51 = NULL;
    }

    assertFrameObject(frame_0a3ae2c0471a271b9037b0d2daa52e51);

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
    Py_XDECREF(var_x);
    var_x = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
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


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_17_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_received_mac_tag = python_pars[1];
    PyObject *var_secret = NULL;
    PyObject *var_mac1 = NULL;
    PyObject *var_mac2 = NULL;
    struct Nuitka_FrameObject *frame_e9163dacbf171ce8a81259180f33a5b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e9163dacbf171ce8a81259180f33a5b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e9163dacbf171ce8a81259180f33a5b0)) {
        Py_XDECREF(cache_frame_e9163dacbf171ce8a81259180f33a5b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9163dacbf171ce8a81259180f33a5b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9163dacbf171ce8a81259180f33a5b0 = MAKE_FUNCTION_FRAME(codeobj_e9163dacbf171ce8a81259180f33a5b0, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e9163dacbf171ce8a81259180f33a5b0->m_type_description == NULL);
    frame_e9163dacbf171ce8a81259180f33a5b0 = cache_frame_e9163dacbf171ce8a81259180f33a5b0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9163dacbf171ce8a81259180f33a5b0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9163dacbf171ce8a81259180f33a5b0) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[67]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 495;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[68]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 495;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[116];
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 496;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 496;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 498;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[67]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_1, 0, tmp_list_element_1);
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 498;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[117]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 500;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[25]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_secret == NULL);
        var_secret = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[118]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[72]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = mod_consts[119];
        tmp_dict_key_1 = mod_consts[120];
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_instance_1;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(var_secret);
            tmp_dict_value_1 = var_secret;
            tmp_dict_key_1 = mod_consts[121];
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 503;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }

            tmp_called_instance_1 = par_self;
            frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 503;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[109]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 503;
                type_description_1 = "ooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = mod_consts[122];
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 502;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mac1 == NULL);
        var_mac1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[118]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[72]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = mod_consts[119];
        tmp_dict_key_2 = mod_consts[120];
        tmp_kw_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_secret);
        tmp_dict_value_2 = var_secret;
        tmp_dict_key_2 = mod_consts[121];
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_received_mac_tag);
        tmp_dict_value_2 = par_received_mac_tag;
        tmp_dict_key_2 = mod_consts[122];
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 504;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mac2 == NULL);
        var_mac2 = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_mac1);
        tmp_called_instance_2 = var_mac1;
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 507;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[66]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mac2);
        tmp_called_instance_3 = var_mac2;
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 507;
        tmp_compexpr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[66]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 507;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooo";
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
        tmp_make_exception_arg_2 = mod_consts[123];
        frame_e9163dacbf171ce8a81259180f33a5b0->m_frame.f_lineno = 508;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 508;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9163dacbf171ce8a81259180f33a5b0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9163dacbf171ce8a81259180f33a5b0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9163dacbf171ce8a81259180f33a5b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9163dacbf171ce8a81259180f33a5b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9163dacbf171ce8a81259180f33a5b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9163dacbf171ce8a81259180f33a5b0,
        type_description_1,
        par_self,
        par_received_mac_tag,
        var_secret,
        var_mac1,
        var_mac2
    );


    // Release cached frame if used for exception.
    if (frame_e9163dacbf171ce8a81259180f33a5b0 == cache_frame_e9163dacbf171ce8a81259180f33a5b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e9163dacbf171ce8a81259180f33a5b0);
        cache_frame_e9163dacbf171ce8a81259180f33a5b0 = NULL;
    }

    assertFrameObject(frame_e9163dacbf171ce8a81259180f33a5b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_secret);
    Py_DECREF(var_secret);
    var_secret = NULL;
    Py_XDECREF(var_mac1);
    var_mac1 = NULL;
    Py_XDECREF(var_mac2);
    var_mac2 = NULL;
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
    Py_XDECREF(var_secret);
    var_secret = NULL;
    Py_XDECREF(var_mac1);
    var_mac1 = NULL;
    Py_XDECREF(var_mac2);
    var_mac2 = NULL;
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
    CHECK_OBJECT(par_received_mac_tag);
    Py_DECREF(par_received_mac_tag);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_received_mac_tag);
    Py_DECREF(par_received_mac_tag);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_18_hexverify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_hex_mac_tag = python_pars[1];
    struct Nuitka_FrameObject *frame_422b19fcb94fc5f39eb1829a0b5d972d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_422b19fcb94fc5f39eb1829a0b5d972d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_422b19fcb94fc5f39eb1829a0b5d972d)) {
        Py_XDECREF(cache_frame_422b19fcb94fc5f39eb1829a0b5d972d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_422b19fcb94fc5f39eb1829a0b5d972d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_422b19fcb94fc5f39eb1829a0b5d972d = MAKE_FUNCTION_FRAME(codeobj_422b19fcb94fc5f39eb1829a0b5d972d, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_422b19fcb94fc5f39eb1829a0b5d972d->m_type_description == NULL);
    frame_422b19fcb94fc5f39eb1829a0b5d972d = cache_frame_422b19fcb94fc5f39eb1829a0b5d972d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_422b19fcb94fc5f39eb1829a0b5d972d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_422b19fcb94fc5f39eb1829a0b5d972d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[67]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hex_mac_tag);
        tmp_args_element_name_2 = par_hex_mac_tag;
        frame_422b19fcb94fc5f39eb1829a0b5d972d->m_frame.f_lineno = 523;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_422b19fcb94fc5f39eb1829a0b5d972d->m_frame.f_lineno = 523;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_422b19fcb94fc5f39eb1829a0b5d972d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_422b19fcb94fc5f39eb1829a0b5d972d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_422b19fcb94fc5f39eb1829a0b5d972d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_422b19fcb94fc5f39eb1829a0b5d972d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_422b19fcb94fc5f39eb1829a0b5d972d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_422b19fcb94fc5f39eb1829a0b5d972d,
        type_description_1,
        par_self,
        par_hex_mac_tag
    );


    // Release cached frame if used for exception.
    if (frame_422b19fcb94fc5f39eb1829a0b5d972d == cache_frame_422b19fcb94fc5f39eb1829a0b5d972d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_422b19fcb94fc5f39eb1829a0b5d972d);
        cache_frame_422b19fcb94fc5f39eb1829a0b5d972d = NULL;
    }

    assertFrameObject(frame_422b19fcb94fc5f39eb1829a0b5d972d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
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
    CHECK_OBJECT(par_hex_mac_tag);
    Py_DECREF(par_hex_mac_tag);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hex_mac_tag);
    Py_DECREF(par_hex_mac_tag);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_19_encrypt_and_digest(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_plaintext = python_pars[1];
    PyObject *par_output = python_pars[2];
    struct Nuitka_FrameObject *frame_799346ec0fbf1921ed585f571a62310d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_799346ec0fbf1921ed585f571a62310d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_799346ec0fbf1921ed585f571a62310d)) {
        Py_XDECREF(cache_frame_799346ec0fbf1921ed585f571a62310d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_799346ec0fbf1921ed585f571a62310d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_799346ec0fbf1921ed585f571a62310d = MAKE_FUNCTION_FRAME(codeobj_799346ec0fbf1921ed585f571a62310d, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_799346ec0fbf1921ed585f571a62310d->m_type_description == NULL);
    frame_799346ec0fbf1921ed585f571a62310d = cache_frame_799346ec0fbf1921ed585f571a62310d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_799346ec0fbf1921ed585f571a62310d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_799346ec0fbf1921ed585f571a62310d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[64]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_plaintext);
        tmp_tuple_element_2 = par_plaintext;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_output);
        tmp_dict_value_1 = par_output;
        tmp_dict_key_1 = mod_consts[100];
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_799346ec0fbf1921ed585f571a62310d->m_frame.f_lineno = 545;
        tmp_tuple_element_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_called_instance_1;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;

                exception_lineno = 545;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = par_self;
            frame_799346ec0fbf1921ed585f571a62310d->m_frame.f_lineno = 545;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[66]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_799346ec0fbf1921ed585f571a62310d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_799346ec0fbf1921ed585f571a62310d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_799346ec0fbf1921ed585f571a62310d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_799346ec0fbf1921ed585f571a62310d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_799346ec0fbf1921ed585f571a62310d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_799346ec0fbf1921ed585f571a62310d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_799346ec0fbf1921ed585f571a62310d,
        type_description_1,
        par_self,
        par_plaintext,
        par_output
    );


    // Release cached frame if used for exception.
    if (frame_799346ec0fbf1921ed585f571a62310d == cache_frame_799346ec0fbf1921ed585f571a62310d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_799346ec0fbf1921ed585f571a62310d);
        cache_frame_799346ec0fbf1921ed585f571a62310d = NULL;
    }

    assertFrameObject(frame_799346ec0fbf1921ed585f571a62310d);

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
    CHECK_OBJECT(par_plaintext);
    Py_DECREF(par_plaintext);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_plaintext);
    Py_DECREF(par_plaintext);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_20_decrypt_and_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ciphertext = python_pars[1];
    PyObject *par_received_mac_tag = python_pars[2];
    PyObject *par_output = python_pars[3];
    PyObject *var_plaintext = NULL;
    struct Nuitka_FrameObject *frame_146264e81f3c245277146ac6c708554d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_146264e81f3c245277146ac6c708554d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_146264e81f3c245277146ac6c708554d)) {
        Py_XDECREF(cache_frame_146264e81f3c245277146ac6c708554d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_146264e81f3c245277146ac6c708554d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_146264e81f3c245277146ac6c708554d = MAKE_FUNCTION_FRAME(codeobj_146264e81f3c245277146ac6c708554d, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_146264e81f3c245277146ac6c708554d->m_type_description == NULL);
    frame_146264e81f3c245277146ac6c708554d = cache_frame_146264e81f3c245277146ac6c708554d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_146264e81f3c245277146ac6c708554d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_146264e81f3c245277146ac6c708554d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[65]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ciphertext);
        tmp_tuple_element_1 = par_ciphertext;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_output);
        tmp_dict_value_1 = par_output;
        tmp_dict_key_1 = mod_consts[100];
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_146264e81f3c245277146ac6c708554d->m_frame.f_lineno = 566;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_plaintext == NULL);
        var_plaintext = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;

            exception_lineno = 567;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_received_mac_tag);
        tmp_args_element_name_1 = par_received_mac_tag;
        frame_146264e81f3c245277146ac6c708554d->m_frame.f_lineno = 567;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_146264e81f3c245277146ac6c708554d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_146264e81f3c245277146ac6c708554d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_146264e81f3c245277146ac6c708554d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_146264e81f3c245277146ac6c708554d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_146264e81f3c245277146ac6c708554d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_146264e81f3c245277146ac6c708554d,
        type_description_1,
        par_self,
        par_ciphertext,
        par_received_mac_tag,
        par_output,
        var_plaintext
    );


    // Release cached frame if used for exception.
    if (frame_146264e81f3c245277146ac6c708554d == cache_frame_146264e81f3c245277146ac6c708554d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_146264e81f3c245277146ac6c708554d);
        cache_frame_146264e81f3c245277146ac6c708554d = NULL;
    }

    assertFrameObject(frame_146264e81f3c245277146ac6c708554d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_plaintext);
    tmp_return_value = var_plaintext;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_plaintext);
    Py_DECREF(var_plaintext);
    var_plaintext = NULL;
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
    Py_XDECREF(var_plaintext);
    var_plaintext = NULL;
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
    CHECK_OBJECT(par_ciphertext);
    Py_DECREF(par_ciphertext);
    CHECK_OBJECT(par_received_mac_tag);
    Py_DECREF(par_received_mac_tag);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ciphertext);
    Py_DECREF(par_ciphertext);
    CHECK_OBJECT(par_received_mac_tag);
    Py_DECREF(par_received_mac_tag);
    CHECK_OBJECT(par_output);
    Py_DECREF(par_output);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Cipher$_mode_gcm$$$function_21__create_gcm_cipher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_factory = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_key = NULL;
    PyObject *var_e = NULL;
    PyObject *var_nonce = NULL;
    PyObject *var_mac_len = NULL;
    PyObject *var_use_clmul = NULL;
    PyObject *var_ghash_c = NULL;
    struct Nuitka_FrameObject *frame_5178a68f291e5027e7c649b09c6fbd3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5178a68f291e5027e7c649b09c6fbd3d = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5178a68f291e5027e7c649b09c6fbd3d)) {
        Py_XDECREF(cache_frame_5178a68f291e5027e7c649b09c6fbd3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5178a68f291e5027e7c649b09c6fbd3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5178a68f291e5027e7c649b09c6fbd3d = MAKE_FUNCTION_FRAME(codeobj_5178a68f291e5027e7c649b09c6fbd3d, module_Crypto$Cipher$_mode_gcm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5178a68f291e5027e7c649b09c6fbd3d->m_type_description == NULL);
    frame_5178a68f291e5027e7c649b09c6fbd3d = cache_frame_5178a68f291e5027e7c649b09c6fbd3d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5178a68f291e5027e7c649b09c6fbd3d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5178a68f291e5027e7c649b09c6fbd3d) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 604;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[129], &PyTuple_GET_ITEM(mod_consts[130], 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_1;
    }
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_5178a68f291e5027e7c649b09c6fbd3d);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5178a68f291e5027e7c649b09c6fbd3d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5178a68f291e5027e7c649b09c6fbd3d, exception_keeper_lineno_1);
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_str_arg_1;
        tmp_left_name_1 = mod_consts[131];
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_right_name_1 = PyObject_Str(tmp_str_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 606;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 606;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 603;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame) frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;

            exception_lineno = 608;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_kwargs;
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 608;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[129], &PyTuple_GET_ITEM(mod_consts[133], 0));

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nonce == NULL);
        var_nonce = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_nonce);
        tmp_compexpr_left_2 = var_nonce;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[117]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 610;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[25]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_nonce;
            assert(old != NULL);
            var_nonce = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;

            exception_lineno = 611;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_kwargs;
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 611;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[129], &PyTuple_GET_ITEM(mod_consts[134], 0));

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mac_len == NULL);
        var_mac_len = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;

            exception_lineno = 614;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_kwargs;
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 614;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, mod_consts[129], &PyTuple_GET_ITEM(mod_consts[135], 0));

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_use_clmul == NULL);
        var_use_clmul = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_use_clmul);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_use_clmul);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[136]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assign_source_7 == NULL)) {
            tmp_assign_source_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[136]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ghash_c == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_ghash_c = tmp_assign_source_7;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_assign_source_8 == NULL)) {
            tmp_assign_source_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[137]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ghash_c == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_ghash_c = tmp_assign_source_8;
    }
    branch_end_3:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[138]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_factory);
        tmp_args_element_name_1 = par_factory;
        CHECK_OBJECT(var_key);
        tmp_args_element_name_2 = var_key;
        CHECK_OBJECT(var_nonce);
        tmp_args_element_name_3 = var_nonce;
        CHECK_OBJECT(var_mac_len);
        tmp_args_element_name_4 = var_mac_len;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;

            exception_lineno = 620;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_kwargs;
        CHECK_OBJECT(var_ghash_c);
        tmp_args_element_name_6 = var_ghash_c;
        frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame.f_lineno = 620;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_5178a68f291e5027e7c649b09c6fbd3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_5178a68f291e5027e7c649b09c6fbd3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_5178a68f291e5027e7c649b09c6fbd3d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5178a68f291e5027e7c649b09c6fbd3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5178a68f291e5027e7c649b09c6fbd3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5178a68f291e5027e7c649b09c6fbd3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5178a68f291e5027e7c649b09c6fbd3d,
        type_description_1,
        par_factory,
        par_kwargs,
        var_key,
        var_e,
        var_nonce,
        var_mac_len,
        var_use_clmul,
        var_ghash_c
    );


    // Release cached frame if used for exception.
    if (frame_5178a68f291e5027e7c649b09c6fbd3d == cache_frame_5178a68f291e5027e7c649b09c6fbd3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5178a68f291e5027e7c649b09c6fbd3d);
        cache_frame_5178a68f291e5027e7c649b09c6fbd3d = NULL;
    }

    assertFrameObject(frame_5178a68f291e5027e7c649b09c6fbd3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_key);
    Py_DECREF(var_key);
    var_key = NULL;
    CHECK_OBJECT(var_nonce);
    Py_DECREF(var_nonce);
    var_nonce = NULL;
    CHECK_OBJECT(var_mac_len);
    Py_DECREF(var_mac_len);
    var_mac_len = NULL;
    CHECK_OBJECT(var_use_clmul);
    Py_DECREF(var_use_clmul);
    var_use_clmul = NULL;
    CHECK_OBJECT(var_ghash_c);
    Py_DECREF(var_ghash_c);
    var_ghash_c = NULL;
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

    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_nonce);
    var_nonce = NULL;
    Py_XDECREF(var_mac_len);
    var_mac_len = NULL;
    Py_XDECREF(var_use_clmul);
    var_use_clmul = NULL;
    Py_XDECREF(var_ghash_c);
    var_ghash_c = NULL;
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
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_10__update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_10__update,
        mod_consts[95],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_810ba0a2ffe3dc1a9dbf9b331257742e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_11__pad_cache_and_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_11__pad_cache_and_update,
        mod_consts[101],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b881537c6408595a529ce3a98725d0c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_12_encrypt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_12_encrypt,
        mod_consts[64],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b46a4063e0c05a5439868c5cc1da830,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_13_decrypt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_13_decrypt,
        mod_consts[65],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c75732eef394dba2911c20a3ca52020a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_14_digest() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_14_digest,
        mod_consts[66],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b536213da687cd94c861e3d5d2545abd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[110],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_15__compute_mac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_15__compute_mac,
        mod_consts[109],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c8efb386a348e629607bcde6e49a993b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_16_hexdigest() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_16_hexdigest,
        mod_consts[172],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0a3ae2c0471a271b9037b0d2daa52e51,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_17_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_17_verify,
        mod_consts[67],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9163dacbf171ce8a81259180f33a5b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_18_hexverify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_18_hexverify,
        mod_consts[173],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_422b19fcb94fc5f39eb1829a0b5d972d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_19_encrypt_and_digest(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_19_encrypt_and_digest,
        mod_consts[174],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_799346ec0fbf1921ed585f571a62310d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_1__build_impl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_1__build_impl,
        mod_consts[16],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b93cb99dcd8dffbc56cb51f3a1de76a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_20_decrypt_and_verify(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_20_decrypt_and_verify,
        mod_consts[175],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_146264e81f3c245277146ac6c708554d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[128],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_21__create_gcm_cipher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_21__create_gcm_cipher,
        mod_consts[177],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5178a68f291e5027e7c649b09c6fbd3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[139],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_2__get_ghash_portable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_2__get_ghash_portable,
        mod_consts[162],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_73449450f1c3897c9ef253c936982695,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_3__get_ghash_clmul() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_3__get_ghash_clmul,
        mod_consts[163],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4191f4d175b4f8c445cde9f1c77b0ff9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_4___init__,
        mod_consts[164],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1bc4376123579d9c5999850e04cdca88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_5_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_5_update,
        mod_consts[63],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5dc039b05ec4217e574154ae8d22a8ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_6_digest() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_6_digest,
        mod_consts[66],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3dcf3df066b888c416a4ff4d81636850,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_7_enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_7_enum,
        mod_consts[169],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6fae3e27b81680a00ecbb83f3a6d1d2e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_8___init__,
        mod_consts[164],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2a714b69d18343f2bf70a8ac845d496f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_9_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$_mode_gcm$$$function_9_update,
        mod_consts[63],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9244188178a382e2b37ac63008f24ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$_mode_gcm,
        mod_consts[97],
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

function_impl_code functable_Crypto$Cipher$_mode_gcm[] = {
    impl_Crypto$Cipher$_mode_gcm$$$function_1__build_impl,
    impl_Crypto$Cipher$_mode_gcm$$$function_2__get_ghash_portable,
    impl_Crypto$Cipher$_mode_gcm$$$function_3__get_ghash_clmul,
    impl_Crypto$Cipher$_mode_gcm$$$function_4___init__,
    impl_Crypto$Cipher$_mode_gcm$$$function_5_update,
    impl_Crypto$Cipher$_mode_gcm$$$function_6_digest,
    impl_Crypto$Cipher$_mode_gcm$$$function_7_enum,
    impl_Crypto$Cipher$_mode_gcm$$$function_8___init__,
    impl_Crypto$Cipher$_mode_gcm$$$function_9_update,
    impl_Crypto$Cipher$_mode_gcm$$$function_10__update,
    impl_Crypto$Cipher$_mode_gcm$$$function_11__pad_cache_and_update,
    impl_Crypto$Cipher$_mode_gcm$$$function_12_encrypt,
    impl_Crypto$Cipher$_mode_gcm$$$function_13_decrypt,
    impl_Crypto$Cipher$_mode_gcm$$$function_14_digest,
    impl_Crypto$Cipher$_mode_gcm$$$function_15__compute_mac,
    impl_Crypto$Cipher$_mode_gcm$$$function_16_hexdigest,
    impl_Crypto$Cipher$_mode_gcm$$$function_17_verify,
    impl_Crypto$Cipher$_mode_gcm$$$function_18_hexverify,
    impl_Crypto$Cipher$_mode_gcm$$$function_19_encrypt_and_digest,
    impl_Crypto$Cipher$_mode_gcm$$$function_20_decrypt_and_verify,
    impl_Crypto$Cipher$_mode_gcm$$$function_21__create_gcm_cipher,
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

    function_impl_code *current = functable_Crypto$Cipher$_mode_gcm;
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

    if (offset > sizeof(functable_Crypto$Cipher$_mode_gcm) || offset < 0) {
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
        functable_Crypto$Cipher$_mode_gcm[offset],
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
        module_Crypto$Cipher$_mode_gcm,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "Crypto.Cipher._mode_gcm";

// Internal entry point for module code.
PyObject *modulecode_Crypto$Cipher$_mode_gcm(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_Crypto$Cipher$_mode_gcm = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("Crypto.Cipher._mode_gcm: Skipping module init, already done.\n");
#endif

        return module_Crypto$Cipher$_mode_gcm;
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
    PRINT_STRING("Crypto.Cipher._mode_gcm: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Crypto.Cipher._mode_gcm: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Crypto.Cipher._mode_gcm: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initCrypto$Cipher$_mode_gcm\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_Crypto$Cipher$_mode_gcm = MODULE_DICT(module_Crypto$Cipher$_mode_gcm);

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
        moduledict_Crypto$Cipher$_mode_gcm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Crypto$Cipher$_mode_gcm,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Crypto$Cipher$_mode_gcm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Cipher$_mode_gcm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Cipher$_mode_gcm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Crypto$Cipher$_mode_gcm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Crypto$Cipher$_mode_gcm);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__ = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__ = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update = NULL;
    PyObject *tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_2ac6f7f96dace0d0a031a5d9933a8ac8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(mod_consts[144]);
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = mod_consts[146];
        tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[147];
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[125]);
        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_4);
    }
    // Frame without reuse.
    frame_2ac6f7f96dace0d0a031a5d9933a8ac8 = MAKE_MODULE_FRAME(codeobj_2ac6f7f96dace0d0a031a5d9933a8ac8, module_Crypto$Cipher$_mode_gcm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_2ac6f7f96dace0d0a031a5d9933a8ac8);
    assert(Py_REFCNT(frame_2ac6f7f96dace0d0a031a5d9933a8ac8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = mod_consts[148];
        tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[149];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 39;
        tmp_assign_source_5 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[114]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[54]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = mod_consts[150];
        tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[151];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 41;
        tmp_import_name_from_4 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[50]);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = mod_consts[152];
        tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[153];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 43;
        tmp_assign_source_9 = IMPORT_MODULE4(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[79]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[81]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_11);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = mod_consts[154];
        tmp_globals_name_5 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[155];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 44;
        tmp_import_name_from_7 = IMPORT_MODULE4(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[118]);
        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = mod_consts[156];
        tmp_globals_name_6 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[157];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 45;
        tmp_import_name_from_8 = IMPORT_MODULE4(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[117]);
        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        tmp_name_name_7 = mod_consts[150];
        tmp_globals_name_7 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[158];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 47;
        tmp_assign_source_14 = IMPORT_MODULE4(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[14]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[27]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[37]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[43]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[33]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[41]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[30]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        tmp_name_name_8 = mod_consts[159];
        tmp_globals_name_8 = (PyObject *)moduledict_Crypto$Cipher$_mode_gcm;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[160];
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 51;
        tmp_import_name_from_16 = IMPORT_MODULE4(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[18]);
        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_1__build_impl();

        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_2__get_ghash_portable();

        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        assert(!(tmp_called_name_1 == NULL));
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 84;
        tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_3__get_ghash_clmul();

        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        assert(!(tmp_called_name_2 == NULL));
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 99;
        tmp_assign_source_28 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_assign_source_30;


            tmp_assign_source_30 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_4___init__();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__ == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__ = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;


            tmp_assign_source_31 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_5_update();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;


            tmp_assign_source_32 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_6_digest();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest = tmp_assign_source_32;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_value_1 = mod_consts[46];
            tmp_dict_key_1 = mod_consts[165];
            tmp_assign_source_29 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_1 = mod_consts[166];
            tmp_dict_key_1 = mod_consts[141];
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__);
            tmp_dict_value_1 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__;
            tmp_dict_key_1 = mod_consts[164];
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update);
            tmp_dict_value_1 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update;
            tmp_dict_key_1 = mod_consts[63];
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest);
            tmp_dict_value_1 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest;
            tmp_dict_key_1 = mod_consts[66];
            tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key___init__ = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_update = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_1__GHASH_102_key_digest = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = mod_consts[167];
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
        tmp_key_name_2 = mod_consts[167];
        tmp_assign_source_33 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_1__base == NULL);
            Py_INCREF(tmp_assign_source_34);
            tmp_select_metaclass_1__base = tmp_assign_source_34;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_expression_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_33 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_33 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_33 == NULL));
            goto try_return_handler_6;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = mod_consts[80];
        tmp_args_element_name_2 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_35;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_36 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_36);
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
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_7_enum();

        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_4;
        PyObject *tmp_kw_name_1;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        assert(!(tmp_called_name_4 == NULL));
        tmp_kw_name_1 = PyDict_Copy(mod_consts[170]);
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 152;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_assign_source_40;


            tmp_assign_source_40 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_8___init__();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__ == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__ = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;


            tmp_assign_source_41 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_9_update();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;


            tmp_assign_source_42 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_10__update();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;


            tmp_assign_source_43 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_11__pad_cache_and_update();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[171];
            Py_INCREF(tmp_defaults_1);


            tmp_assign_source_44 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_12_encrypt(tmp_defaults_1);

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[171];
            Py_INCREF(tmp_defaults_2);


            tmp_assign_source_45 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_13_decrypt(tmp_defaults_2);

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;


            tmp_assign_source_46 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_14_digest();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;


            tmp_assign_source_47 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_15__compute_mac();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;


            tmp_assign_source_48 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_16_hexdigest();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;


            tmp_assign_source_49 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_17_verify();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;


            tmp_assign_source_50 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_18_hexverify();

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[171];
            Py_INCREF(tmp_defaults_3);


            tmp_assign_source_51 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_19_encrypt_and_digest(tmp_defaults_3);

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest = tmp_assign_source_51;
        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[171];
            Py_INCREF(tmp_defaults_4);


            tmp_assign_source_52 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_20_decrypt_and_verify(tmp_defaults_4);

            assert(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify == NULL);
            tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify = tmp_assign_source_52;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_value_2 = mod_consts[46];
            tmp_dict_key_2 = mod_consts[165];
            tmp_assign_source_39 = _PyDict_NewPresized( 15 );
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = mod_consts[176];
            tmp_dict_key_2 = mod_consts[141];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__;
            tmp_dict_key_2 = mod_consts[164];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update;
            tmp_dict_key_2 = mod_consts[63];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update;
            tmp_dict_key_2 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update;
            tmp_dict_key_2 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt;
            tmp_dict_key_2 = mod_consts[64];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt;
            tmp_dict_key_2 = mod_consts[65];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest;
            tmp_dict_key_2 = mod_consts[66];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac;
            tmp_dict_key_2 = mod_consts[109];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest;
            tmp_dict_key_2 = mod_consts[172];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify;
            tmp_dict_key_2 = mod_consts[67];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify;
            tmp_dict_key_2 = mod_consts[173];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest;
            tmp_dict_key_2 = mod_consts[174];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify);
            tmp_dict_value_2 = tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify;
            tmp_dict_key_2 = mod_consts[175];
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key___init__ = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_update = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__update = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__pad_cache_and_update = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_digest = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key__compute_mac = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexdigest = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_verify = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_hexverify = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_encrypt_and_digest = NULL;
        CHECK_OBJECT(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify);
        Py_DECREF(tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify);
        tmp_locals_Crypto$Cipher$_mode_gcm$$$class_2_GcmMode_155_key_decrypt_and_verify = NULL;
        goto outline_result_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = mod_consts[167];
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
        tmp_key_name_4 = mod_consts[167];
        tmp_assign_source_53 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_54;
            tmp_assign_source_54 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_2__base == NULL);
            Py_INCREF(tmp_assign_source_54);
            tmp_select_metaclass_2__base = tmp_assign_source_54;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_2;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_expression_name_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_53 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_2);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto try_except_handler_11;
            }
            goto try_return_handler_10;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_11:;
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
            tmp_assign_source_53 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_53 == NULL));
            goto try_return_handler_10;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
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
        tmp_class_creation_2__metaclass = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_5 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = mod_consts[138];
        tmp_args_element_name_5 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_55;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
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
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ac6f7f96dace0d0a031a5d9933a8ac8);
#endif
    popFrameStack();

    assertFrameObject(frame_2ac6f7f96dace0d0a031a5d9933a8ac8);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2ac6f7f96dace0d0a031a5d9933a8ac8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ac6f7f96dace0d0a031a5d9933a8ac8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ac6f7f96dace0d0a031a5d9933a8ac8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ac6f7f96dace0d0a031a5d9933a8ac8, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_56 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_56);
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
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_Crypto$Cipher$_mode_gcm$$$function_21__create_gcm_cipher();

        UPDATE_STRING_DICT1(moduledict_Crypto$Cipher$_mode_gcm, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_57);
    }

    return module_Crypto$Cipher$_mode_gcm;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

