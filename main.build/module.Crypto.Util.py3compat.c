/* Generated code for Python module 'Crypto.Util.py3compat'
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

/* The "module_Crypto$Util$py3compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Util$py3compat;
PyDictObject *moduledict_Crypto$Util$py3compat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[54];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "Crypto.Util.py3compat", 54);

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
void checkModuleConstants_Crypto$Util$py3compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "Crypto.Util.py3compat", 54);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5fa2cd1cbd6c1f50f0a3fc0eb14e9139;
static PyCodeObject *codeobj_ac8a5c51a8a190b5f2ede9080a62149d;
static PyCodeObject *codeobj_ba3093bfdeb1b3a30ddb497e235752bc;
static PyCodeObject *codeobj_247bfa99a23cac9209403f5bc1b1c5fa;
static PyCodeObject *codeobj_1392e69ff2c9647c4eb642931d6e1f8f;
static PyCodeObject *codeobj_8facead2348c5c223dcb38a229135f53;
static PyCodeObject *codeobj_f472582a411d9124260c0e4c7c097f1a;
static PyCodeObject *codeobj_33e9e5af49acbf050903aac31ef62b34;
static PyCodeObject *codeobj_c68526da13f8552ca4a5c6309e5adc98;
static PyCodeObject *codeobj_113eea4e25569d2cf49ced017e071f0e;
static PyCodeObject *codeobj_34319b1f63d42c60ed6cf8a125bd1070;
static PyCodeObject *codeobj_7f79ee6814d09234f98391fcefb09a88;
static PyCodeObject *codeobj_2b2a75bfff885bc6b248c47184f77d4d;
static PyCodeObject *codeobj_f070e913336c6322355799f541619bef;
static PyCodeObject *codeobj_65e594315bebadf4eadd826ec849cf25;
static PyCodeObject *codeobj_52093c3e100b26ecc9afc13400e28515;
static PyCodeObject *codeobj_331115687ad74b6facbb6b4d6319e455;
static PyCodeObject *codeobj_654e3591b4b35eb50d0a6f05dc4a70fa;
static PyCodeObject *codeobj_a7ea776aec2448c83c5ba9a079890c38;
static PyCodeObject *codeobj_74f2cd123f15a395817435c53022dd25;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[12]; CHECK_OBJECT(module_filename_obj);
    codeobj_5fa2cd1cbd6c1f50f0a3fc0eb14e9139 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[48], NULL, NULL, 0, 0, 0);
    codeobj_ac8a5c51a8a190b5f2ede9080a62149d = MAKE_CODEOBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[49], NULL, 3, 0, 0);
    codeobj_ba3093bfdeb1b3a30ddb497e235752bc = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[50], NULL, 1, 0, 0);
    codeobj_247bfa99a23cac9209403f5bc1b1c5fa = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[50], NULL, 1, 0, 0);
    codeobj_1392e69ff2c9647c4eb642931d6e1f8f = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[50], NULL, 1, 0, 0);
    codeobj_8facead2348c5c223dcb38a229135f53 = MAKE_CODEOBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[50], NULL, 1, 0, 0);
    codeobj_f472582a411d9124260c0e4c7c097f1a = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[50], NULL, 1, 0, 0);
    codeobj_33e9e5af49acbf050903aac31ef62b34 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[50], NULL, 1, 0, 0);
    codeobj_c68526da13f8552ca4a5c6309e5adc98 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[50], NULL, 1, 0, 0);
    codeobj_113eea4e25569d2cf49ced017e071f0e = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[50], NULL, 1, 0, 0);
    codeobj_34319b1f63d42c60ed6cf8a125bd1070 = MAKE_CODEOBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[50], NULL, 1, 0, 0);
    codeobj_7f79ee6814d09234f98391fcefb09a88 = MAKE_CODEOBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[50], NULL, 1, 0, 0);
    codeobj_2b2a75bfff885bc6b248c47184f77d4d = MAKE_CODEOBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[51], NULL, 1, 0, 0);
    codeobj_f070e913336c6322355799f541619bef = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[51], NULL, 1, 0, 0);
    codeobj_65e594315bebadf4eadd826ec849cf25 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[51], NULL, 1, 0, 0);
    codeobj_52093c3e100b26ecc9afc13400e28515 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[51], NULL, 1, 0, 0);
    codeobj_331115687ad74b6facbb6b4d6319e455 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[52], NULL, 2, 0, 0);
    codeobj_654e3591b4b35eb50d0a6f05dc4a70fa = MAKE_CODEOBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[52], NULL, 2, 0, 0);
    codeobj_a7ea776aec2448c83c5ba9a079890c38 = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[53], NULL, 1, 0, 0);
    codeobj_74f2cd123f15a395817435c53022dd25 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[53], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_b();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_bchr();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_12_bstr();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_13_bord();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_14_tobytes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_15_tostr();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_16_byte_string();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_17_is_native_int();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_18_is_string();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_19__copy_bytes();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tostr();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_byte_string();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_is_native_int();


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_is_string();


// The module function definitions.
static PyObject *impl_Crypto$Util$py3compat$$$function_1_b(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_2_bchr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_1392e69ff2c9647c4eb642931d6e1f8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1392e69ff2c9647c4eb642931d6e1f8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1392e69ff2c9647c4eb642931d6e1f8f)) {
        Py_XDECREF(cache_frame_1392e69ff2c9647c4eb642931d6e1f8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1392e69ff2c9647c4eb642931d6e1f8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1392e69ff2c9647c4eb642931d6e1f8f = MAKE_FUNCTION_FRAME(codeobj_1392e69ff2c9647c4eb642931d6e1f8f, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1392e69ff2c9647c4eb642931d6e1f8f->m_type_description == NULL);
    frame_1392e69ff2c9647c4eb642931d6e1f8f = cache_frame_1392e69ff2c9647c4eb642931d6e1f8f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1392e69ff2c9647c4eb642931d6e1f8f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1392e69ff2c9647c4eb642931d6e1f8f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_chr_arg_1;
        CHECK_OBJECT(par_s);
        tmp_chr_arg_1 = par_s;
        tmp_return_value = BUILTIN_CHR(tmp_chr_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1392e69ff2c9647c4eb642931d6e1f8f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1392e69ff2c9647c4eb642931d6e1f8f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1392e69ff2c9647c4eb642931d6e1f8f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1392e69ff2c9647c4eb642931d6e1f8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1392e69ff2c9647c4eb642931d6e1f8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1392e69ff2c9647c4eb642931d6e1f8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1392e69ff2c9647c4eb642931d6e1f8f,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_1392e69ff2c9647c4eb642931d6e1f8f == cache_frame_1392e69ff2c9647c4eb642931d6e1f8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1392e69ff2c9647c4eb642931d6e1f8f);
        cache_frame_1392e69ff2c9647c4eb642931d6e1f8f = NULL;
    }

    assertFrameObject(frame_1392e69ff2c9647c4eb642931d6e1f8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_3_bstr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_c68526da13f8552ca4a5c6309e5adc98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c68526da13f8552ca4a5c6309e5adc98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c68526da13f8552ca4a5c6309e5adc98)) {
        Py_XDECREF(cache_frame_c68526da13f8552ca4a5c6309e5adc98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c68526da13f8552ca4a5c6309e5adc98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c68526da13f8552ca4a5c6309e5adc98 = MAKE_FUNCTION_FRAME(codeobj_c68526da13f8552ca4a5c6309e5adc98, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c68526da13f8552ca4a5c6309e5adc98->m_type_description == NULL);
    frame_c68526da13f8552ca4a5c6309e5adc98 = cache_frame_c68526da13f8552ca4a5c6309e5adc98;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c68526da13f8552ca4a5c6309e5adc98);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c68526da13f8552ca4a5c6309e5adc98) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_1;
        CHECK_OBJECT(par_s);
        tmp_str_arg_1 = par_s;
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c68526da13f8552ca4a5c6309e5adc98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c68526da13f8552ca4a5c6309e5adc98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c68526da13f8552ca4a5c6309e5adc98);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c68526da13f8552ca4a5c6309e5adc98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c68526da13f8552ca4a5c6309e5adc98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c68526da13f8552ca4a5c6309e5adc98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c68526da13f8552ca4a5c6309e5adc98,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_c68526da13f8552ca4a5c6309e5adc98 == cache_frame_c68526da13f8552ca4a5c6309e5adc98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c68526da13f8552ca4a5c6309e5adc98);
        cache_frame_c68526da13f8552ca4a5c6309e5adc98 = NULL;
    }

    assertFrameObject(frame_c68526da13f8552ca4a5c6309e5adc98);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_4_bord(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_f472582a411d9124260c0e4c7c097f1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f472582a411d9124260c0e4c7c097f1a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f472582a411d9124260c0e4c7c097f1a)) {
        Py_XDECREF(cache_frame_f472582a411d9124260c0e4c7c097f1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f472582a411d9124260c0e4c7c097f1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f472582a411d9124260c0e4c7c097f1a = MAKE_FUNCTION_FRAME(codeobj_f472582a411d9124260c0e4c7c097f1a, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f472582a411d9124260c0e4c7c097f1a->m_type_description == NULL);
    frame_f472582a411d9124260c0e4c7c097f1a = cache_frame_f472582a411d9124260c0e4c7c097f1a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f472582a411d9124260c0e4c7c097f1a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f472582a411d9124260c0e4c7c097f1a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(par_s);
        tmp_ord_arg_1 = par_s;
        tmp_return_value = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f472582a411d9124260c0e4c7c097f1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f472582a411d9124260c0e4c7c097f1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f472582a411d9124260c0e4c7c097f1a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f472582a411d9124260c0e4c7c097f1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f472582a411d9124260c0e4c7c097f1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f472582a411d9124260c0e4c7c097f1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f472582a411d9124260c0e4c7c097f1a,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_f472582a411d9124260c0e4c7c097f1a == cache_frame_f472582a411d9124260c0e4c7c097f1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f472582a411d9124260c0e4c7c097f1a);
        cache_frame_f472582a411d9124260c0e4c7c097f1a = NULL;
    }

    assertFrameObject(frame_f472582a411d9124260c0e4c7c097f1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_5_tobytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_331115687ad74b6facbb6b4d6319e455;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_331115687ad74b6facbb6b4d6319e455 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_331115687ad74b6facbb6b4d6319e455)) {
        Py_XDECREF(cache_frame_331115687ad74b6facbb6b4d6319e455);

#if _DEBUG_REFCOUNTS
        if (cache_frame_331115687ad74b6facbb6b4d6319e455 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_331115687ad74b6facbb6b4d6319e455 = MAKE_FUNCTION_FRAME(codeobj_331115687ad74b6facbb6b4d6319e455, module_Crypto$Util$py3compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_331115687ad74b6facbb6b4d6319e455->m_type_description == NULL);
    frame_331115687ad74b6facbb6b4d6319e455 = cache_frame_331115687ad74b6facbb6b4d6319e455;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_331115687ad74b6facbb6b4d6319e455);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_331115687ad74b6facbb6b4d6319e455) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_name_1 = par_encoding;
        frame_331115687ad74b6facbb6b4d6319e455->m_frame.f_lineno = 76;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[0], tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_2 = par_s;
        tmp_isinstance_cls_2 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_3 = par_s;
        tmp_isinstance_cls_3 = (PyObject *)&PyByteArray_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_str_arg_1;
        CHECK_OBJECT(par_s);
        tmp_str_arg_1 = par_s;
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = mod_consts[1];
        CHECK_OBJECT(par_s);
        tmp_args_element_name_2 = par_s;
        frame_331115687ad74b6facbb6b4d6319e455->m_frame.f_lineno = 82;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[2], tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_331115687ad74b6facbb6b4d6319e455);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_331115687ad74b6facbb6b4d6319e455);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_331115687ad74b6facbb6b4d6319e455);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_331115687ad74b6facbb6b4d6319e455, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_331115687ad74b6facbb6b4d6319e455->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_331115687ad74b6facbb6b4d6319e455, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_331115687ad74b6facbb6b4d6319e455,
        type_description_1,
        par_s,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_331115687ad74b6facbb6b4d6319e455 == cache_frame_331115687ad74b6facbb6b4d6319e455) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_331115687ad74b6facbb6b4d6319e455);
        cache_frame_331115687ad74b6facbb6b4d6319e455 = NULL;
    }

    assertFrameObject(frame_331115687ad74b6facbb6b4d6319e455);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_s);
    par_s = NULL;
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

    Py_XDECREF(par_s);
    par_s = NULL;
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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_6_tostr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bs = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_bs);
    tmp_return_value = par_bs;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bs);
    Py_DECREF(par_bs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_7_byte_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_34319b1f63d42c60ed6cf8a125bd1070;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34319b1f63d42c60ed6cf8a125bd1070 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_34319b1f63d42c60ed6cf8a125bd1070)) {
        Py_XDECREF(cache_frame_34319b1f63d42c60ed6cf8a125bd1070);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34319b1f63d42c60ed6cf8a125bd1070 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34319b1f63d42c60ed6cf8a125bd1070 = MAKE_FUNCTION_FRAME(codeobj_34319b1f63d42c60ed6cf8a125bd1070, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_34319b1f63d42c60ed6cf8a125bd1070->m_type_description == NULL);
    frame_34319b1f63d42c60ed6cf8a125bd1070 = cache_frame_34319b1f63d42c60ed6cf8a125bd1070;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_34319b1f63d42c60ed6cf8a125bd1070);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_34319b1f63d42c60ed6cf8a125bd1070) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_34319b1f63d42c60ed6cf8a125bd1070);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_34319b1f63d42c60ed6cf8a125bd1070);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_34319b1f63d42c60ed6cf8a125bd1070);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34319b1f63d42c60ed6cf8a125bd1070, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34319b1f63d42c60ed6cf8a125bd1070->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34319b1f63d42c60ed6cf8a125bd1070, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34319b1f63d42c60ed6cf8a125bd1070,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_34319b1f63d42c60ed6cf8a125bd1070 == cache_frame_34319b1f63d42c60ed6cf8a125bd1070) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_34319b1f63d42c60ed6cf8a125bd1070);
        cache_frame_34319b1f63d42c60ed6cf8a125bd1070 = NULL;
    }

    assertFrameObject(frame_34319b1f63d42c60ed6cf8a125bd1070);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_8_is_native_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_2b2a75bfff885bc6b248c47184f77d4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b2a75bfff885bc6b248c47184f77d4d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b2a75bfff885bc6b248c47184f77d4d)) {
        Py_XDECREF(cache_frame_2b2a75bfff885bc6b248c47184f77d4d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b2a75bfff885bc6b248c47184f77d4d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b2a75bfff885bc6b248c47184f77d4d = MAKE_FUNCTION_FRAME(codeobj_2b2a75bfff885bc6b248c47184f77d4d, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2b2a75bfff885bc6b248c47184f77d4d->m_type_description == NULL);
    frame_2b2a75bfff885bc6b248c47184f77d4d = cache_frame_2b2a75bfff885bc6b248c47184f77d4d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2b2a75bfff885bc6b248c47184f77d4d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2b2a75bfff885bc6b248c47184f77d4d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = mod_consts[3];
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b2a75bfff885bc6b248c47184f77d4d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b2a75bfff885bc6b248c47184f77d4d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b2a75bfff885bc6b248c47184f77d4d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b2a75bfff885bc6b248c47184f77d4d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b2a75bfff885bc6b248c47184f77d4d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b2a75bfff885bc6b248c47184f77d4d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b2a75bfff885bc6b248c47184f77d4d,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_2b2a75bfff885bc6b248c47184f77d4d == cache_frame_2b2a75bfff885bc6b248c47184f77d4d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2b2a75bfff885bc6b248c47184f77d4d);
        cache_frame_2b2a75bfff885bc6b248c47184f77d4d = NULL;
    }

    assertFrameObject(frame_2b2a75bfff885bc6b248c47184f77d4d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_9_is_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_65e594315bebadf4eadd826ec849cf25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65e594315bebadf4eadd826ec849cf25 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65e594315bebadf4eadd826ec849cf25)) {
        Py_XDECREF(cache_frame_65e594315bebadf4eadd826ec849cf25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65e594315bebadf4eadd826ec849cf25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65e594315bebadf4eadd826ec849cf25 = MAKE_FUNCTION_FRAME(codeobj_65e594315bebadf4eadd826ec849cf25, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_65e594315bebadf4eadd826ec849cf25->m_type_description == NULL);
    frame_65e594315bebadf4eadd826ec849cf25 = cache_frame_65e594315bebadf4eadd826ec849cf25;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_65e594315bebadf4eadd826ec849cf25);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_65e594315bebadf4eadd826ec849cf25) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = (PyObject *)&PyBaseString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_65e594315bebadf4eadd826ec849cf25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_65e594315bebadf4eadd826ec849cf25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_65e594315bebadf4eadd826ec849cf25);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65e594315bebadf4eadd826ec849cf25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65e594315bebadf4eadd826ec849cf25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65e594315bebadf4eadd826ec849cf25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65e594315bebadf4eadd826ec849cf25,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_65e594315bebadf4eadd826ec849cf25 == cache_frame_65e594315bebadf4eadd826ec849cf25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_65e594315bebadf4eadd826ec849cf25);
        cache_frame_65e594315bebadf4eadd826ec849cf25 = NULL;
    }

    assertFrameObject(frame_65e594315bebadf4eadd826ec849cf25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_10_b(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_247bfa99a23cac9209403f5bc1b1c5fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_247bfa99a23cac9209403f5bc1b1c5fa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_247bfa99a23cac9209403f5bc1b1c5fa)) {
        Py_XDECREF(cache_frame_247bfa99a23cac9209403f5bc1b1c5fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_247bfa99a23cac9209403f5bc1b1c5fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_247bfa99a23cac9209403f5bc1b1c5fa = MAKE_FUNCTION_FRAME(codeobj_247bfa99a23cac9209403f5bc1b1c5fa, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_247bfa99a23cac9209403f5bc1b1c5fa->m_type_description == NULL);
    frame_247bfa99a23cac9209403f5bc1b1c5fa = cache_frame_247bfa99a23cac9209403f5bc1b1c5fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_247bfa99a23cac9209403f5bc1b1c5fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_247bfa99a23cac9209403f5bc1b1c5fa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_247bfa99a23cac9209403f5bc1b1c5fa->m_frame.f_lineno = 111;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[4], 0));

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_247bfa99a23cac9209403f5bc1b1c5fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_247bfa99a23cac9209403f5bc1b1c5fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_247bfa99a23cac9209403f5bc1b1c5fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_247bfa99a23cac9209403f5bc1b1c5fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_247bfa99a23cac9209403f5bc1b1c5fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_247bfa99a23cac9209403f5bc1b1c5fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_247bfa99a23cac9209403f5bc1b1c5fa,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_247bfa99a23cac9209403f5bc1b1c5fa == cache_frame_247bfa99a23cac9209403f5bc1b1c5fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_247bfa99a23cac9209403f5bc1b1c5fa);
        cache_frame_247bfa99a23cac9209403f5bc1b1c5fa = NULL;
    }

    assertFrameObject(frame_247bfa99a23cac9209403f5bc1b1c5fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_s);
    par_s = NULL;
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

    Py_XDECREF(par_s);
    par_s = NULL;
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


static PyObject *impl_Crypto$Util$py3compat$$$function_11_bchr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_8facead2348c5c223dcb38a229135f53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8facead2348c5c223dcb38a229135f53 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8facead2348c5c223dcb38a229135f53)) {
        Py_XDECREF(cache_frame_8facead2348c5c223dcb38a229135f53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8facead2348c5c223dcb38a229135f53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8facead2348c5c223dcb38a229135f53 = MAKE_FUNCTION_FRAME(codeobj_8facead2348c5c223dcb38a229135f53, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8facead2348c5c223dcb38a229135f53->m_type_description == NULL);
    frame_8facead2348c5c223dcb38a229135f53 = cache_frame_8facead2348c5c223dcb38a229135f53;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8facead2348c5c223dcb38a229135f53);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8facead2348c5c223dcb38a229135f53) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_s);
        tmp_list_element_1 = par_s;
        tmp_str_arg_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_str_arg_1, 0, tmp_list_element_1);
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        Py_DECREF(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8facead2348c5c223dcb38a229135f53);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8facead2348c5c223dcb38a229135f53);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8facead2348c5c223dcb38a229135f53);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8facead2348c5c223dcb38a229135f53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8facead2348c5c223dcb38a229135f53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8facead2348c5c223dcb38a229135f53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8facead2348c5c223dcb38a229135f53,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_8facead2348c5c223dcb38a229135f53 == cache_frame_8facead2348c5c223dcb38a229135f53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8facead2348c5c223dcb38a229135f53);
        cache_frame_8facead2348c5c223dcb38a229135f53 = NULL;
    }

    assertFrameObject(frame_8facead2348c5c223dcb38a229135f53);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_12_bstr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_113eea4e25569d2cf49ced017e071f0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_113eea4e25569d2cf49ced017e071f0e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_113eea4e25569d2cf49ced017e071f0e)) {
        Py_XDECREF(cache_frame_113eea4e25569d2cf49ced017e071f0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_113eea4e25569d2cf49ced017e071f0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_113eea4e25569d2cf49ced017e071f0e = MAKE_FUNCTION_FRAME(codeobj_113eea4e25569d2cf49ced017e071f0e, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_113eea4e25569d2cf49ced017e071f0e->m_type_description == NULL);
    frame_113eea4e25569d2cf49ced017e071f0e = cache_frame_113eea4e25569d2cf49ced017e071f0e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_113eea4e25569d2cf49ced017e071f0e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_113eea4e25569d2cf49ced017e071f0e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_raise_value_1 = mod_consts[5];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 116;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_str_arg_1;
        CHECK_OBJECT(par_s);
        tmp_str_arg_1 = par_s;
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_113eea4e25569d2cf49ced017e071f0e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_113eea4e25569d2cf49ced017e071f0e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_113eea4e25569d2cf49ced017e071f0e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_113eea4e25569d2cf49ced017e071f0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_113eea4e25569d2cf49ced017e071f0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_113eea4e25569d2cf49ced017e071f0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_113eea4e25569d2cf49ced017e071f0e,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_113eea4e25569d2cf49ced017e071f0e == cache_frame_113eea4e25569d2cf49ced017e071f0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_113eea4e25569d2cf49ced017e071f0e);
        cache_frame_113eea4e25569d2cf49ced017e071f0e = NULL;
    }

    assertFrameObject(frame_113eea4e25569d2cf49ced017e071f0e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_13_bord(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_14_tobytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_654e3591b4b35eb50d0a6f05dc4a70fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa)) {
        Py_XDECREF(cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa = MAKE_FUNCTION_FRAME(codeobj_654e3591b4b35eb50d0a6f05dc4a70fa, module_Crypto$Util$py3compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa->m_type_description == NULL);
    frame_654e3591b4b35eb50d0a6f05dc4a70fa = cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_654e3591b4b35eb50d0a6f05dc4a70fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_654e3591b4b35eb50d0a6f05dc4a70fa) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_2 = par_s;
        tmp_isinstance_cls_2 = (PyObject *)&PyByteArray_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_str_arg_1;
        CHECK_OBJECT(par_s);
        tmp_str_arg_1 = par_s;
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_3 = par_s;
        tmp_isinstance_cls_3 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_name_1 = par_encoding;
        frame_654e3591b4b35eb50d0a6f05dc4a70fa->m_frame.f_lineno = 127;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[0], tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_str_arg_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_s);
        tmp_list_element_1 = par_s;
        tmp_str_arg_2 = PyList_New(1);
        PyList_SET_ITEM0(tmp_str_arg_2, 0, tmp_list_element_1);
        tmp_return_value = PyObject_Str(tmp_str_arg_2);
        Py_DECREF(tmp_str_arg_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_654e3591b4b35eb50d0a6f05dc4a70fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_654e3591b4b35eb50d0a6f05dc4a70fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_654e3591b4b35eb50d0a6f05dc4a70fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_654e3591b4b35eb50d0a6f05dc4a70fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_654e3591b4b35eb50d0a6f05dc4a70fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_654e3591b4b35eb50d0a6f05dc4a70fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_654e3591b4b35eb50d0a6f05dc4a70fa,
        type_description_1,
        par_s,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_654e3591b4b35eb50d0a6f05dc4a70fa == cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa);
        cache_frame_654e3591b4b35eb50d0a6f05dc4a70fa = NULL;
    }

    assertFrameObject(frame_654e3591b4b35eb50d0a6f05dc4a70fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_s);
    par_s = NULL;
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

    Py_XDECREF(par_s);
    par_s = NULL;
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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_15_tostr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bs = python_pars[0];
    struct Nuitka_FrameObject *frame_74f2cd123f15a395817435c53022dd25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74f2cd123f15a395817435c53022dd25 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_74f2cd123f15a395817435c53022dd25)) {
        Py_XDECREF(cache_frame_74f2cd123f15a395817435c53022dd25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74f2cd123f15a395817435c53022dd25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74f2cd123f15a395817435c53022dd25 = MAKE_FUNCTION_FRAME(codeobj_74f2cd123f15a395817435c53022dd25, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_74f2cd123f15a395817435c53022dd25->m_type_description == NULL);
    frame_74f2cd123f15a395817435c53022dd25 = cache_frame_74f2cd123f15a395817435c53022dd25;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_74f2cd123f15a395817435c53022dd25);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_74f2cd123f15a395817435c53022dd25) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_bs);
        tmp_called_instance_1 = par_bs;
        frame_74f2cd123f15a395817435c53022dd25->m_frame.f_lineno = 131;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[6], &PyTuple_GET_ITEM(mod_consts[4], 0));

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74f2cd123f15a395817435c53022dd25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_74f2cd123f15a395817435c53022dd25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74f2cd123f15a395817435c53022dd25);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74f2cd123f15a395817435c53022dd25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74f2cd123f15a395817435c53022dd25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74f2cd123f15a395817435c53022dd25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74f2cd123f15a395817435c53022dd25,
        type_description_1,
        par_bs
    );


    // Release cached frame if used for exception.
    if (frame_74f2cd123f15a395817435c53022dd25 == cache_frame_74f2cd123f15a395817435c53022dd25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_74f2cd123f15a395817435c53022dd25);
        cache_frame_74f2cd123f15a395817435c53022dd25 = NULL;
    }

    assertFrameObject(frame_74f2cd123f15a395817435c53022dd25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_bs);
    par_bs = NULL;
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

    Py_XDECREF(par_bs);
    par_bs = NULL;
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


static PyObject *impl_Crypto$Util$py3compat$$$function_16_byte_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_7f79ee6814d09234f98391fcefb09a88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f79ee6814d09234f98391fcefb09a88 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f79ee6814d09234f98391fcefb09a88)) {
        Py_XDECREF(cache_frame_7f79ee6814d09234f98391fcefb09a88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f79ee6814d09234f98391fcefb09a88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f79ee6814d09234f98391fcefb09a88 = MAKE_FUNCTION_FRAME(codeobj_7f79ee6814d09234f98391fcefb09a88, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f79ee6814d09234f98391fcefb09a88->m_type_description == NULL);
    frame_7f79ee6814d09234f98391fcefb09a88 = cache_frame_7f79ee6814d09234f98391fcefb09a88;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f79ee6814d09234f98391fcefb09a88);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f79ee6814d09234f98391fcefb09a88) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f79ee6814d09234f98391fcefb09a88);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f79ee6814d09234f98391fcefb09a88);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f79ee6814d09234f98391fcefb09a88);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f79ee6814d09234f98391fcefb09a88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f79ee6814d09234f98391fcefb09a88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f79ee6814d09234f98391fcefb09a88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f79ee6814d09234f98391fcefb09a88,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_7f79ee6814d09234f98391fcefb09a88 == cache_frame_7f79ee6814d09234f98391fcefb09a88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f79ee6814d09234f98391fcefb09a88);
        cache_frame_7f79ee6814d09234f98391fcefb09a88 = NULL;
    }

    assertFrameObject(frame_7f79ee6814d09234f98391fcefb09a88);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_17_is_native_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_f070e913336c6322355799f541619bef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f070e913336c6322355799f541619bef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f070e913336c6322355799f541619bef)) {
        Py_XDECREF(cache_frame_f070e913336c6322355799f541619bef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f070e913336c6322355799f541619bef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f070e913336c6322355799f541619bef = MAKE_FUNCTION_FRAME(codeobj_f070e913336c6322355799f541619bef, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f070e913336c6322355799f541619bef->m_type_description == NULL);
    frame_f070e913336c6322355799f541619bef = cache_frame_f070e913336c6322355799f541619bef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f070e913336c6322355799f541619bef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f070e913336c6322355799f541619bef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = (PyObject *)&PyInt_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f070e913336c6322355799f541619bef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f070e913336c6322355799f541619bef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f070e913336c6322355799f541619bef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f070e913336c6322355799f541619bef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f070e913336c6322355799f541619bef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f070e913336c6322355799f541619bef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f070e913336c6322355799f541619bef,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_f070e913336c6322355799f541619bef == cache_frame_f070e913336c6322355799f541619bef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f070e913336c6322355799f541619bef);
        cache_frame_f070e913336c6322355799f541619bef = NULL;
    }

    assertFrameObject(frame_f070e913336c6322355799f541619bef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_18_is_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_52093c3e100b26ecc9afc13400e28515;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52093c3e100b26ecc9afc13400e28515 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_52093c3e100b26ecc9afc13400e28515)) {
        Py_XDECREF(cache_frame_52093c3e100b26ecc9afc13400e28515);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52093c3e100b26ecc9afc13400e28515 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52093c3e100b26ecc9afc13400e28515 = MAKE_FUNCTION_FRAME(codeobj_52093c3e100b26ecc9afc13400e28515, module_Crypto$Util$py3compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52093c3e100b26ecc9afc13400e28515->m_type_description == NULL);
    frame_52093c3e100b26ecc9afc13400e28515 = cache_frame_52093c3e100b26ecc9afc13400e28515;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52093c3e100b26ecc9afc13400e28515);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52093c3e100b26ecc9afc13400e28515) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52093c3e100b26ecc9afc13400e28515);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52093c3e100b26ecc9afc13400e28515);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52093c3e100b26ecc9afc13400e28515);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52093c3e100b26ecc9afc13400e28515, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52093c3e100b26ecc9afc13400e28515->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52093c3e100b26ecc9afc13400e28515, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52093c3e100b26ecc9afc13400e28515,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_52093c3e100b26ecc9afc13400e28515 == cache_frame_52093c3e100b26ecc9afc13400e28515) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52093c3e100b26ecc9afc13400e28515);
        cache_frame_52093c3e100b26ecc9afc13400e28515 = NULL;
    }

    assertFrameObject(frame_52093c3e100b26ecc9afc13400e28515);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_19__copy_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[0];
    PyObject *par_end = python_pars[1];
    PyObject *par_seq = python_pars[2];
    struct Nuitka_FrameObject *frame_ac8a5c51a8a190b5f2ede9080a62149d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ac8a5c51a8a190b5f2ede9080a62149d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac8a5c51a8a190b5f2ede9080a62149d)) {
        Py_XDECREF(cache_frame_ac8a5c51a8a190b5f2ede9080a62149d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac8a5c51a8a190b5f2ede9080a62149d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac8a5c51a8a190b5f2ede9080a62149d = MAKE_FUNCTION_FRAME(codeobj_ac8a5c51a8a190b5f2ede9080a62149d, module_Crypto$Util$py3compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ac8a5c51a8a190b5f2ede9080a62149d->m_type_description == NULL);
    frame_ac8a5c51a8a190b5f2ede9080a62149d = cache_frame_ac8a5c51a8a190b5f2ede9080a62149d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ac8a5c51a8a190b5f2ede9080a62149d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ac8a5c51a8a190b5f2ede9080a62149d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_seq);
        tmp_isinstance_inst_1 = par_seq;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        CHECK_OBJECT(par_seq);
        tmp_slice_source_1 = par_seq;
        CHECK_OBJECT(par_start);
        tmp_slice_lower_1 = par_start;
        CHECK_OBJECT(par_end);
        tmp_slice_upper_1 = par_end;
        tmp_called_instance_1 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ac8a5c51a8a190b5f2ede9080a62149d->m_frame.f_lineno = 157;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_seq);
        tmp_isinstance_inst_2 = par_seq;
        tmp_isinstance_cls_2 = (PyObject *)&PyByteArray_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_str_arg_1;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_lower_2;
        PyObject *tmp_slice_upper_2;
        CHECK_OBJECT(par_seq);
        tmp_slice_source_2 = par_seq;
        CHECK_OBJECT(par_start);
        tmp_slice_lower_2 = par_start;
        CHECK_OBJECT(par_end);
        tmp_slice_upper_2 = par_end;
        tmp_str_arg_1 = LOOKUP_SLICE(tmp_slice_source_2, tmp_slice_lower_2, tmp_slice_upper_2);
        if (tmp_str_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        Py_DECREF(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_slice_source_3;
        PyObject *tmp_slice_lower_3;
        PyObject *tmp_slice_upper_3;
        CHECK_OBJECT(par_seq);
        tmp_slice_source_3 = par_seq;
        CHECK_OBJECT(par_start);
        tmp_slice_lower_3 = par_start;
        CHECK_OBJECT(par_end);
        tmp_slice_upper_3 = par_end;
        tmp_return_value = LOOKUP_SLICE(tmp_slice_source_3, tmp_slice_lower_3, tmp_slice_upper_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8a5c51a8a190b5f2ede9080a62149d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8a5c51a8a190b5f2ede9080a62149d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8a5c51a8a190b5f2ede9080a62149d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac8a5c51a8a190b5f2ede9080a62149d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac8a5c51a8a190b5f2ede9080a62149d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac8a5c51a8a190b5f2ede9080a62149d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac8a5c51a8a190b5f2ede9080a62149d,
        type_description_1,
        par_start,
        par_end,
        par_seq
    );


    // Release cached frame if used for exception.
    if (frame_ac8a5c51a8a190b5f2ede9080a62149d == cache_frame_ac8a5c51a8a190b5f2ede9080a62149d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ac8a5c51a8a190b5f2ede9080a62149d);
        cache_frame_ac8a5c51a8a190b5f2ede9080a62149d = NULL;
    }

    assertFrameObject(frame_ac8a5c51a8a190b5f2ede9080a62149d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_seq);
    Py_DECREF(par_seq);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_seq);
    Py_DECREF(par_seq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_b() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_10_b,
        mod_consts[19],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_247bfa99a23cac9209403f5bc1b1c5fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_bchr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_11_bchr,
        mod_consts[20],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8facead2348c5c223dcb38a229135f53,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_12_bstr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_12_bstr,
        mod_consts[21],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_113eea4e25569d2cf49ced017e071f0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_13_bord() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_13_bord,
        mod_consts[22],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_33e9e5af49acbf050903aac31ef62b34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_14_tobytes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_14_tobytes,
        mod_consts[8],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_654e3591b4b35eb50d0a6f05dc4a70fa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_15_tostr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_15_tostr,
        mod_consts[23],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_74f2cd123f15a395817435c53022dd25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_16_byte_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_16_byte_string,
        mod_consts[24],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7f79ee6814d09234f98391fcefb09a88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_17_is_native_int() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_17_is_native_int,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f070e913336c6322355799f541619bef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_18_is_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_18_is_string,
        mod_consts[36],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_52093c3e100b26ecc9afc13400e28515,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_19__copy_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_19__copy_bytes,
        mod_consts[47],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ac8a5c51a8a190b5f2ede9080a62149d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_1_b,
        mod_consts[19],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba3093bfdeb1b3a30ddb497e235752bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_2_bchr,
        mod_consts[20],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1392e69ff2c9647c4eb642931d6e1f8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_3_bstr,
        mod_consts[21],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c68526da13f8552ca4a5c6309e5adc98,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_4_bord,
        mod_consts[22],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f472582a411d9124260c0e4c7c097f1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_5_tobytes,
        mod_consts[8],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_331115687ad74b6facbb6b4d6319e455,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tostr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_6_tostr,
        mod_consts[23],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a7ea776aec2448c83c5ba9a079890c38,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_byte_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_7_byte_string,
        mod_consts[24],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_34319b1f63d42c60ed6cf8a125bd1070,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_is_native_int() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_8_is_native_int,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b2a75bfff885bc6b248c47184f77d4d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_is_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_9_is_string,
        mod_consts[36],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_65e594315bebadf4eadd826ec849cf25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
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

function_impl_code functable_Crypto$Util$py3compat[] = {
    impl_Crypto$Util$py3compat$$$function_1_b,
    impl_Crypto$Util$py3compat$$$function_2_bchr,
    impl_Crypto$Util$py3compat$$$function_3_bstr,
    impl_Crypto$Util$py3compat$$$function_4_bord,
    impl_Crypto$Util$py3compat$$$function_5_tobytes,
    impl_Crypto$Util$py3compat$$$function_6_tostr,
    impl_Crypto$Util$py3compat$$$function_7_byte_string,
    impl_Crypto$Util$py3compat$$$function_8_is_native_int,
    impl_Crypto$Util$py3compat$$$function_9_is_string,
    impl_Crypto$Util$py3compat$$$function_10_b,
    impl_Crypto$Util$py3compat$$$function_11_bchr,
    impl_Crypto$Util$py3compat$$$function_12_bstr,
    impl_Crypto$Util$py3compat$$$function_13_bord,
    impl_Crypto$Util$py3compat$$$function_14_tobytes,
    impl_Crypto$Util$py3compat$$$function_15_tostr,
    impl_Crypto$Util$py3compat$$$function_16_byte_string,
    impl_Crypto$Util$py3compat$$$function_17_is_native_int,
    impl_Crypto$Util$py3compat$$$function_18_is_string,
    impl_Crypto$Util$py3compat$$$function_19__copy_bytes,
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

    function_impl_code *current = functable_Crypto$Util$py3compat;
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

    if (offset > sizeof(functable_Crypto$Util$py3compat) || offset < 0) {
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
        functable_Crypto$Util$py3compat[offset],
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
        module_Crypto$Util$py3compat,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "Crypto.Util.py3compat";

// Internal entry point for module code.
PyObject *modulecode_Crypto$Util$py3compat(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_Crypto$Util$py3compat = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("Crypto.Util.py3compat: Skipping module init, already done.\n");
#endif

        return module_Crypto$Util$py3compat;
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
    PRINT_STRING("Crypto.Util.py3compat: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Crypto.Util.py3compat: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("Crypto.Util.py3compat: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initCrypto$Util$py3compat\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_Crypto$Util$py3compat = MODULE_DICT(module_Crypto$Util$py3compat);

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
        moduledict_Crypto$Util$py3compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Crypto$Util$py3compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Crypto$Util$py3compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Util$py3compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Util$py3compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Crypto$Util$py3compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Crypto$Util$py3compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = mod_consts[14];
        tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        assert(!(tmp_assign_source_3 == NULL));
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139 = MAKE_MODULE_FRAME(codeobj_5fa2cd1cbd6c1f50f0a3fc0eb14e9139, module_Crypto$Util$py3compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139);
    assert(Py_REFCNT(frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = mod_consts[15];
        tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 62;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_expression_name_2 == NULL));
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[16]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[17];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

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
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[4];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_9 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tostr();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_byte_string();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = mod_consts[25];
        tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[26];
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 89;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[25]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = mod_consts[14];
        tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[28];
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 91;
        tmp_import_name_from_2 = IMPORT_MODULE4(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4);
        assert(!(tmp_import_name_from_2 == NULL));
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[29]);
        Py_DECREF(tmp_import_name_from_2);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_13);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[16]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[30];
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[31];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = mod_consts[32];
        tmp_globals_name_5 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 94;
        tmp_assign_source_14 = IMPORT_MODULE4(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_5;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_expression_name_5 == NULL));
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[33]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_15);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = (PyObject *)&PyMemoryView_Type;
        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_16);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = (PyObject *)&PyRange_Type;
        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_is_native_int();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_is_string();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_call_arg_element_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[38];
        tmp_call_arg_element_2 = mod_consts[39];
        tmp_call_arg_element_3 = PyDict_Copy(mod_consts[40]);
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3};
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, mod_consts[37], call_args);
        }

        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_b();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_bchr();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_12_bstr();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_13_bord();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[4];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_25 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_14_tobytes(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_15_tostr();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_16_byte_string();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = mod_consts[41];
        tmp_globals_name_6 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[42];
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 136;
        tmp_import_name_from_3 = IMPORT_MODULE4(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[27]);
        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        tmp_name_name_7 = mod_consts[14];
        tmp_globals_name_7 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[43];
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 137;
        tmp_import_name_from_4 = IMPORT_MODULE4(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7);
        assert(!(tmp_import_name_from_4 == NULL));
        tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[44]);
        Py_DECREF(tmp_import_name_from_4);
        assert(!(tmp_assign_source_29 == NULL));
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = (PyObject *)&PyMemoryView_Type;
        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = LOOKUP_BUILTIN(mod_consts[45]);
        assert(tmp_assign_source_31 != NULL);
        UPDATE_STRING_DICT0(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_17_is_native_int();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_18_is_string();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        tmp_name_name_8 = mod_consts[15];
        tmp_globals_name_8 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[46];
        frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame.f_lineno = 149;
        tmp_import_name_from_5 = IMPORT_MODULE4(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[38]);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_34);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_19__copy_bytes();

        UPDATE_STRING_DICT1(moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_35);
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_Crypto$Util$py3compat, mod_consts[14]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);

        exception_lineno = 163;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem((PyObject *)moduledict_Crypto$Util$py3compat, mod_consts[15]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);

        exception_lineno = 164;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139);
#endif
    popFrameStack();

    assertFrameObject(frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fa2cd1cbd6c1f50f0a3fc0eb14e9139, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_Crypto$Util$py3compat;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

