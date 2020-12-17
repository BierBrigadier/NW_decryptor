/* Generated code for Python module 'Helpers'
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

/* The "module_Helpers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Helpers;
PyDictObject *moduledict_Helpers;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[210];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "Helpers", 210);

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
void checkModuleConstants_Helpers(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "Helpers", 210);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0146c735c400b358bb00e7fb606bcf7a;
static PyCodeObject *codeobj_c06a287d3c2f66d21eae221461203e8b;
static PyCodeObject *codeobj_42b07851c4af7b7f287ffca9baf9a804;
static PyCodeObject *codeobj_2124e36194eea66c1c4bb1eea3d1f2cf;
static PyCodeObject *codeobj_e5e964790cc776c943b515a642497a78;
static PyCodeObject *codeobj_dec99edfbadcd7e1474720b541f2a452;
static PyCodeObject *codeobj_69be8312ed1e64e977ebfbb8e8c612e2;
static PyCodeObject *codeobj_a26ec40274a4947637db7079f4fa1cbe;
static PyCodeObject *codeobj_7f17a7f47b57f02809f1498cfed6672e;
static PyCodeObject *codeobj_c0621cbb967f59e147cbf0e6659a4e3f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[184]; CHECK_OBJECT(module_filename_obj);
    codeobj_0146c735c400b358bb00e7fb606bcf7a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[200], NULL, NULL, 0, 0, 0);
    codeobj_c06a287d3c2f66d21eae221461203e8b = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[201], NULL, 8, 0, 0);
    codeobj_42b07851c4af7b7f287ffca9baf9a804 = MAKE_CODEOBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[202], NULL, 3, 0, 0);
    codeobj_2124e36194eea66c1c4bb1eea3d1f2cf = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[203], NULL, 4, 0, 0);
    codeobj_e5e964790cc776c943b515a642497a78 = MAKE_CODEOBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[204], NULL, 3, 0, 0);
    codeobj_dec99edfbadcd7e1474720b541f2a452 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[205], NULL, 2, 0, 0);
    codeobj_69be8312ed1e64e977ebfbb8e8c612e2 = MAKE_CODEOBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[206], NULL, 3, 0, 0);
    codeobj_a26ec40274a4947637db7079f4fa1cbe = MAKE_CODEOBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[207], NULL, 1, 0, 0);
    codeobj_7f17a7f47b57f02809f1498cfed6672e = MAKE_CODEOBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[208], NULL, 2, 0, 0);
    codeobj_c0621cbb967f59e147cbf0e6659a4e3f = MAKE_CODEOBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[209], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Helpers$$$function_1_determine_method();


static PyObject *MAKE_FUNCTION_Helpers$$$function_2_get_data();


static PyObject *MAKE_FUNCTION_Helpers$$$function_3_get_file_data();


static PyObject *MAKE_FUNCTION_Helpers$$$function_4_validate_crc32();


static PyObject *MAKE_FUNCTION_Helpers$$$function_5_swappositions();


static PyObject *MAKE_FUNCTION_Helpers$$$function_6_cut_data();


static PyObject *MAKE_FUNCTION_Helpers$$$function_7_write_data();


static PyObject *MAKE_FUNCTION_Helpers$$$function_8_create_private_key();


static PyObject *MAKE_FUNCTION_Helpers$$$function_9_get_substring();


// The module function definitions.
static PyObject *impl_Helpers$$$function_1_determine_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_active_ransomware = python_pars[0];
    PyObject *par_f = python_pars[1];
    PyObject *par_method = python_pars[2];
    PyObject *par_log_file = python_pars[3];
    PyObject *var_config = NULL;
    PyObject *var_extension = NULL;
    PyObject *var_crc_1_hash_offset = NULL;
    PyObject *var_crc_1_hash_length = NULL;
    PyObject *var_crc_1_data_offset = NULL;
    PyObject *var_crc_1_data_length = NULL;
    PyObject *var_crc_1_hash = NULL;
    PyObject *var_crc_1_data = NULL;
    PyObject *var_retval = NULL;
    PyObject *var_e = NULL;
    PyObject *var_crc_2_hash_offset = NULL;
    PyObject *var_crc_2_hash_length = NULL;
    PyObject *var_crc_2_data_offset = NULL;
    PyObject *var_crc_2_data_length = NULL;
    PyObject *var_crc_2_hash = NULL;
    PyObject *var_crc_2_data = NULL;
    PyObject *var_crc_3_hash_offset = NULL;
    PyObject *var_crc_3_hash_length = NULL;
    PyObject *var_crc_3_data_offset = NULL;
    PyObject *var_crc_3_data_length = NULL;
    PyObject *var_crc_3_hash = NULL;
    PyObject *var_crc_3_data = NULL;
    PyObject *var_master_sk = NULL;
    PyObject *var_decode_key_1 = NULL;
    PyObject *var_val = NULL;
    PyObject *var_curve_public_offset = NULL;
    PyObject *var_curve_public_length = NULL;
    PyObject *var_aes_iv_offset = NULL;
    PyObject *var_aes_iv_length = NULL;
    PyObject *var_aes_data_offset = NULL;
    PyObject *var_aes_data_length = NULL;
    PyObject *var_curve_secret = NULL;
    PyObject *var_salsa_nonce_offset = NULL;
    PyObject *var_salsa_nonce_length = NULL;
    PyObject *var_salsa_encd_null_bytes_offset = NULL;
    PyObject *var_salsa_encd_null_bytes_length = NULL;
    PyObject *var_salsa_decryption_mode_offset = NULL;
    PyObject *var_salsa_decryption_mode_length = NULL;
    PyObject *var_salsa_skip_size_offset = NULL;
    PyObject *var_salsa_skip_size_length = NULL;
    PyObject *var_salsa_cipher_update = NULL;
    PyObject *var_meta_data_offset = NULL;
    PyObject *var_salsa_nonce = NULL;
    PyObject *var_salsa_encd_null_bytes = NULL;
    PyObject *var_salsa_decryption_mode = NULL;
    PyObject *var_salsa_skip_size = NULL;
    PyObject *var_encrypted_data = NULL;
    PyObject *var_plaintext = NULL;
    PyObject *var_private_key = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_length = NULL;
    PyObject *var_n_length = NULL;
    PyObject *var_e_length = NULL;
    PyObject *var_d_length = NULL;
    PyObject *var_p_length = NULL;
    PyObject *var_q_length = NULL;
    PyObject *var_dp_length = NULL;
    PyObject *var_dq_length = NULL;
    PyObject *var_qp_length = NULL;
    PyObject *var_n = NULL;
    PyObject *var_d = NULL;
    PyObject *var_p = NULL;
    PyObject *var_q = NULL;
    PyObject *var_dp = NULL;
    PyObject *var_dq = NULL;
    PyObject *var_coef = NULL;
    struct Nuitka_FrameObject *frame_2124e36194eea66c1c4bb1eea3d1f2cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_print_value;
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
    static struct Nuitka_FrameObject *cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf)) {
        Py_XDECREF(cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf = MAKE_FUNCTION_FRAME(codeobj_2124e36194eea66c1c4bb1eea3d1f2cf, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_type_description == NULL);
    frame_2124e36194eea66c1c4bb1eea3d1f2cf = cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2124e36194eea66c1c4bb1eea3d1f2cf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2124e36194eea66c1c4bb1eea3d1f2cf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 19;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_config);
        tmp_expression_name_1 = var_config;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = mod_consts[2];
        CHECK_OBJECT(par_active_ransomware);
        tmp_right_name_1 = par_active_ransomware;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 20;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 20;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 21;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_2 = par_active_ransomware;
        tmp_args_element_name_3 = mod_consts[5];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[4], call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_extension == NULL);
        var_extension = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = mod_consts[6];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 24;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 26;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_4 = par_active_ransomware;
        tmp_args_element_name_5 = mod_consts[7];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[4], call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_crc_1_hash_offset == NULL);
        var_crc_1_hash_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 27;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_6 = par_active_ransomware;
        tmp_args_element_name_7 = mod_consts[8];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, mod_consts[4], call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_crc_1_hash_length == NULL);
        var_crc_1_hash_length = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 28;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_8 = par_active_ransomware;
        tmp_args_element_name_9 = mod_consts[9];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_5, mod_consts[4], call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_crc_1_data_offset == NULL);
        var_crc_1_data_offset = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_6 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_10 = par_active_ransomware;
        tmp_args_element_name_11 = mod_consts[10];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, mod_consts[4], call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_crc_1_data_length == NULL);
        var_crc_1_data_length = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_f);
        tmp_dict_value_1 = par_f;
        tmp_dict_key_1 = mod_consts[12];
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_int_arg_1;
            PyObject *tmp_int_arg_2;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(var_crc_1_hash_offset);
            tmp_int_arg_1 = var_crc_1_hash_offset;
            tmp_dict_value_1 = PyNumber_Int(tmp_int_arg_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = mod_consts[13];
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(var_crc_1_hash_length);
            tmp_int_arg_2 = var_crc_1_hash_length;
            tmp_dict_value_1 = PyNumber_Int(tmp_int_arg_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = mod_consts[14];
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_name_1);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 31;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_crc_1_hash == NULL);
        var_crc_1_hash = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_f);
        tmp_dict_value_2 = par_f;
        tmp_dict_key_2 = mod_consts[12];
        tmp_kw_name_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_int_arg_3;
            PyObject *tmp_int_arg_4;
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(var_crc_1_data_offset);
            tmp_int_arg_3 = var_crc_1_data_offset;
            tmp_dict_value_2 = PyNumber_Int(tmp_int_arg_3);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = mod_consts[13];
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(var_crc_1_data_length);
            tmp_int_arg_4 = var_crc_1_data_length;
            tmp_dict_value_2 = PyNumber_Int(tmp_int_arg_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = mod_consts[14];
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kw_name_2);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 32;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_crc_1_data == NULL);
        var_crc_1_data = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[15]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_crc_1_hash);
        tmp_args_element_name_12 = var_crc_1_hash;
        CHECK_OBJECT(var_crc_1_data);
        tmp_args_element_name_13 = var_crc_1_data;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_9;
    }
    CHECK_OBJECT(var_retval);
    tmp_return_value = var_retval;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_e = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_14 = par_log_file;
        CHECK_OBJECT(var_e);
        tmp_args_element_name_15 = var_e;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_7, mod_consts[17], call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 25;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_3 = par_method;
        tmp_compexpr_right_3 = mod_consts[18];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_8 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_16 = par_active_ransomware;
        tmp_args_element_name_17 = mod_consts[19];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_int_arg_5 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_8, mod_consts[4], call_args);
        }

        if (tmp_int_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_5);
        Py_DECREF(tmp_int_arg_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_crc_2_hash_offset == NULL);
        var_crc_2_hash_offset = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_9 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_18 = par_active_ransomware;
        tmp_args_element_name_19 = mod_consts[20];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19};
            tmp_int_arg_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, mod_consts[4], call_args);
        }

        if (tmp_int_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_12 = PyNumber_Int(tmp_int_arg_6);
        Py_DECREF(tmp_int_arg_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_crc_2_hash_length == NULL);
        var_crc_2_hash_length = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_int_arg_7;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_10 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_20 = par_active_ransomware;
        tmp_args_element_name_21 = mod_consts[21];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_int_arg_7 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_10, mod_consts[4], call_args);
        }

        if (tmp_int_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = PyNumber_Int(tmp_int_arg_7);
        Py_DECREF(tmp_int_arg_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_crc_2_data_offset == NULL);
        var_crc_2_data_offset = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_int_arg_8;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_11 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_22 = par_active_ransomware;
        tmp_args_element_name_23 = mod_consts[22];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23};
            tmp_int_arg_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_11, mod_consts[4], call_args);
        }

        if (tmp_int_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_14 = PyNumber_Int(tmp_int_arg_8);
        Py_DECREF(tmp_int_arg_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_crc_2_data_length == NULL);
        var_crc_2_data_length = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_f);
        tmp_dict_value_3 = par_f;
        tmp_dict_key_3 = mod_consts[12];
        tmp_kw_name_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_2_hash_offset);
        tmp_dict_value_3 = var_crc_2_hash_offset;
        tmp_dict_key_3 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_2_hash_length);
        tmp_dict_value_3 = var_crc_2_hash_length;
        tmp_dict_key_3 = mod_consts[14];
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 46;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kw_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_crc_2_hash == NULL);
        var_crc_2_hash = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_6;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_f);
        tmp_dict_value_4 = par_f;
        tmp_dict_key_4 = mod_consts[12];
        tmp_kw_name_4 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_2_data_offset);
        tmp_dict_value_4 = var_crc_2_data_offset;
        tmp_dict_key_4 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_2_data_length);
        tmp_dict_value_4 = var_crc_2_data_length;
        tmp_dict_key_4 = mod_consts[14];
        tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 47;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_6, tmp_kw_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_crc_2_data == NULL);
        var_crc_2_data = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[15]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_crc_2_hash);
        tmp_args_element_name_24 = var_crc_2_hash;
        CHECK_OBJECT(var_crc_2_data);
        tmp_args_element_name_25 = var_crc_2_data;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_17;
    }
    CHECK_OBJECT(var_retval);
    tmp_return_value = var_retval;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_e = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_26 = par_log_file;
        CHECK_OBJECT(var_e);
        tmp_args_element_name_27 = var_e;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_26, tmp_args_element_name_27};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_12, mod_consts[17], call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 40;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_5 = par_method;
        tmp_compexpr_right_5 = mod_consts[23];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_int_arg_9;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_13 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_28 = par_active_ransomware;
        tmp_args_element_name_29 = mod_consts[24];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_int_arg_9 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_13, mod_consts[4], call_args);
        }

        if (tmp_int_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_19 = PyNumber_Int(tmp_int_arg_9);
        Py_DECREF(tmp_int_arg_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_crc_3_hash_offset == NULL);
        var_crc_3_hash_offset = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_int_arg_10;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_14 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_30 = par_active_ransomware;
        tmp_args_element_name_31 = mod_consts[25];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_name_30, tmp_args_element_name_31};
            tmp_int_arg_10 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_14, mod_consts[4], call_args);
        }

        if (tmp_int_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_20 = PyNumber_Int(tmp_int_arg_10);
        Py_DECREF(tmp_int_arg_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_crc_3_hash_length == NULL);
        var_crc_3_hash_length = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_int_arg_11;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_15 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_32 = par_active_ransomware;
        tmp_args_element_name_33 = mod_consts[26];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33};
            tmp_int_arg_11 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_15, mod_consts[4], call_args);
        }

        if (tmp_int_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_21 = PyNumber_Int(tmp_int_arg_11);
        Py_DECREF(tmp_int_arg_11);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_crc_3_data_offset == NULL);
        var_crc_3_data_offset = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_int_arg_12;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_16 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_34 = par_active_ransomware;
        tmp_args_element_name_35 = mod_consts[27];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_name_34, tmp_args_element_name_35};
            tmp_int_arg_12 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_16, mod_consts[4], call_args);
        }

        if (tmp_int_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_22 = PyNumber_Int(tmp_int_arg_12);
        Py_DECREF(tmp_int_arg_12);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_crc_3_data_length == NULL);
        var_crc_3_data_length = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_8;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_f);
        tmp_dict_value_5 = par_f;
        tmp_dict_key_5 = mod_consts[12];
        tmp_kw_name_5 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_3_hash_offset);
        tmp_dict_value_5 = var_crc_3_hash_offset;
        tmp_dict_key_5 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_3_hash_length);
        tmp_dict_value_5 = var_crc_3_hash_length;
        tmp_dict_key_5 = mod_consts[14];
        tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 60;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_8, tmp_kw_name_5);
        Py_DECREF(tmp_kw_name_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_crc_3_hash == NULL);
        var_crc_3_hash = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_9;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_f);
        tmp_dict_value_6 = par_f;
        tmp_dict_key_6 = mod_consts[12];
        tmp_kw_name_6 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_3_data_offset);
        tmp_dict_value_6 = var_crc_3_data_offset;
        tmp_dict_key_6 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_crc_3_data_length);
        tmp_dict_value_6 = var_crc_3_data_length;
        tmp_dict_key_6 = mod_consts[14];
        tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 61;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_9, tmp_kw_name_6);
        Py_DECREF(tmp_kw_name_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_crc_3_data == NULL);
        var_crc_3_data = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[15]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_crc_3_hash);
        tmp_args_element_name_36 = var_crc_3_hash;
        CHECK_OBJECT(var_crc_3_data);
        tmp_args_element_name_37 = var_crc_3_data;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_name_36, tmp_args_element_name_37};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_25;
    }
    CHECK_OBJECT(var_retval);
    tmp_return_value = var_retval;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_e = tmp_assign_source_26;
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_38 = par_log_file;
        CHECK_OBJECT(var_e);
        tmp_args_element_name_39 = var_e;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_name_38, tmp_args_element_name_39};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_17, mod_consts[17], call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 54;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_6:;
    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_7 = par_method;
        tmp_compexpr_right_7 = mod_consts[28];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_18 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_40 = par_active_ransomware;
        tmp_args_element_name_41 = mod_consts[28];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_name_40, tmp_args_element_name_41};
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_18, mod_consts[4], call_args);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_master_sk == NULL);
        var_master_sk = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_master_sk);
        tmp_assattr_name_1 = var_master_sk;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_expression_name_2;
        tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[31]);
        if (tmp_compexpr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_e = tmp_assign_source_28;
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_str_arg_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_42 = par_log_file;
        tmp_left_name_2 = mod_consts[32];
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_right_name_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_43 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_43);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 68;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_8:;
    // End of try:
    try_end_4:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_tmp_condition_result_9_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_9 = par_method;
        tmp_compexpr_right_9 = mod_consts[33];
        tmp_tmp_condition_result_9_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_tmp_condition_result_9_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_9_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_9_object_1);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_9_object_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_args_element_name_45;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_19 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_44 = par_active_ransomware;
        tmp_args_element_name_45 = mod_consts[33];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_name_44, tmp_args_element_name_45};
            tmp_assign_source_29 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_19, mod_consts[4], call_args);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(var_decode_key_1 == NULL);
        var_decode_key_1 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_20 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_46 = par_active_ransomware;
        CHECK_OBJECT(var_decode_key_1);
        tmp_args_element_name_47 = var_decode_key_1;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_name_46, tmp_args_element_name_47};
            tmp_assign_source_30 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_20, mod_consts[4], call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[34]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_val);
        tmp_args_element_name_48 = var_val;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 80;
        tmp_assattr_name_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[35], tmp_args_element_name_48);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_2);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        tmp_compexpr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_10 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_10, tmp_compexpr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_31);
        var_e = tmp_assign_source_31;
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_str_arg_2;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[17]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_49 = par_log_file;
        tmp_left_name_3 = mod_consts[37];
        CHECK_OBJECT(var_e);
        tmp_str_arg_2 = var_e;
        tmp_right_name_3 = PyObject_Str(tmp_str_arg_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_50 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_args_element_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_name_49, tmp_args_element_name_50};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_50);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 76;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_10:;
    // End of try:
    try_end_5:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_tmp_condition_result_11_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_11 = par_method;
        tmp_compexpr_right_11 = mod_consts[38];
        tmp_tmp_condition_result_11_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        if (tmp_tmp_condition_result_11_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_11_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_11_object_1);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_11_object_1);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_int_arg_13;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_22 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_51 = par_active_ransomware;
        tmp_args_element_name_52 = mod_consts[39];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_name_51, tmp_args_element_name_52};
            tmp_int_arg_13 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_22, mod_consts[4], call_args);
        }

        if (tmp_int_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_32 = PyNumber_Int(tmp_int_arg_13);
        Py_DECREF(tmp_int_arg_13);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_curve_public_offset == NULL);
        var_curve_public_offset = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_int_arg_14;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_args_element_name_54;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_23 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_53 = par_active_ransomware;
        tmp_args_element_name_54 = mod_consts[40];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_53, tmp_args_element_name_54};
            tmp_int_arg_14 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_23, mod_consts[4], call_args);
        }

        if (tmp_int_arg_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_33 = PyNumber_Int(tmp_int_arg_14);
        Py_DECREF(tmp_int_arg_14);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_curve_public_length == NULL);
        var_curve_public_length = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_assattr_target_3;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_55 = par_f;
        CHECK_OBJECT(var_curve_public_offset);
        tmp_args_element_name_56 = var_curve_public_offset;
        CHECK_OBJECT(var_curve_public_length);
        tmp_args_element_name_57 = var_curve_public_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57};
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, call_args);
        }

        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_3);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[41], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_expression_name_7;
        int tmp_truth_name_7;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[43]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[41]);
        if (tmp_args_element_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_58);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[36]);
        if (tmp_args_element_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_58);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_name_58, tmp_args_element_name_59};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_14, call_args);
        }

        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_58);
        Py_DECREF(tmp_args_element_name_59);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_12 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_12:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_6);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_6, exception_keeper_tb_6);
    PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_12 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_12, tmp_compexpr_right_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_e = tmp_assign_source_34;
    }
    tmp_print_value = mod_consts[44];
    tmp_result = PRINT_ITEM(tmp_print_value);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if (PRINT_NEW_LINE() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_str_arg_3;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[17]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_60 = par_log_file;
        tmp_left_name_4 = mod_consts[45];
        CHECK_OBJECT(var_e);
        tmp_str_arg_3 = var_e;
        tmp_right_name_4 = PyObject_Str(tmp_str_arg_3);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_61 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_args_element_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_name_60, tmp_args_element_name_61};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_61);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 86;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_13:;
    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_tmp_condition_result_14_object_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_13 = par_method;
        tmp_compexpr_right_13 = mod_consts[46];
        tmp_tmp_condition_result_14_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_13, tmp_compexpr_right_13);
        if (tmp_tmp_condition_result_14_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_condition_result_14_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_14_object_1);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_14_object_1);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_assattr_target_4;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[47]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[48]);
        if (tmp_args_element_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 98;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_62);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_62);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_4);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[49], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        tmp_compexpr_left_14 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_14 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_14, tmp_compexpr_right_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_e = tmp_assign_source_35;
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_str_arg_4;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[17]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_63 = par_log_file;
        tmp_left_name_5 = mod_consts[50];
        CHECK_OBJECT(var_e);
        tmp_str_arg_4 = var_e;
        tmp_right_name_5 = PyObject_Str(tmp_str_arg_4);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_64 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_name_63, tmp_args_element_name_64};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_17, call_args);
        }

        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_64);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 97;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_15:;
    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_tmp_condition_result_16_object_1;
        int tmp_truth_name_9;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_15 = par_method;
        tmp_compexpr_right_15 = mod_consts[51];
        tmp_tmp_condition_result_16_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_15, tmp_compexpr_right_15);
        if (tmp_tmp_condition_result_16_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_condition_result_16_object_1);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_16_object_1);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_16_object_1);
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_int_arg_15;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_assattr_target_5;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_24 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_65 = par_active_ransomware;
        tmp_args_element_name_66 = mod_consts[52];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_name_65, tmp_args_element_name_66};
            tmp_int_arg_15 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_24, mod_consts[4], call_args);
        }

        if (tmp_int_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assattr_name_5 = PyNumber_Int(tmp_int_arg_15);
        Py_DECREF(tmp_int_arg_15);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_5);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[53], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_assattr_target_6;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_25 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_67 = par_active_ransomware;
        tmp_args_element_name_68 = mod_consts[54];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_name_67, tmp_args_element_name_68};
            tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_25, mod_consts[4], call_args);
        }

        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_6);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[55], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_int_arg_16;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_26 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_69 = par_active_ransomware;
        tmp_args_element_name_70 = mod_consts[56];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_name_69, tmp_args_element_name_70};
            tmp_int_arg_16 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_26, mod_consts[4], call_args);
        }

        if (tmp_int_arg_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_36 = PyNumber_Int(tmp_int_arg_16);
        Py_DECREF(tmp_int_arg_16);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(var_aes_iv_offset == NULL);
        var_aes_iv_offset = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_int_arg_17;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_27 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_71 = par_active_ransomware;
        tmp_args_element_name_72 = mod_consts[57];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_name_71, tmp_args_element_name_72};
            tmp_int_arg_17 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_27, mod_consts[4], call_args);
        }

        if (tmp_int_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_37 = PyNumber_Int(tmp_int_arg_17);
        Py_DECREF(tmp_int_arg_17);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(var_aes_iv_length == NULL);
        var_aes_iv_length = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_int_arg_18;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_28 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_73 = par_active_ransomware;
        tmp_args_element_name_74 = mod_consts[58];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_name_73, tmp_args_element_name_74};
            tmp_int_arg_18 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_28, mod_consts[4], call_args);
        }

        if (tmp_int_arg_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_38 = PyNumber_Int(tmp_int_arg_18);
        Py_DECREF(tmp_int_arg_18);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(var_aes_data_offset == NULL);
        var_aes_data_offset = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_int_arg_19;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_29 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_75 = par_active_ransomware;
        tmp_args_element_name_76 = mod_consts[59];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_name_75, tmp_args_element_name_76};
            tmp_int_arg_19 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_29, mod_consts[4], call_args);
        }

        if (tmp_int_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_39 = PyNumber_Int(tmp_int_arg_19);
        Py_DECREF(tmp_int_arg_19);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(var_aes_data_length == NULL);
        var_aes_data_length = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_assattr_target_7;
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_77 = par_f;
        CHECK_OBJECT(var_aes_iv_offset);
        tmp_args_element_name_78 = var_aes_iv_offset;
        CHECK_OBJECT(var_aes_iv_length);
        tmp_args_element_name_79 = var_aes_iv_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79};
            tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_18, call_args);
        }

        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_7);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[60], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_assattr_target_8;
        tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_19 == NULL)) {
            tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_80 = par_f;
        CHECK_OBJECT(var_aes_data_offset);
        tmp_args_element_name_81 = var_aes_data_offset;
        CHECK_OBJECT(var_aes_data_length);
        tmp_args_element_name_82 = var_aes_data_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_name_80, tmp_args_element_name_81, tmp_args_element_name_82};
            tmp_assattr_name_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, call_args);
        }

        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_8);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[61], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_assattr_target_9;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[62]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_83 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[49]);
        if (tmp_args_element_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_84 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[60]);
        if (tmp_args_element_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);
            Py_DECREF(tmp_args_element_name_84);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_85 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[55]);
        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);
            Py_DECREF(tmp_args_element_name_84);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);
            Py_DECREF(tmp_args_element_name_84);
            Py_DECREF(tmp_args_element_name_85);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_86 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[53]);
        if (tmp_args_element_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);
            Py_DECREF(tmp_args_element_name_84);
            Py_DECREF(tmp_args_element_name_85);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);
            Py_DECREF(tmp_args_element_name_84);
            Py_DECREF(tmp_args_element_name_85);
            Py_DECREF(tmp_args_element_name_86);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_87 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[61]);
        if (tmp_args_element_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_args_element_name_83);
            Py_DECREF(tmp_args_element_name_84);
            Py_DECREF(tmp_args_element_name_85);
            Py_DECREF(tmp_args_element_name_86);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_87};
            tmp_assattr_name_9 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_20, call_args);
        }

        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_83);
        Py_DECREF(tmp_args_element_name_84);
        Py_DECREF(tmp_args_element_name_85);
        Py_DECREF(tmp_args_element_name_86);
        Py_DECREF(tmp_args_element_name_87);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_9);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[63], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_8 == NULL) {
        exception_keeper_tb_8 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_8);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_keeper_tb_8 = ADD_TRACEBACK(exception_keeper_tb_8, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_8);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_8, exception_keeper_tb_8);
    PUBLISH_EXCEPTION(&exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8);
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        tmp_compexpr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_16 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_16, tmp_compexpr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_e = tmp_assign_source_40;
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_str_arg_5;
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[17]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_88 = par_log_file;
        tmp_left_name_6 = mod_consts[64];
        CHECK_OBJECT(var_e);
        tmp_str_arg_5 = var_e;
        tmp_right_name_6 = PyObject_Str(tmp_str_arg_5);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_89 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_name_88, tmp_args_element_name_89};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_21, call_args);
        }

        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_89);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto branch_end_17;
    branch_no_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 104;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_17:;
    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_tmp_condition_result_18_object_1;
        int tmp_truth_name_10;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_17 = par_method;
        tmp_compexpr_right_17 = mod_consts[65];
        tmp_tmp_condition_result_18_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_17, tmp_compexpr_right_17);
        if (tmp_tmp_condition_result_18_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_tmp_condition_result_18_object_1);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_18_object_1);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_18_object_1);
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_int_arg_20;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_assattr_target_10;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_instance_30 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_90 = par_active_ransomware;
        tmp_args_element_name_91 = mod_consts[66];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_name_90, tmp_args_element_name_91};
            tmp_int_arg_20 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_30, mod_consts[4], call_args);
        }

        if (tmp_int_arg_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assattr_name_10 = PyNumber_Int(tmp_int_arg_20);
        Py_DECREF(tmp_int_arg_20);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_10);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[67], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_int_arg_21;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_assattr_target_11;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_instance_31 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_92 = par_active_ransomware;
        tmp_args_element_name_93 = mod_consts[68];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_name_92, tmp_args_element_name_93};
            tmp_int_arg_21 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_31, mod_consts[4], call_args);
        }

        if (tmp_int_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assattr_name_11 = PyNumber_Int(tmp_int_arg_21);
        Py_DECREF(tmp_int_arg_21);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_11);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[69], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_94;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_element_name_95;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_assattr_target_12;
        tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_name_22 == NULL)) {
            tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[70]);
        }

        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_name_94 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[67]);
        if (tmp_args_element_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_94);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_name_95 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[69]);
        if (tmp_args_element_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_94);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_94);
            Py_DECREF(tmp_args_element_name_95);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_name_96 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[63]);
        if (tmp_args_element_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_94);
            Py_DECREF(tmp_args_element_name_95);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_name_94, tmp_args_element_name_95, tmp_args_element_name_96};
            tmp_assattr_name_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, call_args);
        }

        Py_DECREF(tmp_args_element_name_94);
        Py_DECREF(tmp_args_element_name_95);
        Py_DECREF(tmp_args_element_name_96);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_12);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[63], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_9);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_9, exception_keeper_tb_9);
    PUBLISH_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        tmp_compexpr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_18 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_18, tmp_compexpr_right_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_41);
        var_e = tmp_assign_source_41;
    }
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_str_arg_6;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[17]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_97 = par_log_file;
        tmp_left_name_7 = mod_consts[71];
        CHECK_OBJECT(var_e);
        tmp_str_arg_6 = var_e;
        tmp_right_name_7 = PyObject_Str(tmp_str_arg_6);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_98 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_args_element_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_name_97, tmp_args_element_name_98};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_23, call_args);
        }

        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_98);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_19;
    branch_no_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 122;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_19:;
    goto try_end_9;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_9:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_tmp_condition_result_20_object_1;
        int tmp_truth_name_11;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_19 = par_method;
        tmp_compexpr_right_19 = mod_consts[72];
        tmp_tmp_condition_result_20_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_19, tmp_compexpr_right_19);
        if (tmp_tmp_condition_result_20_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_tmp_condition_result_20_object_1);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_20_object_1);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_20_object_1);
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_int_arg_22;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_args_element_name_100;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_32 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_99 = par_active_ransomware;
        tmp_args_element_name_100 = mod_consts[73];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_name_99, tmp_args_element_name_100};
            tmp_int_arg_22 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_32, mod_consts[4], call_args);
        }

        if (tmp_int_arg_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_42 = PyNumber_Int(tmp_int_arg_22);
        Py_DECREF(tmp_int_arg_22);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(var_curve_public_offset == NULL);
        var_curve_public_offset = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_int_arg_23;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_args_element_name_102;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_33 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_101 = par_active_ransomware;
        tmp_args_element_name_102 = mod_consts[74];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_name_101, tmp_args_element_name_102};
            tmp_int_arg_23 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_33, mod_consts[4], call_args);
        }

        if (tmp_int_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_43 = PyNumber_Int(tmp_int_arg_23);
        Py_DECREF(tmp_int_arg_23);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(var_curve_public_length == NULL);
        var_curve_public_length = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_name_24;
        PyObject *tmp_args_element_name_103;
        PyObject *tmp_args_element_name_104;
        PyObject *tmp_args_element_name_105;
        PyObject *tmp_assattr_target_13;
        tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_24 == NULL)) {
            tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_103 = par_f;
        CHECK_OBJECT(var_curve_public_offset);
        tmp_args_element_name_104 = var_curve_public_offset;
        CHECK_OBJECT(var_curve_public_length);
        tmp_args_element_name_105 = var_curve_public_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_name_103, tmp_args_element_name_104, tmp_args_element_name_105};
            tmp_assattr_name_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_24, call_args);
        }

        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_13);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[41], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_args_element_name_106;
        PyObject *tmp_args_element_name_107;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_34 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_106 = par_active_ransomware;
        tmp_args_element_name_107 = mod_consts[75];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_name_106, tmp_args_element_name_107};
            tmp_getattr_attr_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_34, mod_consts[4], call_args);
        }

        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_44 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(var_curve_secret == NULL);
        var_curve_secret = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_108;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_element_name_109;
        int tmp_truth_name_12;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[43]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_name_108 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[41]);
        if (tmp_args_element_name_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_curve_secret);
        tmp_args_element_name_109 = var_curve_secret;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_name_108, tmp_args_element_name_109};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_25, call_args);
        }

        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_108);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_call_result_12);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_12);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_21 = tmp_truth_name_12 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_12);
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_21:;
    goto try_end_10;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_10);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_10, exception_keeper_tb_10);
    PUBLISH_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        tmp_compexpr_left_20 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_20 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_20, tmp_compexpr_right_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_45);
        var_e = tmp_assign_source_45;
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_110;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_str_arg_7;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[17]);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_110 = par_log_file;
        tmp_left_name_8 = mod_consts[45];
        CHECK_OBJECT(var_e);
        tmp_str_arg_7 = var_e;
        tmp_right_name_8 = PyObject_Str(tmp_str_arg_7);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_111 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_args_element_name_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_name_110, tmp_args_element_name_111};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_26, call_args);
        }

        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_111);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 132;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_22:;
    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_21;
        PyObject *tmp_compexpr_right_21;
        PyObject *tmp_tmp_condition_result_23_object_1;
        int tmp_truth_name_13;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_21 = par_method;
        tmp_compexpr_right_21 = mod_consts[76];
        tmp_tmp_condition_result_23_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_21, tmp_compexpr_right_21);
        if (tmp_tmp_condition_result_23_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_tmp_condition_result_23_object_1);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_23_object_1);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_23 = tmp_truth_name_13 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_23_object_1);
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_int_arg_24;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_args_element_name_112;
        PyObject *tmp_args_element_name_113;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_35 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_112 = par_active_ransomware;
        tmp_args_element_name_113 = mod_consts[77];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_name_112, tmp_args_element_name_113};
            tmp_int_arg_24 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_35, mod_consts[4], call_args);
        }

        if (tmp_int_arg_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_46 = PyNumber_Int(tmp_int_arg_24);
        Py_DECREF(tmp_int_arg_24);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_nonce_offset == NULL);
        var_salsa_nonce_offset = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_int_arg_25;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_args_element_name_114;
        PyObject *tmp_args_element_name_115;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_36 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_114 = par_active_ransomware;
        tmp_args_element_name_115 = mod_consts[78];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_name_114, tmp_args_element_name_115};
            tmp_int_arg_25 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_36, mod_consts[4], call_args);
        }

        if (tmp_int_arg_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_47 = PyNumber_Int(tmp_int_arg_25);
        Py_DECREF(tmp_int_arg_25);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_nonce_length == NULL);
        var_salsa_nonce_length = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_int_arg_26;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_args_element_name_117;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_37 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_116 = par_active_ransomware;
        tmp_args_element_name_117 = mod_consts[79];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_name_116, tmp_args_element_name_117};
            tmp_int_arg_26 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_37, mod_consts[4], call_args);
        }

        if (tmp_int_arg_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_48 = PyNumber_Int(tmp_int_arg_26);
        Py_DECREF(tmp_int_arg_26);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_encd_null_bytes_offset == NULL);
        var_salsa_encd_null_bytes_offset = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_int_arg_27;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_args_element_name_118;
        PyObject *tmp_args_element_name_119;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_38 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_118 = par_active_ransomware;
        tmp_args_element_name_119 = mod_consts[80];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_name_118, tmp_args_element_name_119};
            tmp_int_arg_27 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_38, mod_consts[4], call_args);
        }

        if (tmp_int_arg_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_49 = PyNumber_Int(tmp_int_arg_27);
        Py_DECREF(tmp_int_arg_27);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_encd_null_bytes_length == NULL);
        var_salsa_encd_null_bytes_length = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_int_arg_28;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_args_element_name_120;
        PyObject *tmp_args_element_name_121;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_39 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_120 = par_active_ransomware;
        tmp_args_element_name_121 = mod_consts[81];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_name_120, tmp_args_element_name_121};
            tmp_int_arg_28 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_39, mod_consts[4], call_args);
        }

        if (tmp_int_arg_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_50 = PyNumber_Int(tmp_int_arg_28);
        Py_DECREF(tmp_int_arg_28);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_decryption_mode_offset == NULL);
        var_salsa_decryption_mode_offset = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_int_arg_29;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_args_element_name_122;
        PyObject *tmp_args_element_name_123;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_40 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_122 = par_active_ransomware;
        tmp_args_element_name_123 = mod_consts[82];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_name_122, tmp_args_element_name_123};
            tmp_int_arg_29 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_40, mod_consts[4], call_args);
        }

        if (tmp_int_arg_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_51 = PyNumber_Int(tmp_int_arg_29);
        Py_DECREF(tmp_int_arg_29);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_decryption_mode_length == NULL);
        var_salsa_decryption_mode_length = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_int_arg_30;
        PyObject *tmp_called_instance_41;
        PyObject *tmp_args_element_name_124;
        PyObject *tmp_args_element_name_125;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_41 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_124 = par_active_ransomware;
        tmp_args_element_name_125 = mod_consts[83];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_name_124, tmp_args_element_name_125};
            tmp_int_arg_30 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_41, mod_consts[4], call_args);
        }

        if (tmp_int_arg_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_52 = PyNumber_Int(tmp_int_arg_30);
        Py_DECREF(tmp_int_arg_30);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_skip_size_offset == NULL);
        var_salsa_skip_size_offset = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_int_arg_31;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_args_element_name_126;
        PyObject *tmp_args_element_name_127;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_42 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_126 = par_active_ransomware;
        tmp_args_element_name_127 = mod_consts[84];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_name_126, tmp_args_element_name_127};
            tmp_int_arg_31 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_42, mod_consts[4], call_args);
        }

        if (tmp_int_arg_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_53 = PyNumber_Int(tmp_int_arg_31);
        Py_DECREF(tmp_int_arg_31);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_skip_size_length == NULL);
        var_salsa_skip_size_length = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_int_arg_32;
        PyObject *tmp_called_instance_43;
        PyObject *tmp_args_element_name_128;
        PyObject *tmp_args_element_name_129;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_43 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_128 = par_active_ransomware;
        tmp_args_element_name_129 = mod_consts[85];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_name_128, tmp_args_element_name_129};
            tmp_int_arg_32 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_43, mod_consts[4], call_args);
        }

        if (tmp_int_arg_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_54 = PyNumber_Int(tmp_int_arg_32);
        Py_DECREF(tmp_int_arg_32);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_cipher_update == NULL);
        var_salsa_cipher_update = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_int_arg_33;
        PyObject *tmp_called_instance_44;
        PyObject *tmp_args_element_name_130;
        PyObject *tmp_args_element_name_131;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_44 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_130 = par_active_ransomware;
        tmp_args_element_name_131 = mod_consts[86];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_name_130, tmp_args_element_name_131};
            tmp_int_arg_33 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_44, mod_consts[4], call_args);
        }

        if (tmp_int_arg_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_55 = PyNumber_Int(tmp_int_arg_33);
        Py_DECREF(tmp_int_arg_33);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_meta_data_offset == NULL);
        var_meta_data_offset = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_132;
        PyObject *tmp_args_element_name_133;
        PyObject *tmp_args_element_name_134;
        tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_27 == NULL)) {
            tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_132 = par_f;
        CHECK_OBJECT(var_salsa_nonce_offset);
        tmp_args_element_name_133 = var_salsa_nonce_offset;
        CHECK_OBJECT(var_salsa_nonce_length);
        tmp_args_element_name_134 = var_salsa_nonce_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_name_132, tmp_args_element_name_133, tmp_args_element_name_134};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_27, call_args);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_nonce == NULL);
        var_salsa_nonce = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_28;
        PyObject *tmp_args_element_name_135;
        PyObject *tmp_args_element_name_136;
        PyObject *tmp_args_element_name_137;
        tmp_called_name_28 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_28 == NULL)) {
            tmp_called_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_135 = par_f;
        CHECK_OBJECT(var_salsa_encd_null_bytes_offset);
        tmp_args_element_name_136 = var_salsa_encd_null_bytes_offset;
        CHECK_OBJECT(var_salsa_encd_null_bytes_length);
        tmp_args_element_name_137 = var_salsa_encd_null_bytes_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_name_135, tmp_args_element_name_136, tmp_args_element_name_137};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_28, call_args);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_encd_null_bytes == NULL);
        var_salsa_encd_null_bytes = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_name_29;
        PyObject *tmp_args_element_name_138;
        PyObject *tmp_args_element_name_139;
        PyObject *tmp_args_element_name_140;
        tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_29 == NULL)) {
            tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_138 = par_f;
        CHECK_OBJECT(var_salsa_decryption_mode_offset);
        tmp_args_element_name_139 = var_salsa_decryption_mode_offset;
        CHECK_OBJECT(var_salsa_decryption_mode_length);
        tmp_args_element_name_140 = var_salsa_decryption_mode_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_name_138, tmp_args_element_name_139, tmp_args_element_name_140};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_29, call_args);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_decryption_mode == NULL);
        var_salsa_decryption_mode = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_30;
        PyObject *tmp_args_element_name_141;
        PyObject *tmp_args_element_name_142;
        PyObject *tmp_args_element_name_143;
        tmp_called_name_30 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_30 == NULL)) {
            tmp_called_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_141 = par_f;
        CHECK_OBJECT(var_salsa_skip_size_offset);
        tmp_args_element_name_142 = var_salsa_skip_size_offset;
        CHECK_OBJECT(var_salsa_skip_size_length);
        tmp_args_element_name_143 = var_salsa_skip_size_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_name_141, tmp_args_element_name_142, tmp_args_element_name_143};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_30, call_args);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_salsa_skip_size == NULL);
        var_salsa_skip_size = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_144;
        PyObject *tmp_args_element_name_145;
        tmp_called_name_31 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_name_31 == NULL)) {
            tmp_called_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[87]);
        }

        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_144 = par_f;
        CHECK_OBJECT(var_meta_data_offset);
        tmp_args_element_name_145 = var_meta_data_offset;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_name_144, tmp_args_element_name_145};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_31, call_args);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_encrypted_data == NULL);
        var_encrypted_data = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_146;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_147;
        PyObject *tmp_args_element_name_148;
        PyObject *tmp_args_element_name_149;
        PyObject *tmp_args_element_name_150;
        PyObject *tmp_args_element_name_151;
        PyObject *tmp_args_element_name_152;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[88]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_args_element_name_146 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[49]);
        if (tmp_args_element_name_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_salsa_nonce);
        tmp_args_element_name_147 = var_salsa_nonce;
        CHECK_OBJECT(var_salsa_encd_null_bytes);
        tmp_args_element_name_148 = var_salsa_encd_null_bytes;
        CHECK_OBJECT(var_encrypted_data);
        tmp_args_element_name_149 = var_encrypted_data;
        CHECK_OBJECT(var_salsa_decryption_mode);
        tmp_args_element_name_150 = var_salsa_decryption_mode;
        CHECK_OBJECT(var_salsa_skip_size);
        tmp_args_element_name_151 = var_salsa_skip_size;
        CHECK_OBJECT(var_salsa_cipher_update);
        tmp_args_element_name_152 = var_salsa_cipher_update;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_name_146, tmp_args_element_name_147, tmp_args_element_name_148, tmp_args_element_name_149, tmp_args_element_name_150, tmp_args_element_name_151, tmp_args_element_name_152};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_32, call_args);
        }

        Py_DECREF(tmp_called_name_32);
        Py_DECREF(tmp_args_element_name_146);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(var_plaintext == NULL);
        var_plaintext = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_14;
        CHECK_OBJECT(var_plaintext);
        tmp_truth_name_14 = CHECK_IF_TRUE(var_plaintext);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_24 = tmp_truth_name_14 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_153;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_name_154;
        tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_name_33 == NULL)) {
            tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[89]);
        }

        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_f);
        tmp_slice_source_1 = par_f;
        CHECK_OBJECT(var_extension);
        tmp_len_arg_1 = var_extension;
        tmp_operand_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_slice_upper_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_args_element_name_153 = LOOKUP_SLICE(tmp_slice_source_1, Py_None, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_args_element_name_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_plaintext);
        tmp_args_element_name_154 = var_plaintext;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_name_153, tmp_args_element_name_154};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_33, call_args);
        }

        Py_DECREF(tmp_args_element_name_153);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_14);
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_24:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_11);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_11, exception_keeper_tb_11);
    PUBLISH_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        tmp_compexpr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_22 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_22, tmp_compexpr_right_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_62);
        var_e = tmp_assign_source_62;
    }
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_155;
        PyObject *tmp_args_element_name_156;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_str_arg_8;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[17]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_155 = par_log_file;
        tmp_left_name_9 = mod_consts[90];
        CHECK_OBJECT(var_e);
        tmp_str_arg_8 = var_e;
        tmp_right_name_9 = PyObject_Str(tmp_str_arg_8);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_156 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_args_element_name_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_name_155, tmp_args_element_name_156};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_34, call_args);
        }

        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_156);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    goto branch_end_25;
    branch_no_25:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 143;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_25:;
    goto try_end_11;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_11:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        PyObject *tmp_tmp_condition_result_26_object_1;
        int tmp_truth_name_15;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_23 = par_method;
        tmp_compexpr_right_23 = mod_consts[91];
        tmp_tmp_condition_result_26_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_23, tmp_compexpr_right_23);
        if (tmp_tmp_condition_result_26_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_tmp_condition_result_26_object_1);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_26_object_1);

            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_26 = tmp_truth_name_15 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_26_object_1);
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_int_arg_34;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_args_element_name_157;
        PyObject *tmp_args_element_name_158;
        PyObject *tmp_assattr_target_14;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_45 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_157 = par_active_ransomware;
        tmp_args_element_name_158 = mod_consts[92];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_name_157, tmp_args_element_name_158};
            tmp_int_arg_34 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_45, mod_consts[4], call_args);
        }

        if (tmp_int_arg_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_14 = PyNumber_Int(tmp_int_arg_34);
        Py_DECREF(tmp_int_arg_34);
        if (tmp_assattr_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_14);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[92], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_int_arg_35;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_args_element_name_159;
        PyObject *tmp_args_element_name_160;
        PyObject *tmp_assattr_target_15;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_46 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_159 = par_active_ransomware;
        tmp_args_element_name_160 = mod_consts[93];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_name_159, tmp_args_element_name_160};
            tmp_int_arg_35 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_46, mod_consts[4], call_args);
        }

        if (tmp_int_arg_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_15 = PyNumber_Int(tmp_int_arg_35);
        Py_DECREF(tmp_int_arg_35);
        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_15);

            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[93], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_int_arg_36;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_args_element_name_161;
        PyObject *tmp_args_element_name_162;
        PyObject *tmp_assattr_target_16;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_47 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_161 = par_active_ransomware;
        tmp_args_element_name_162 = mod_consts[94];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_name_161, tmp_args_element_name_162};
            tmp_int_arg_36 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_47, mod_consts[4], call_args);
        }

        if (tmp_int_arg_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_16 = PyNumber_Int(tmp_int_arg_36);
        Py_DECREF(tmp_int_arg_36);
        if (tmp_assattr_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_16);

            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[94], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_int_arg_37;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_args_element_name_163;
        PyObject *tmp_args_element_name_164;
        PyObject *tmp_assattr_target_17;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_48 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_163 = par_active_ransomware;
        tmp_args_element_name_164 = mod_consts[95];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_name_163, tmp_args_element_name_164};
            tmp_int_arg_37 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_48, mod_consts[4], call_args);
        }

        if (tmp_int_arg_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_17 = PyNumber_Int(tmp_int_arg_37);
        Py_DECREF(tmp_int_arg_37);
        if (tmp_assattr_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_17);

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[95], tmp_assattr_name_17);
        Py_DECREF(tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_int_arg_38;
        PyObject *tmp_called_instance_49;
        PyObject *tmp_args_element_name_165;
        PyObject *tmp_args_element_name_166;
        PyObject *tmp_assattr_target_18;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_49 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_165 = par_active_ransomware;
        tmp_args_element_name_166 = mod_consts[96];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_name_165, tmp_args_element_name_166};
            tmp_int_arg_38 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_49, mod_consts[4], call_args);
        }

        if (tmp_int_arg_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_18 = PyNumber_Int(tmp_int_arg_38);
        Py_DECREF(tmp_int_arg_38);
        if (tmp_assattr_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_18);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[96], tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_int_arg_39;
        PyObject *tmp_called_instance_50;
        PyObject *tmp_args_element_name_167;
        PyObject *tmp_args_element_name_168;
        PyObject *tmp_assattr_target_19;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_50 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_167 = par_active_ransomware;
        tmp_args_element_name_168 = mod_consts[97];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_name_167, tmp_args_element_name_168};
            tmp_int_arg_39 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_50, mod_consts[4], call_args);
        }

        if (tmp_int_arg_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_19 = PyNumber_Int(tmp_int_arg_39);
        Py_DECREF(tmp_int_arg_39);
        if (tmp_assattr_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_19);

            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[97], tmp_assattr_name_19);
        Py_DECREF(tmp_assattr_name_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_int_arg_40;
        PyObject *tmp_called_instance_51;
        PyObject *tmp_args_element_name_169;
        PyObject *tmp_args_element_name_170;
        PyObject *tmp_assattr_target_20;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_51 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_169 = par_active_ransomware;
        tmp_args_element_name_170 = mod_consts[98];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_name_169, tmp_args_element_name_170};
            tmp_int_arg_40 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_51, mod_consts[4], call_args);
        }

        if (tmp_int_arg_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_20 = PyNumber_Int(tmp_int_arg_40);
        Py_DECREF(tmp_int_arg_40);
        if (tmp_assattr_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_20);

            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[98], tmp_assattr_name_20);
        Py_DECREF(tmp_assattr_name_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_int_arg_41;
        PyObject *tmp_called_instance_52;
        PyObject *tmp_args_element_name_171;
        PyObject *tmp_args_element_name_172;
        PyObject *tmp_assattr_target_21;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_52 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_171 = par_active_ransomware;
        tmp_args_element_name_172 = mod_consts[99];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_name_171, tmp_args_element_name_172};
            tmp_int_arg_41 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_52, mod_consts[4], call_args);
        }

        if (tmp_int_arg_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_name_21 = PyNumber_Int(tmp_int_arg_41);
        Py_DECREF(tmp_int_arg_41);
        if (tmp_assattr_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_21);

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[99], tmp_assattr_name_21);
        Py_DECREF(tmp_assattr_name_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_35;
        PyObject *tmp_args_element_name_173;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_174;
        PyObject *tmp_args_element_name_175;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_args_element_name_176;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_args_element_name_177;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_args_element_name_178;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_179;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_args_element_name_180;
        PyObject *tmp_expression_name_35;
        tmp_called_name_35 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_name_35 == NULL)) {
            tmp_called_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[100]);
        }

        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_173 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[101]);
        if (tmp_args_element_name_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_174 = mod_consts[102];
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_175 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[92]);
        if (tmp_args_element_name_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_176 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[93]);
        if (tmp_args_element_name_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_177 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[94]);
        if (tmp_args_element_name_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);
            Py_DECREF(tmp_args_element_name_177);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_178 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[95]);
        if (tmp_args_element_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);
            Py_DECREF(tmp_args_element_name_177);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);
            Py_DECREF(tmp_args_element_name_177);
            Py_DECREF(tmp_args_element_name_178);

            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_179 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[96]);
        if (tmp_args_element_name_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);
            Py_DECREF(tmp_args_element_name_177);
            Py_DECREF(tmp_args_element_name_178);

            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);
            Py_DECREF(tmp_args_element_name_177);
            Py_DECREF(tmp_args_element_name_178);
            Py_DECREF(tmp_args_element_name_179);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_name_180 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[99]);
        if (tmp_args_element_name_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_173);
            Py_DECREF(tmp_args_element_name_175);
            Py_DECREF(tmp_args_element_name_176);
            Py_DECREF(tmp_args_element_name_177);
            Py_DECREF(tmp_args_element_name_178);
            Py_DECREF(tmp_args_element_name_179);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_name_173, tmp_args_element_name_174, tmp_args_element_name_175, tmp_args_element_name_176, tmp_args_element_name_177, tmp_args_element_name_178, tmp_args_element_name_179, tmp_args_element_name_180};
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS8(tmp_called_name_35, call_args);
        }

        Py_DECREF(tmp_args_element_name_173);
        Py_DECREF(tmp_args_element_name_175);
        Py_DECREF(tmp_args_element_name_176);
        Py_DECREF(tmp_args_element_name_177);
        Py_DECREF(tmp_args_element_name_178);
        Py_DECREF(tmp_args_element_name_179);
        Py_DECREF(tmp_args_element_name_180);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        assert(var_private_key == NULL);
        var_private_key = tmp_assign_source_63;
    }
    {
        nuitka_bool tmp_condition_result_27;
        int tmp_truth_name_16;
        CHECK_OBJECT(var_private_key);
        tmp_truth_name_16 = CHECK_IF_TRUE(var_private_key);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_27 = tmp_truth_name_16 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assattr_name_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(var_private_key);
        tmp_assattr_name_22 = var_private_key;
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[103], tmp_assattr_name_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_27:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_12 == NULL) {
        exception_keeper_tb_12 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_12);
    } else if (exception_keeper_lineno_12 != 0) {
        exception_keeper_tb_12 = ADD_TRACEBACK(exception_keeper_tb_12, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_12);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_12, exception_keeper_tb_12);
    PUBLISH_EXCEPTION(&exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12);
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        tmp_compexpr_left_24 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_24 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_24, tmp_compexpr_right_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_28 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_64);
        var_e = tmp_assign_source_64;
    }
    {
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_name_181;
        PyObject *tmp_args_element_name_182;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_str_arg_9;
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[17]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_181 = par_log_file;
        tmp_left_name_10 = mod_consts[104];
        CHECK_OBJECT(var_e);
        tmp_str_arg_9 = var_e;
        tmp_right_name_10 = PyObject_Str(tmp_str_arg_9);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_182 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_args_element_name_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_181, tmp_args_element_name_182};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_36, call_args);
        }

        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_182);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto branch_end_28;
    branch_no_28:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 174;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_28:;
    goto try_end_12;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_12:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_26;
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_tmp_condition_result_29_object_1;
        int tmp_truth_name_17;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_25 = par_method;
        tmp_compexpr_right_25 = mod_consts[105];
        tmp_tmp_condition_result_29_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_25, tmp_compexpr_right_25);
        if (tmp_tmp_condition_result_29_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_tmp_condition_result_29_object_1);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_29_object_1);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = tmp_truth_name_17 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_29_object_1);
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_int_arg_42;
        PyObject *tmp_called_instance_53;
        PyObject *tmp_args_element_name_183;
        PyObject *tmp_args_element_name_184;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_instance_53 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_183 = par_active_ransomware;
        tmp_args_element_name_184 = mod_consts[106];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_name_183, tmp_args_element_name_184};
            tmp_int_arg_42 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_53, mod_consts[4], call_args);
        }

        if (tmp_int_arg_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_65 = PyNumber_Int(tmp_int_arg_42);
        Py_DECREF(tmp_int_arg_42);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(var_offset == NULL);
        var_offset = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_int_arg_43;
        PyObject *tmp_called_instance_54;
        PyObject *tmp_args_element_name_185;
        PyObject *tmp_args_element_name_186;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_instance_54 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_185 = par_active_ransomware;
        tmp_args_element_name_186 = mod_consts[107];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_name_185, tmp_args_element_name_186};
            tmp_int_arg_43 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_54, mod_consts[4], call_args);
        }

        if (tmp_int_arg_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_66 = PyNumber_Int(tmp_int_arg_43);
        Py_DECREF(tmp_int_arg_43);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assattr_name_23;
        PyObject *tmp_left_name_11;
        PyObject *tmp_int_arg_44;
        PyObject *tmp_called_instance_55;
        PyObject *tmp_args_element_name_187;
        PyObject *tmp_args_element_name_188;
        PyObject *tmp_right_name_11;
        PyObject *tmp_assattr_target_23;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_instance_55 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_187 = par_active_ransomware;
        tmp_args_element_name_188 = mod_consts[108];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_name_187, tmp_args_element_name_188};
            tmp_int_arg_44 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_55, mod_consts[4], call_args);
        }

        if (tmp_int_arg_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_left_name_11 = PyNumber_Int(tmp_int_arg_44);
        Py_DECREF(tmp_int_arg_44);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_right_name_11 = mod_consts[109];
        tmp_assattr_name_23 = BINARY_OPERATION_OLDDIV_OBJECT_OBJECT_INT(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_left_name_11);
        if (tmp_assattr_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_23);

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[110], tmp_assattr_name_23);
        Py_DECREF(tmp_assattr_name_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_189;
        PyObject *tmp_args_element_name_190;
        PyObject *tmp_args_element_name_191;
        PyObject *tmp_assattr_target_24;
        tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_37 == NULL)) {
            tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_189 = par_f;
        CHECK_OBJECT(var_offset);
        tmp_args_element_name_190 = var_offset;
        CHECK_OBJECT(var_length);
        tmp_args_element_name_191 = var_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_name_189, tmp_args_element_name_190, tmp_args_element_name_191};
            tmp_assattr_name_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_37, call_args);
        }

        if (tmp_assattr_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_24);

            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[111], tmp_assattr_name_24);
        Py_DECREF(tmp_assattr_name_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_compexpr_left_26;
        PyObject *tmp_compexpr_right_26;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_name_37;
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[111]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_compexpr_left_26 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_compexpr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_compexpr_right_26 = mod_consts[112];
        tmp_condition_result_30 = RICH_COMPARE_EQ_CBOOL_OBJECT_INT(tmp_compexpr_left_26, tmp_compexpr_right_26);
        Py_DECREF(tmp_compexpr_left_26);
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assattr_name_25;
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_args_element_name_192;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_193;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_args_element_name_194;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_assattr_target_25;
        tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_38 == NULL)) {
            tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[113]);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_args_element_name_192 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[110]);
        if (tmp_args_element_name_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_40 == NULL)) {
            tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_args_element_name_192);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_args_element_name_193 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[103]);
        if (tmp_args_element_name_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_args_element_name_192);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_args_element_name_192);
            Py_DECREF(tmp_args_element_name_193);

            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_args_element_name_194 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[111]);
        if (tmp_args_element_name_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);
            Py_DECREF(tmp_args_element_name_192);
            Py_DECREF(tmp_args_element_name_193);

            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_name_192, tmp_args_element_name_193, tmp_args_element_name_194};
            tmp_assattr_name_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_38, call_args);
        }

        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_192);
        Py_DECREF(tmp_args_element_name_193);
        Py_DECREF(tmp_args_element_name_194);
        if (tmp_assattr_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_25);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[114], tmp_assattr_name_25);
        Py_DECREF(tmp_assattr_name_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_18;
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[114]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_31 = tmp_truth_name_18 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_31:;
    branch_no_30:;
    goto try_end_13;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_13);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_13, exception_keeper_tb_13);
    PUBLISH_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_compexpr_left_27;
        PyObject *tmp_compexpr_right_27;
        tmp_compexpr_left_27 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_27 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_27, tmp_compexpr_right_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_32 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_67);
        var_e = tmp_assign_source_67;
    }
    {
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_195;
        PyObject *tmp_args_element_name_196;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_str_arg_10;
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[17]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_195 = par_log_file;
        tmp_left_name_12 = mod_consts[115];
        CHECK_OBJECT(var_e);
        tmp_str_arg_10 = var_e;
        tmp_right_name_12 = PyObject_Str(tmp_str_arg_10);
        if (tmp_right_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_196 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_args_element_name_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_name_195, tmp_args_element_name_196};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_39, call_args);
        }

        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_element_name_196);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto branch_end_32;
    branch_no_32:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 193;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_32:;
    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_29;
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_compexpr_left_28;
        PyObject *tmp_compexpr_right_28;
        PyObject *tmp_tmp_condition_result_33_object_1;
        int tmp_truth_name_19;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_28 = par_method;
        tmp_compexpr_right_28 = mod_consts[116];
        tmp_tmp_condition_result_33_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_28, tmp_compexpr_right_28);
        if (tmp_tmp_condition_result_33_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_tmp_condition_result_33_object_1);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_33_object_1);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_33 = tmp_truth_name_19 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_33_object_1);
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_20;
        tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_44 == NULL)) {
            tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[114]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_34 = tmp_truth_name_20 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_int_arg_45;
        PyObject *tmp_called_instance_56;
        PyObject *tmp_args_element_name_197;
        PyObject *tmp_args_element_name_198;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_56 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_197 = par_active_ransomware;
        tmp_args_element_name_198 = mod_consts[117];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_name_197, tmp_args_element_name_198};
            tmp_int_arg_45 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_56, mod_consts[4], call_args);
        }

        if (tmp_int_arg_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_68 = PyNumber_Int(tmp_int_arg_45);
        Py_DECREF(tmp_int_arg_45);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_n_length == NULL);
        var_n_length = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_int_arg_46;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_args_element_name_199;
        PyObject *tmp_args_element_name_200;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_57 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_199 = par_active_ransomware;
        tmp_args_element_name_200 = mod_consts[118];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_name_199, tmp_args_element_name_200};
            tmp_int_arg_46 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_57, mod_consts[4], call_args);
        }

        if (tmp_int_arg_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_69 = PyNumber_Int(tmp_int_arg_46);
        Py_DECREF(tmp_int_arg_46);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_e_length == NULL);
        var_e_length = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_int_arg_47;
        PyObject *tmp_called_instance_58;
        PyObject *tmp_args_element_name_201;
        PyObject *tmp_args_element_name_202;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_58 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_201 = par_active_ransomware;
        tmp_args_element_name_202 = mod_consts[119];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_name_201, tmp_args_element_name_202};
            tmp_int_arg_47 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_58, mod_consts[4], call_args);
        }

        if (tmp_int_arg_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_70 = PyNumber_Int(tmp_int_arg_47);
        Py_DECREF(tmp_int_arg_47);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_d_length == NULL);
        var_d_length = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_int_arg_48;
        PyObject *tmp_called_instance_59;
        PyObject *tmp_args_element_name_203;
        PyObject *tmp_args_element_name_204;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_59 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_203 = par_active_ransomware;
        tmp_args_element_name_204 = mod_consts[120];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_name_203, tmp_args_element_name_204};
            tmp_int_arg_48 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_59, mod_consts[4], call_args);
        }

        if (tmp_int_arg_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_71 = PyNumber_Int(tmp_int_arg_48);
        Py_DECREF(tmp_int_arg_48);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_p_length == NULL);
        var_p_length = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_int_arg_49;
        PyObject *tmp_called_instance_60;
        PyObject *tmp_args_element_name_205;
        PyObject *tmp_args_element_name_206;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_60 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_205 = par_active_ransomware;
        tmp_args_element_name_206 = mod_consts[121];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_name_205, tmp_args_element_name_206};
            tmp_int_arg_49 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_60, mod_consts[4], call_args);
        }

        if (tmp_int_arg_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_72 = PyNumber_Int(tmp_int_arg_49);
        Py_DECREF(tmp_int_arg_49);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_q_length == NULL);
        var_q_length = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_int_arg_50;
        PyObject *tmp_called_instance_61;
        PyObject *tmp_args_element_name_207;
        PyObject *tmp_args_element_name_208;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_61 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_207 = par_active_ransomware;
        tmp_args_element_name_208 = mod_consts[122];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_name_207, tmp_args_element_name_208};
            tmp_int_arg_50 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_61, mod_consts[4], call_args);
        }

        if (tmp_int_arg_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_73 = PyNumber_Int(tmp_int_arg_50);
        Py_DECREF(tmp_int_arg_50);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_dp_length == NULL);
        var_dp_length = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_int_arg_51;
        PyObject *tmp_called_instance_62;
        PyObject *tmp_args_element_name_209;
        PyObject *tmp_args_element_name_210;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_62 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_209 = par_active_ransomware;
        tmp_args_element_name_210 = mod_consts[123];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_name_209, tmp_args_element_name_210};
            tmp_int_arg_51 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_62, mod_consts[4], call_args);
        }

        if (tmp_int_arg_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_74 = PyNumber_Int(tmp_int_arg_51);
        Py_DECREF(tmp_int_arg_51);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_dq_length == NULL);
        var_dq_length = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_int_arg_52;
        PyObject *tmp_called_instance_63;
        PyObject *tmp_args_element_name_211;
        PyObject *tmp_args_element_name_212;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_63 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_211 = par_active_ransomware;
        tmp_args_element_name_212 = mod_consts[124];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_name_211, tmp_args_element_name_212};
            tmp_int_arg_52 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_63, mod_consts[4], call_args);
        }

        if (tmp_int_arg_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_75 = PyNumber_Int(tmp_int_arg_52);
        Py_DECREF(tmp_int_arg_52);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_qp_length == NULL);
        var_qp_length = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_name_40;
        PyObject *tmp_args_element_name_213;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_args_element_name_214;
        PyObject *tmp_args_element_name_215;
        tmp_called_name_40 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_40 == NULL)) {
            tmp_called_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_213 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[114]);
        if (tmp_args_element_name_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_214 = mod_consts[126];
        CHECK_OBJECT(var_n_length);
        tmp_args_element_name_215 = var_n_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_name_213, tmp_args_element_name_214, tmp_args_element_name_215};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_40, call_args);
        }

        Py_DECREF(tmp_args_element_name_213);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_name_41;
        PyObject *tmp_args_element_name_216;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_args_element_name_217;
        PyObject *tmp_args_element_name_218;
        tmp_called_name_41 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_41 == NULL)) {
            tmp_called_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_46 == NULL)) {
            tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_216 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[114]);
        if (tmp_args_element_name_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_n_length);
        tmp_args_element_name_217 = var_n_length;
        CHECK_OBJECT(var_e_length);
        tmp_args_element_name_218 = var_e_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_name_216, tmp_args_element_name_217, tmp_args_element_name_218};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_41, call_args);
        }

        Py_DECREF(tmp_args_element_name_216);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_e == NULL);
        var_e = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_name_42;
        PyObject *tmp_args_element_name_219;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_args_element_name_220;
        PyObject *tmp_args_element_name_221;
        tmp_called_name_42 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_42 == NULL)) {
            tmp_called_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_219 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[114]);
        if (tmp_args_element_name_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_e_length);
        tmp_args_element_name_220 = var_e_length;
        CHECK_OBJECT(var_d_length);
        tmp_args_element_name_221 = var_d_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_name_219, tmp_args_element_name_220, tmp_args_element_name_221};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_42, call_args);
        }

        Py_DECREF(tmp_args_element_name_219);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_name_43;
        PyObject *tmp_args_element_name_222;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_args_element_name_223;
        PyObject *tmp_args_element_name_224;
        tmp_called_name_43 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_43 == NULL)) {
            tmp_called_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_48 == NULL)) {
            tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_222 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[114]);
        if (tmp_args_element_name_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_d_length);
        tmp_args_element_name_223 = var_d_length;
        CHECK_OBJECT(var_p_length);
        tmp_args_element_name_224 = var_p_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_name_222, tmp_args_element_name_223, tmp_args_element_name_224};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_43, call_args);
        }

        Py_DECREF(tmp_args_element_name_222);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_name_44;
        PyObject *tmp_args_element_name_225;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_args_element_name_226;
        PyObject *tmp_args_element_name_227;
        tmp_called_name_44 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_44 == NULL)) {
            tmp_called_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_49 == NULL)) {
            tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_225 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[114]);
        if (tmp_args_element_name_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_p_length);
        tmp_args_element_name_226 = var_p_length;
        CHECK_OBJECT(var_q_length);
        tmp_args_element_name_227 = var_q_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_name_225, tmp_args_element_name_226, tmp_args_element_name_227};
            tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_44, call_args);
        }

        Py_DECREF(tmp_args_element_name_225);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_name_45;
        PyObject *tmp_args_element_name_228;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_args_element_name_229;
        PyObject *tmp_args_element_name_230;
        tmp_called_name_45 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_45 == NULL)) {
            tmp_called_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_50 == NULL)) {
            tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_228 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[114]);
        if (tmp_args_element_name_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_q_length);
        tmp_args_element_name_229 = var_q_length;
        CHECK_OBJECT(var_dp_length);
        tmp_args_element_name_230 = var_dp_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_name_228, tmp_args_element_name_229, tmp_args_element_name_230};
            tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_45, call_args);
        }

        Py_DECREF(tmp_args_element_name_228);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_dp == NULL);
        var_dp = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_name_46;
        PyObject *tmp_args_element_name_231;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_args_element_name_232;
        PyObject *tmp_args_element_name_233;
        tmp_called_name_46 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_46 == NULL)) {
            tmp_called_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_231 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[114]);
        if (tmp_args_element_name_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_dp_length);
        tmp_args_element_name_232 = var_dp_length;
        CHECK_OBJECT(var_dq_length);
        tmp_args_element_name_233 = var_dq_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_name_231, tmp_args_element_name_232, tmp_args_element_name_233};
            tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_46, call_args);
        }

        Py_DECREF(tmp_args_element_name_231);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_dq == NULL);
        var_dq = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_name_47;
        PyObject *tmp_args_element_name_234;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_args_element_name_235;
        PyObject *tmp_args_element_name_236;
        tmp_called_name_47 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_47 == NULL)) {
            tmp_called_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[125]);
        }

        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_52 == NULL)) {
            tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_234 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[114]);
        if (tmp_args_element_name_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_dq_length);
        tmp_args_element_name_235 = var_dq_length;
        CHECK_OBJECT(var_qp_length);
        tmp_args_element_name_236 = var_qp_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_name_234, tmp_args_element_name_235, tmp_args_element_name_236};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_47, call_args);
        }

        Py_DECREF(tmp_args_element_name_234);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(var_coef == NULL);
        var_coef = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assattr_name_26;
        PyObject *tmp_called_name_48;
        PyObject *tmp_args_element_name_237;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_args_element_name_238;
        PyObject *tmp_args_element_name_239;
        PyObject *tmp_args_element_name_240;
        PyObject *tmp_args_element_name_241;
        PyObject *tmp_args_element_name_242;
        PyObject *tmp_args_element_name_243;
        PyObject *tmp_args_element_name_244;
        PyObject *tmp_assattr_target_26;
        tmp_called_name_48 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_name_48 == NULL)) {
            tmp_called_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[100]);
        }

        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_53 == NULL)) {
            tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_237 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[101]);
        if (tmp_args_element_name_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_args_element_name_238 = mod_consts[127];
        CHECK_OBJECT(var_n);
        tmp_args_element_name_239 = var_n;
        CHECK_OBJECT(var_e);
        tmp_args_element_name_240 = var_e;
        CHECK_OBJECT(var_d);
        tmp_args_element_name_241 = var_d;
        CHECK_OBJECT(var_p);
        tmp_args_element_name_242 = var_p;
        CHECK_OBJECT(var_q);
        tmp_args_element_name_243 = var_q;
        CHECK_OBJECT(var_coef);
        tmp_args_element_name_244 = var_coef;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_name_237, tmp_args_element_name_238, tmp_args_element_name_239, tmp_args_element_name_240, tmp_args_element_name_241, tmp_args_element_name_242, tmp_args_element_name_243, tmp_args_element_name_244};
            tmp_assattr_name_26 = CALL_FUNCTION_WITH_ARGS8(tmp_called_name_48, call_args);
        }

        Py_DECREF(tmp_args_element_name_237);
        if (tmp_assattr_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_26);

            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[128], tmp_assattr_name_26);
        Py_DECREF(tmp_assattr_name_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_21;
        tmp_expression_name_54 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_54 == NULL)) {
            tmp_expression_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[128]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_35 = tmp_truth_name_21 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_35:;
    branch_no_34:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_14 == NULL) {
        exception_keeper_tb_14 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_14);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_keeper_tb_14 = ADD_TRACEBACK(exception_keeper_tb_14, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_14);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_14, exception_keeper_tb_14);
    PUBLISH_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_compexpr_left_29;
        PyObject *tmp_compexpr_right_29;
        tmp_compexpr_left_29 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_29 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_29, tmp_compexpr_right_29);
        assert(!(tmp_res == -1));
        tmp_condition_result_36 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_84;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_245;
        PyObject *tmp_args_element_name_246;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_str_arg_11;
        tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_55 == NULL)) {
            tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[17]);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_245 = par_log_file;
        tmp_left_name_13 = mod_consts[129];
        CHECK_OBJECT(var_e);
        tmp_str_arg_11 = var_e;
        tmp_right_name_13 = PyObject_Str(tmp_str_arg_11);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_246 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_args_element_name_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_name_245, tmp_args_element_name_246};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_49, call_args);
        }

        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_element_name_246);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    goto branch_end_36;
    branch_no_36:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 210;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_36:;
    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_33;
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_compexpr_left_30;
        PyObject *tmp_compexpr_right_30;
        PyObject *tmp_tmp_condition_result_37_object_1;
        int tmp_truth_name_22;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_30 = par_method;
        tmp_compexpr_right_30 = mod_consts[130];
        tmp_tmp_condition_result_37_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_30, tmp_compexpr_right_30);
        if (tmp_tmp_condition_result_37_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_tmp_condition_result_37_object_1);
        if (tmp_truth_name_22 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_37_object_1);

            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_37 = tmp_truth_name_22 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_37_object_1);
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_27;
        PyObject *tmp_int_arg_53;
        PyObject *tmp_called_instance_64;
        PyObject *tmp_args_element_name_247;
        PyObject *tmp_args_element_name_248;
        PyObject *tmp_assattr_target_27;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_64 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_247 = par_active_ransomware;
        tmp_args_element_name_248 = mod_consts[52];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_name_247, tmp_args_element_name_248};
            tmp_int_arg_53 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_64, mod_consts[4], call_args);
        }

        if (tmp_int_arg_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assattr_name_27 = PyNumber_Int(tmp_int_arg_53);
        Py_DECREF(tmp_int_arg_53);
        if (tmp_assattr_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_27);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_27, mod_consts[53], tmp_assattr_name_27);
        Py_DECREF(tmp_assattr_name_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_int_arg_54;
        PyObject *tmp_called_instance_65;
        PyObject *tmp_args_element_name_249;
        PyObject *tmp_args_element_name_250;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_65 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_249 = par_active_ransomware;
        tmp_args_element_name_250 = mod_consts[131];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_name_249, tmp_args_element_name_250};
            tmp_int_arg_54 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_65, mod_consts[4], call_args);
        }

        if (tmp_int_arg_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_85 = PyNumber_Int(tmp_int_arg_54);
        Py_DECREF(tmp_int_arg_54);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        assert(var_offset == NULL);
        var_offset = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_int_arg_55;
        PyObject *tmp_called_instance_66;
        PyObject *tmp_args_element_name_251;
        PyObject *tmp_args_element_name_252;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_66 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_251 = par_active_ransomware;
        tmp_args_element_name_252 = mod_consts[132];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_name_251, tmp_args_element_name_252};
            tmp_int_arg_55 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_66, mod_consts[4], call_args);
        }

        if (tmp_int_arg_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_86 = PyNumber_Int(tmp_int_arg_55);
        Py_DECREF(tmp_int_arg_55);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assattr_name_28;
        PyObject *tmp_left_name_14;
        PyObject *tmp_int_arg_56;
        PyObject *tmp_called_instance_67;
        PyObject *tmp_args_element_name_253;
        PyObject *tmp_args_element_name_254;
        PyObject *tmp_right_name_14;
        PyObject *tmp_assattr_target_28;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_67 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_253 = par_active_ransomware;
        tmp_args_element_name_254 = mod_consts[108];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_name_253, tmp_args_element_name_254};
            tmp_int_arg_56 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_67, mod_consts[4], call_args);
        }

        if (tmp_int_arg_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_left_name_14 = PyNumber_Int(tmp_int_arg_56);
        Py_DECREF(tmp_int_arg_56);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_right_name_14 = mod_consts[109];
        tmp_assattr_name_28 = BINARY_OPERATION_OLDDIV_OBJECT_OBJECT_INT(tmp_left_name_14, tmp_right_name_14);
        Py_DECREF(tmp_left_name_14);
        if (tmp_assattr_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_28);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_28, mod_consts[110], tmp_assattr_name_28);
        Py_DECREF(tmp_assattr_name_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
    }
    {
        PyObject *tmp_assattr_name_29;
        PyObject *tmp_called_name_50;
        PyObject *tmp_args_element_name_255;
        PyObject *tmp_args_element_name_256;
        PyObject *tmp_args_element_name_257;
        PyObject *tmp_assattr_target_29;
        tmp_called_name_50 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_50 == NULL)) {
            tmp_called_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_255 = par_f;
        CHECK_OBJECT(var_offset);
        tmp_args_element_name_256 = var_offset;
        CHECK_OBJECT(var_length);
        tmp_args_element_name_257 = var_length;
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_name_255, tmp_args_element_name_256, tmp_args_element_name_257};
            tmp_assattr_name_29 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_50, call_args);
        }

        if (tmp_assattr_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_29);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_29, mod_consts[111], tmp_assattr_name_29);
        Py_DECREF(tmp_assattr_name_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_compexpr_left_31;
        PyObject *tmp_compexpr_right_31;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_name_56;
        tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_56 == NULL)) {
            tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[111]);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_compexpr_left_31 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_compexpr_left_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_compexpr_right_31 = mod_consts[133];
        tmp_condition_result_38 = RICH_COMPARE_EQ_CBOOL_OBJECT_INT(tmp_compexpr_left_31, tmp_compexpr_right_31);
        Py_DECREF(tmp_compexpr_left_31);
        if (tmp_condition_result_38 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_called_name_51;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_258;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_args_element_name_259;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_args_element_name_260;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_args_element_name_261;
        PyObject *tmp_expression_name_61;
        int tmp_truth_name_23;
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[134]);
        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_name_58 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_58 == NULL)) {
            tmp_expression_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_name_258 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[110]);
        if (tmp_args_element_name_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_name_59 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_59 == NULL)) {
            tmp_expression_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);
            Py_DECREF(tmp_args_element_name_258);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_name_259 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[53]);
        if (tmp_args_element_name_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);
            Py_DECREF(tmp_args_element_name_258);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_60 == NULL)) {
            tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);
            Py_DECREF(tmp_args_element_name_258);
            Py_DECREF(tmp_args_element_name_259);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_name_260 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[128]);
        if (tmp_args_element_name_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);
            Py_DECREF(tmp_args_element_name_258);
            Py_DECREF(tmp_args_element_name_259);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);
            Py_DECREF(tmp_args_element_name_258);
            Py_DECREF(tmp_args_element_name_259);
            Py_DECREF(tmp_args_element_name_260);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_name_261 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[111]);
        if (tmp_args_element_name_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);
            Py_DECREF(tmp_args_element_name_258);
            Py_DECREF(tmp_args_element_name_259);
            Py_DECREF(tmp_args_element_name_260);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_name_258, tmp_args_element_name_259, tmp_args_element_name_260, tmp_args_element_name_261};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_51, call_args);
        }

        Py_DECREF(tmp_called_name_51);
        Py_DECREF(tmp_args_element_name_258);
        Py_DECREF(tmp_args_element_name_259);
        Py_DECREF(tmp_args_element_name_260);
        Py_DECREF(tmp_args_element_name_261);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_call_result_19);
        if (tmp_truth_name_23 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_19);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_39 = tmp_truth_name_23 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_19);
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_39:;
    branch_no_38:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
    if (exception_keeper_tb_15 == NULL) {
        exception_keeper_tb_15 = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_15);
    } else if (exception_keeper_lineno_15 != 0) {
        exception_keeper_tb_15 = ADD_TRACEBACK(exception_keeper_tb_15, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_keeper_lineno_15);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_15, exception_keeper_tb_15);
    PUBLISH_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_compexpr_left_32;
        PyObject *tmp_compexpr_right_32;
        tmp_compexpr_left_32 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_32 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_32, tmp_compexpr_right_32);
        assert(!(tmp_res == -1));
        tmp_condition_result_40 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_87);
        var_e = tmp_assign_source_87;
    }
    {
        PyObject *tmp_called_name_52;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_262;
        PyObject *tmp_args_element_name_263;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_str_arg_12;
        tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_name_62 == NULL)) {
            tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[17]);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_log_file);
        tmp_args_element_name_262 = par_log_file;
        tmp_left_name_15 = mod_consts[135];
        CHECK_OBJECT(var_e);
        tmp_str_arg_12 = var_e;
        tmp_right_name_15 = PyObject_Str(tmp_str_arg_12);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_263 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_15, tmp_right_name_15);
        Py_DECREF(tmp_right_name_15);
        if (tmp_args_element_name_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_name_262, tmp_args_element_name_263};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_52, call_args);
        }

        Py_DECREF(tmp_called_name_52);
        Py_DECREF(tmp_args_element_name_263);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto branch_end_40;
    branch_no_40:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 240;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_40:;
    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_37;
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_compexpr_left_33;
        PyObject *tmp_compexpr_right_33;
        PyObject *tmp_tmp_condition_result_41_object_1;
        int tmp_truth_name_24;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_33 = par_method;
        tmp_compexpr_right_33 = mod_consts[136];
        tmp_tmp_condition_result_41_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_33, tmp_compexpr_right_33);
        if (tmp_tmp_condition_result_41_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_tmp_condition_result_41_object_1);
        if (tmp_truth_name_24 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_41_object_1);

            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = tmp_truth_name_24 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_41_object_1);
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assattr_name_30;
        PyObject *tmp_int_arg_57;
        PyObject *tmp_called_instance_68;
        PyObject *tmp_args_element_name_264;
        PyObject *tmp_args_element_name_265;
        PyObject *tmp_assattr_target_30;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_68 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_264 = par_active_ransomware;
        tmp_args_element_name_265 = mod_consts[137];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_name_264, tmp_args_element_name_265};
            tmp_int_arg_57 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_68, mod_consts[4], call_args);
        }

        if (tmp_int_arg_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_30 = PyNumber_Int(tmp_int_arg_57);
        Py_DECREF(tmp_int_arg_57);
        if (tmp_assattr_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_30);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_30, mod_consts[138], tmp_assattr_name_30);
        Py_DECREF(tmp_assattr_name_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_31;
        PyObject *tmp_int_arg_58;
        PyObject *tmp_called_instance_69;
        PyObject *tmp_args_element_name_266;
        PyObject *tmp_args_element_name_267;
        PyObject *tmp_assattr_target_31;
        if (var_config == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_69 = var_config;
        CHECK_OBJECT(par_active_ransomware);
        tmp_args_element_name_266 = par_active_ransomware;
        tmp_args_element_name_267 = mod_consts[86];
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_name_266, tmp_args_element_name_267};
            tmp_int_arg_58 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_69, mod_consts[4], call_args);
        }

        if (tmp_int_arg_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_31 = PyNumber_Int(tmp_int_arg_58);
        Py_DECREF(tmp_int_arg_58);
        if (tmp_assattr_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_31);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_31, mod_consts[139], tmp_assattr_name_31);
        Py_DECREF(tmp_assattr_name_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_args_element_name_268;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_args_element_name_269;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_args_element_name_270;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_args_element_name_271;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_args_element_name_272;
        PyObject *tmp_args_element_name_273;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_upper_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_len_arg_4;
        tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_63 == NULL)) {
            tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[140]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_64 == NULL)) {
            tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_268 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[141]);
        if (tmp_args_element_name_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_65 == NULL)) {
            tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_269 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[60]);
        if (tmp_args_element_name_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_66 == NULL)) {
            tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_270 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[139]);
        if (tmp_args_element_name_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_name_67 == NULL)) {
            tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_expression_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);
            Py_DECREF(tmp_args_element_name_270);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_271 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[138]);
        if (tmp_args_element_name_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);
            Py_DECREF(tmp_args_element_name_270);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_272 = par_f;
        CHECK_OBJECT(par_f);
        tmp_slice_source_2 = par_f;
        CHECK_OBJECT(var_extension);
        tmp_len_arg_4 = var_extension;
        tmp_operand_name_2 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);
            Py_DECREF(tmp_args_element_name_270);
            Py_DECREF(tmp_args_element_name_271);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_slice_upper_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_slice_upper_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);
            Py_DECREF(tmp_args_element_name_270);
            Py_DECREF(tmp_args_element_name_271);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_273 = LOOKUP_SLICE(tmp_slice_source_2, Py_None, tmp_slice_upper_2);
        Py_DECREF(tmp_slice_upper_2);
        if (tmp_args_element_name_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);
            Py_DECREF(tmp_args_element_name_268);
            Py_DECREF(tmp_args_element_name_269);
            Py_DECREF(tmp_args_element_name_270);
            Py_DECREF(tmp_args_element_name_271);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_name_268, tmp_args_element_name_269, tmp_args_element_name_270, tmp_args_element_name_271, tmp_args_element_name_272, tmp_args_element_name_273};
            tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_53, call_args);
        }

        Py_DECREF(tmp_called_name_53);
        Py_DECREF(tmp_args_element_name_268);
        Py_DECREF(tmp_args_element_name_269);
        Py_DECREF(tmp_args_element_name_270);
        Py_DECREF(tmp_args_element_name_271);
        Py_DECREF(tmp_args_element_name_273);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_plaintext == NULL);
        var_plaintext = tmp_assign_source_88;
    }
    {
        nuitka_bool tmp_condition_result_42;
        int tmp_truth_name_25;
        CHECK_OBJECT(var_plaintext);
        tmp_truth_name_25 = CHECK_IF_TRUE(var_plaintext);
        if (tmp_truth_name_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_42 = tmp_truth_name_25 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_42:;
    goto branch_end_41;
    branch_no_41:;
    tmp_print_value = mod_consts[142];
    tmp_result = PRINT_ITEM(tmp_print_value);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 262;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if (PRINT_NEW_LINE() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 262;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_41:;
    branch_end_37:;
    branch_end_33:;
    branch_end_29:;
    branch_end_26:;
    branch_end_23:;
    branch_end_20:;
    branch_end_18:;
    branch_end_16:;
    branch_end_14:;
    branch_end_11:;
    branch_end_9:;
    branch_end_7:;
    branch_end_5:;
    branch_end_3:;
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_2124e36194eea66c1c4bb1eea3d1f2cf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2124e36194eea66c1c4bb1eea3d1f2cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2124e36194eea66c1c4bb1eea3d1f2cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2124e36194eea66c1c4bb1eea3d1f2cf,
        type_description_1,
        par_active_ransomware,
        par_f,
        par_method,
        par_log_file,
        var_config,
        var_extension,
        var_crc_1_hash_offset,
        var_crc_1_hash_length,
        var_crc_1_data_offset,
        var_crc_1_data_length,
        var_crc_1_hash,
        var_crc_1_data,
        var_retval,
        var_e,
        var_crc_2_hash_offset,
        var_crc_2_hash_length,
        var_crc_2_data_offset,
        var_crc_2_data_length,
        var_crc_2_hash,
        var_crc_2_data,
        var_crc_3_hash_offset,
        var_crc_3_hash_length,
        var_crc_3_data_offset,
        var_crc_3_data_length,
        var_crc_3_hash,
        var_crc_3_data,
        var_master_sk,
        var_decode_key_1,
        var_val,
        var_curve_public_offset,
        var_curve_public_length,
        var_aes_iv_offset,
        var_aes_iv_length,
        var_aes_data_offset,
        var_aes_data_length,
        var_curve_secret,
        var_salsa_nonce_offset,
        var_salsa_nonce_length,
        var_salsa_encd_null_bytes_offset,
        var_salsa_encd_null_bytes_length,
        var_salsa_decryption_mode_offset,
        var_salsa_decryption_mode_length,
        var_salsa_skip_size_offset,
        var_salsa_skip_size_length,
        var_salsa_cipher_update,
        var_meta_data_offset,
        var_salsa_nonce,
        var_salsa_encd_null_bytes,
        var_salsa_decryption_mode,
        var_salsa_skip_size,
        var_encrypted_data,
        var_plaintext,
        var_private_key,
        var_offset,
        var_length,
        var_n_length,
        var_e_length,
        var_d_length,
        var_p_length,
        var_q_length,
        var_dp_length,
        var_dq_length,
        var_qp_length,
        var_n,
        var_d,
        var_p,
        var_q,
        var_dp,
        var_dq,
        var_coef
    );


    // Release cached frame if used for exception.
    if (frame_2124e36194eea66c1c4bb1eea3d1f2cf == cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf);
        cache_frame_2124e36194eea66c1c4bb1eea3d1f2cf = NULL;
    }

    assertFrameObject(frame_2124e36194eea66c1c4bb1eea3d1f2cf);

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
    Py_XDECREF(var_config);
    var_config = NULL;
    CHECK_OBJECT(var_extension);
    Py_DECREF(var_extension);
    var_extension = NULL;
    Py_XDECREF(var_crc_1_hash_offset);
    var_crc_1_hash_offset = NULL;
    Py_XDECREF(var_crc_1_hash_length);
    var_crc_1_hash_length = NULL;
    Py_XDECREF(var_crc_1_data_offset);
    var_crc_1_data_offset = NULL;
    Py_XDECREF(var_crc_1_data_length);
    var_crc_1_data_length = NULL;
    Py_XDECREF(var_crc_1_hash);
    var_crc_1_hash = NULL;
    Py_XDECREF(var_crc_1_data);
    var_crc_1_data = NULL;
    Py_XDECREF(var_retval);
    var_retval = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_crc_2_hash_offset);
    var_crc_2_hash_offset = NULL;
    Py_XDECREF(var_crc_2_hash_length);
    var_crc_2_hash_length = NULL;
    Py_XDECREF(var_crc_2_data_offset);
    var_crc_2_data_offset = NULL;
    Py_XDECREF(var_crc_2_data_length);
    var_crc_2_data_length = NULL;
    Py_XDECREF(var_crc_2_hash);
    var_crc_2_hash = NULL;
    Py_XDECREF(var_crc_2_data);
    var_crc_2_data = NULL;
    Py_XDECREF(var_crc_3_hash_offset);
    var_crc_3_hash_offset = NULL;
    Py_XDECREF(var_crc_3_hash_length);
    var_crc_3_hash_length = NULL;
    Py_XDECREF(var_crc_3_data_offset);
    var_crc_3_data_offset = NULL;
    Py_XDECREF(var_crc_3_data_length);
    var_crc_3_data_length = NULL;
    Py_XDECREF(var_crc_3_hash);
    var_crc_3_hash = NULL;
    Py_XDECREF(var_crc_3_data);
    var_crc_3_data = NULL;
    Py_XDECREF(var_master_sk);
    var_master_sk = NULL;
    Py_XDECREF(var_decode_key_1);
    var_decode_key_1 = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_curve_public_offset);
    var_curve_public_offset = NULL;
    Py_XDECREF(var_curve_public_length);
    var_curve_public_length = NULL;
    Py_XDECREF(var_aes_iv_offset);
    var_aes_iv_offset = NULL;
    Py_XDECREF(var_aes_iv_length);
    var_aes_iv_length = NULL;
    Py_XDECREF(var_aes_data_offset);
    var_aes_data_offset = NULL;
    Py_XDECREF(var_aes_data_length);
    var_aes_data_length = NULL;
    Py_XDECREF(var_curve_secret);
    var_curve_secret = NULL;
    Py_XDECREF(var_salsa_nonce_offset);
    var_salsa_nonce_offset = NULL;
    Py_XDECREF(var_salsa_nonce_length);
    var_salsa_nonce_length = NULL;
    Py_XDECREF(var_salsa_encd_null_bytes_offset);
    var_salsa_encd_null_bytes_offset = NULL;
    Py_XDECREF(var_salsa_encd_null_bytes_length);
    var_salsa_encd_null_bytes_length = NULL;
    Py_XDECREF(var_salsa_decryption_mode_offset);
    var_salsa_decryption_mode_offset = NULL;
    Py_XDECREF(var_salsa_decryption_mode_length);
    var_salsa_decryption_mode_length = NULL;
    Py_XDECREF(var_salsa_skip_size_offset);
    var_salsa_skip_size_offset = NULL;
    Py_XDECREF(var_salsa_skip_size_length);
    var_salsa_skip_size_length = NULL;
    Py_XDECREF(var_salsa_cipher_update);
    var_salsa_cipher_update = NULL;
    Py_XDECREF(var_meta_data_offset);
    var_meta_data_offset = NULL;
    Py_XDECREF(var_salsa_nonce);
    var_salsa_nonce = NULL;
    Py_XDECREF(var_salsa_encd_null_bytes);
    var_salsa_encd_null_bytes = NULL;
    Py_XDECREF(var_salsa_decryption_mode);
    var_salsa_decryption_mode = NULL;
    Py_XDECREF(var_salsa_skip_size);
    var_salsa_skip_size = NULL;
    Py_XDECREF(var_encrypted_data);
    var_encrypted_data = NULL;
    Py_XDECREF(var_plaintext);
    var_plaintext = NULL;
    Py_XDECREF(var_private_key);
    var_private_key = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_n_length);
    var_n_length = NULL;
    Py_XDECREF(var_e_length);
    var_e_length = NULL;
    Py_XDECREF(var_d_length);
    var_d_length = NULL;
    Py_XDECREF(var_p_length);
    var_p_length = NULL;
    Py_XDECREF(var_q_length);
    var_q_length = NULL;
    Py_XDECREF(var_dp_length);
    var_dp_length = NULL;
    Py_XDECREF(var_dq_length);
    var_dq_length = NULL;
    Py_XDECREF(var_qp_length);
    var_qp_length = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_dp);
    var_dp = NULL;
    Py_XDECREF(var_dq);
    var_dq = NULL;
    Py_XDECREF(var_coef);
    var_coef = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_config);
    var_config = NULL;
    Py_XDECREF(var_extension);
    var_extension = NULL;
    Py_XDECREF(var_crc_1_hash_offset);
    var_crc_1_hash_offset = NULL;
    Py_XDECREF(var_crc_1_hash_length);
    var_crc_1_hash_length = NULL;
    Py_XDECREF(var_crc_1_data_offset);
    var_crc_1_data_offset = NULL;
    Py_XDECREF(var_crc_1_data_length);
    var_crc_1_data_length = NULL;
    Py_XDECREF(var_crc_1_hash);
    var_crc_1_hash = NULL;
    Py_XDECREF(var_crc_1_data);
    var_crc_1_data = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_crc_2_hash_offset);
    var_crc_2_hash_offset = NULL;
    Py_XDECREF(var_crc_2_hash_length);
    var_crc_2_hash_length = NULL;
    Py_XDECREF(var_crc_2_data_offset);
    var_crc_2_data_offset = NULL;
    Py_XDECREF(var_crc_2_data_length);
    var_crc_2_data_length = NULL;
    Py_XDECREF(var_crc_2_hash);
    var_crc_2_hash = NULL;
    Py_XDECREF(var_crc_2_data);
    var_crc_2_data = NULL;
    Py_XDECREF(var_crc_3_hash_offset);
    var_crc_3_hash_offset = NULL;
    Py_XDECREF(var_crc_3_hash_length);
    var_crc_3_hash_length = NULL;
    Py_XDECREF(var_crc_3_data_offset);
    var_crc_3_data_offset = NULL;
    Py_XDECREF(var_crc_3_data_length);
    var_crc_3_data_length = NULL;
    Py_XDECREF(var_crc_3_hash);
    var_crc_3_hash = NULL;
    Py_XDECREF(var_crc_3_data);
    var_crc_3_data = NULL;
    Py_XDECREF(var_master_sk);
    var_master_sk = NULL;
    Py_XDECREF(var_decode_key_1);
    var_decode_key_1 = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_curve_public_offset);
    var_curve_public_offset = NULL;
    Py_XDECREF(var_curve_public_length);
    var_curve_public_length = NULL;
    Py_XDECREF(var_aes_iv_offset);
    var_aes_iv_offset = NULL;
    Py_XDECREF(var_aes_iv_length);
    var_aes_iv_length = NULL;
    Py_XDECREF(var_aes_data_offset);
    var_aes_data_offset = NULL;
    Py_XDECREF(var_aes_data_length);
    var_aes_data_length = NULL;
    Py_XDECREF(var_curve_secret);
    var_curve_secret = NULL;
    Py_XDECREF(var_salsa_nonce_offset);
    var_salsa_nonce_offset = NULL;
    Py_XDECREF(var_salsa_nonce_length);
    var_salsa_nonce_length = NULL;
    Py_XDECREF(var_salsa_encd_null_bytes_offset);
    var_salsa_encd_null_bytes_offset = NULL;
    Py_XDECREF(var_salsa_encd_null_bytes_length);
    var_salsa_encd_null_bytes_length = NULL;
    Py_XDECREF(var_salsa_decryption_mode_offset);
    var_salsa_decryption_mode_offset = NULL;
    Py_XDECREF(var_salsa_decryption_mode_length);
    var_salsa_decryption_mode_length = NULL;
    Py_XDECREF(var_salsa_skip_size_offset);
    var_salsa_skip_size_offset = NULL;
    Py_XDECREF(var_salsa_skip_size_length);
    var_salsa_skip_size_length = NULL;
    Py_XDECREF(var_salsa_cipher_update);
    var_salsa_cipher_update = NULL;
    Py_XDECREF(var_meta_data_offset);
    var_meta_data_offset = NULL;
    Py_XDECREF(var_salsa_nonce);
    var_salsa_nonce = NULL;
    Py_XDECREF(var_salsa_encd_null_bytes);
    var_salsa_encd_null_bytes = NULL;
    Py_XDECREF(var_salsa_decryption_mode);
    var_salsa_decryption_mode = NULL;
    Py_XDECREF(var_salsa_skip_size);
    var_salsa_skip_size = NULL;
    Py_XDECREF(var_encrypted_data);
    var_encrypted_data = NULL;
    Py_XDECREF(var_plaintext);
    var_plaintext = NULL;
    Py_XDECREF(var_private_key);
    var_private_key = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_n_length);
    var_n_length = NULL;
    Py_XDECREF(var_e_length);
    var_e_length = NULL;
    Py_XDECREF(var_d_length);
    var_d_length = NULL;
    Py_XDECREF(var_p_length);
    var_p_length = NULL;
    Py_XDECREF(var_q_length);
    var_q_length = NULL;
    Py_XDECREF(var_dp_length);
    var_dp_length = NULL;
    Py_XDECREF(var_dq_length);
    var_dq_length = NULL;
    Py_XDECREF(var_qp_length);
    var_qp_length = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_dp);
    var_dp = NULL;
    Py_XDECREF(var_dq);
    var_dq = NULL;
    Py_XDECREF(var_coef);
    var_coef = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_active_ransomware);
    Py_DECREF(par_active_ransomware);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_log_file);
    Py_DECREF(par_log_file);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_active_ransomware);
    Py_DECREF(par_active_ransomware);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_log_file);
    Py_DECREF(par_log_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_2_get_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_offset = python_pars[1];
    PyObject *par_length = python_pars[2];
    PyObject *var_f = NULL;
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_e5e964790cc776c943b515a642497a78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_print_value;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e5e964790cc776c943b515a642497a78 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e5e964790cc776c943b515a642497a78)) {
        Py_XDECREF(cache_frame_e5e964790cc776c943b515a642497a78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5e964790cc776c943b515a642497a78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5e964790cc776c943b515a642497a78 = MAKE_FUNCTION_FRAME(codeobj_e5e964790cc776c943b515a642497a78, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e5e964790cc776c943b515a642497a78->m_type_description == NULL);
    frame_e5e964790cc776c943b515a642497a78 = cache_frame_e5e964790cc776c943b515a642497a78;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e5e964790cc776c943b515a642497a78);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e5e964790cc776c943b515a642497a78) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_open_filename_1 = par_path;
        tmp_open_mode_1 = mod_consts[143];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_f);
        tmp_called_instance_1 = var_f;
        CHECK_OBJECT(par_offset);
        tmp_args_element_name_1 = par_offset;
        tmp_args_element_name_2 = mod_consts[145];
        frame_e5e964790cc776c943b515a642497a78->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, mod_consts[144], call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_f;
        CHECK_OBJECT(par_length);
        tmp_args_element_name_3 = par_length;
        frame_e5e964790cc776c943b515a642497a78->m_frame.f_lineno = 270;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[1], tmp_args_element_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;

            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = var_f;
        frame_e5e964790cc776c943b515a642497a78->m_frame.f_lineno = 271;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[147]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    CHECK_OBJECT(var_data);
    tmp_return_value = var_data;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION(frame_e5e964790cc776c943b515a642497a78);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e5e964790cc776c943b515a642497a78, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e5e964790cc776c943b515a642497a78, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_IOError;
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
    tmp_print_value = mod_consts[148];
    tmp_result = PRINT_ITEM(tmp_print_value);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if (PRINT_NEW_LINE() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 267;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e5e964790cc776c943b515a642497a78->m_frame) frame_e5e964790cc776c943b515a642497a78->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_e5e964790cc776c943b515a642497a78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_e5e964790cc776c943b515a642497a78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_e5e964790cc776c943b515a642497a78);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5e964790cc776c943b515a642497a78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5e964790cc776c943b515a642497a78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5e964790cc776c943b515a642497a78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5e964790cc776c943b515a642497a78,
        type_description_1,
        par_path,
        par_offset,
        par_length,
        var_f,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_e5e964790cc776c943b515a642497a78 == cache_frame_e5e964790cc776c943b515a642497a78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e5e964790cc776c943b515a642497a78);
        cache_frame_e5e964790cc776c943b515a642497a78 = NULL;
    }

    assertFrameObject(frame_e5e964790cc776c943b515a642497a78);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_3_get_file_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_offset = python_pars[1];
    PyObject *var_f = NULL;
    PyObject *var_content = NULL;
    struct Nuitka_FrameObject *frame_dec99edfbadcd7e1474720b541f2a452;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_print_value;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dec99edfbadcd7e1474720b541f2a452 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dec99edfbadcd7e1474720b541f2a452)) {
        Py_XDECREF(cache_frame_dec99edfbadcd7e1474720b541f2a452);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dec99edfbadcd7e1474720b541f2a452 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dec99edfbadcd7e1474720b541f2a452 = MAKE_FUNCTION_FRAME(codeobj_dec99edfbadcd7e1474720b541f2a452, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dec99edfbadcd7e1474720b541f2a452->m_type_description == NULL);
    frame_dec99edfbadcd7e1474720b541f2a452 = cache_frame_dec99edfbadcd7e1474720b541f2a452;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dec99edfbadcd7e1474720b541f2a452);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dec99edfbadcd7e1474720b541f2a452) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_open_filename_1 = par_path;
        tmp_open_mode_1 = mod_consts[143];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_f);
        tmp_called_instance_1 = var_f;
        frame_dec99edfbadcd7e1474720b541f2a452->m_frame.f_lineno = 281;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_content == NULL);
        var_content = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_content);
        tmp_slice_source_1 = var_content;
        CHECK_OBJECT(var_content);
        tmp_len_arg_1 = var_content;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_offset);
        tmp_right_name_1 = par_offset;
        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = LOOKUP_SLICE(tmp_slice_source_1, Py_None, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_content;
            assert(old != NULL);
            var_content = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(var_content);
    tmp_return_value = var_content;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION(frame_dec99edfbadcd7e1474720b541f2a452);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_dec99edfbadcd7e1474720b541f2a452, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_dec99edfbadcd7e1474720b541f2a452, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_IOError;
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
    tmp_print_value = mod_consts[148];
    tmp_result = PRINT_ITEM(tmp_print_value);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 285;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if (PRINT_NEW_LINE() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 285;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 279;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_dec99edfbadcd7e1474720b541f2a452->m_frame) frame_dec99edfbadcd7e1474720b541f2a452->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_dec99edfbadcd7e1474720b541f2a452);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_dec99edfbadcd7e1474720b541f2a452);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_dec99edfbadcd7e1474720b541f2a452);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dec99edfbadcd7e1474720b541f2a452, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dec99edfbadcd7e1474720b541f2a452->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dec99edfbadcd7e1474720b541f2a452, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dec99edfbadcd7e1474720b541f2a452,
        type_description_1,
        par_path,
        par_offset,
        var_f,
        var_content
    );


    // Release cached frame if used for exception.
    if (frame_dec99edfbadcd7e1474720b541f2a452 == cache_frame_dec99edfbadcd7e1474720b541f2a452) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dec99edfbadcd7e1474720b541f2a452);
        cache_frame_dec99edfbadcd7e1474720b541f2a452 = NULL;
    }

    assertFrameObject(frame_dec99edfbadcd7e1474720b541f2a452);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_content);
    var_content = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_4_validate_crc32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hash_of_crc32 = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_calculated_crc32 = NULL;
    PyObject *var_hexlist = NULL;
    PyObject *var_crc32val = NULL;
    struct Nuitka_FrameObject *frame_7f17a7f47b57f02809f1498cfed6672e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7f17a7f47b57f02809f1498cfed6672e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7f17a7f47b57f02809f1498cfed6672e)) {
        Py_XDECREF(cache_frame_7f17a7f47b57f02809f1498cfed6672e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f17a7f47b57f02809f1498cfed6672e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f17a7f47b57f02809f1498cfed6672e = MAKE_FUNCTION_FRAME(codeobj_7f17a7f47b57f02809f1498cfed6672e, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f17a7f47b57f02809f1498cfed6672e->m_type_description == NULL);
    frame_7f17a7f47b57f02809f1498cfed6672e = cache_frame_7f17a7f47b57f02809f1498cfed6672e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f17a7f47b57f02809f1498cfed6672e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f17a7f47b57f02809f1498cfed6672e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[149]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hash_of_crc32);
        tmp_args_element_name_1 = par_hash_of_crc32;
        frame_7f17a7f47b57f02809f1498cfed6672e->m_frame.f_lineno = 290;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_hash_of_crc32;
            assert(old != NULL);
            par_hash_of_crc32 = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[149]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_2 = par_data;
        frame_7f17a7f47b57f02809f1498cfed6672e->m_frame.f_lineno = 291;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_hex_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[150]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[151]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[152]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_4 = par_data;
        frame_7f17a7f47b57f02809f1498cfed6672e->m_frame.f_lineno = 292;
        tmp_args_element_name_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[153], tmp_args_element_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_7f17a7f47b57f02809f1498cfed6672e->m_frame.f_lineno = 292;
        tmp_left_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[154];
        tmp_hex_arg_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_hex_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BUILTIN_HEX(tmp_hex_arg_1);
        Py_DECREF(tmp_hex_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_calculated_crc32 == NULL);
        var_calculated_crc32 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_hash_of_crc32);
        tmp_list_arg_1 = par_hash_of_crc32;
        tmp_assign_source_4 = PySequence_List(tmp_list_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hexlist == NULL);
        var_hexlist = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[155]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hexlist);
        tmp_args_element_name_5 = var_hexlist;
        frame_7f17a7f47b57f02809f1498cfed6672e->m_frame.f_lineno = 294;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_crc32val == NULL);
        var_crc32val = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_crc32val);
        tmp_compexpr_left_1 = var_crc32val;
        CHECK_OBJECT(var_calculated_crc32);
        tmp_compexpr_right_1 = var_calculated_crc32;
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        Py_ssize_t tmp_sliceslicedel_index_lower_2;
        Py_ssize_t tmp_slice_index_upper_2;
        PyObject *tmp_slice_source_2;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = 2;
        CHECK_OBJECT(var_calculated_crc32);
        tmp_slice_source_1 = var_calculated_crc32;
        tmp_left_name_3 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[156];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_STR(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_sliceslicedel_index_lower_2 = 2;
        tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
        CHECK_OBJECT(var_calculated_crc32);
        tmp_slice_source_2 = var_calculated_crc32;
        tmp_right_name_3 = LOOKUP_INDEX_SLICE(tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 297;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_calculated_crc32;
            assert(old != NULL);
            var_calculated_crc32 = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_crc32val);
        tmp_compexpr_left_2 = var_crc32val;
        CHECK_OBJECT(var_calculated_crc32);
        tmp_compexpr_right_2 = var_calculated_crc32;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f17a7f47b57f02809f1498cfed6672e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f17a7f47b57f02809f1498cfed6672e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f17a7f47b57f02809f1498cfed6672e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f17a7f47b57f02809f1498cfed6672e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f17a7f47b57f02809f1498cfed6672e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f17a7f47b57f02809f1498cfed6672e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f17a7f47b57f02809f1498cfed6672e,
        type_description_1,
        par_hash_of_crc32,
        par_data,
        var_calculated_crc32,
        var_hexlist,
        var_crc32val
    );


    // Release cached frame if used for exception.
    if (frame_7f17a7f47b57f02809f1498cfed6672e == cache_frame_7f17a7f47b57f02809f1498cfed6672e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f17a7f47b57f02809f1498cfed6672e);
        cache_frame_7f17a7f47b57f02809f1498cfed6672e = NULL;
    }

    assertFrameObject(frame_7f17a7f47b57f02809f1498cfed6672e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_hash_of_crc32);
    Py_DECREF(par_hash_of_crc32);
    par_hash_of_crc32 = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(var_calculated_crc32);
    Py_DECREF(var_calculated_crc32);
    var_calculated_crc32 = NULL;
    CHECK_OBJECT(var_hexlist);
    Py_DECREF(var_hexlist);
    var_hexlist = NULL;
    CHECK_OBJECT(var_crc32val);
    Py_DECREF(var_crc32val);
    var_crc32val = NULL;
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

    CHECK_OBJECT(par_hash_of_crc32);
    Py_DECREF(par_hash_of_crc32);
    par_hash_of_crc32 = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var_calculated_crc32);
    var_calculated_crc32 = NULL;
    Py_XDECREF(var_hexlist);
    var_hexlist = NULL;
    Py_XDECREF(var_crc32val);
    var_crc32val = NULL;
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


static PyObject *impl_Helpers$$$function_5_swappositions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hexlist = python_pars[0];
    PyObject *var_retval = NULL;
    struct Nuitka_FrameObject *frame_a26ec40274a4947637db7079f4fa1cbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a26ec40274a4947637db7079f4fa1cbe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a26ec40274a4947637db7079f4fa1cbe)) {
        Py_XDECREF(cache_frame_a26ec40274a4947637db7079f4fa1cbe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a26ec40274a4947637db7079f4fa1cbe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a26ec40274a4947637db7079f4fa1cbe = MAKE_FUNCTION_FRAME(codeobj_a26ec40274a4947637db7079f4fa1cbe, module_Helpers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a26ec40274a4947637db7079f4fa1cbe->m_type_description == NULL);
    frame_a26ec40274a4947637db7079f4fa1cbe = cache_frame_a26ec40274a4947637db7079f4fa1cbe;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a26ec40274a4947637db7079f4fa1cbe);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a26ec40274a4947637db7079f4fa1cbe) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        tmp_expression_name_1 = mod_consts[157];
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[158]);
        assert(!(tmp_called_name_1 == NULL));
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[159]);
        assert(tmp_called_name_2 != NULL);
        tmp_expression_name_2 = (PyObject *)&PyString_Type;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[160]);
        assert(!(tmp_args_element_name_2 == NULL));
        CHECK_OBJECT(par_hexlist);
        tmp_expression_name_3 = par_hexlist;
        tmp_subscript_name_1 = mod_consts[161];
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hexlist);
        tmp_expression_name_4 = par_hexlist;
        tmp_subscript_name_2 = mod_consts[162];
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a26ec40274a4947637db7079f4fa1cbe->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a26ec40274a4947637db7079f4fa1cbe->m_frame.f_lineno = 304;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = mod_consts[163];
        CHECK_OBJECT(var_retval);
        tmp_right_name_1 = var_retval;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[164];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_STR(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a26ec40274a4947637db7079f4fa1cbe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a26ec40274a4947637db7079f4fa1cbe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a26ec40274a4947637db7079f4fa1cbe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a26ec40274a4947637db7079f4fa1cbe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a26ec40274a4947637db7079f4fa1cbe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a26ec40274a4947637db7079f4fa1cbe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a26ec40274a4947637db7079f4fa1cbe,
        type_description_1,
        par_hexlist,
        var_retval
    );


    // Release cached frame if used for exception.
    if (frame_a26ec40274a4947637db7079f4fa1cbe == cache_frame_a26ec40274a4947637db7079f4fa1cbe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a26ec40274a4947637db7079f4fa1cbe);
        cache_frame_a26ec40274a4947637db7079f4fa1cbe = NULL;
    }

    assertFrameObject(frame_a26ec40274a4947637db7079f4fa1cbe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_retval);
    Py_DECREF(var_retval);
    var_retval = NULL;
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

    Py_XDECREF(var_retval);
    var_retval = NULL;
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
    CHECK_OBJECT(par_hexlist);
    Py_DECREF(par_hexlist);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hexlist);
    Py_DECREF(par_hexlist);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_6_cut_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_offset_start = python_pars[0];
    PyObject *par_offset_end = python_pars[1];
    PyObject *par_data = python_pars[2];
    struct Nuitka_FrameObject *frame_42b07851c4af7b7f287ffca9baf9a804;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42b07851c4af7b7f287ffca9baf9a804 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42b07851c4af7b7f287ffca9baf9a804)) {
        Py_XDECREF(cache_frame_42b07851c4af7b7f287ffca9baf9a804);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42b07851c4af7b7f287ffca9baf9a804 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42b07851c4af7b7f287ffca9baf9a804 = MAKE_FUNCTION_FRAME(codeobj_42b07851c4af7b7f287ffca9baf9a804, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_42b07851c4af7b7f287ffca9baf9a804->m_type_description == NULL);
    frame_42b07851c4af7b7f287ffca9baf9a804 = cache_frame_42b07851c4af7b7f287ffca9baf9a804;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_42b07851c4af7b7f287ffca9baf9a804);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_42b07851c4af7b7f287ffca9baf9a804) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        CHECK_OBJECT(par_data);
        tmp_slice_source_1 = par_data;
        CHECK_OBJECT(par_offset_start);
        tmp_slice_lower_1 = par_offset_start;
        CHECK_OBJECT(par_offset_end);
        tmp_slice_upper_1 = par_offset_end;
        tmp_return_value = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_42b07851c4af7b7f287ffca9baf9a804);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_42b07851c4af7b7f287ffca9baf9a804);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_42b07851c4af7b7f287ffca9baf9a804);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_42b07851c4af7b7f287ffca9baf9a804, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42b07851c4af7b7f287ffca9baf9a804->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42b07851c4af7b7f287ffca9baf9a804, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42b07851c4af7b7f287ffca9baf9a804,
        type_description_1,
        par_offset_start,
        par_offset_end,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_42b07851c4af7b7f287ffca9baf9a804 == cache_frame_42b07851c4af7b7f287ffca9baf9a804) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_42b07851c4af7b7f287ffca9baf9a804);
        cache_frame_42b07851c4af7b7f287ffca9baf9a804 = NULL;
    }

    assertFrameObject(frame_42b07851c4af7b7f287ffca9baf9a804);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_offset_start);
    Py_DECREF(par_offset_start);
    CHECK_OBJECT(par_offset_end);
    Py_DECREF(par_offset_end);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_offset_start);
    Py_DECREF(par_offset_start);
    CHECK_OBJECT(par_offset_end);
    Py_DECREF(par_offset_end);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_7_write_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_c0621cbb967f59e147cbf0e6659a4e3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_print_value;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c0621cbb967f59e147cbf0e6659a4e3f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c0621cbb967f59e147cbf0e6659a4e3f)) {
        Py_XDECREF(cache_frame_c0621cbb967f59e147cbf0e6659a4e3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0621cbb967f59e147cbf0e6659a4e3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0621cbb967f59e147cbf0e6659a4e3f = MAKE_FUNCTION_FRAME(codeobj_c0621cbb967f59e147cbf0e6659a4e3f, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c0621cbb967f59e147cbf0e6659a4e3f->m_type_description == NULL);
    frame_c0621cbb967f59e147cbf0e6659a4e3f = cache_frame_c0621cbb967f59e147cbf0e6659a4e3f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c0621cbb967f59e147cbf0e6659a4e3f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c0621cbb967f59e147cbf0e6659a4e3f) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_open_filename_1 = par_path;
        tmp_open_mode_1 = mod_consts[165];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_f);
        tmp_called_instance_1 = var_f;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_c0621cbb967f59e147cbf0e6659a4e3f->m_frame.f_lineno = 315;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[166], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;

            exception_lineno = 316;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_f;
        frame_c0621cbb967f59e147cbf0e6659a4e3f->m_frame.f_lineno = 316;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[147]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION(frame_c0621cbb967f59e147cbf0e6659a4e3f);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c0621cbb967f59e147cbf0e6659a4e3f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c0621cbb967f59e147cbf0e6659a4e3f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_IOError;
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
    tmp_print_value = mod_consts[148];
    tmp_result = PRINT_ITEM(tmp_print_value);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 319;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if (PRINT_NEW_LINE() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 319;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 313;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c0621cbb967f59e147cbf0e6659a4e3f->m_frame) frame_c0621cbb967f59e147cbf0e6659a4e3f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_c0621cbb967f59e147cbf0e6659a4e3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_c0621cbb967f59e147cbf0e6659a4e3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_c0621cbb967f59e147cbf0e6659a4e3f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0621cbb967f59e147cbf0e6659a4e3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0621cbb967f59e147cbf0e6659a4e3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0621cbb967f59e147cbf0e6659a4e3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0621cbb967f59e147cbf0e6659a4e3f,
        type_description_1,
        par_path,
        par_data,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_c0621cbb967f59e147cbf0e6659a4e3f == cache_frame_c0621cbb967f59e147cbf0e6659a4e3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c0621cbb967f59e147cbf0e6659a4e3f);
        cache_frame_c0621cbb967f59e147cbf0e6659a4e3f = NULL;
    }

    assertFrameObject(frame_c0621cbb967f59e147cbf0e6659a4e3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_8_create_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *par_e = python_pars[3];
    PyObject *par_d = python_pars[4];
    PyObject *par_p = python_pars[5];
    PyObject *par_q = python_pars[6];
    PyObject *par_coef = python_pars[7];
    PyObject *var_params = NULL;
    PyObject *var_key = NULL;
    PyObject *var_private_key = NULL;
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_c06a287d3c2f66d21eae221461203e8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_print_value;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c06a287d3c2f66d21eae221461203e8b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c06a287d3c2f66d21eae221461203e8b)) {
        Py_XDECREF(cache_frame_c06a287d3c2f66d21eae221461203e8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c06a287d3c2f66d21eae221461203e8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c06a287d3c2f66d21eae221461203e8b = MAKE_FUNCTION_FRAME(codeobj_c06a287d3c2f66d21eae221461203e8b, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c06a287d3c2f66d21eae221461203e8b->m_type_description == NULL);
    frame_c06a287d3c2f66d21eae221461203e8b = cache_frame_c06a287d3c2f66d21eae221461203e8b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c06a287d3c2f66d21eae221461203e8b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c06a287d3c2f66d21eae221461203e8b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_n);
        tmp_tuple_element_1 = par_n;
        tmp_assign_source_1 = PyTuple_New(6);
        {
            PyObject *tmp_long_arg_1;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_e);
            tmp_long_arg_1 = par_e;
            tmp_tuple_element_1 = PyNumber_Long(tmp_long_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_d);
            tmp_tuple_element_1 = par_d;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_p);
            tmp_tuple_element_1 = par_p;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_q);
            tmp_tuple_element_1 = par_q;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_coef);
            tmp_tuple_element_1 = par_coef;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[167]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[168]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_params);
        tmp_tuple_element_2 = var_params;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[169]);
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 325;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT(var_key);
        tmp_expression_name_2 = var_key;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[170]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = PyDict_Copy(mod_consts[171]);
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 326;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_private_key == NULL);
        var_private_key = tmp_assign_source_3;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[172]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[12]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_name_1 = par_path;
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 328;
        tmp_operand_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[173], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[172]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_name_2 = par_path;
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 329;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[174], tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_left_name_1 = par_path;
        CHECK_OBJECT(par_name);
        tmp_right_name_1 = par_name;
        tmp_open_filename_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_open_mode_1 = mod_consts[165];
        tmp_assign_source_4 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_f);
        tmp_called_instance_3 = var_f;
        CHECK_OBJECT(var_private_key);
        tmp_args_element_name_3 = var_private_key;
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 331;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[166], tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;

            exception_lineno = 332;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = var_f;
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 332;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[147]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_path);
        tmp_left_name_2 = par_path;
        CHECK_OBJECT(par_name);
        tmp_right_name_2 = par_name;
        tmp_assattr_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[29]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[175], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_c06a287d3c2f66d21eae221461203e8b);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c06a287d3c2f66d21eae221461203e8b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c06a287d3c2f66d21eae221461203e8b, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_IOError;
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
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = par_e;
            assert(old != NULL);
            par_e = tmp_assign_source_5;
            Py_INCREF(par_e);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_str_arg_1;
        tmp_left_name_3 = mod_consts[176];
        CHECK_OBJECT(par_e);
        tmp_str_arg_1 = par_e;
        tmp_right_name_3 = PyObject_Str(tmp_str_arg_1);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_print_value = BINARY_OPERATION_ADD_OBJECT_STR_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_print_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = PRINT_ITEM(tmp_print_value);
        Py_DECREF(tmp_print_value);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (PRINT_NEW_LINE() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 335;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 327;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c06a287d3c2f66d21eae221461203e8b->m_frame) frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[177]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[178]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_private_key);
        tmp_tuple_element_3 = var_private_key;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
        tmp_dict_value_1 = Py_None;
        tmp_dict_key_1 = mod_consts[179];
        tmp_kw_name_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_called_name_4;
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[180]);

            if (unlikely(tmp_called_name_4 == NULL)) {
                tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[180]);
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_1;
            }
            frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 337;
            tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "oooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = mod_consts[181];
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_c06a287d3c2f66d21eae221461203e8b->m_frame.f_lineno = 337;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_c06a287d3c2f66d21eae221461203e8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_c06a287d3c2f66d21eae221461203e8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_c06a287d3c2f66d21eae221461203e8b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c06a287d3c2f66d21eae221461203e8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c06a287d3c2f66d21eae221461203e8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c06a287d3c2f66d21eae221461203e8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c06a287d3c2f66d21eae221461203e8b,
        type_description_1,
        par_path,
        par_name,
        par_n,
        par_e,
        par_d,
        par_p,
        par_q,
        par_coef,
        var_params,
        var_key,
        var_private_key,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_c06a287d3c2f66d21eae221461203e8b == cache_frame_c06a287d3c2f66d21eae221461203e8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c06a287d3c2f66d21eae221461203e8b);
        cache_frame_c06a287d3c2f66d21eae221461203e8b = NULL;
    }

    assertFrameObject(frame_c06a287d3c2f66d21eae221461203e8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    par_e = NULL;
    CHECK_OBJECT(var_params);
    Py_DECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    CHECK_OBJECT(var_private_key);
    Py_DECREF(var_private_key);
    var_private_key = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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

    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    par_e = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_private_key);
    var_private_key = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    CHECK_OBJECT(par_coef);
    Py_DECREF(par_coef);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    CHECK_OBJECT(par_coef);
    Py_DECREF(par_coef);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Helpers$$$function_9_get_substring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hex_string = python_pars[0];
    PyObject *par_start = python_pars[1];
    PyObject *par_end = python_pars[2];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_69be8312ed1e64e977ebfbb8e8c612e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69be8312ed1e64e977ebfbb8e8c612e2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_69be8312ed1e64e977ebfbb8e8c612e2)) {
        Py_XDECREF(cache_frame_69be8312ed1e64e977ebfbb8e8c612e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69be8312ed1e64e977ebfbb8e8c612e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69be8312ed1e64e977ebfbb8e8c612e2 = MAKE_FUNCTION_FRAME(codeobj_69be8312ed1e64e977ebfbb8e8c612e2, module_Helpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_69be8312ed1e64e977ebfbb8e8c612e2->m_type_description == NULL);
    frame_69be8312ed1e64e977ebfbb8e8c612e2 = cache_frame_69be8312ed1e64e977ebfbb8e8c612e2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_69be8312ed1e64e977ebfbb8e8c612e2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_69be8312ed1e64e977ebfbb8e8c612e2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_name_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_base_name_1;
        CHECK_OBJECT(par_hex_string);
        tmp_slice_source_1 = par_hex_string;
        CHECK_OBJECT(par_start);
        tmp_slice_lower_1 = par_start;
        CHECK_OBJECT(par_end);
        tmp_slice_upper_1 = par_end;
        tmp_value_name_1 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_base_name_1 = mod_consts[182];
        tmp_assign_source_1 = BUILTIN_INT2(tmp_value_name_1, tmp_base_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69be8312ed1e64e977ebfbb8e8c612e2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69be8312ed1e64e977ebfbb8e8c612e2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69be8312ed1e64e977ebfbb8e8c612e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69be8312ed1e64e977ebfbb8e8c612e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69be8312ed1e64e977ebfbb8e8c612e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69be8312ed1e64e977ebfbb8e8c612e2,
        type_description_1,
        par_hex_string,
        par_start,
        par_end,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_69be8312ed1e64e977ebfbb8e8c612e2 == cache_frame_69be8312ed1e64e977ebfbb8e8c612e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_69be8312ed1e64e977ebfbb8e8c612e2);
        cache_frame_69be8312ed1e64e977ebfbb8e8c612e2 = NULL;
    }

    assertFrameObject(frame_69be8312ed1e64e977ebfbb8e8c612e2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_x);
    tmp_return_value = var_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
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
    CHECK_OBJECT(par_hex_string);
    Py_DECREF(par_hex_string);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hex_string);
    Py_DECREF(par_hex_string);
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_1_determine_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_1_determine_method,
        mod_consts[199],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2124e36194eea66c1c4bb1eea3d1f2cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_2_get_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_2_get_data,
        mod_consts[11],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e5e964790cc776c943b515a642497a78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_3_get_file_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_3_get_file_data,
        mod_consts[87],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dec99edfbadcd7e1474720b541f2a452,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_4_validate_crc32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_4_validate_crc32,
        mod_consts[15],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7f17a7f47b57f02809f1498cfed6672e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_5_swappositions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_5_swappositions,
        mod_consts[155],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a26ec40274a4947637db7079f4fa1cbe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_6_cut_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_6_cut_data,
        mod_consts[70],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_42b07851c4af7b7f287ffca9baf9a804,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_7_write_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_7_write_data,
        mod_consts[89],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c0621cbb967f59e147cbf0e6659a4e3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_8_create_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_8_create_private_key,
        mod_consts[100],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c06a287d3c2f66d21eae221461203e8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Helpers$$$function_9_get_substring() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Helpers$$$function_9_get_substring,
        mod_consts[125],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_69be8312ed1e64e977ebfbb8e8c612e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Helpers,
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

function_impl_code functable_Helpers[] = {
    impl_Helpers$$$function_1_determine_method,
    impl_Helpers$$$function_2_get_data,
    impl_Helpers$$$function_3_get_file_data,
    impl_Helpers$$$function_4_validate_crc32,
    impl_Helpers$$$function_5_swappositions,
    impl_Helpers$$$function_6_cut_data,
    impl_Helpers$$$function_7_write_data,
    impl_Helpers$$$function_8_create_private_key,
    impl_Helpers$$$function_9_get_substring,
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

    function_impl_code *current = functable_Helpers;
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

    if (offset > sizeof(functable_Helpers) || offset < 0) {
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
        functable_Helpers[offset],
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
        module_Helpers,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "Helpers";

// Internal entry point for module code.
PyObject *modulecode_Helpers(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_Helpers = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("Helpers: Skipping module init, already done.\n");
#endif

        return module_Helpers;
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
    PRINT_STRING("Helpers: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Helpers: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Helpers: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initHelpers\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_Helpers = MODULE_DICT(module_Helpers);

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
        moduledict_Helpers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Helpers);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Helpers);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0146c735c400b358bb00e7fb606bcf7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0146c735c400b358bb00e7fb606bcf7a = MAKE_MODULE_FRAME(codeobj_0146c735c400b358bb00e7fb606bcf7a, module_Helpers);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0146c735c400b358bb00e7fb606bcf7a);
    assert(Py_REFCNT(frame_0146c735c400b358bb00e7fb606bcf7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = mod_consts[0];
        tmp_globals_name_1 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 1;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = mod_consts[152];
        tmp_globals_name_2 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = mod_consts[150];
        tmp_globals_name_3 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = mod_consts[34];
        tmp_globals_name_4 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE4(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = mod_consts[172];
        tmp_globals_name_5 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE4(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = mod_consts[29];
        tmp_globals_name_6 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE4(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        tmp_name_name_7 = mod_consts[186];
        tmp_globals_name_7 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[187];
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[188]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        tmp_name_name_8 = mod_consts[189];
        tmp_globals_name_8 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[190];
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE4(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[180]);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        tmp_name_name_9 = mod_consts[191];
        tmp_globals_name_9 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[192];
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 9;
        tmp_import_name_from_3 = IMPORT_MODULE4(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[177]);
        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        tmp_name_name_10 = mod_consts[193];
        tmp_globals_name_10 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[194];
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE4(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[195]);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        tmp_name_name_11 = mod_consts[152];
        tmp_globals_name_11 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[196];
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 11;
        tmp_import_name_from_5 = IMPORT_MODULE4(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11);
        assert(!(tmp_import_name_from_5 == NULL));
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[149]);
        Py_DECREF(tmp_import_name_from_5);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        tmp_name_name_12 = mod_consts[197];
        tmp_globals_name_12 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[198];
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 12;
        tmp_import_name_from_6 = IMPORT_MODULE4(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[167]);
        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        tmp_name_name_13 = mod_consts[42];
        tmp_globals_name_13 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 13;
        tmp_assign_source_15 = IMPORT_MODULE4(tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        tmp_name_name_14 = mod_consts[16];
        tmp_globals_name_14 = (PyObject *)moduledict_Helpers;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = Py_None;
        frame_0146c735c400b358bb00e7fb606bcf7a->m_frame.f_lineno = 14;
        tmp_assign_source_16 = IMPORT_MODULE4(tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_16);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0146c735c400b358bb00e7fb606bcf7a);
#endif
    popFrameStack();

    assertFrameObject(frame_0146c735c400b358bb00e7fb606bcf7a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0146c735c400b358bb00e7fb606bcf7a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0146c735c400b358bb00e7fb606bcf7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0146c735c400b358bb00e7fb606bcf7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0146c735c400b358bb00e7fb606bcf7a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_Helpers$$$function_1_determine_method();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_Helpers$$$function_2_get_data();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_Helpers$$$function_3_get_file_data();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_Helpers$$$function_4_validate_crc32();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_Helpers$$$function_5_swappositions();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_Helpers$$$function_6_cut_data();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_Helpers$$$function_7_write_data();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_Helpers$$$function_8_create_private_key();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_Helpers$$$function_9_get_substring();

        UPDATE_STRING_DICT1(moduledict_Helpers, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_25);
    }

    return module_Helpers;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

