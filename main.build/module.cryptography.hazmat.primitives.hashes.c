/* Generated code for Python module 'cryptography.hazmat.primitives.hashes'
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

/* The "module_cryptography$hazmat$primitives$hashes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$hashes;
PyDictObject *moduledict_cryptography$hazmat$primitives$hashes;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[118];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.hazmat.primitives.hashes", 118);

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
void checkModuleConstants_cryptography$hazmat$primitives$hashes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.hazmat.primitives.hashes", 118);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_55f3416d5d957e0ed55251b30674c0be;
static PyCodeObject *codeobj_9ce9c82587bacbf1ed16689dc3ac8c9c;
static PyCodeObject *codeobj_4debcf786ea1713de80712623ced1d1a;
static PyCodeObject *codeobj_dc8f1c9f253e6f6d9281c528c6c1cc0e;
static PyCodeObject *codeobj_900ff7b1917be5c12e701b7c297fa4f8;
static PyCodeObject *codeobj_c0b001b51c3dada4ad799459c0f5897a;
static PyCodeObject *codeobj_9d869be6da8b92363de3c858b0b7f6ab;
static PyCodeObject *codeobj_25f32b6807868631d8bb479739df2d64;
static PyCodeObject *codeobj_c317e007212774ef1da5ed898b7d7fc6;
static PyCodeObject *codeobj_29df494d1a6a6d2829b381e07966b313;
static PyCodeObject *codeobj_6ce85edbcfd005ae748b1551e22c1b97;
static PyCodeObject *codeobj_4cae538c0a6d8b48751167ba6582d0ce;
static PyCodeObject *codeobj_afa0a8f50dc73bb394441673d0a93fcd;
static PyCodeObject *codeobj_30348454037c0ba81c6967e5ac045b2f;
static PyCodeObject *codeobj_2fe61bf7c31413379c597e7b700af9f4;
static PyCodeObject *codeobj_3b72b42983fe95ebd0438563796033a8;
static PyCodeObject *codeobj_e218a03d3e4f71f8b137282d3ba69b08;
static PyCodeObject *codeobj_f9dc9169ed4bc793e3e931463b993483;
static PyCodeObject *codeobj_4d92a23f7a537e8a4e22497eef54242a;
static PyCodeObject *codeobj_2b40d5511ae2effe80c27d578d4c9323;
static PyCodeObject *codeobj_31f2208b2bcefe39ca07bfea080f9db3;
static PyCodeObject *codeobj_cd93e6ee4011226131e79d9d17d89f2c;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[36]; CHECK_OBJECT(module_filename_obj);
    codeobj_55f3416d5d957e0ed55251b30674c0be = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_9ce9c82587bacbf1ed16689dc3ac8c9c = MAKE_CODEOBJECT(module_filename_obj, 229, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[109], NULL, NULL, 0, 0, 0);
    codeobj_4debcf786ea1713de80712623ced1d1a = MAKE_CODEOBJECT(module_filename_obj, 246, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[111], NULL, NULL, 0, 0, 0);
    codeobj_dc8f1c9f253e6f6d9281c528c6c1cc0e = MAKE_CODEOBJECT(module_filename_obj, 71, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[20], NULL, NULL, 0, 0, 0);
    codeobj_900ff7b1917be5c12e701b7c297fa4f8 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[6], NULL, NULL, 0, 0, 0);
    codeobj_c0b001b51c3dada4ad799459c0f5897a = MAKE_CODEOBJECT(module_filename_obj, 37, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[67], NULL, NULL, 0, 0, 0);
    codeobj_9d869be6da8b92363de3c858b0b7f6ab = MAKE_CODEOBJECT(module_filename_obj, 189, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[99], NULL, NULL, 0, 0, 0);
    codeobj_25f32b6807868631d8bb479739df2d64 = MAKE_CODEOBJECT(module_filename_obj, 206, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_c317e007212774ef1da5ed898b7d7fc6 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[71], mod_consts[113], NULL, 4, 0, 0);
    codeobj_29df494d1a6a6d2829b381e07966b313 = MAKE_CODEOBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[71], mod_consts[114], NULL, 2, 0, 0);
    codeobj_6ce85edbcfd005ae748b1551e22c1b97 = MAKE_CODEOBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[71], mod_consts[114], NULL, 2, 0, 0);
    codeobj_4cae538c0a6d8b48751167ba6582d0ce = MAKE_CODEOBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[71], mod_consts[114], NULL, 2, 0, 0);
    codeobj_afa0a8f50dc73bb394441673d0a93fcd = MAKE_CODEOBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[71], mod_consts[114], NULL, 2, 0, 0);
    codeobj_30348454037c0ba81c6967e5ac045b2f = MAKE_CODEOBJECT(module_filename_obj, 38, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[12], mod_consts[115], NULL, 1, 0, 0);
    codeobj_2fe61bf7c31413379c597e7b700af9f4 = MAKE_CODEOBJECT(module_filename_obj, 56, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[22], mod_consts[115], NULL, 1, 0, 0);
    codeobj_3b72b42983fe95ebd0438563796033a8 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[22], mod_consts[115], NULL, 1, 0, 0);
    codeobj_e218a03d3e4f71f8b137282d3ba69b08 = MAKE_CODEOBJECT(module_filename_obj, 29, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[57], mod_consts[115], NULL, 1, 0, 0);
    codeobj_f9dc9169ed4bc793e3e931463b993483 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[24], mod_consts[115], NULL, 1, 0, 0);
    codeobj_4d92a23f7a537e8a4e22497eef54242a = MAKE_CODEOBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[24], mod_consts[116], NULL, 1, 0, 0);
    codeobj_2b40d5511ae2effe80c27d578d4c9323 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[55], mod_consts[115], NULL, 1, 0, 0);
    codeobj_31f2208b2bcefe39ca07bfea080f9db3 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[19], mod_consts[117], NULL, 2, 0, 0);
    codeobj_cd93e6ee4011226131e79d9d17d89f2c = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[19], mod_consts[117], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_10_finalize();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_11___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_12___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_13___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_14___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_1_name();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_2_digest_size();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_3_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_4_update();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_5_finalize();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_6_copy();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_7___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_8_update();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_9_copy();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *par_backend = python_pars[2];
    PyObject *par_ctx = python_pars[3];
    struct Nuitka_FrameObject *frame_c317e007212774ef1da5ed898b7d7fc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c317e007212774ef1da5ed898b7d7fc6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c317e007212774ef1da5ed898b7d7fc6)) {
        Py_XDECREF(cache_frame_c317e007212774ef1da5ed898b7d7fc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c317e007212774ef1da5ed898b7d7fc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c317e007212774ef1da5ed898b7d7fc6 = MAKE_FUNCTION_FRAME(codeobj_c317e007212774ef1da5ed898b7d7fc6, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c317e007212774ef1da5ed898b7d7fc6->m_type_description == NULL);
    frame_c317e007212774ef1da5ed898b7d7fc6 = cache_frame_c317e007212774ef1da5ed898b7d7fc6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c317e007212774ef1da5ed898b7d7fc6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c317e007212774ef1da5ed898b7d7fc6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_1 = par_backend;
        frame_c317e007212774ef1da5ed898b7d7fc6->m_frame.f_lineno = 73;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
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
        CHECK_OBJECT(par_backend);
        tmp_isinstance_inst_1 = par_backend;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[1]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[2]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[3];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[5]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c317e007212774ef1da5ed898b7d7fc6->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 75;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_algorithm);
        tmp_isinstance_inst_2 = par_algorithm;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[6]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
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
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[7];
        frame_c317e007212774ef1da5ed898b7d7fc6->m_frame.f_lineno = 81;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 81;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_algorithm);
        tmp_assattr_name_1 = par_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_backend);
        tmp_assattr_name_2 = par_backend;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ctx);
        tmp_compexpr_left_1 = par_ctx;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[9]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[10]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[12]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c317e007212774ef1da5ed898b7d7fc6->m_frame.f_lineno = 87;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[13], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_ctx);
        tmp_assattr_name_4 = par_ctx;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[13], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c317e007212774ef1da5ed898b7d7fc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c317e007212774ef1da5ed898b7d7fc6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c317e007212774ef1da5ed898b7d7fc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c317e007212774ef1da5ed898b7d7fc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c317e007212774ef1da5ed898b7d7fc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c317e007212774ef1da5ed898b7d7fc6,
        type_description_1,
        par_self,
        par_algorithm,
        par_backend,
        par_ctx
    );


    // Release cached frame if used for exception.
    if (frame_c317e007212774ef1da5ed898b7d7fc6 == cache_frame_c317e007212774ef1da5ed898b7d7fc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c317e007212774ef1da5ed898b7d7fc6);
        cache_frame_c317e007212774ef1da5ed898b7d7fc6 = NULL;
    }

    assertFrameObject(frame_c317e007212774ef1da5ed898b7d7fc6);

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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
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

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
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
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_8_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_cd93e6ee4011226131e79d9d17d89f2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cd93e6ee4011226131e79d9d17d89f2c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cd93e6ee4011226131e79d9d17d89f2c)) {
        Py_XDECREF(cache_frame_cd93e6ee4011226131e79d9d17d89f2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd93e6ee4011226131e79d9d17d89f2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd93e6ee4011226131e79d9d17d89f2c = MAKE_FUNCTION_FRAME(codeobj_cd93e6ee4011226131e79d9d17d89f2c, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cd93e6ee4011226131e79d9d17d89f2c->m_type_description == NULL);
    frame_cd93e6ee4011226131e79d9d17d89f2c = cache_frame_cd93e6ee4011226131e79d9d17d89f2c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cd93e6ee4011226131e79d9d17d89f2c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cd93e6ee4011226131e79d9d17d89f2c) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[13]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
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
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cd93e6ee4011226131e79d9d17d89f2c->m_frame.f_lineno = 95;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[15]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 95;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[18];
        CHECK_OBJECT(par_data);
        tmp_args_element_name_2 = par_data;
        frame_cd93e6ee4011226131e79d9d17d89f2c->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[17], call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_3 = par_data;
        frame_cd93e6ee4011226131e79d9d17d89f2c->m_frame.f_lineno = 97;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[19], tmp_args_element_name_3);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd93e6ee4011226131e79d9d17d89f2c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd93e6ee4011226131e79d9d17d89f2c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd93e6ee4011226131e79d9d17d89f2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd93e6ee4011226131e79d9d17d89f2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd93e6ee4011226131e79d9d17d89f2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd93e6ee4011226131e79d9d17d89f2c,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_cd93e6ee4011226131e79d9d17d89f2c == cache_frame_cd93e6ee4011226131e79d9d17d89f2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cd93e6ee4011226131e79d9d17d89f2c);
        cache_frame_cd93e6ee4011226131e79d9d17d89f2c = NULL;
    }

    assertFrameObject(frame_cd93e6ee4011226131e79d9d17d89f2c);

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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_9_copy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3b72b42983fe95ebd0438563796033a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3b72b42983fe95ebd0438563796033a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3b72b42983fe95ebd0438563796033a8)) {
        Py_XDECREF(cache_frame_3b72b42983fe95ebd0438563796033a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b72b42983fe95ebd0438563796033a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b72b42983fe95ebd0438563796033a8 = MAKE_FUNCTION_FRAME(codeobj_3b72b42983fe95ebd0438563796033a8, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3b72b42983fe95ebd0438563796033a8->m_type_description == NULL);
    frame_3b72b42983fe95ebd0438563796033a8 = cache_frame_3b72b42983fe95ebd0438563796033a8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3b72b42983fe95ebd0438563796033a8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3b72b42983fe95ebd0438563796033a8) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[13]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
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
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3b72b42983fe95ebd0438563796033a8->m_frame.f_lineno = 101;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[15]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 101;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[20]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[12]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        if (par_self == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[9]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[21];
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_name_4;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;

                exception_lineno = 103;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[13]);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_3b72b42983fe95ebd0438563796033a8->m_frame.f_lineno = 103;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = mod_consts[23];
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_3b72b42983fe95ebd0438563796033a8->m_frame.f_lineno = 102;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3b72b42983fe95ebd0438563796033a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3b72b42983fe95ebd0438563796033a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3b72b42983fe95ebd0438563796033a8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3b72b42983fe95ebd0438563796033a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b72b42983fe95ebd0438563796033a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b72b42983fe95ebd0438563796033a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b72b42983fe95ebd0438563796033a8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3b72b42983fe95ebd0438563796033a8 == cache_frame_3b72b42983fe95ebd0438563796033a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3b72b42983fe95ebd0438563796033a8);
        cache_frame_3b72b42983fe95ebd0438563796033a8 = NULL;
    }

    assertFrameObject(frame_3b72b42983fe95ebd0438563796033a8);

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


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_10_finalize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_digest = NULL;
    struct Nuitka_FrameObject *frame_4d92a23f7a537e8a4e22497eef54242a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4d92a23f7a537e8a4e22497eef54242a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4d92a23f7a537e8a4e22497eef54242a)) {
        Py_XDECREF(cache_frame_4d92a23f7a537e8a4e22497eef54242a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d92a23f7a537e8a4e22497eef54242a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d92a23f7a537e8a4e22497eef54242a = MAKE_FUNCTION_FRAME(codeobj_4d92a23f7a537e8a4e22497eef54242a, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4d92a23f7a537e8a4e22497eef54242a->m_type_description == NULL);
    frame_4d92a23f7a537e8a4e22497eef54242a = cache_frame_4d92a23f7a537e8a4e22497eef54242a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4d92a23f7a537e8a4e22497eef54242a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4d92a23f7a537e8a4e22497eef54242a) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[13]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
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
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[14]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4d92a23f7a537e8a4e22497eef54242a->m_frame.f_lineno = 108;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[15]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 108;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4d92a23f7a537e8a4e22497eef54242a->m_frame.f_lineno = 109;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_digest == NULL);
        var_digest = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d92a23f7a537e8a4e22497eef54242a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d92a23f7a537e8a4e22497eef54242a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d92a23f7a537e8a4e22497eef54242a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d92a23f7a537e8a4e22497eef54242a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d92a23f7a537e8a4e22497eef54242a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d92a23f7a537e8a4e22497eef54242a,
        type_description_1,
        par_self,
        var_digest
    );


    // Release cached frame if used for exception.
    if (frame_4d92a23f7a537e8a4e22497eef54242a == cache_frame_4d92a23f7a537e8a4e22497eef54242a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4d92a23f7a537e8a4e22497eef54242a);
        cache_frame_4d92a23f7a537e8a4e22497eef54242a = NULL;
    }

    assertFrameObject(frame_4d92a23f7a537e8a4e22497eef54242a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_digest);
    tmp_return_value = var_digest;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_digest);
    Py_DECREF(var_digest);
    var_digest = NULL;
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
    Py_XDECREF(var_digest);
    var_digest = NULL;
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


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_29df494d1a6a6d2829b381e07966b313;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_29df494d1a6a6d2829b381e07966b313 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29df494d1a6a6d2829b381e07966b313)) {
        Py_XDECREF(cache_frame_29df494d1a6a6d2829b381e07966b313);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29df494d1a6a6d2829b381e07966b313 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29df494d1a6a6d2829b381e07966b313 = MAKE_FUNCTION_FRAME(codeobj_29df494d1a6a6d2829b381e07966b313, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_29df494d1a6a6d2829b381e07966b313->m_type_description == NULL);
    frame_29df494d1a6a6d2829b381e07966b313 = cache_frame_29df494d1a6a6d2829b381e07966b313;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29df494d1a6a6d2829b381e07966b313);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29df494d1a6a6d2829b381e07966b313) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_isinstance_inst_1 = par_digest_size;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[25]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[26]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[27];
        frame_29df494d1a6a6d2829b381e07966b313->m_frame.f_lineno = 194;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 194;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[28];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
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
        tmp_make_exception_arg_2 = mod_consts[29];
        frame_29df494d1a6a6d2829b381e07966b313->m_frame.f_lineno = 197;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 197;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_name_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29df494d1a6a6d2829b381e07966b313);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29df494d1a6a6d2829b381e07966b313);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29df494d1a6a6d2829b381e07966b313, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29df494d1a6a6d2829b381e07966b313->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29df494d1a6a6d2829b381e07966b313, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29df494d1a6a6d2829b381e07966b313,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_29df494d1a6a6d2829b381e07966b313 == cache_frame_29df494d1a6a6d2829b381e07966b313) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_29df494d1a6a6d2829b381e07966b313);
        cache_frame_29df494d1a6a6d2829b381e07966b313 = NULL;
    }

    assertFrameObject(frame_29df494d1a6a6d2829b381e07966b313);

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
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_6ce85edbcfd005ae748b1551e22c1b97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6ce85edbcfd005ae748b1551e22c1b97 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ce85edbcfd005ae748b1551e22c1b97)) {
        Py_XDECREF(cache_frame_6ce85edbcfd005ae748b1551e22c1b97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ce85edbcfd005ae748b1551e22c1b97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ce85edbcfd005ae748b1551e22c1b97 = MAKE_FUNCTION_FRAME(codeobj_6ce85edbcfd005ae748b1551e22c1b97, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6ce85edbcfd005ae748b1551e22c1b97->m_type_description == NULL);
    frame_6ce85edbcfd005ae748b1551e22c1b97 = cache_frame_6ce85edbcfd005ae748b1551e22c1b97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6ce85edbcfd005ae748b1551e22c1b97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6ce85edbcfd005ae748b1551e22c1b97) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_isinstance_inst_1 = par_digest_size;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[25]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[26]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[27];
        frame_6ce85edbcfd005ae748b1551e22c1b97->m_frame.f_lineno = 211;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 211;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[28];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
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
        tmp_make_exception_arg_2 = mod_consts[29];
        frame_6ce85edbcfd005ae748b1551e22c1b97->m_frame.f_lineno = 214;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 214;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_name_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ce85edbcfd005ae748b1551e22c1b97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ce85edbcfd005ae748b1551e22c1b97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6ce85edbcfd005ae748b1551e22c1b97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ce85edbcfd005ae748b1551e22c1b97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ce85edbcfd005ae748b1551e22c1b97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ce85edbcfd005ae748b1551e22c1b97,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_6ce85edbcfd005ae748b1551e22c1b97 == cache_frame_6ce85edbcfd005ae748b1551e22c1b97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6ce85edbcfd005ae748b1551e22c1b97);
        cache_frame_6ce85edbcfd005ae748b1551e22c1b97 = NULL;
    }

    assertFrameObject(frame_6ce85edbcfd005ae748b1551e22c1b97);

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
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_4cae538c0a6d8b48751167ba6582d0ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4cae538c0a6d8b48751167ba6582d0ce = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4cae538c0a6d8b48751167ba6582d0ce)) {
        Py_XDECREF(cache_frame_4cae538c0a6d8b48751167ba6582d0ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cae538c0a6d8b48751167ba6582d0ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cae538c0a6d8b48751167ba6582d0ce = MAKE_FUNCTION_FRAME(codeobj_4cae538c0a6d8b48751167ba6582d0ce, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4cae538c0a6d8b48751167ba6582d0ce->m_type_description == NULL);
    frame_4cae538c0a6d8b48751167ba6582d0ce = cache_frame_4cae538c0a6d8b48751167ba6582d0ce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4cae538c0a6d8b48751167ba6582d0ce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4cae538c0a6d8b48751167ba6582d0ce) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[31];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oo";
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
        tmp_make_exception_arg_1 = mod_consts[32];
        frame_4cae538c0a6d8b48751167ba6582d0ce->m_frame.f_lineno = 238;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 238;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_name_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4cae538c0a6d8b48751167ba6582d0ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4cae538c0a6d8b48751167ba6582d0ce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cae538c0a6d8b48751167ba6582d0ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cae538c0a6d8b48751167ba6582d0ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cae538c0a6d8b48751167ba6582d0ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cae538c0a6d8b48751167ba6582d0ce,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_4cae538c0a6d8b48751167ba6582d0ce == cache_frame_4cae538c0a6d8b48751167ba6582d0ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4cae538c0a6d8b48751167ba6582d0ce);
        cache_frame_4cae538c0a6d8b48751167ba6582d0ce = NULL;
    }

    assertFrameObject(frame_4cae538c0a6d8b48751167ba6582d0ce);

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
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function_14___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_afa0a8f50dc73bb394441673d0a93fcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_afa0a8f50dc73bb394441673d0a93fcd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afa0a8f50dc73bb394441673d0a93fcd)) {
        Py_XDECREF(cache_frame_afa0a8f50dc73bb394441673d0a93fcd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afa0a8f50dc73bb394441673d0a93fcd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afa0a8f50dc73bb394441673d0a93fcd = MAKE_FUNCTION_FRAME(codeobj_afa0a8f50dc73bb394441673d0a93fcd, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_afa0a8f50dc73bb394441673d0a93fcd->m_type_description == NULL);
    frame_afa0a8f50dc73bb394441673d0a93fcd = cache_frame_afa0a8f50dc73bb394441673d0a93fcd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_afa0a8f50dc73bb394441673d0a93fcd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_afa0a8f50dc73bb394441673d0a93fcd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[33];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oo";
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
        tmp_make_exception_arg_1 = mod_consts[34];
        frame_afa0a8f50dc73bb394441673d0a93fcd->m_frame.f_lineno = 255;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 255;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_name_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_afa0a8f50dc73bb394441673d0a93fcd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_afa0a8f50dc73bb394441673d0a93fcd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afa0a8f50dc73bb394441673d0a93fcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afa0a8f50dc73bb394441673d0a93fcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afa0a8f50dc73bb394441673d0a93fcd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afa0a8f50dc73bb394441673d0a93fcd,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_afa0a8f50dc73bb394441673d0a93fcd == cache_frame_afa0a8f50dc73bb394441673d0a93fcd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_afa0a8f50dc73bb394441673d0a93fcd);
        cache_frame_afa0a8f50dc73bb394441673d0a93fcd = NULL;
    }

    assertFrameObject(frame_afa0a8f50dc73bb394441673d0a93fcd);

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
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_10_finalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_10_finalize,
        mod_consts[24],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d92a23f7a537e8a4e22497eef54242a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_11___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_11___init__,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29df494d1a6a6d2829b381e07966b313,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_12___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_12___init__,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6ce85edbcfd005ae748b1551e22c1b97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_13___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_13___init__,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4cae538c0a6d8b48751167ba6582d0ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_14___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_14___init__,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_afa0a8f50dc73bb394441673d0a93fcd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_1_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[55],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b40d5511ae2effe80c27d578d4c9323,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_2_digest_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[57],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e218a03d3e4f71f8b137282d3ba69b08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_3_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[12],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_30348454037c0ba81c6967e5ac045b2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_4_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[19],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31f2208b2bcefe39ca07bfea080f9db3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_5_finalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[24],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f9dc9169ed4bc793e3e931463b993483,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_6_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[22],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2fe61bf7c31413379c597e7b700af9f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_7___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_7___init__,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c317e007212774ef1da5ed898b7d7fc6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_8_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_8_update,
        mod_consts[19],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cd93e6ee4011226131e79d9d17d89f2c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_9_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function_9_copy,
        mod_consts[22],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b72b42983fe95ebd0438563796033a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
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

function_impl_code functable_cryptography$hazmat$primitives$hashes[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_cryptography$hazmat$primitives$hashes$$$function_7___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function_8_update,
    impl_cryptography$hazmat$primitives$hashes$$$function_9_copy,
    impl_cryptography$hazmat$primitives$hashes$$$function_10_finalize,
    impl_cryptography$hazmat$primitives$hashes$$$function_11___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function_12___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function_13___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function_14___init__,
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

    function_impl_code *current = functable_cryptography$hazmat$primitives$hashes;
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

    if (offset > sizeof(functable_cryptography$hazmat$primitives$hashes) || offset < 0) {
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
        functable_cryptography$hazmat$primitives$hashes[offset],
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
        module_cryptography$hazmat$primitives$hashes,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.hazmat.primitives.hashes";

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$hazmat$primitives$hashes = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.primitives.hashes: Skipping module init, already done.\n");
#endif

        return module_cryptography$hazmat$primitives$hashes;
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
    PRINT_STRING("cryptography.hazmat.primitives.hashes: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.hashes: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.hashes: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$primitives$hashes\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$primitives$hashes = MODULE_DICT(module_cryptography$hazmat$primitives$hashes);

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
        moduledict_cryptography$hazmat$primitives$hashes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$hashes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$hashes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$hashes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$hashes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$hashes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$primitives$hashes);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
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
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_55f3416d5d957e0ed55251b30674c0be;
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
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_900ff7b1917be5c12e701b7c297fa4f8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37 = NULL;
    struct Nuitka_FrameObject *frame_c0b001b51c3dada4ad799459c0f5897a_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c0b001b51c3dada4ad799459c0f5897a_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
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
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71 = NULL;
    struct Nuitka_FrameObject *frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4 = NULL;
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
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189 = NULL;
    struct Nuitka_FrameObject *frame_9d869be6da8b92363de3c858b0b7f6ab_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5 = NULL;
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
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206 = NULL;
    struct Nuitka_FrameObject *frame_25f32b6807868631d8bb479739df2d64_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_25f32b6807868631d8bb479739df2d64_6 = NULL;
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
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229 = NULL;
    struct Nuitka_FrameObject *frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7 = NULL;
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
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246 = NULL;
    struct Nuitka_FrameObject *frame_4debcf786ea1713de80712623ced1d1a_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4debcf786ea1713de80712623ced1d1a_8 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_2);
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
    frame_55f3416d5d957e0ed55251b30674c0be = MAKE_MODULE_FRAME(codeobj_55f3416d5d957e0ed55251b30674c0be, module_cryptography$hazmat$primitives$hashes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_55f3416d5d957e0ed55251b30674c0be);
    assert(Py_REFCNT(frame_55f3416d5d957e0ed55251b30674c0be) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[38]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[39]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[40]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
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
        tmp_name_name_1 = mod_consts[41];
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[42];
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[25];
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[42];
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[43];
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[44];
        tmp_level_name_3 = mod_consts[42];
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[16]);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[45];
        tmp_globals_name_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[46];
        tmp_level_name_4 = mod_consts[42];
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 12;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[14]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[2]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[4]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[47];
        tmp_globals_name_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[48];
        tmp_level_name_5 = mod_consts[42];
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 17;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[0]);
        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[49];
        tmp_globals_name_6 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[50];
        tmp_level_name_6 = mod_consts[42];
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 18;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[1]);
        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2)) {
            Py_XDECREF(cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2 = MAKE_FUNCTION_FRAME(codeobj_900ff7b1917be5c12e701b7c297fa4f8, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2->m_type_description == NULL);
        frame_900ff7b1917be5c12e701b7c297fa4f8_2 = cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_900ff7b1917be5c12e701b7c297fa4f8_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_900ff7b1917be5c12e701b7c297fa4f8_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_1_name();

            frame_900ff7b1917be5c12e701b7c297fa4f8_2->m_frame.f_lineno = 23;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[53], tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_2_digest_size();

            frame_900ff7b1917be5c12e701b7c297fa4f8_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[53], tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_900ff7b1917be5c12e701b7c297fa4f8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_900ff7b1917be5c12e701b7c297fa4f8_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_900ff7b1917be5c12e701b7c297fa4f8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_900ff7b1917be5c12e701b7c297fa4f8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_900ff7b1917be5c12e701b7c297fa4f8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_900ff7b1917be5c12e701b7c297fa4f8_2,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_900ff7b1917be5c12e701b7c297fa4f8_2 == cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2);
            cache_frame_900ff7b1917be5c12e701b7c297fa4f8_2 = NULL;
        }

        assertFrameObject(frame_900ff7b1917be5c12e701b7c297fa4f8_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_assign_source_16 = locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22);
        locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22);
        locals_cryptography$hazmat$primitives$hashes$$$class_1_HashAlgorithm_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_3;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = mod_consts[58];
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
        tmp_key_name_2 = mod_consts[58];
        tmp_assign_source_17 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_1__base == NULL);
            Py_INCREF(tmp_assign_source_18);
            tmp_select_metaclass_1__base = tmp_assign_source_18;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_expression_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_17 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_6:;
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
            tmp_assign_source_17 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_17 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = mod_consts[6];
        tmp_args_element_name_4 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_7;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[60]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[61]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 21;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_args_element_name_7 = tmp_class_creation_1__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 21;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert(old != NULL);
            tmp_class_creation_1__class = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;
    Py_XDECREF(tmp_class_creation_1__class_dict);
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
    try_end_3:;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_21 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37 = tmp_set_locals_2;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_c0b001b51c3dada4ad799459c0f5897a_3)) {
            Py_XDECREF(cache_frame_c0b001b51c3dada4ad799459c0f5897a_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c0b001b51c3dada4ad799459c0f5897a_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c0b001b51c3dada4ad799459c0f5897a_3 = MAKE_FUNCTION_FRAME(codeobj_c0b001b51c3dada4ad799459c0f5897a, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c0b001b51c3dada4ad799459c0f5897a_3->m_type_description == NULL);
        frame_c0b001b51c3dada4ad799459c0f5897a_3 = cache_frame_c0b001b51c3dada4ad799459c0f5897a_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c0b001b51c3dada4ad799459c0f5897a_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c0b001b51c3dada4ad799459c0f5897a_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_8;
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_3_algorithm();

            frame_c0b001b51c3dada4ad799459c0f5897a_3->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[53], tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_4_update();

            frame_c0b001b51c3dada4ad799459c0f5897a_3->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[63], tmp_args_element_name_9);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_10;
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_5_finalize();

            frame_c0b001b51c3dada4ad799459c0f5897a_3->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[63], tmp_args_element_name_10);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_6_copy();

            frame_c0b001b51c3dada4ad799459c0f5897a_3->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[63], tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c0b001b51c3dada4ad799459c0f5897a_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c0b001b51c3dada4ad799459c0f5897a_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c0b001b51c3dada4ad799459c0f5897a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c0b001b51c3dada4ad799459c0f5897a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c0b001b51c3dada4ad799459c0f5897a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c0b001b51c3dada4ad799459c0f5897a_3,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_c0b001b51c3dada4ad799459c0f5897a_3 == cache_frame_c0b001b51c3dada4ad799459c0f5897a_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c0b001b51c3dada4ad799459c0f5897a_3);
            cache_frame_c0b001b51c3dada4ad799459c0f5897a_3 = NULL;
        }

        assertFrameObject(frame_c0b001b51c3dada4ad799459c0f5897a_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        tmp_assign_source_22 = locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37);
        locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37 = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37);
        locals_cryptography$hazmat$primitives$hashes$$$class_2_HashContext_37 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 37;
        goto try_except_handler_7;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = mod_consts[58];
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
        tmp_key_name_4 = mod_consts[58];
        tmp_assign_source_23 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_2__base == NULL);
            Py_INCREF(tmp_assign_source_24);
            tmp_select_metaclass_2__base = tmp_assign_source_24;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_4;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_expression_name_4 = tmp_select_metaclass_2__base;
            tmp_assign_source_23 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_4);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_23 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_23 == NULL));
            goto try_return_handler_9;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
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
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_4 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_12 = mod_consts[67];
        tmp_args_element_name_13 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_14 = tmp_class_creation_2__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_16;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[60]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 36;

            goto try_except_handler_7;
        }
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[61]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 36;

            goto try_except_handler_7;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 36;
        tmp_called_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_args_element_name_16 = tmp_class_creation_2__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 36;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert(old != NULL);
            tmp_class_creation_2__class = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_27 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_27);
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
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_Copy(mod_consts[68]);
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_5;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        tmp_key_name_5 = mod_consts[58];
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
        tmp_key_name_6 = mod_consts[58];
        tmp_assign_source_29 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_3__base == NULL);
            Py_INCREF(tmp_assign_source_30);
            tmp_select_metaclass_3__base = tmp_assign_source_30;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_7;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_expression_name_7 = tmp_select_metaclass_3__base;
            tmp_assign_source_29 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_7);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

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
            tmp_assign_source_29 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_29 == NULL));
            goto try_return_handler_12;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        goto outline_result_5;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_17 = mod_consts[69];
        tmp_args_element_name_18 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_name_19 = tmp_class_creation_3__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_21;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_11;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[60]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_11;
        }
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 63;

            goto try_except_handler_11;
        }
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[61]);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 63;

            goto try_except_handler_11;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 63;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_11;
        }
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_args_element_name_21 = tmp_class_creation_3__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 63;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert(old != NULL);
            tmp_class_creation_3__class = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
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
    CHECK_OBJECT(tmp_class_creation_3__class_dict);
    Py_DECREF(tmp_class_creation_3__class_dict);
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
    try_end_5:;
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_33 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71 = tmp_set_locals_3;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[70];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_7___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4)) {
            Py_XDECREF(cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4 = MAKE_FUNCTION_FRAME(codeobj_dc8f1c9f253e6f6d9281c528c6c1cc0e, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4->m_type_description == NULL);
        frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4 = cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_7;
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto frame_exception_exit_4;
            }
            frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, mod_consts[72], &PyTuple_GET_ITEM(mod_consts[73], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4 == cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4);
            cache_frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4 = NULL;
        }

        assertFrameObject(frame_dc8f1c9f253e6f6d9281c528c6c1cc0e_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_15;
        skip_nested_handling_3:;


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_8_update();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_9_copy();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_10_finalize();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71, mod_consts[24], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_34 = locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71);
        locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71 = NULL;
        goto outline_result_6;
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

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71);
        locals_cryptography$hazmat$primitives$hashes$$$class_4_Hash_71 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 71;
        goto try_except_handler_14;
        outline_result_6:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = mod_consts[58];
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
        tmp_key_name_8 = mod_consts[58];
        tmp_assign_source_35 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_14;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_4__base == NULL);
            Py_INCREF(tmp_assign_source_36);
            tmp_select_metaclass_4__base = tmp_assign_source_36;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_10;
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_expression_name_10 = tmp_select_metaclass_4__base;
            tmp_assign_source_35 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_10);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

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
            tmp_assign_source_35 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_assign_source_35 == NULL));
            goto try_return_handler_16;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(tmp_select_metaclass_4__base);
        tmp_select_metaclass_4__base = NULL;
        goto outline_result_7;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_4__base);
        tmp_select_metaclass_4__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_name_10 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_22 = mod_consts[20];
        tmp_args_element_name_23 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_name_24 = tmp_class_creation_4__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_14;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[74]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_14;
        }
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_args_element_name_25 == NULL)) {
            tmp_args_element_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 70;

            goto try_except_handler_14;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 70;
        tmp_called_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_12);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_14;
        }
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_args_element_name_26 = tmp_class_creation_4__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 70;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert(old != NULL);
            tmp_class_creation_4__class = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    goto try_end_6;
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
    try_end_6:;
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_39 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_39);
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
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_Copy(mod_consts[75]);
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = mod_consts[58];
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
        tmp_key_name_10 = mod_consts[58];
        tmp_assign_source_41 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_18;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_5__base == NULL);
            Py_INCREF(tmp_assign_source_42);
            tmp_select_metaclass_5__base = tmp_assign_source_42;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_12;
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_expression_name_12 = tmp_select_metaclass_5__base;
            tmp_assign_source_41 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_12);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto try_except_handler_20;
            }
            goto try_return_handler_19;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF(exception_keeper_type_14);
            Py_XDECREF(exception_keeper_value_14);
            Py_XDECREF(exception_keeper_tb_14);
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_type_arg_5 = tmp_select_metaclass_5__base;
            tmp_assign_source_41 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_assign_source_41 == NULL));
            goto try_return_handler_19;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_XDECREF(tmp_select_metaclass_5__base);
        tmp_select_metaclass_5__base = NULL;
        goto outline_result_8;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_5__base);
        tmp_select_metaclass_5__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_name_13 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_27 = mod_consts[76];
        tmp_args_element_name_28 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_name_29 = tmp_class_creation_5__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, call_args);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[74]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        tmp_args_element_name_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_30 == NULL)) {
            tmp_args_element_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 114;

            goto try_except_handler_18;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 114;
        tmp_called_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_15);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_args_element_name_31 = tmp_class_creation_5__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 114;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_class_creation_5__class;
            assert(old != NULL);
            tmp_class_creation_5__class = tmp_assign_source_44;
            Py_DECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_45 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_45);
    }
    CHECK_OBJECT(tmp_class_creation_5__class);
    Py_DECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_Copy(mod_consts[77]);
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = mod_consts[58];
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
        tmp_key_name_12 = mod_consts[58];
        tmp_assign_source_47 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_21;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_6__base == NULL);
            Py_INCREF(tmp_assign_source_48);
            tmp_select_metaclass_6__base = tmp_assign_source_48;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_14;
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_expression_name_14 = tmp_select_metaclass_6__base;
            tmp_assign_source_47 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_14);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto try_except_handler_23;
            }
            goto try_return_handler_22;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_6;
            Py_DECREF(exception_keeper_type_16);
            Py_XDECREF(exception_keeper_value_16);
            Py_XDECREF(exception_keeper_tb_16);
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_type_arg_6 = tmp_select_metaclass_6__base;
            tmp_assign_source_47 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_assign_source_47 == NULL));
            goto try_return_handler_22;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_XDECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        goto outline_result_9;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_9:;
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_name_16 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_32 = mod_consts[78];
        tmp_args_element_name_33 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_name_34 = tmp_class_creation_6__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_16, call_args);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_21;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[74]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_21;
        }
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_35 == NULL)) {
            tmp_args_element_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 121;

            goto try_except_handler_21;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 121;
        tmp_called_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_18);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_21;
        }
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_args_element_name_36 = tmp_class_creation_6__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 121;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_17);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_class_creation_6__class;
            assert(old != NULL);
            tmp_class_creation_6__class = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class);
    tmp_class_creation_6__class = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_dict);
    Py_DECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_51 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_51);
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
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_Copy(mod_consts[79]);
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = mod_consts[58];
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
        tmp_key_name_14 = mod_consts[58];
        tmp_assign_source_53 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_54;
            tmp_assign_source_54 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_7__base == NULL);
            Py_INCREF(tmp_assign_source_54);
            tmp_select_metaclass_7__base = tmp_assign_source_54;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_16;
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_expression_name_16 = tmp_select_metaclass_7__base;
            tmp_assign_source_53 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_16);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto try_except_handler_26;
            }
            goto try_return_handler_25;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF(exception_keeper_type_18);
            Py_XDECREF(exception_keeper_value_18);
            Py_XDECREF(exception_keeper_tb_18);
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_type_arg_7 = tmp_select_metaclass_7__base;
            tmp_assign_source_53 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_assign_source_53 == NULL));
            goto try_return_handler_25;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_XDECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        goto outline_result_10;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_10:;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_name_19 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_37 = mod_consts[80];
        tmp_args_element_name_38 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_name_39 = tmp_class_creation_7__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_24;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[74]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_24;
        }
        tmp_args_element_name_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_40 == NULL)) {
            tmp_args_element_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 128;

            goto try_except_handler_24;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 128;
        tmp_called_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_40);
        Py_DECREF(tmp_called_name_21);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_24;
        }
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_args_element_name_41 = tmp_class_creation_7__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 128;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_41);
        Py_DECREF(tmp_called_name_20);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert(old != NULL);
            tmp_class_creation_7__class = tmp_assign_source_56;
            Py_DECREF(old);
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_57 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_57);
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
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = PyDict_Copy(mod_consts[81]);
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = mod_consts[58];
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
        tmp_key_name_16 = mod_consts[58];
        tmp_assign_source_59 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_16, tmp_key_name_16);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_27;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_60;
            tmp_assign_source_60 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_8__base == NULL);
            Py_INCREF(tmp_assign_source_60);
            tmp_select_metaclass_8__base = tmp_assign_source_60;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_18;
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_expression_name_18 = tmp_select_metaclass_8__base;
            tmp_assign_source_59 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_18);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto try_except_handler_29;
            }
            goto try_return_handler_28;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_8;
            Py_DECREF(exception_keeper_type_20);
            Py_XDECREF(exception_keeper_value_20);
            Py_XDECREF(exception_keeper_tb_20);
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_type_arg_8 = tmp_select_metaclass_8__base;
            tmp_assign_source_59 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_assign_source_59 == NULL));
            goto try_return_handler_28;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_XDECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        goto outline_result_11;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_11:;
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_name_22 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_42 = mod_consts[82];
        tmp_args_element_name_43 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_name_44 = tmp_class_creation_8__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, call_args);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_name_23;
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[74]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_args_element_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_45 == NULL)) {
            tmp_args_element_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 135;

            goto try_except_handler_27;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 135;
        tmp_called_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_24);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_args_element_name_46 = tmp_class_creation_8__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 135;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_23);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert(old != NULL);
            tmp_class_creation_8__class = tmp_assign_source_62;
            Py_DECREF(old);
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_63 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_63);
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
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = PyDict_Copy(mod_consts[83]);
        assert(tmp_class_creation_9__class_dict == NULL);
        tmp_class_creation_9__class_dict = tmp_assign_source_64;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = mod_consts[58];
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
        tmp_key_name_18 = mod_consts[58];
        tmp_assign_source_65 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_18, tmp_key_name_18);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_30;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_66;
            tmp_assign_source_66 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_9__base == NULL);
            Py_INCREF(tmp_assign_source_66);
            tmp_select_metaclass_9__base = tmp_assign_source_66;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_20;
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_expression_name_20 = tmp_select_metaclass_9__base;
            tmp_assign_source_65 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_20);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto try_except_handler_32;
            }
            goto try_return_handler_31;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_9;
            Py_DECREF(exception_keeper_type_22);
            Py_XDECREF(exception_keeper_value_22);
            Py_XDECREF(exception_keeper_tb_22);
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_type_arg_9 = tmp_select_metaclass_9__base;
            tmp_assign_source_65 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_assign_source_65 == NULL));
            goto try_return_handler_31;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_XDECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        goto outline_result_12;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_12:;
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_called_name_25 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_47 = mod_consts[84];
        tmp_args_element_name_48 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_args_element_name_49 = tmp_class_creation_9__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_25, call_args);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_9__class == NULL);
        tmp_class_creation_9__class = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_30;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[74]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_30;
        }
        tmp_args_element_name_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_50 == NULL)) {
            tmp_args_element_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 142;

            goto try_except_handler_30;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 142;
        tmp_called_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_27);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_30;
        }
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_args_element_name_51 = tmp_class_creation_9__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 142;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_51);
        Py_DECREF(tmp_called_name_26);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_class_creation_9__class;
            assert(old != NULL);
            tmp_class_creation_9__class = tmp_assign_source_68;
            Py_DECREF(old);
        }

    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
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
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_assign_source_69 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_69);
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
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = PyDict_Copy(mod_consts[85]);
        assert(tmp_class_creation_10__class_dict == NULL);
        tmp_class_creation_10__class_dict = tmp_assign_source_70;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        tmp_key_name_19 = mod_consts[58];
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
        tmp_key_name_20 = mod_consts[58];
        tmp_assign_source_71 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_20, tmp_key_name_20);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_33;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_72;
            tmp_assign_source_72 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_10__base == NULL);
            Py_INCREF(tmp_assign_source_72);
            tmp_select_metaclass_10__base = tmp_assign_source_72;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_22;
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_expression_name_22 = tmp_select_metaclass_10__base;
            tmp_assign_source_71 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_22);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto try_except_handler_35;
            }
            goto try_return_handler_34;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_10;
            Py_DECREF(exception_keeper_type_24);
            Py_XDECREF(exception_keeper_value_24);
            Py_XDECREF(exception_keeper_tb_24);
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_type_arg_10 = tmp_select_metaclass_10__base;
            tmp_assign_source_71 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_assign_source_71 == NULL));
            goto try_return_handler_34;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_XDECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        goto outline_result_13;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_13:;
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_28;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_called_name_28 = tmp_class_creation_10__metaclass;
        tmp_args_element_name_52 = mod_consts[86];
        tmp_args_element_name_53 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_args_element_name_54 = tmp_class_creation_10__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54};
            tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_28, call_args);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_10__class == NULL);
        tmp_class_creation_10__class = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_name_29;
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[74]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        tmp_args_element_name_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_55 == NULL)) {
            tmp_args_element_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 149;

            goto try_except_handler_33;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 149;
        tmp_called_name_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_55);
        Py_DECREF(tmp_called_name_30);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_args_element_name_56 = tmp_class_creation_10__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 149;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_56);
        Py_DECREF(tmp_called_name_29);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_class_creation_10__class;
            assert(old != NULL);
            tmp_class_creation_10__class = tmp_assign_source_74;
            Py_DECREF(old);
        }

    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
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
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_assign_source_75 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_75);
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
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = PyDict_Copy(mod_consts[87]);
        assert(tmp_class_creation_11__class_dict == NULL);
        tmp_class_creation_11__class_dict = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_key_name_22;
        tmp_key_name_21 = mod_consts[58];
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
        tmp_key_name_22 = mod_consts[58];
        tmp_assign_source_77 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_22, tmp_key_name_22);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_36;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_78;
            tmp_assign_source_78 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_11__base == NULL);
            Py_INCREF(tmp_assign_source_78);
            tmp_select_metaclass_11__base = tmp_assign_source_78;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_24;
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_expression_name_24 = tmp_select_metaclass_11__base;
            tmp_assign_source_77 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_24);
            if (tmp_assign_source_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto try_except_handler_38;
            }
            goto try_return_handler_37;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_11;
            Py_DECREF(exception_keeper_type_26);
            Py_XDECREF(exception_keeper_value_26);
            Py_XDECREF(exception_keeper_tb_26);
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_type_arg_11 = tmp_select_metaclass_11__base;
            tmp_assign_source_77 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_assign_source_77 == NULL));
            goto try_return_handler_37;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_XDECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        goto outline_result_14;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_14:;
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_called_name_31 = tmp_class_creation_11__metaclass;
        tmp_args_element_name_57 = mod_consts[88];
        tmp_args_element_name_58 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_args_element_name_59 = tmp_class_creation_11__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_31, call_args);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_11__class == NULL);
        tmp_class_creation_11__class = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_name_32;
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_36;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[74]);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_36;
        }
        tmp_args_element_name_60 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_60 == NULL)) {
            tmp_args_element_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 156;

            goto try_except_handler_36;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 156;
        tmp_called_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_60);
        Py_DECREF(tmp_called_name_33);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_36;
        }
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_args_element_name_61 = tmp_class_creation_11__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 156;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_61);
        Py_DECREF(tmp_called_name_32);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_class_creation_11__class;
            assert(old != NULL);
            tmp_class_creation_11__class = tmp_assign_source_80;
            Py_DECREF(old);
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
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
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_assign_source_81 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_81);
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
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = PyDict_Copy(mod_consts[89]);
        assert(tmp_class_creation_12__class_dict == NULL);
        tmp_class_creation_12__class_dict = tmp_assign_source_82;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_23;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_dict_name_24;
        PyObject *tmp_key_name_24;
        tmp_key_name_23 = mod_consts[58];
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
        tmp_key_name_24 = mod_consts[58];
        tmp_assign_source_83 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_24, tmp_key_name_24);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_39;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        {
            PyObject *tmp_assign_source_84;
            tmp_assign_source_84 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_12__base == NULL);
            Py_INCREF(tmp_assign_source_84);
            tmp_select_metaclass_12__base = tmp_assign_source_84;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_26;
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_expression_name_26 = tmp_select_metaclass_12__base;
            tmp_assign_source_83 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_26);
            if (tmp_assign_source_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto try_except_handler_41;
            }
            goto try_return_handler_40;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_12;
            Py_DECREF(exception_keeper_type_28);
            Py_XDECREF(exception_keeper_value_28);
            Py_XDECREF(exception_keeper_tb_28);
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_type_arg_12 = tmp_select_metaclass_12__base;
            tmp_assign_source_83 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_assign_source_83 == NULL));
            goto try_return_handler_40;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_XDECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        goto outline_result_15;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_15:;
        condexpr_end_12:;
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_name_34;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_args_element_name_64;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_called_name_34 = tmp_class_creation_12__metaclass;
        tmp_args_element_name_62 = mod_consts[90];
        tmp_args_element_name_63 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_args_element_name_64 = tmp_class_creation_12__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_34, call_args);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_12__class == NULL);
        tmp_class_creation_12__class = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_name_35;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_39;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[74]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_39;
        }
        tmp_args_element_name_65 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_65 == NULL)) {
            tmp_args_element_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 163;

            goto try_except_handler_39;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 163;
        tmp_called_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_65);
        Py_DECREF(tmp_called_name_36);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_39;
        }
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_args_element_name_66 = tmp_class_creation_12__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 163;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_66);
        Py_DECREF(tmp_called_name_35);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_class_creation_12__class;
            assert(old != NULL);
            tmp_class_creation_12__class = tmp_assign_source_86;
            Py_DECREF(old);
        }

    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
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
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_assign_source_87 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_87);
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
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = PyDict_Copy(mod_consts[91]);
        assert(tmp_class_creation_13__class_dict == NULL);
        tmp_class_creation_13__class_dict = tmp_assign_source_88;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        tmp_key_name_25 = mod_consts[58];
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
        tmp_key_name_26 = mod_consts[58];
        tmp_assign_source_89 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_26, tmp_key_name_26);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_42;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        {
            PyObject *tmp_assign_source_90;
            tmp_assign_source_90 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_13__base == NULL);
            Py_INCREF(tmp_assign_source_90);
            tmp_select_metaclass_13__base = tmp_assign_source_90;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_28;
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_expression_name_28 = tmp_select_metaclass_13__base;
            tmp_assign_source_89 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_28);
            if (tmp_assign_source_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_44;
            }
            goto try_return_handler_43;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_13;
            Py_DECREF(exception_keeper_type_30);
            Py_XDECREF(exception_keeper_value_30);
            Py_XDECREF(exception_keeper_tb_30);
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_type_arg_13 = tmp_select_metaclass_13__base;
            tmp_assign_source_89 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_assign_source_89 == NULL));
            goto try_return_handler_43;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_XDECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        goto outline_result_16;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_16:;
        condexpr_end_13:;
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_called_name_37 = tmp_class_creation_13__metaclass;
        tmp_args_element_name_67 = mod_consts[92];
        tmp_args_element_name_68 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_args_element_name_69 = tmp_class_creation_13__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69};
            tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_37, call_args);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_13__class == NULL);
        tmp_class_creation_13__class = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_name_38;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_args_element_name_71;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_42;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[74]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_42;
        }
        tmp_args_element_name_70 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_70 == NULL)) {
            tmp_args_element_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 169;

            goto try_except_handler_42;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 169;
        tmp_called_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_70);
        Py_DECREF(tmp_called_name_39);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_42;
        }
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_args_element_name_71 = tmp_class_creation_13__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 169;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_71);
        Py_DECREF(tmp_called_name_38);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_42;
        }
        {
            PyObject *old = tmp_class_creation_13__class;
            assert(old != NULL);
            tmp_class_creation_13__class = tmp_assign_source_92;
            Py_DECREF(old);
        }

    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
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
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_assign_source_93 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_93);
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
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = PyDict_Copy(mod_consts[93]);
        assert(tmp_class_creation_14__class_dict == NULL);
        tmp_class_creation_14__class_dict = tmp_assign_source_94;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_name_27;
        PyObject *tmp_dict_name_28;
        PyObject *tmp_key_name_28;
        tmp_key_name_27 = mod_consts[58];
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
        tmp_key_name_28 = mod_consts[58];
        tmp_assign_source_95 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_28, tmp_key_name_28);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_45;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        {
            PyObject *tmp_assign_source_96;
            tmp_assign_source_96 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_14__base == NULL);
            Py_INCREF(tmp_assign_source_96);
            tmp_select_metaclass_14__base = tmp_assign_source_96;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_30;
            CHECK_OBJECT(tmp_select_metaclass_14__base);
            tmp_expression_name_30 = tmp_select_metaclass_14__base;
            tmp_assign_source_95 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_30);
            if (tmp_assign_source_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_47;
            }
            goto try_return_handler_46;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_14;
            Py_DECREF(exception_keeper_type_32);
            Py_XDECREF(exception_keeper_value_32);
            Py_XDECREF(exception_keeper_tb_32);
            CHECK_OBJECT(tmp_select_metaclass_14__base);
            tmp_type_arg_14 = tmp_select_metaclass_14__base;
            tmp_assign_source_95 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_assign_source_95 == NULL));
            goto try_return_handler_46;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_XDECREF(tmp_select_metaclass_14__base);
        tmp_select_metaclass_14__base = NULL;
        goto outline_result_17;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_14__base);
        tmp_select_metaclass_14__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_17:;
        condexpr_end_14:;
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_name_40;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_called_name_40 = tmp_class_creation_14__metaclass;
        tmp_args_element_name_72 = mod_consts[94];
        tmp_args_element_name_73 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_14__class_dict);
        tmp_args_element_name_74 = tmp_class_creation_14__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74};
            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_40, call_args);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_14__class == NULL);
        tmp_class_creation_14__class = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_name_41;
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_45;
        }
        tmp_called_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[74]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_45;
        }
        tmp_args_element_name_75 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_75 == NULL)) {
            tmp_args_element_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 175;

            goto try_except_handler_45;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 175;
        tmp_called_name_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_75);
        Py_DECREF(tmp_called_name_42);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_45;
        }
        CHECK_OBJECT(tmp_class_creation_14__class);
        tmp_args_element_name_76 = tmp_class_creation_14__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 175;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_76);
        Py_DECREF(tmp_called_name_41);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_45;
        }
        {
            PyObject *old = tmp_class_creation_14__class;
            assert(old != NULL);
            tmp_class_creation_14__class = tmp_assign_source_98;
            Py_DECREF(old);
        }

    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
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
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_class_creation_14__class);
        tmp_assign_source_99 = tmp_class_creation_14__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_99);
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
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = PyDict_Copy(mod_consts[95]);
        assert(tmp_class_creation_15__class_dict == NULL);
        tmp_class_creation_15__class_dict = tmp_assign_source_100;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_29;
        PyObject *tmp_dict_name_29;
        PyObject *tmp_dict_name_30;
        PyObject *tmp_key_name_30;
        tmp_key_name_29 = mod_consts[58];
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
        tmp_key_name_30 = mod_consts[58];
        tmp_assign_source_101 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_30, tmp_key_name_30);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_48;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        {
            PyObject *tmp_assign_source_102;
            tmp_assign_source_102 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_15__base == NULL);
            Py_INCREF(tmp_assign_source_102);
            tmp_select_metaclass_15__base = tmp_assign_source_102;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_32;
            CHECK_OBJECT(tmp_select_metaclass_15__base);
            tmp_expression_name_32 = tmp_select_metaclass_15__base;
            tmp_assign_source_101 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_32);
            if (tmp_assign_source_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_50;
            }
            goto try_return_handler_49;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_15;
            Py_DECREF(exception_keeper_type_34);
            Py_XDECREF(exception_keeper_value_34);
            Py_XDECREF(exception_keeper_tb_34);
            CHECK_OBJECT(tmp_select_metaclass_15__base);
            tmp_type_arg_15 = tmp_select_metaclass_15__base;
            tmp_assign_source_101 = BUILTIN_TYPE1(tmp_type_arg_15);
            assert(!(tmp_assign_source_101 == NULL));
            goto try_return_handler_49;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_XDECREF(tmp_select_metaclass_15__base);
        tmp_select_metaclass_15__base = NULL;
        goto outline_result_18;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_15__base);
        tmp_select_metaclass_15__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_18:;
        condexpr_end_15:;
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_name_43;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_called_name_43 = tmp_class_creation_15__metaclass;
        tmp_args_element_name_77 = mod_consts[96];
        tmp_args_element_name_78 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_15__class_dict);
        tmp_args_element_name_79 = tmp_class_creation_15__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_43, call_args);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_15__class == NULL);
        tmp_class_creation_15__class = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_name_44;
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_args_element_name_81;
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_48;
        }
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[74]);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_48;
        }
        tmp_args_element_name_80 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_80 == NULL)) {
            tmp_args_element_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 181;

            goto try_except_handler_48;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 181;
        tmp_called_name_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, tmp_args_element_name_80);
        Py_DECREF(tmp_called_name_45);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_48;
        }
        CHECK_OBJECT(tmp_class_creation_15__class);
        tmp_args_element_name_81 = tmp_class_creation_15__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 181;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_81);
        Py_DECREF(tmp_called_name_44);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_48;
        }
        {
            PyObject *old = tmp_class_creation_15__class;
            assert(old != NULL);
            tmp_class_creation_15__class = tmp_assign_source_104;
            Py_DECREF(old);
        }

    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
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
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_class_creation_15__class);
        tmp_assign_source_105 = tmp_class_creation_15__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_105);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189 = tmp_set_locals_4;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_11___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5)) {
            Py_XDECREF(cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5 = MAKE_FUNCTION_FRAME(codeobj_9d869be6da8b92363de3c858b0b7f6ab, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5->m_type_description == NULL);
        frame_9d869be6da8b92363de3c858b0b7f6ab_5 = cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9d869be6da8b92363de3c858b0b7f6ab_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9d869be6da8b92363de3c858b0b7f6ab_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_8;
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto frame_exception_exit_5;
            }
            frame_9d869be6da8b92363de3c858b0b7f6ab_5->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, mod_consts[72], &PyTuple_GET_ITEM(mod_consts[98], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9d869be6da8b92363de3c858b0b7f6ab_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9d869be6da8b92363de3c858b0b7f6ab_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9d869be6da8b92363de3c858b0b7f6ab_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9d869be6da8b92363de3c858b0b7f6ab_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9d869be6da8b92363de3c858b0b7f6ab_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9d869be6da8b92363de3c858b0b7f6ab_5,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_9d869be6da8b92363de3c858b0b7f6ab_5 == cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5);
            cache_frame_9d869be6da8b92363de3c858b0b7f6ab_5 = NULL;
        }

        assertFrameObject(frame_9d869be6da8b92363de3c858b0b7f6ab_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_52;
        skip_nested_handling_4:;
        tmp_assign_source_106 = locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189;
        Py_INCREF(tmp_assign_source_106);
        goto try_return_handler_52;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189);
        locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189 = NULL;
        goto outline_result_19;
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

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189);
        locals_cryptography$hazmat$primitives$hashes$$$class_16_SHAKE128_189 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 189;
        goto try_except_handler_51;
        outline_result_19:;
        assert(tmp_class_creation_16__class_dict == NULL);
        tmp_class_creation_16__class_dict = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_name_31;
        PyObject *tmp_dict_name_32;
        PyObject *tmp_key_name_32;
        tmp_key_name_31 = mod_consts[58];
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
        tmp_key_name_32 = mod_consts[58];
        tmp_assign_source_107 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_32, tmp_key_name_32);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_51;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        {
            PyObject *tmp_assign_source_108;
            tmp_assign_source_108 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_16__base == NULL);
            Py_INCREF(tmp_assign_source_108);
            tmp_select_metaclass_16__base = tmp_assign_source_108;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_34;
            CHECK_OBJECT(tmp_select_metaclass_16__base);
            tmp_expression_name_34 = tmp_select_metaclass_16__base;
            tmp_assign_source_107 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_34);
            if (tmp_assign_source_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto try_except_handler_54;
            }
            goto try_return_handler_53;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_16;
            Py_DECREF(exception_keeper_type_37);
            Py_XDECREF(exception_keeper_value_37);
            Py_XDECREF(exception_keeper_tb_37);
            CHECK_OBJECT(tmp_select_metaclass_16__base);
            tmp_type_arg_16 = tmp_select_metaclass_16__base;
            tmp_assign_source_107 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_assign_source_107 == NULL));
            goto try_return_handler_53;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        Py_XDECREF(tmp_select_metaclass_16__base);
        tmp_select_metaclass_16__base = NULL;
        goto outline_result_20;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_16__base);
        tmp_select_metaclass_16__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_20:;
        condexpr_end_16:;
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_name_46;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_called_name_46 = tmp_class_creation_16__metaclass;
        tmp_args_element_name_82 = mod_consts[99];
        tmp_args_element_name_83 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_16__class_dict);
        tmp_args_element_name_84 = tmp_class_creation_16__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84};
            tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_46, call_args);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_16__class == NULL);
        tmp_class_creation_16__class = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_name_47;
        PyObject *tmp_called_name_48;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_args_element_name_86;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_51;
        }
        tmp_called_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[74]);
        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_51;
        }
        tmp_args_element_name_85 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_name_85 == NULL)) {
            tmp_args_element_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 188;

            goto try_except_handler_51;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 188;
        tmp_called_name_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_48, tmp_args_element_name_85);
        Py_DECREF(tmp_called_name_48);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_51;
        }
        CHECK_OBJECT(tmp_class_creation_16__class);
        tmp_args_element_name_86 = tmp_class_creation_16__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 188;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_86);
        Py_DECREF(tmp_called_name_47);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_51;
        }
        {
            PyObject *old = tmp_class_creation_16__class;
            assert(old != NULL);
            tmp_class_creation_16__class = tmp_assign_source_110;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_name_49;
        PyObject *tmp_called_name_50;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_args_element_name_88;
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_51;
        }
        tmp_called_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[74]);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_51;
        }
        tmp_args_element_name_87 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_87 == NULL)) {
            tmp_args_element_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 187;

            goto try_except_handler_51;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 187;
        tmp_called_name_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, tmp_args_element_name_87);
        Py_DECREF(tmp_called_name_50);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_51;
        }
        CHECK_OBJECT(tmp_class_creation_16__class);
        tmp_args_element_name_88 = tmp_class_creation_16__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 187;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, tmp_args_element_name_88);
        Py_DECREF(tmp_called_name_49);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_51;
        }
        {
            PyObject *old = tmp_class_creation_16__class;
            assert(old != NULL);
            tmp_class_creation_16__class = tmp_assign_source_111;
            Py_DECREF(old);
        }

    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__class);
    tmp_class_creation_16__class = NULL;
    Py_XDECREF(tmp_class_creation_16__class_dict);
    tmp_class_creation_16__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(tmp_class_creation_16__class);
        tmp_assign_source_112 = tmp_class_creation_16__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_112);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206 = tmp_set_locals_5;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_12___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_25f32b6807868631d8bb479739df2d64_6)) {
            Py_XDECREF(cache_frame_25f32b6807868631d8bb479739df2d64_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_25f32b6807868631d8bb479739df2d64_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_25f32b6807868631d8bb479739df2d64_6 = MAKE_FUNCTION_FRAME(codeobj_25f32b6807868631d8bb479739df2d64, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_25f32b6807868631d8bb479739df2d64_6->m_type_description == NULL);
        frame_25f32b6807868631d8bb479739df2d64_6 = cache_frame_25f32b6807868631d8bb479739df2d64_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_25f32b6807868631d8bb479739df2d64_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_25f32b6807868631d8bb479739df2d64_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_9;
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto frame_exception_exit_6;
            }
            frame_25f32b6807868631d8bb479739df2d64_6->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, mod_consts[72], &PyTuple_GET_ITEM(mod_consts[98], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_25f32b6807868631d8bb479739df2d64_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_25f32b6807868631d8bb479739df2d64_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_25f32b6807868631d8bb479739df2d64_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_25f32b6807868631d8bb479739df2d64_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_25f32b6807868631d8bb479739df2d64_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_25f32b6807868631d8bb479739df2d64_6,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_25f32b6807868631d8bb479739df2d64_6 == cache_frame_25f32b6807868631d8bb479739df2d64_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_25f32b6807868631d8bb479739df2d64_6);
            cache_frame_25f32b6807868631d8bb479739df2d64_6 = NULL;
        }

        assertFrameObject(frame_25f32b6807868631d8bb479739df2d64_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_56;
        skip_nested_handling_5:;
        tmp_assign_source_113 = locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206;
        Py_INCREF(tmp_assign_source_113);
        goto try_return_handler_56;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206);
        locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206 = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206);
        locals_cryptography$hazmat$primitives$hashes$$$class_17_SHAKE256_206 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 206;
        goto try_except_handler_55;
        outline_result_21:;
        assert(tmp_class_creation_17__class_dict == NULL);
        tmp_class_creation_17__class_dict = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_name_33;
        PyObject *tmp_dict_name_34;
        PyObject *tmp_key_name_34;
        tmp_key_name_33 = mod_consts[58];
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
        tmp_key_name_34 = mod_consts[58];
        tmp_assign_source_114 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_34, tmp_key_name_34);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_55;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        {
            PyObject *tmp_assign_source_115;
            tmp_assign_source_115 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_17__base == NULL);
            Py_INCREF(tmp_assign_source_115);
            tmp_select_metaclass_17__base = tmp_assign_source_115;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_37;
            CHECK_OBJECT(tmp_select_metaclass_17__base);
            tmp_expression_name_37 = tmp_select_metaclass_17__base;
            tmp_assign_source_114 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_37);
            if (tmp_assign_source_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

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
            tmp_assign_source_114 = BUILTIN_TYPE1(tmp_type_arg_17);
            assert(!(tmp_assign_source_114 == NULL));
            goto try_return_handler_57;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        Py_XDECREF(tmp_select_metaclass_17__base);
        tmp_select_metaclass_17__base = NULL;
        goto outline_result_22;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_17__base);
        tmp_select_metaclass_17__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_22:;
        condexpr_end_17:;
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_name_51;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_args_element_name_91;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_called_name_51 = tmp_class_creation_17__metaclass;
        tmp_args_element_name_89 = mod_consts[101];
        tmp_args_element_name_90 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_17__class_dict);
        tmp_args_element_name_91 = tmp_class_creation_17__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_name_89, tmp_args_element_name_90, tmp_args_element_name_91};
            tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_51, call_args);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_17__class == NULL);
        tmp_class_creation_17__class = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_name_52;
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_38 == NULL)) {
            tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto try_except_handler_55;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[74]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto try_except_handler_55;
        }
        tmp_args_element_name_92 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_name_92 == NULL)) {
            tmp_args_element_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 205;

            goto try_except_handler_55;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 205;
        tmp_called_name_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, tmp_args_element_name_92);
        Py_DECREF(tmp_called_name_53);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto try_except_handler_55;
        }
        CHECK_OBJECT(tmp_class_creation_17__class);
        tmp_args_element_name_93 = tmp_class_creation_17__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 205;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_52, tmp_args_element_name_93);
        Py_DECREF(tmp_called_name_52);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto try_except_handler_55;
        }
        {
            PyObject *old = tmp_class_creation_17__class;
            assert(old != NULL);
            tmp_class_creation_17__class = tmp_assign_source_117;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_name_54;
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_args_element_name_95;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto try_except_handler_55;
        }
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[74]);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto try_except_handler_55;
        }
        tmp_args_element_name_94 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_94 == NULL)) {
            tmp_args_element_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 204;

            goto try_except_handler_55;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 204;
        tmp_called_name_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, tmp_args_element_name_94);
        Py_DECREF(tmp_called_name_55);
        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto try_except_handler_55;
        }
        CHECK_OBJECT(tmp_class_creation_17__class);
        tmp_args_element_name_95 = tmp_class_creation_17__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 204;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, tmp_args_element_name_95);
        Py_DECREF(tmp_called_name_54);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto try_except_handler_55;
        }
        {
            PyObject *old = tmp_class_creation_17__class;
            assert(old != NULL);
            tmp_class_creation_17__class = tmp_assign_source_118;
            Py_DECREF(old);
        }

    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
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
    Py_XDECREF(tmp_class_creation_17__class_dict);
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
    try_end_19:;
    {
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_class_creation_17__class);
        tmp_assign_source_119 = tmp_class_creation_17__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_119);
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
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = PyDict_Copy(mod_consts[102]);
        assert(tmp_class_creation_18__class_dict == NULL);
        tmp_class_creation_18__class_dict = tmp_assign_source_120;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_121;
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_35;
        PyObject *tmp_dict_name_35;
        PyObject *tmp_dict_name_36;
        PyObject *tmp_key_name_36;
        tmp_key_name_35 = mod_consts[58];
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
        tmp_key_name_36 = mod_consts[58];
        tmp_assign_source_121 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_36, tmp_key_name_36);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_59;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        {
            PyObject *tmp_assign_source_122;
            tmp_assign_source_122 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_18__base == NULL);
            Py_INCREF(tmp_assign_source_122);
            tmp_select_metaclass_18__base = tmp_assign_source_122;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_40;
            CHECK_OBJECT(tmp_select_metaclass_18__base);
            tmp_expression_name_40 = tmp_select_metaclass_18__base;
            tmp_assign_source_121 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_40);
            if (tmp_assign_source_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

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
            tmp_assign_source_121 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_assign_source_121 == NULL));
            goto try_return_handler_60;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        Py_XDECREF(tmp_select_metaclass_18__base);
        tmp_select_metaclass_18__base = NULL;
        goto outline_result_23;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_18__base);
        tmp_select_metaclass_18__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_23:;
        condexpr_end_18:;
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_121;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_name_56;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_called_name_56 = tmp_class_creation_18__metaclass;
        tmp_args_element_name_96 = mod_consts[103];
        tmp_args_element_name_97 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_18__class_dict);
        tmp_args_element_name_98 = tmp_class_creation_18__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_name_96, tmp_args_element_name_97, tmp_args_element_name_98};
            tmp_assign_source_123 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_56, call_args);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_18__class == NULL);
        tmp_class_creation_18__class = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_name_57;
        PyObject *tmp_called_name_58;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_args_element_name_100;
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_59;
        }
        tmp_called_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[74]);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_59;
        }
        tmp_args_element_name_99 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_99 == NULL)) {
            tmp_args_element_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 221;

            goto try_except_handler_59;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 221;
        tmp_called_name_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_99);
        Py_DECREF(tmp_called_name_58);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_59;
        }
        CHECK_OBJECT(tmp_class_creation_18__class);
        tmp_args_element_name_100 = tmp_class_creation_18__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 221;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_57, tmp_args_element_name_100);
        Py_DECREF(tmp_called_name_57);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_59;
        }
        {
            PyObject *old = tmp_class_creation_18__class;
            assert(old != NULL);
            tmp_class_creation_18__class = tmp_assign_source_124;
            Py_DECREF(old);
        }

    }
    goto try_end_20;
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
    try_end_20:;
    {
        PyObject *tmp_assign_source_125;
        CHECK_OBJECT(tmp_class_creation_18__class);
        tmp_assign_source_125 = tmp_class_creation_18__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_125);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_126;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229 = tmp_set_locals_6;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[105], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_13___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7)) {
            Py_XDECREF(cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7 = MAKE_FUNCTION_FRAME(codeobj_9ce9c82587bacbf1ed16689dc3ac8c9c, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7->m_type_description == NULL);
        frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7 = cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto frame_exception_exit_7;
            }
            frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7->m_frame.f_lineno = 242;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, mod_consts[72], &PyTuple_GET_ITEM(mod_consts[98], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7 == cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7);
            cache_frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7 = NULL;
        }

        assertFrameObject(frame_9ce9c82587bacbf1ed16689dc3ac8c9c_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_63;
        skip_nested_handling_6:;
        tmp_assign_source_126 = locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229;
        Py_INCREF(tmp_assign_source_126);
        goto try_return_handler_63;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229);
        locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229 = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229);
        locals_cryptography$hazmat$primitives$hashes$$$class_19_BLAKE2b_229 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 229;
        goto try_except_handler_62;
        outline_result_24:;
        assert(tmp_class_creation_19__class_dict == NULL);
        tmp_class_creation_19__class_dict = tmp_assign_source_126;
    }
    {
        PyObject *tmp_assign_source_127;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_name_37;
        PyObject *tmp_dict_name_38;
        PyObject *tmp_key_name_38;
        tmp_key_name_37 = mod_consts[58];
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
        tmp_key_name_38 = mod_consts[58];
        tmp_assign_source_127 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_38, tmp_key_name_38);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto try_except_handler_62;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        {
            PyObject *tmp_assign_source_128;
            tmp_assign_source_128 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_19__base == NULL);
            Py_INCREF(tmp_assign_source_128);
            tmp_select_metaclass_19__base = tmp_assign_source_128;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_42;
            CHECK_OBJECT(tmp_select_metaclass_19__base);
            tmp_expression_name_42 = tmp_select_metaclass_19__base;
            tmp_assign_source_127 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_42);
            if (tmp_assign_source_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto try_except_handler_65;
            }
            goto try_return_handler_64;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_19;
            Py_DECREF(exception_keeper_type_45);
            Py_XDECREF(exception_keeper_value_45);
            Py_XDECREF(exception_keeper_tb_45);
            CHECK_OBJECT(tmp_select_metaclass_19__base);
            tmp_type_arg_19 = tmp_select_metaclass_19__base;
            tmp_assign_source_127 = BUILTIN_TYPE1(tmp_type_arg_19);
            assert(!(tmp_assign_source_127 == NULL));
            goto try_return_handler_64;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
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
        tmp_class_creation_19__metaclass = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_name_59;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_args_element_name_102;
        PyObject *tmp_args_element_name_103;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_called_name_59 = tmp_class_creation_19__metaclass;
        tmp_args_element_name_101 = mod_consts[109];
        tmp_args_element_name_102 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_19__class_dict);
        tmp_args_element_name_103 = tmp_class_creation_19__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_name_101, tmp_args_element_name_102, tmp_args_element_name_103};
            tmp_assign_source_129 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_59, call_args);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_19__class == NULL);
        tmp_class_creation_19__class = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_name_60;
        PyObject *tmp_called_name_61;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_args_element_name_105;
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_62;
        }
        tmp_called_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[74]);
        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_62;
        }
        tmp_args_element_name_104 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_104 == NULL)) {
            tmp_args_element_name_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);

            exception_lineno = 228;

            goto try_except_handler_62;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 228;
        tmp_called_name_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, tmp_args_element_name_104);
        Py_DECREF(tmp_called_name_61);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_62;
        }
        CHECK_OBJECT(tmp_class_creation_19__class);
        tmp_args_element_name_105 = tmp_class_creation_19__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 228;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, tmp_args_element_name_105);
        Py_DECREF(tmp_called_name_60);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_62;
        }
        {
            PyObject *old = tmp_class_creation_19__class;
            assert(old != NULL);
            tmp_class_creation_19__class = tmp_assign_source_130;
            Py_DECREF(old);
        }

    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__class);
    tmp_class_creation_19__class = NULL;
    Py_XDECREF(tmp_class_creation_19__class_dict);
    tmp_class_creation_19__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    {
        PyObject *tmp_assign_source_131;
        CHECK_OBJECT(tmp_class_creation_19__class);
        tmp_assign_source_131 = tmp_class_creation_19__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_131);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_132;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246 = tmp_set_locals_7;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[105], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function_14___init__();

        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_4debcf786ea1713de80712623ced1d1a_8)) {
            Py_XDECREF(cache_frame_4debcf786ea1713de80712623ced1d1a_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4debcf786ea1713de80712623ced1d1a_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4debcf786ea1713de80712623ced1d1a_8 = MAKE_FUNCTION_FRAME(codeobj_4debcf786ea1713de80712623ced1d1a, module_cryptography$hazmat$primitives$hashes, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_4debcf786ea1713de80712623ced1d1a_8->m_type_description == NULL);
        frame_4debcf786ea1713de80712623ced1d1a_8 = cache_frame_4debcf786ea1713de80712623ced1d1a_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_4debcf786ea1713de80712623ced1d1a_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_4debcf786ea1713de80712623ced1d1a_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_11;
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto frame_exception_exit_8;
            }
            frame_4debcf786ea1713de80712623ced1d1a_8->m_frame.f_lineno = 259;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, mod_consts[72], &PyTuple_GET_ITEM(mod_consts[98], 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4debcf786ea1713de80712623ced1d1a_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4debcf786ea1713de80712623ced1d1a_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4debcf786ea1713de80712623ced1d1a_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4debcf786ea1713de80712623ced1d1a_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4debcf786ea1713de80712623ced1d1a_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4debcf786ea1713de80712623ced1d1a_8,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_4debcf786ea1713de80712623ced1d1a_8 == cache_frame_4debcf786ea1713de80712623ced1d1a_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_4debcf786ea1713de80712623ced1d1a_8);
            cache_frame_4debcf786ea1713de80712623ced1d1a_8 = NULL;
        }

        assertFrameObject(frame_4debcf786ea1713de80712623ced1d1a_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_67;
        skip_nested_handling_7:;
        tmp_assign_source_132 = locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246;
        Py_INCREF(tmp_assign_source_132);
        goto try_return_handler_67;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246);
        locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246 = NULL;
        goto outline_result_26;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246);
        locals_cryptography$hazmat$primitives$hashes$$$class_20_BLAKE2s_246 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 246;
        goto try_except_handler_66;
        outline_result_26:;
        assert(tmp_class_creation_20__class_dict == NULL);
        tmp_class_creation_20__class_dict = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_name_39;
        PyObject *tmp_dict_name_40;
        PyObject *tmp_key_name_40;
        tmp_key_name_39 = mod_consts[58];
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
        tmp_key_name_40 = mod_consts[58];
        tmp_assign_source_133 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_40, tmp_key_name_40);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_66;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        {
            PyObject *tmp_assign_source_134;
            tmp_assign_source_134 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_20__base == NULL);
            Py_INCREF(tmp_assign_source_134);
            tmp_select_metaclass_20__base = tmp_assign_source_134;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_44;
            CHECK_OBJECT(tmp_select_metaclass_20__base);
            tmp_expression_name_44 = tmp_select_metaclass_20__base;
            tmp_assign_source_133 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_44);
            if (tmp_assign_source_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto try_except_handler_69;
            }
            goto try_return_handler_68;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_20;
            Py_DECREF(exception_keeper_type_48);
            Py_XDECREF(exception_keeper_value_48);
            Py_XDECREF(exception_keeper_tb_48);
            CHECK_OBJECT(tmp_select_metaclass_20__base);
            tmp_type_arg_20 = tmp_select_metaclass_20__base;
            tmp_assign_source_133 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_assign_source_133 == NULL));
            goto try_return_handler_68;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_68:;
        Py_XDECREF(tmp_select_metaclass_20__base);
        tmp_select_metaclass_20__base = NULL;
        goto outline_result_27;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_20__base);
        tmp_select_metaclass_20__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_27:;
        condexpr_end_20:;
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_name_62;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_args_element_name_107;
        PyObject *tmp_args_element_name_108;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_called_name_62 = tmp_class_creation_20__metaclass;
        tmp_args_element_name_106 = mod_consts[111];
        tmp_args_element_name_107 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_20__class_dict);
        tmp_args_element_name_108 = tmp_class_creation_20__class_dict;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_name_106, tmp_args_element_name_107, tmp_args_element_name_108};
            tmp_assign_source_135 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_62, call_args);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_20__class == NULL);
        tmp_class_creation_20__class = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_name_63;
        PyObject *tmp_called_name_64;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_args_element_name_109;
        PyObject *tmp_args_element_name_110;
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_66;
        }
        tmp_called_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[74]);
        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_66;
        }
        tmp_args_element_name_109 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_args_element_name_109 == NULL)) {
            tmp_args_element_name_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_args_element_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_64);

            exception_lineno = 245;

            goto try_except_handler_66;
        }
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 245;
        tmp_called_name_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_64, tmp_args_element_name_109);
        Py_DECREF(tmp_called_name_64);
        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_66;
        }
        CHECK_OBJECT(tmp_class_creation_20__class);
        tmp_args_element_name_110 = tmp_class_creation_20__class;
        frame_55f3416d5d957e0ed55251b30674c0be->m_frame.f_lineno = 245;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_63, tmp_args_element_name_110);
        Py_DECREF(tmp_called_name_63);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_66;
        }
        {
            PyObject *old = tmp_class_creation_20__class;
            assert(old != NULL);
            tmp_class_creation_20__class = tmp_assign_source_136;
            Py_DECREF(old);
        }

    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__class);
    tmp_class_creation_20__class = NULL;
    Py_XDECREF(tmp_class_creation_20__class_dict);
    tmp_class_creation_20__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_55f3416d5d957e0ed55251b30674c0be);
#endif
    popFrameStack();

    assertFrameObject(frame_55f3416d5d957e0ed55251b30674c0be);

    goto frame_no_exception_8;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_55f3416d5d957e0ed55251b30674c0be);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55f3416d5d957e0ed55251b30674c0be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55f3416d5d957e0ed55251b30674c0be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55f3416d5d957e0ed55251b30674c0be, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_8:;
    {
        PyObject *tmp_assign_source_137;
        CHECK_OBJECT(tmp_class_creation_20__class);
        tmp_assign_source_137 = tmp_class_creation_20__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_137);
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

    return module_cryptography$hazmat$primitives$hashes;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

