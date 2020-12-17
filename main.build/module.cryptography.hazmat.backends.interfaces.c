/* Generated code for Python module 'cryptography.hazmat.backends.interfaces'
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

/* The "module_cryptography$hazmat$backends$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$interfaces;
PyDictObject *moduledict_cryptography$hazmat$backends$interfaces;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[163];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.hazmat.backends.interfaces", 163);

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
void checkModuleConstants_cryptography$hazmat$backends$interfaces(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.hazmat.backends.interfaces", 163);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_41ca7abd8cc5164d1dbe6e200b93f46b;
static PyCodeObject *codeobj_fd3c70d1052b30e85fb647627e4cfa97;
static PyCodeObject *codeobj_d4b278638be1754ab59f384c9990a1fc;
static PyCodeObject *codeobj_db81b222324f2e79233d6775d1c4424d;
static PyCodeObject *codeobj_c7f98d901008ea311ea7a6aa63afd663;
static PyCodeObject *codeobj_8e4fc04f5250294da297315bbc54406e;
static PyCodeObject *codeobj_fafc709c52757304988d7b0e850f0397;
static PyCodeObject *codeobj_47639912bfe29323d906426f93e8a663;
static PyCodeObject *codeobj_9be1057af690e13e248810ff31319b3f;
static PyCodeObject *codeobj_79c0f21329a60cad59005b62ee33a1e0;
static PyCodeObject *codeobj_a22c87ff0f30db8cac96f4f4385eac48;
static PyCodeObject *codeobj_6741261e452ece5cc6c61b41cf20d735;
static PyCodeObject *codeobj_6149742c9e0cee83721633d84d3c690b;
static PyCodeObject *codeobj_f2efa329e337c41e762f231f7743f0dd;
static PyCodeObject *codeobj_8665aa34c53c264134f2fceda118f36b;
static PyCodeObject *codeobj_e8ae85a9706a5b065c5425268944b2fe;
static PyCodeObject *codeobj_a0082be0bcd41f3f156aa0711a531ae0;
static PyCodeObject *codeobj_6b9b6f8142c07bed42cb97a7d5b26af5;
static PyCodeObject *codeobj_ff557e7125fe0bd026d4145bee2bb2ce;
static PyCodeObject *codeobj_a37556751a9537a29c9040cb14251367;
static PyCodeObject *codeobj_5344699993c0bab74a0b28dc836f33c2;
static PyCodeObject *codeobj_f88ce32b27c330cc753017ca0dc27666;
static PyCodeObject *codeobj_4852fb91e5cce127aaa1e0bce2846730;
static PyCodeObject *codeobj_e7439bdbcb04c5bd0f2d4cb13ad4b5f2;
static PyCodeObject *codeobj_8380c416159cd4c442456980dfbfc3fe;
static PyCodeObject *codeobj_5a5ae59bb071919e8d6e038b0079027b;
static PyCodeObject *codeobj_09ec92ba0e4eef47dad532a13f4dbbab;
static PyCodeObject *codeobj_e311bdf52d588cee5cb119b6c4a1cf77;
static PyCodeObject *codeobj_617c06f42ac13d9cfe7cc30ba48d1770;
static PyCodeObject *codeobj_25b0fe59057329c899ea15733a8ee0d9;
static PyCodeObject *codeobj_e1cfab317d9d307ea1d028c9add44876;
static PyCodeObject *codeobj_81f2d51d2bbfc71ccf99e4b74e783940;
static PyCodeObject *codeobj_4e693a2ea224d0631a8c18238b4ebf63;
static PyCodeObject *codeobj_fe93ecbf298919fdc595d9d1628e6d5d;
static PyCodeObject *codeobj_c66895d33d93c0fa52c8a1a4912be124;
static PyCodeObject *codeobj_9d998c2029b85902d4ec37f2a3b51f6d;
static PyCodeObject *codeobj_6b10e544e97bbbcb0d6dd2c8a28b18d1;
static PyCodeObject *codeobj_186008a220844ddc448be90744afdfde;
static PyCodeObject *codeobj_9354a0e6ccbcc36f6955133be3178d3c;
static PyCodeObject *codeobj_fe60ef8e01b7a05f36d26af44c3f2dbf;
static PyCodeObject *codeobj_5831183d37c657fa2beeb77cef27e0eb;
static PyCodeObject *codeobj_547d37a30ab16ca968a457cd214b603d;
static PyCodeObject *codeobj_56d6dd5586b55218aa51ad68ac11934c;
static PyCodeObject *codeobj_c9733436d22b7a793817e118e9d04884;
static PyCodeObject *codeobj_37c48c3a9d84df61ad09274f1a8668bc;
static PyCodeObject *codeobj_6df9e3d9e3353cb2de5983640c910614;
static PyCodeObject *codeobj_c0dc300aa539b1d2b0f1c31782a6533e;
static PyCodeObject *codeobj_14e2099be33a680a2ea7bb8ef736f6d0;
static PyCodeObject *codeobj_09b63e20bbc8912cbf468cd7d0d698c1;
static PyCodeObject *codeobj_add75844065d0eec665da193f14219ab;
static PyCodeObject *codeobj_0fe23fc67d5c119f6baff544cc360ab7;
static PyCodeObject *codeobj_17b54b18d56e9c11b509f3562223ac27;
static PyCodeObject *codeobj_ea239667295543ec4c84ca285a34658e;
static PyCodeObject *codeobj_5657748246d6be28b2a07ceb40804944;
static PyCodeObject *codeobj_1b5200222def458d4de949dbd5731403;
static PyCodeObject *codeobj_7dce4adfa8dd47550730e88c3f3ef5ac;
static PyCodeObject *codeobj_881faa7978199c4a99bc3db05dc51100;
static PyCodeObject *codeobj_25522d274fd00632b4107f25f3e4f1fb;
static PyCodeObject *codeobj_9ed8f4e57f63588c2ba84584f696299b;
static PyCodeObject *codeobj_d06fc9dfdb3dc53597d6205d4f06611a;
static PyCodeObject *codeobj_436beff9076a4541b5376b402156cc6d;
static PyCodeObject *codeobj_677d0e59927d3c95a52511ed72ae84fe;
static PyCodeObject *codeobj_e1448675e345bb1e98018fc5620fb582;
static PyCodeObject *codeobj_fbd9f2b45518e1abe6cd1af5666a3457;
static PyCodeObject *codeobj_b7e8f8eca877c5b255a54822c637ac33;
static PyCodeObject *codeobj_cd979f78e9f6511a5718d750d82d038a;
static PyCodeObject *codeobj_eafcc374f742db37c830f26967de4103;
static PyCodeObject *codeobj_94a6a2680c8b2e9ac5143a62370b53fa;
static PyCodeObject *codeobj_7cd2b009e35093bc10e170b0f324b449;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_41ca7abd8cc5164d1dbe6e200b93f46b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_fd3c70d1052b30e85fb647627e4cfa97 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[36], NULL, NULL, 0, 0, 0);
    codeobj_d4b278638be1754ab59f384c9990a1fc = MAKE_CODEOBJECT(module_filename_obj, 13, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[19], NULL, NULL, 0, 0, 0);
    codeobj_db81b222324f2e79233d6775d1c4424d = MAKE_CODEOBJECT(module_filename_obj, 255, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_c7f98d901008ea311ea7a6aa63afd663 = MAKE_CODEOBJECT(module_filename_obj, 336, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[135], NULL, NULL, 0, 0, 0);
    codeobj_8e4fc04f5250294da297315bbc54406e = MAKE_CODEOBJECT(module_filename_obj, 133, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[69], NULL, NULL, 0, 0, 0);
    codeobj_fafc709c52757304988d7b0e850f0397 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[84], NULL, NULL, 0, 0, 0);
    codeobj_47639912bfe29323d906426f93e8a663 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[32], NULL, NULL, 0, 0, 0);
    codeobj_9be1057af690e13e248810ff31319b3f = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[27], NULL, NULL, 0, 0, 0);
    codeobj_79c0f21329a60cad59005b62ee33a1e0 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[41], NULL, NULL, 0, 0, 0);
    codeobj_a22c87ff0f30db8cac96f4f4385eac48 = MAKE_CODEOBJECT(module_filename_obj, 233, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_6741261e452ece5cc6c61b41cf20d735 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[52], NULL, NULL, 0, 0, 0);
    codeobj_6149742c9e0cee83721633d84d3c690b = MAKE_CODEOBJECT(module_filename_obj, 391, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[138], NULL, NULL, 0, 0, 0);
    codeobj_f2efa329e337c41e762f231f7743f0dd = MAKE_CODEOBJECT(module_filename_obj, 277, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_8665aa34c53c264134f2fceda118f36b = MAKE_CODEOBJECT(module_filename_obj, 14, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[13], mod_consts[140], NULL, 3, 0, 0);
    codeobj_e8ae85a9706a5b065c5425268944b2fe = MAKE_CODEOBJECT(module_filename_obj, 66, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[34], mod_consts[141], NULL, 2, 0, 0);
    codeobj_a0082be0bcd41f3f156aa0711a531ae0 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[35], mod_consts[141], NULL, 2, 0, 0);
    codeobj_6b9b6f8142c07bed42cb97a7d5b26af5 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[26], mod_consts[141], NULL, 2, 0, 0);
    codeobj_ff557e7125fe0bd026d4145bee2bb2ce = MAKE_CODEOBJECT(module_filename_obj, 57, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[31], mod_consts[142], NULL, 3, 0, 0);
    codeobj_a37556751a9537a29c9040cb14251367 = MAKE_CODEOBJECT(module_filename_obj, 26, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[17], mod_consts[140], NULL, 3, 0, 0);
    codeobj_5344699993c0bab74a0b28dc836f33c2 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[15], mod_consts[140], NULL, 3, 0, 0);
    codeobj_f88ce32b27c330cc753017ca0dc27666 = MAKE_CODEOBJECT(module_filename_obj, 308, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[110], mod_consts[143], NULL, 4, 0, 0);
    codeobj_4852fb91e5cce127aaa1e0bce2846730 = MAKE_CODEOBJECT(module_filename_obj, 314, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[112], mod_consts[143], NULL, 4, 0, 0);
    codeobj_e7439bdbcb04c5bd0f2d4cb13ad4b5f2 = MAKE_CODEOBJECT(module_filename_obj, 302, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[108], mod_consts[143], NULL, 4, 0, 0);
    codeobj_8380c416159cd4c442456980dfbfc3fe = MAKE_CODEOBJECT(module_filename_obj, 321, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[114], mod_consts[144], NULL, 2, 0, 0);
    codeobj_5a5ae59bb071919e8d6e038b0079027b = MAKE_CODEOBJECT(module_filename_obj, 225, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[83], mod_consts[145], NULL, 3, 0, 0);
    codeobj_09ec92ba0e4eef47dad532a13f4dbbab = MAKE_CODEOBJECT(module_filename_obj, 88, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[40], mod_consts[146], NULL, 6, 0, 0);
    codeobj_e311bdf52d588cee5cb119b6c4a1cf77 = MAKE_CODEOBJECT(module_filename_obj, 392, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[137], mod_consts[147], NULL, 7, 0, 0);
    codeobj_617c06f42ac13d9cfe7cc30ba48d1770 = MAKE_CODEOBJECT(module_filename_obj, 376, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[132], mod_consts[148], NULL, 4, 0, 0);
    codeobj_25b0fe59057329c899ea15733a8ee0d9 = MAKE_CODEOBJECT(module_filename_obj, 382, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[134], mod_consts[149], NULL, 1, 0, 0);
    codeobj_e1cfab317d9d307ea1d028c9add44876 = MAKE_CODEOBJECT(module_filename_obj, 153, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[60], mod_consts[141], NULL, 2, 0, 0);
    codeobj_81f2d51d2bbfc71ccf99e4b74e783940 = MAKE_CODEOBJECT(module_filename_obj, 159, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[62], mod_consts[150], NULL, 4, 0, 0);
    codeobj_4e693a2ea224d0631a8c18238b4ebf63 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[81], mod_consts[151], NULL, 3, 0, 0);
    codeobj_fe93ecbf298919fdc595d9d1628e6d5d = MAKE_CODEOBJECT(module_filename_obj, 186, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[71], mod_consts[152], NULL, 3, 0, 0);
    codeobj_c66895d33d93c0fa52c8a1a4912be124 = MAKE_CODEOBJECT(module_filename_obj, 195, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[73], mod_consts[153], NULL, 2, 0, 0);
    codeobj_9d998c2029b85902d4ec37f2a3b51f6d = MAKE_CODEOBJECT(module_filename_obj, 337, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[119], mod_consts[154], NULL, 3, 0, 0);
    codeobj_6b10e544e97bbbcb0d6dd2c8a28b18d1 = MAKE_CODEOBJECT(module_filename_obj, 344, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[121], mod_consts[155], NULL, 2, 0, 0);
    codeobj_186008a220844ddc448be90744afdfde = MAKE_CODEOBJECT(module_filename_obj, 351, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[123], mod_consts[154], NULL, 3, 0, 0);
    codeobj_9354a0e6ccbcc36f6955133be3178d3c = MAKE_CODEOBJECT(module_filename_obj, 134, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[54], mod_consts[156], NULL, 2, 0, 0);
    codeobj_fe60ef8e01b7a05f36d26af44c3f2dbf = MAKE_CODEOBJECT(module_filename_obj, 140, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[56], mod_consts[155], NULL, 2, 0, 0);
    codeobj_5831183d37c657fa2beeb77cef27e0eb = MAKE_CODEOBJECT(module_filename_obj, 147, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[58], mod_consts[156], NULL, 2, 0, 0);
    codeobj_547d37a30ab16ca968a457cd214b603d = MAKE_CODEOBJECT(module_filename_obj, 201, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[75], mod_consts[153], NULL, 2, 0, 0);
    codeobj_56d6dd5586b55218aa51ad68ac11934c = MAKE_CODEOBJECT(module_filename_obj, 112, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[47], mod_consts[157], NULL, 3, 0, 0);
    codeobj_c9733436d22b7a793817e118e9d04884 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[43], mod_consts[157], NULL, 3, 0, 0);
    codeobj_37c48c3a9d84df61ad09274f1a8668bc = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[24], mod_consts[141], NULL, 2, 0, 0);
    codeobj_6df9e3d9e3353cb2de5983640c910614 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[29], mod_consts[141], NULL, 2, 0, 0);
    codeobj_c0dc300aa539b1d2b0f1c31782a6533e = MAKE_CODEOBJECT(module_filename_obj, 269, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[97], mod_consts[158], NULL, 2, 0, 0);
    codeobj_14e2099be33a680a2ea7bb8ef736f6d0 = MAKE_CODEOBJECT(module_filename_obj, 256, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[93], mod_consts[159], NULL, 3, 0, 0);
    codeobj_09b63e20bbc8912cbf468cd7d0d698c1 = MAKE_CODEOBJECT(module_filename_obj, 263, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[95], mod_consts[158], NULL, 2, 0, 0);
    codeobj_add75844065d0eec665da193f14219ab = MAKE_CODEOBJECT(module_filename_obj, 284, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[102], mod_consts[158], NULL, 2, 0, 0);
    codeobj_0fe23fc67d5c119f6baff544cc360ab7 = MAKE_CODEOBJECT(module_filename_obj, 290, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[104], mod_consts[158], NULL, 2, 0, 0);
    codeobj_17b54b18d56e9c11b509f3562223ac27 = MAKE_CODEOBJECT(module_filename_obj, 370, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[129], mod_consts[160], NULL, 2, 0, 0);
    codeobj_ea239667295543ec4c84ca285a34658e = MAKE_CODEOBJECT(module_filename_obj, 358, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[125], mod_consts[160], NULL, 2, 0, 0);
    codeobj_5657748246d6be28b2a07ceb40804944 = MAKE_CODEOBJECT(module_filename_obj, 364, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[127], mod_consts[160], NULL, 2, 0, 0);
    codeobj_1b5200222def458d4de949dbd5731403 = MAKE_CODEOBJECT(module_filename_obj, 177, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[68], mod_consts[160], NULL, 2, 0, 0);
    codeobj_7dce4adfa8dd47550730e88c3f3ef5ac = MAKE_CODEOBJECT(module_filename_obj, 165, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[64], mod_consts[160], NULL, 2, 0, 0);
    codeobj_881faa7978199c4a99bc3db05dc51100 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[66], mod_consts[160], NULL, 2, 0, 0);
    codeobj_25522d274fd00632b4107f25f3e4f1fb = MAKE_CODEOBJECT(module_filename_obj, 213, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[79], mod_consts[160], NULL, 2, 0, 0);
    codeobj_9ed8f4e57f63588c2ba84584f696299b = MAKE_CODEOBJECT(module_filename_obj, 207, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[77], mod_consts[160], NULL, 2, 0, 0);
    codeobj_d06fc9dfdb3dc53597d6205d4f06611a = MAKE_CODEOBJECT(module_filename_obj, 247, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[90], mod_consts[158], NULL, 2, 0, 0);
    codeobj_436beff9076a4541b5376b402156cc6d = MAKE_CODEOBJECT(module_filename_obj, 234, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[86], mod_consts[159], NULL, 3, 0, 0);
    codeobj_677d0e59927d3c95a52511ed72ae84fe = MAKE_CODEOBJECT(module_filename_obj, 241, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[88], mod_consts[158], NULL, 2, 0, 0);
    codeobj_e1448675e345bb1e98018fc5620fb582 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[100], mod_consts[158], NULL, 2, 0, 0);
    codeobj_fbd9f2b45518e1abe6cd1af5666a3457 = MAKE_CODEOBJECT(module_filename_obj, 296, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[106], mod_consts[158], NULL, 2, 0, 0);
    codeobj_b7e8f8eca877c5b255a54822c637ac33 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[49], mod_consts[160], NULL, 2, 0, 0);
    codeobj_cd979f78e9f6511a5718d750d82d038a = MAKE_CODEOBJECT(module_filename_obj, 125, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[51], mod_consts[160], NULL, 2, 0, 0);
    codeobj_eafcc374f742db37c830f26967de4103 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[38], mod_consts[141], NULL, 2, 0, 0);
    codeobj_94a6a2680c8b2e9ac5143a62370b53fa = MAKE_CODEOBJECT(module_filename_obj, 106, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[45], mod_consts[161], NULL, 2, 0, 0);
    codeobj_7cd2b009e35093bc10e170b0f324b449 = MAKE_CODEOBJECT(module_filename_obj, 328, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, mod_consts[116], mod_consts[162], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx();


// The module function definitions.

static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eafcc374f742db37c830f26967de4103,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[40],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_09ec92ba0e4eef47dad532a13f4dbbab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[43],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c9733436d22b7a793817e118e9d04884,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[45],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94a6a2680c8b2e9ac5143a62370b53fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[47],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56d6dd5586b55218aa51ad68ac11934c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[49],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7e8f8eca877c5b255a54822c637ac33,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[51],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cd979f78e9f6511a5718d750d82d038a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[54],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9354a0e6ccbcc36f6955133be3178d3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[56],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fe60ef8e01b7a05f36d26af44c3f2dbf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[58],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5831183d37c657fa2beeb77cef27e0eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[13],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8665aa34c53c264134f2fceda118f36b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[60],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1cfab317d9d307ea1d028c9add44876,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[62],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_81f2d51d2bbfc71ccf99e4b74e783940,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[64],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7dce4adfa8dd47550730e88c3f3ef5ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_881faa7978199c4a99bc3db05dc51100,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[68],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b5200222def458d4de949dbd5731403,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[71],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fe93ecbf298919fdc595d9d1628e6d5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c66895d33d93c0fa52c8a1a4912be124,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[75],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_547d37a30ab16ca968a457cd214b603d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[77],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ed8f4e57f63588c2ba84584f696299b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[79],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_25522d274fd00632b4107f25f3e4f1fb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[15],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5344699993c0bab74a0b28dc836f33c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[81],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4e693a2ea224d0631a8c18238b4ebf63,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[83],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a5ae59bb071919e8d6e038b0079027b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[86],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_436beff9076a4541b5376b402156cc6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_677d0e59927d3c95a52511ed72ae84fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d06fc9dfdb3dc53597d6205d4f06611a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[93],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_14e2099be33a680a2ea7bb8ef736f6d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[92],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[95],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_09b63e20bbc8912cbf468cd7d0d698c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[97],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c0dc300aa539b1d2b0f1c31782a6533e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[96],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1448675e345bb1e98018fc5620fb582,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[102],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_add75844065d0eec665da193f14219ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[17],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a37556751a9537a29c9040cb14251367,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[104],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0fe23fc67d5c119f6baff544cc360ab7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fbd9f2b45518e1abe6cd1af5666a3457,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e7439bdbcb04c5bd0f2d4cb13ad4b5f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[110],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f88ce32b27c330cc753017ca0dc27666,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4852fb91e5cce127aaa1e0bce2846730,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8380c416159cd4c442456980dfbfc3fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[113],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[116],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7cd2b009e35093bc10e170b0f324b449,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[119],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d998c2029b85902d4ec37f2a3b51f6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b10e544e97bbbcb0d6dd2c8a28b18d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_186008a220844ddc448be90744afdfde,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[122],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[24],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_37c48c3a9d84df61ad09274f1a8668bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[125],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ea239667295543ec4c84ca285a34658e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5657748246d6be28b2a07ceb40804944,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[129],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_17b54b18d56e9c11b509f3562223ac27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[128],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[132],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_617c06f42ac13d9cfe7cc30ba48d1770,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[134],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_25b0fe59057329c899ea15733a8ee0d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[137],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e311bdf52d588cee5cb119b6c4a1cf77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[26],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b9b6f8142c07bed42cb97a7d5b26af5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[29],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6df9e3d9e3353cb2de5983640c910614,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[31],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ff557e7125fe0bd026d4145bee2bb2ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[34],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8ae85a9706a5b065c5425268944b2fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0082be0bcd41f3f156aa0711a531ae0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[30],
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

function_impl_code functable_cryptography$hazmat$backends$interfaces[] = {
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
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
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

    function_impl_code *current = functable_cryptography$hazmat$backends$interfaces;
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

    if (offset > sizeof(functable_cryptography$hazmat$backends$interfaces) || offset < 0) {
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
        functable_cryptography$hazmat$backends$interfaces[offset],
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
        module_cryptography$hazmat$backends$interfaces,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.hazmat.backends.interfaces";

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$hazmat$backends$interfaces = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.backends.interfaces: Skipping module init, already done.\n");
#endif

        return module_cryptography$hazmat$backends$interfaces;
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
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$backends$interfaces\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$backends$interfaces = MODULE_DICT(module_cryptography$hazmat$backends$interfaces);

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
        moduledict_cryptography$hazmat$backends$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$interfaces);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$backends$interfaces);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
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
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_12__base = NULL;
    PyObject *tmp_select_metaclass_13__base = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_41ca7abd8cc5164d1dbe6e200b93f46b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_d4b278638be1754ab59f384c9990a1fc_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d4b278638be1754ab59f384c9990a1fc_2 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34 = NULL;
    struct Nuitka_FrameObject *frame_9be1057af690e13e248810ff31319b3f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9be1057af690e13e248810ff31319b3f_3 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49 = NULL;
    struct Nuitka_FrameObject *frame_47639912bfe29323d906426f93e8a663_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_47639912bfe29323d906426f93e8a663_4 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65 = NULL;
    struct Nuitka_FrameObject *frame_fd3c70d1052b30e85fb647627e4cfa97_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80 = NULL;
    struct Nuitka_FrameObject *frame_79c0f21329a60cad59005b62ee33a1e0_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_79c0f21329a60cad59005b62ee33a1e0_6 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98 = NULL;
    struct Nuitka_FrameObject *frame_6741261e452ece5cc6c61b41cf20d735_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6741261e452ece5cc6c61b41cf20d735_7 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133 = NULL;
    struct Nuitka_FrameObject *frame_8e4fc04f5250294da297315bbc54406e_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e4fc04f5250294da297315bbc54406e_8 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185 = NULL;
    struct Nuitka_FrameObject *frame_fafc709c52757304988d7b0e850f0397_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fafc709c52757304988d7b0e850f0397_9 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233 = NULL;
    struct Nuitka_FrameObject *frame_a22c87ff0f30db8cac96f4f4385eac48_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255 = NULL;
    struct Nuitka_FrameObject *frame_db81b222324f2e79233d6775d1c4424d_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_db81b222324f2e79233d6775d1c4424d_11 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277 = NULL;
    struct Nuitka_FrameObject *frame_f2efa329e337c41e762f231f7743f0dd_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f2efa329e337c41e762f231f7743f0dd_12 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336 = NULL;
    struct Nuitka_FrameObject *frame_c7f98d901008ea311ea7a6aa63afd663_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c7f98d901008ea311ea7a6aa63afd663_13 = NULL;
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
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391 = NULL;
    struct Nuitka_FrameObject *frame_6149742c9e0cee83721633d84d3c690b_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6149742c9e0cee83721633d84d3c690b_14 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
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
    frame_41ca7abd8cc5164d1dbe6e200b93f46b = MAKE_MODULE_FRAME(codeobj_41ca7abd8cc5164d1dbe6e200b93f46b, module_cryptography$hazmat$backends$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_41ca7abd8cc5164d1dbe6e200b93f46b);
    assert(Py_REFCNT(frame_41ca7abd8cc5164d1dbe6e200b93f46b) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[4]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[5]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_6);
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
        tmp_name_name_1 = mod_consts[6];
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[7];
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[8];
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[7];
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_d4b278638be1754ab59f384c9990a1fc_2)) {
            Py_XDECREF(cache_frame_d4b278638be1754ab59f384c9990a1fc_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d4b278638be1754ab59f384c9990a1fc_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d4b278638be1754ab59f384c9990a1fc_2 = MAKE_FUNCTION_FRAME(codeobj_d4b278638be1754ab59f384c9990a1fc, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d4b278638be1754ab59f384c9990a1fc_2->m_type_description == NULL);
        frame_d4b278638be1754ab59f384c9990a1fc_2 = cache_frame_d4b278638be1754ab59f384c9990a1fc_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d4b278638be1754ab59f384c9990a1fc_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d4b278638be1754ab59f384c9990a1fc_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            assert(!(tmp_called_instance_1 == NULL));


            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported();

            frame_d4b278638be1754ab59f384c9990a1fc_2->m_frame.f_lineno = 14;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[11], tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx();

            frame_d4b278638be1754ab59f384c9990a1fc_2->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[11], tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }


            tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx();

            frame_d4b278638be1754ab59f384c9990a1fc_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[11], tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d4b278638be1754ab59f384c9990a1fc_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d4b278638be1754ab59f384c9990a1fc_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d4b278638be1754ab59f384c9990a1fc_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d4b278638be1754ab59f384c9990a1fc_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d4b278638be1754ab59f384c9990a1fc_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d4b278638be1754ab59f384c9990a1fc_2,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_d4b278638be1754ab59f384c9990a1fc_2 == cache_frame_d4b278638be1754ab59f384c9990a1fc_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d4b278638be1754ab59f384c9990a1fc_2);
            cache_frame_d4b278638be1754ab59f384c9990a1fc_2 = NULL;
        }

        assertFrameObject(frame_d4b278638be1754ab59f384c9990a1fc_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_assign_source_9 = locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13);
        locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13);
        locals_cryptography$hazmat$backends$interfaces$$$class_1_CipherBackend_13 = NULL;
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
        exception_lineno = 13;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = mod_consts[18];
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
        tmp_key_name_2 = mod_consts[18];
        tmp_assign_source_10 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_1__base == NULL);
            Py_INCREF(tmp_assign_source_11);
            tmp_select_metaclass_1__base = tmp_assign_source_11;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_expression_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

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
            tmp_assign_source_10 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_10 == NULL));
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
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_4 = mod_consts[19];
        tmp_args_element_name_5 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_6 = tmp_class_creation_1__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_8;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[21]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[22]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 12;

            goto try_except_handler_2;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 12;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_args_element_name_8 = tmp_class_creation_1__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 12;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert(old != NULL);
            tmp_class_creation_1__class = tmp_assign_source_13;
            Py_DECREF(old);
        }

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

    Py_XDECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34 = tmp_set_locals_2;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_9be1057af690e13e248810ff31319b3f_3)) {
            Py_XDECREF(cache_frame_9be1057af690e13e248810ff31319b3f_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9be1057af690e13e248810ff31319b3f_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9be1057af690e13e248810ff31319b3f_3 = MAKE_FUNCTION_FRAME(codeobj_9be1057af690e13e248810ff31319b3f, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9be1057af690e13e248810ff31319b3f_3->m_type_description == NULL);
        frame_9be1057af690e13e248810ff31319b3f_3 = cache_frame_9be1057af690e13e248810ff31319b3f_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9be1057af690e13e248810ff31319b3f_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9be1057af690e13e248810ff31319b3f_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported();

            frame_9be1057af690e13e248810ff31319b3f_3->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[11], tmp_args_element_name_9);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_10;
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }


            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx();

            frame_9be1057af690e13e248810ff31319b3f_3->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[11], tmp_args_element_name_10);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9be1057af690e13e248810ff31319b3f_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9be1057af690e13e248810ff31319b3f_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9be1057af690e13e248810ff31319b3f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9be1057af690e13e248810ff31319b3f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9be1057af690e13e248810ff31319b3f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9be1057af690e13e248810ff31319b3f_3,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_9be1057af690e13e248810ff31319b3f_3 == cache_frame_9be1057af690e13e248810ff31319b3f_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9be1057af690e13e248810ff31319b3f_3);
            cache_frame_9be1057af690e13e248810ff31319b3f_3 = NULL;
        }

        assertFrameObject(frame_9be1057af690e13e248810ff31319b3f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        tmp_assign_source_15 = locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34);
        locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34);
        locals_cryptography$hazmat$backends$interfaces$$$class_2_HashBackend_34 = NULL;
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
        exception_lineno = 34;
        goto try_except_handler_6;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = mod_consts[18];
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
        tmp_key_name_4 = mod_consts[18];
        tmp_assign_source_16 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_2__base == NULL);
            Py_INCREF(tmp_assign_source_17);
            tmp_select_metaclass_2__base = tmp_assign_source_17;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_4;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_expression_name_4 = tmp_select_metaclass_2__base;
            tmp_assign_source_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_4);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

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
            tmp_assign_source_16 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_16 == NULL));
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
        tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_4 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_11 = mod_consts[27];
        tmp_args_element_name_12 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_13 = tmp_class_creation_2__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_15;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[21]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[22]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 33;

            goto try_except_handler_6;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 33;
        tmp_called_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_args_element_name_15 = tmp_class_creation_2__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 33;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert(old != NULL);
            tmp_class_creation_2__class = tmp_assign_source_19;
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
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_20 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49 = tmp_set_locals_3;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_47639912bfe29323d906426f93e8a663_4)) {
            Py_XDECREF(cache_frame_47639912bfe29323d906426f93e8a663_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_47639912bfe29323d906426f93e8a663_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_47639912bfe29323d906426f93e8a663_4 = MAKE_FUNCTION_FRAME(codeobj_47639912bfe29323d906426f93e8a663, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_47639912bfe29323d906426f93e8a663_4->m_type_description == NULL);
        frame_47639912bfe29323d906426f93e8a663_4 = cache_frame_47639912bfe29323d906426f93e8a663_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_47639912bfe29323d906426f93e8a663_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_47639912bfe29323d906426f93e8a663_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_16;
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_4;
            }


            tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported();

            frame_47639912bfe29323d906426f93e8a663_4->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[11], tmp_args_element_name_16);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_17;
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_4;
            }


            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx();

            frame_47639912bfe29323d906426f93e8a663_4->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[11], tmp_args_element_name_17);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_47639912bfe29323d906426f93e8a663_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_47639912bfe29323d906426f93e8a663_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_47639912bfe29323d906426f93e8a663_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_47639912bfe29323d906426f93e8a663_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_47639912bfe29323d906426f93e8a663_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_47639912bfe29323d906426f93e8a663_4,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_47639912bfe29323d906426f93e8a663_4 == cache_frame_47639912bfe29323d906426f93e8a663_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_47639912bfe29323d906426f93e8a663_4);
            cache_frame_47639912bfe29323d906426f93e8a663_4 = NULL;
        }

        assertFrameObject(frame_47639912bfe29323d906426f93e8a663_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        tmp_assign_source_21 = locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49);
        locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49);
        locals_cryptography$hazmat$backends$interfaces$$$class_3_HMACBackend_49 = NULL;
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
        exception_lineno = 49;
        goto try_except_handler_10;
        outline_result_5:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_5;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        tmp_key_name_5 = mod_consts[18];
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
        tmp_key_name_6 = mod_consts[18];
        tmp_assign_source_22 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_3__base == NULL);
            Py_INCREF(tmp_assign_source_23);
            tmp_select_metaclass_3__base = tmp_assign_source_23;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_7;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_expression_name_7 = tmp_select_metaclass_3__base;
            tmp_assign_source_22 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_7);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

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
            tmp_assign_source_22 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_22 == NULL));
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
        tmp_class_creation_3__metaclass = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_18 = mod_consts[32];
        tmp_args_element_name_19 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_name_20 = tmp_class_creation_3__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_22;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[21]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_args_element_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[22]);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 48;

            goto try_except_handler_10;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 48;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_args_element_name_22 = tmp_class_creation_3__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 48;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert(old != NULL);
            tmp_class_creation_3__class = tmp_assign_source_25;
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
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_26 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_26);
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
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65 = tmp_set_locals_4;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5)) {
            Py_XDECREF(cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5 = MAKE_FUNCTION_FRAME(codeobj_fd3c70d1052b30e85fb647627e4cfa97, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5->m_type_description == NULL);
        frame_fd3c70d1052b30e85fb647627e4cfa97_5 = cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fd3c70d1052b30e85fb647627e4cfa97_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fd3c70d1052b30e85fb647627e4cfa97_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_23;
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported();

            frame_fd3c70d1052b30e85fb647627e4cfa97_5->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[11], tmp_args_element_name_23);
            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_24;
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto frame_exception_exit_5;
            }


            tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx();

            frame_fd3c70d1052b30e85fb647627e4cfa97_5->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[11], tmp_args_element_name_24);
            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fd3c70d1052b30e85fb647627e4cfa97_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fd3c70d1052b30e85fb647627e4cfa97_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fd3c70d1052b30e85fb647627e4cfa97_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fd3c70d1052b30e85fb647627e4cfa97_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fd3c70d1052b30e85fb647627e4cfa97_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fd3c70d1052b30e85fb647627e4cfa97_5,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_fd3c70d1052b30e85fb647627e4cfa97_5 == cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5);
            cache_frame_fd3c70d1052b30e85fb647627e4cfa97_5 = NULL;
        }

        assertFrameObject(frame_fd3c70d1052b30e85fb647627e4cfa97_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        tmp_assign_source_27 = locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65);
        locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65);
        locals_cryptography$hazmat$backends$interfaces$$$class_4_CMACBackend_65 = NULL;
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
        exception_lineno = 65;
        goto try_except_handler_14;
        outline_result_7:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = mod_consts[18];
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
        tmp_key_name_8 = mod_consts[18];
        tmp_assign_source_28 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_14;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_4__base == NULL);
            Py_INCREF(tmp_assign_source_29);
            tmp_select_metaclass_4__base = tmp_assign_source_29;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_10;
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_expression_name_10 = tmp_select_metaclass_4__base;
            tmp_assign_source_28 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_10);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

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
            tmp_assign_source_28 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_assign_source_28 == NULL));
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
        tmp_class_creation_4__metaclass = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_name_10 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_25 = mod_consts[36];
        tmp_args_element_name_26 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_name_27 = tmp_class_creation_4__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_29;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_14;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[21]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_14;
        }
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 64;

            goto try_except_handler_14;
        }
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[22]);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 64;

            goto try_except_handler_14;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 64;
        tmp_called_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_14;
        }
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_args_element_name_29 = tmp_class_creation_4__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 64;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert(old != NULL);
            tmp_class_creation_4__class = tmp_assign_source_31;
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
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_32 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_32);
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
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80 = tmp_set_locals_5;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_79c0f21329a60cad59005b62ee33a1e0_6)) {
            Py_XDECREF(cache_frame_79c0f21329a60cad59005b62ee33a1e0_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_79c0f21329a60cad59005b62ee33a1e0_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_79c0f21329a60cad59005b62ee33a1e0_6 = MAKE_FUNCTION_FRAME(codeobj_79c0f21329a60cad59005b62ee33a1e0, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_79c0f21329a60cad59005b62ee33a1e0_6->m_type_description == NULL);
        frame_79c0f21329a60cad59005b62ee33a1e0_6 = cache_frame_79c0f21329a60cad59005b62ee33a1e0_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_79c0f21329a60cad59005b62ee33a1e0_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_79c0f21329a60cad59005b62ee33a1e0_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_30;
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_6;
            }


            tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported();

            frame_79c0f21329a60cad59005b62ee33a1e0_6->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[11], tmp_args_element_name_30);
            Py_DECREF(tmp_args_element_name_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_name_31;
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto frame_exception_exit_6;
            }


            tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac();

            frame_79c0f21329a60cad59005b62ee33a1e0_6->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[11], tmp_args_element_name_31);
            Py_DECREF(tmp_args_element_name_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_79c0f21329a60cad59005b62ee33a1e0_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_79c0f21329a60cad59005b62ee33a1e0_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_79c0f21329a60cad59005b62ee33a1e0_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_79c0f21329a60cad59005b62ee33a1e0_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_79c0f21329a60cad59005b62ee33a1e0_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_79c0f21329a60cad59005b62ee33a1e0_6,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_79c0f21329a60cad59005b62ee33a1e0_6 == cache_frame_79c0f21329a60cad59005b62ee33a1e0_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_79c0f21329a60cad59005b62ee33a1e0_6);
            cache_frame_79c0f21329a60cad59005b62ee33a1e0_6 = NULL;
        }

        assertFrameObject(frame_79c0f21329a60cad59005b62ee33a1e0_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_19;
        skip_nested_handling_5:;
        tmp_assign_source_33 = locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80);
        locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80);
        locals_cryptography$hazmat$backends$interfaces$$$class_5_PBKDF2HMACBackend_80 = NULL;
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
        exception_lineno = 80;
        goto try_except_handler_18;
        outline_result_9:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = mod_consts[18];
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
        tmp_key_name_10 = mod_consts[18];
        tmp_assign_source_34 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_5__base == NULL);
            Py_INCREF(tmp_assign_source_35);
            tmp_select_metaclass_5__base = tmp_assign_source_35;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_13;
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_expression_name_13 = tmp_select_metaclass_5__base;
            tmp_assign_source_34 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_13);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

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
            tmp_assign_source_34 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_assign_source_34 == NULL));
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
        tmp_class_creation_5__metaclass = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_name_13 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_32 = mod_consts[41];
        tmp_args_element_name_33 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_name_34 = tmp_class_creation_5__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, call_args);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_36;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[21]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 79;

            goto try_except_handler_18;
        }
        tmp_args_element_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[22]);
        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 79;

            goto try_except_handler_18;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 79;
        tmp_called_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_35);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_args_element_name_36 = tmp_class_creation_5__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 79;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_class_creation_5__class;
            assert(old != NULL);
            tmp_class_creation_5__class = tmp_assign_source_37;
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
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_38 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_38);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98 = tmp_set_locals_6;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_6741261e452ece5cc6c61b41cf20d735_7)) {
            Py_XDECREF(cache_frame_6741261e452ece5cc6c61b41cf20d735_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6741261e452ece5cc6c61b41cf20d735_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6741261e452ece5cc6c61b41cf20d735_7 = MAKE_FUNCTION_FRAME(codeobj_6741261e452ece5cc6c61b41cf20d735, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6741261e452ece5cc6c61b41cf20d735_7->m_type_description == NULL);
        frame_6741261e452ece5cc6c61b41cf20d735_7 = cache_frame_6741261e452ece5cc6c61b41cf20d735_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6741261e452ece5cc6c61b41cf20d735_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6741261e452ece5cc6c61b41cf20d735_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_name_37;
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key();

            frame_6741261e452ece5cc6c61b41cf20d735_7->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[11], tmp_args_element_name_37);
            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_name_38;
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported();

            frame_6741261e452ece5cc6c61b41cf20d735_7->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[11], tmp_args_element_name_38);
            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_name_39;
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported();

            frame_6741261e452ece5cc6c61b41cf20d735_7->m_frame.f_lineno = 112;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[11], tmp_args_element_name_39);
            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_name_40;
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers();

            frame_6741261e452ece5cc6c61b41cf20d735_7->m_frame.f_lineno = 119;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[11], tmp_args_element_name_40);
            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_name_41;
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto frame_exception_exit_7;
            }


            tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers();

            frame_6741261e452ece5cc6c61b41cf20d735_7->m_frame.f_lineno = 125;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[11], tmp_args_element_name_41);
            Py_DECREF(tmp_args_element_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6741261e452ece5cc6c61b41cf20d735_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6741261e452ece5cc6c61b41cf20d735_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6741261e452ece5cc6c61b41cf20d735_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6741261e452ece5cc6c61b41cf20d735_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6741261e452ece5cc6c61b41cf20d735_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6741261e452ece5cc6c61b41cf20d735_7,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_6741261e452ece5cc6c61b41cf20d735_7 == cache_frame_6741261e452ece5cc6c61b41cf20d735_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6741261e452ece5cc6c61b41cf20d735_7);
            cache_frame_6741261e452ece5cc6c61b41cf20d735_7 = NULL;
        }

        assertFrameObject(frame_6741261e452ece5cc6c61b41cf20d735_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;
        tmp_assign_source_39 = locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98);
        locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98);
        locals_cryptography$hazmat$backends$interfaces$$$class_6_RSABackend_98 = NULL;
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
        exception_lineno = 98;
        goto try_except_handler_22;
        outline_result_11:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = mod_consts[18];
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
        tmp_key_name_12 = mod_consts[18];
        tmp_assign_source_40 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_22;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_6__base == NULL);
            Py_INCREF(tmp_assign_source_41);
            tmp_select_metaclass_6__base = tmp_assign_source_41;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_16;
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_expression_name_16 = tmp_select_metaclass_6__base;
            tmp_assign_source_40 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_16);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

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
            tmp_assign_source_40 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_assign_source_40 == NULL));
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
        tmp_class_creation_6__metaclass = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_name_16 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_42 = mod_consts[52];
        tmp_args_element_name_43 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_name_44 = tmp_class_creation_6__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_16, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_46;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_22;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[21]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_22;
        }
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 97;

            goto try_except_handler_22;
        }
        tmp_args_element_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[22]);
        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 97;

            goto try_except_handler_22;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 97;
        tmp_called_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_45);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_22;
        }
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_args_element_name_46 = tmp_class_creation_6__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 97;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_17);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_class_creation_6__class;
            assert(old != NULL);
            tmp_class_creation_6__class = tmp_assign_source_43;
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
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_44 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_44);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133 = tmp_set_locals_7;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_8e4fc04f5250294da297315bbc54406e_8)) {
            Py_XDECREF(cache_frame_8e4fc04f5250294da297315bbc54406e_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8e4fc04f5250294da297315bbc54406e_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8e4fc04f5250294da297315bbc54406e_8 = MAKE_FUNCTION_FRAME(codeobj_8e4fc04f5250294da297315bbc54406e, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8e4fc04f5250294da297315bbc54406e_8->m_type_description == NULL);
        frame_8e4fc04f5250294da297315bbc54406e_8 = cache_frame_8e4fc04f5250294da297315bbc54406e_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8e4fc04f5250294da297315bbc54406e_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8e4fc04f5250294da297315bbc54406e_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_name_47;
            tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_17 == NULL)) {
                tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[11], tmp_args_element_name_47);
            Py_DECREF(tmp_args_element_name_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_name_48;
            tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_18 == NULL)) {
                tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[11], tmp_args_element_name_48);
            Py_DECREF(tmp_args_element_name_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_name_49;
            tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_19 == NULL)) {
                tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_49 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 147;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[11], tmp_args_element_name_49);
            Py_DECREF(tmp_args_element_name_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_name_50;
            tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_20 == NULL)) {
                tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_50 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[11], tmp_args_element_name_50);
            Py_DECREF(tmp_args_element_name_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_name_51;
            tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_21 == NULL)) {
                tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_51 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 159;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[11], tmp_args_element_name_51);
            Py_DECREF(tmp_args_element_name_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_name_52;
            tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_22 == NULL)) {
                tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_52 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 165;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[11], tmp_args_element_name_52);
            Py_DECREF(tmp_args_element_name_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_name_53;
            tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_23 == NULL)) {
                tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 171;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[11], tmp_args_element_name_53);
            Py_DECREF(tmp_args_element_name_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_name_54;
            tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_24 == NULL)) {
                tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto frame_exception_exit_8;
            }


            tmp_args_element_name_54 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers();

            frame_8e4fc04f5250294da297315bbc54406e_8->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[11], tmp_args_element_name_54);
            Py_DECREF(tmp_args_element_name_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8e4fc04f5250294da297315bbc54406e_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8e4fc04f5250294da297315bbc54406e_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8e4fc04f5250294da297315bbc54406e_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8e4fc04f5250294da297315bbc54406e_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8e4fc04f5250294da297315bbc54406e_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8e4fc04f5250294da297315bbc54406e_8,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_8e4fc04f5250294da297315bbc54406e_8 == cache_frame_8e4fc04f5250294da297315bbc54406e_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8e4fc04f5250294da297315bbc54406e_8);
            cache_frame_8e4fc04f5250294da297315bbc54406e_8 = NULL;
        }

        assertFrameObject(frame_8e4fc04f5250294da297315bbc54406e_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_27;
        skip_nested_handling_7:;
        tmp_assign_source_45 = locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133);
        locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133 = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133);
        locals_cryptography$hazmat$backends$interfaces$$$class_7_DSABackend_133 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 133;
        goto try_except_handler_26;
        outline_result_13:;
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = mod_consts[18];
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
        tmp_key_name_14 = mod_consts[18];
        tmp_assign_source_46 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_26;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_7__base == NULL);
            Py_INCREF(tmp_assign_source_47);
            tmp_select_metaclass_7__base = tmp_assign_source_47;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_19;
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_expression_name_19 = tmp_select_metaclass_7__base;
            tmp_assign_source_46 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_19);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto try_except_handler_29;
            }
            goto try_return_handler_28;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF(exception_keeper_type_21);
            Py_XDECREF(exception_keeper_value_21);
            Py_XDECREF(exception_keeper_tb_21);
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_type_arg_7 = tmp_select_metaclass_7__base;
            tmp_assign_source_46 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_assign_source_46 == NULL));
            goto try_return_handler_28;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_XDECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        goto outline_result_14;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_14:;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_name_19 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_55 = mod_consts[69];
        tmp_args_element_name_56 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_name_57 = tmp_class_creation_7__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, call_args);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_59;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[21]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 132;

            goto try_except_handler_26;
        }
        tmp_args_element_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[22]);
        if (tmp_args_element_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 132;

            goto try_except_handler_26;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 132;
        tmp_called_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_58);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_58);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_args_element_name_59 = tmp_class_creation_7__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 132;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_59);
        Py_DECREF(tmp_called_name_20);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert(old != NULL);
            tmp_class_creation_7__class = tmp_assign_source_49;
            Py_DECREF(old);
        }

    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__class);
    tmp_class_creation_7__class = NULL;
    Py_XDECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_50 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_50);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185 = tmp_set_locals_8;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_fafc709c52757304988d7b0e850f0397_9)) {
            Py_XDECREF(cache_frame_fafc709c52757304988d7b0e850f0397_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fafc709c52757304988d7b0e850f0397_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fafc709c52757304988d7b0e850f0397_9 = MAKE_FUNCTION_FRAME(codeobj_fafc709c52757304988d7b0e850f0397, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fafc709c52757304988d7b0e850f0397_9->m_type_description == NULL);
        frame_fafc709c52757304988d7b0e850f0397_9 = cache_frame_fafc709c52757304988d7b0e850f0397_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fafc709c52757304988d7b0e850f0397_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fafc709c52757304988d7b0e850f0397_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_name_60;
            tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_25 == NULL)) {
                tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_60 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[11], tmp_args_element_name_60);
            Py_DECREF(tmp_args_element_name_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_name_61;
            tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_26 == NULL)) {
                tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_61 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 195;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[11], tmp_args_element_name_61);
            Py_DECREF(tmp_args_element_name_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_name_62;
            tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_27 == NULL)) {
                tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_62 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[11], tmp_args_element_name_62);
            Py_DECREF(tmp_args_element_name_62);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_name_63;
            tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_28 == NULL)) {
                tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_63 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[11], tmp_args_element_name_63);
            Py_DECREF(tmp_args_element_name_63);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_name_64;
            tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_29 == NULL)) {
                tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_64 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[11], tmp_args_element_name_64);
            Py_DECREF(tmp_args_element_name_64);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_name_65;
            tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_30 == NULL)) {
                tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_65 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[11], tmp_args_element_name_65);
            Py_DECREF(tmp_args_element_name_65);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_name_66;
            tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_31 == NULL)) {
                tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto frame_exception_exit_9;
            }


            tmp_args_element_name_66 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key();

            frame_fafc709c52757304988d7b0e850f0397_9->m_frame.f_lineno = 225;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[11], tmp_args_element_name_66);
            Py_DECREF(tmp_args_element_name_66);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fafc709c52757304988d7b0e850f0397_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fafc709c52757304988d7b0e850f0397_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fafc709c52757304988d7b0e850f0397_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fafc709c52757304988d7b0e850f0397_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fafc709c52757304988d7b0e850f0397_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fafc709c52757304988d7b0e850f0397_9,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_fafc709c52757304988d7b0e850f0397_9 == cache_frame_fafc709c52757304988d7b0e850f0397_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fafc709c52757304988d7b0e850f0397_9);
            cache_frame_fafc709c52757304988d7b0e850f0397_9 = NULL;
        }

        assertFrameObject(frame_fafc709c52757304988d7b0e850f0397_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_31;
        skip_nested_handling_8:;
        tmp_assign_source_51 = locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185);
        locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185 = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185);
        locals_cryptography$hazmat$backends$interfaces$$$class_8_EllipticCurveBackend_185 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 185;
        goto try_except_handler_30;
        outline_result_15:;
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = mod_consts[18];
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
        tmp_key_name_16 = mod_consts[18];
        tmp_assign_source_52 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_16, tmp_key_name_16);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_30;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_8__base == NULL);
            Py_INCREF(tmp_assign_source_53);
            tmp_select_metaclass_8__base = tmp_assign_source_53;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_22;
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_expression_name_22 = tmp_select_metaclass_8__base;
            tmp_assign_source_52 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_22);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_33;
            }
            goto try_return_handler_32;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_8;
            Py_DECREF(exception_keeper_type_24);
            Py_XDECREF(exception_keeper_value_24);
            Py_XDECREF(exception_keeper_tb_24);
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_type_arg_8 = tmp_select_metaclass_8__base;
            tmp_assign_source_52 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_assign_source_52 == NULL));
            goto try_return_handler_32;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_XDECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        goto outline_result_16;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_16:;
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_name_22 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_67 = mod_consts[84];
        tmp_args_element_name_68 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_name_69 = tmp_class_creation_8__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, call_args);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_23;
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_element_name_71;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_30;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[21]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_30;
        }
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 184;

            goto try_except_handler_30;
        }
        tmp_args_element_name_70 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[22]);
        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 184;

            goto try_except_handler_30;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 184;
        tmp_called_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_70);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_70);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_30;
        }
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_args_element_name_71 = tmp_class_creation_8__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 184;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_71);
        Py_DECREF(tmp_called_name_23);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert(old != NULL);
            tmp_class_creation_8__class = tmp_assign_source_55;
            Py_DECREF(old);
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__class);
    tmp_class_creation_8__class = NULL;
    Py_XDECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_56 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_56);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233 = tmp_set_locals_9;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10)) {
            Py_XDECREF(cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10 = MAKE_FUNCTION_FRAME(codeobj_a22c87ff0f30db8cac96f4f4385eac48, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10->m_type_description == NULL);
        frame_a22c87ff0f30db8cac96f4f4385eac48_10 = cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a22c87ff0f30db8cac96f4f4385eac48_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a22c87ff0f30db8cac96f4f4385eac48_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_name_72;
            tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_32 == NULL)) {
                tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto frame_exception_exit_10;
            }


            tmp_args_element_name_72 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key();

            frame_a22c87ff0f30db8cac96f4f4385eac48_10->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[11], tmp_args_element_name_72);
            Py_DECREF(tmp_args_element_name_72);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_name_73;
            tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_33 == NULL)) {
                tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto frame_exception_exit_10;
            }


            tmp_args_element_name_73 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key();

            frame_a22c87ff0f30db8cac96f4f4385eac48_10->m_frame.f_lineno = 241;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[11], tmp_args_element_name_73);
            Py_DECREF(tmp_args_element_name_73);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_name_74;
            tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_34 == NULL)) {
                tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto frame_exception_exit_10;
            }


            tmp_args_element_name_74 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters();

            frame_a22c87ff0f30db8cac96f4f4385eac48_10->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[11], tmp_args_element_name_74);
            Py_DECREF(tmp_args_element_name_74);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a22c87ff0f30db8cac96f4f4385eac48_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a22c87ff0f30db8cac96f4f4385eac48_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a22c87ff0f30db8cac96f4f4385eac48_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a22c87ff0f30db8cac96f4f4385eac48_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a22c87ff0f30db8cac96f4f4385eac48_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a22c87ff0f30db8cac96f4f4385eac48_10,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_a22c87ff0f30db8cac96f4f4385eac48_10 == cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10);
            cache_frame_a22c87ff0f30db8cac96f4f4385eac48_10 = NULL;
        }

        assertFrameObject(frame_a22c87ff0f30db8cac96f4f4385eac48_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_35;
        skip_nested_handling_9:;
        tmp_assign_source_57 = locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233);
        locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233 = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233);
        locals_cryptography$hazmat$backends$interfaces$$$class_9_PEMSerializationBackend_233 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 233;
        goto try_except_handler_34;
        outline_result_17:;
        assert(tmp_class_creation_9__class_dict == NULL);
        tmp_class_creation_9__class_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = mod_consts[18];
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
        tmp_key_name_18 = mod_consts[18];
        tmp_assign_source_58 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_18, tmp_key_name_18);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto try_except_handler_34;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_9__base == NULL);
            Py_INCREF(tmp_assign_source_59);
            tmp_select_metaclass_9__base = tmp_assign_source_59;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_25;
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_expression_name_25 = tmp_select_metaclass_9__base;
            tmp_assign_source_58 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_25);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto try_except_handler_37;
            }
            goto try_return_handler_36;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_9;
            Py_DECREF(exception_keeper_type_27);
            Py_XDECREF(exception_keeper_value_27);
            Py_XDECREF(exception_keeper_tb_27);
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_type_arg_9 = tmp_select_metaclass_9__base;
            tmp_assign_source_58 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_assign_source_58 == NULL));
            goto try_return_handler_36;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_XDECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        goto outline_result_18;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_18:;
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_args_element_name_77;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_called_name_25 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_75 = mod_consts[91];
        tmp_args_element_name_76 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_args_element_name_77 = tmp_class_creation_9__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_77};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_25, call_args);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_9__class == NULL);
        tmp_class_creation_9__class = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_79;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_34;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[21]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_34;
        }
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 232;

            goto try_except_handler_34;
        }
        tmp_args_element_name_78 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[22]);
        if (tmp_args_element_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 232;

            goto try_except_handler_34;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 232;
        tmp_called_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_78);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_element_name_78);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_34;
        }
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_args_element_name_79 = tmp_class_creation_9__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 232;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_79);
        Py_DECREF(tmp_called_name_26);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_class_creation_9__class;
            assert(old != NULL);
            tmp_class_creation_9__class = tmp_assign_source_61;
            Py_DECREF(old);
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__class);
    tmp_class_creation_9__class = NULL;
    Py_XDECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_assign_source_62 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_62);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_10;
            tmp_set_locals_10 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255 = tmp_set_locals_10;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_db81b222324f2e79233d6775d1c4424d_11)) {
            Py_XDECREF(cache_frame_db81b222324f2e79233d6775d1c4424d_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_db81b222324f2e79233d6775d1c4424d_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_db81b222324f2e79233d6775d1c4424d_11 = MAKE_FUNCTION_FRAME(codeobj_db81b222324f2e79233d6775d1c4424d, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_db81b222324f2e79233d6775d1c4424d_11->m_type_description == NULL);
        frame_db81b222324f2e79233d6775d1c4424d_11 = cache_frame_db81b222324f2e79233d6775d1c4424d_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_db81b222324f2e79233d6775d1c4424d_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_db81b222324f2e79233d6775d1c4424d_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_name_80;
            tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_35 == NULL)) {
                tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto frame_exception_exit_11;
            }


            tmp_args_element_name_80 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key();

            frame_db81b222324f2e79233d6775d1c4424d_11->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_35, mod_consts[11], tmp_args_element_name_80);
            Py_DECREF(tmp_args_element_name_80);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_name_81;
            tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_36 == NULL)) {
                tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto frame_exception_exit_11;
            }


            tmp_args_element_name_81 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key();

            frame_db81b222324f2e79233d6775d1c4424d_11->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_36, mod_consts[11], tmp_args_element_name_81);
            Py_DECREF(tmp_args_element_name_81);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_name_82;
            tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_37 == NULL)) {
                tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto frame_exception_exit_11;
            }


            tmp_args_element_name_82 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters();

            frame_db81b222324f2e79233d6775d1c4424d_11->m_frame.f_lineno = 269;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_37, mod_consts[11], tmp_args_element_name_82);
            Py_DECREF(tmp_args_element_name_82);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_db81b222324f2e79233d6775d1c4424d_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_db81b222324f2e79233d6775d1c4424d_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_db81b222324f2e79233d6775d1c4424d_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_db81b222324f2e79233d6775d1c4424d_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_db81b222324f2e79233d6775d1c4424d_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_db81b222324f2e79233d6775d1c4424d_11,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_db81b222324f2e79233d6775d1c4424d_11 == cache_frame_db81b222324f2e79233d6775d1c4424d_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_db81b222324f2e79233d6775d1c4424d_11);
            cache_frame_db81b222324f2e79233d6775d1c4424d_11 = NULL;
        }

        assertFrameObject(frame_db81b222324f2e79233d6775d1c4424d_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_39;
        skip_nested_handling_10:;
        tmp_assign_source_63 = locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255);
        locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255 = NULL;
        goto outline_result_19;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255);
        locals_cryptography$hazmat$backends$interfaces$$$class_10_DERSerializationBackend_255 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 255;
        goto try_except_handler_38;
        outline_result_19:;
        assert(tmp_class_creation_10__class_dict == NULL);
        tmp_class_creation_10__class_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        tmp_key_name_19 = mod_consts[18];
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
        tmp_key_name_20 = mod_consts[18];
        tmp_assign_source_64 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_20, tmp_key_name_20);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_38;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_65;
            tmp_assign_source_65 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_10__base == NULL);
            Py_INCREF(tmp_assign_source_65);
            tmp_select_metaclass_10__base = tmp_assign_source_65;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_28;
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_expression_name_28 = tmp_select_metaclass_10__base;
            tmp_assign_source_64 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_28);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto try_except_handler_41;
            }
            goto try_return_handler_40;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_10;
            Py_DECREF(exception_keeper_type_30);
            Py_XDECREF(exception_keeper_value_30);
            Py_XDECREF(exception_keeper_tb_30);
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_type_arg_10 = tmp_select_metaclass_10__base;
            tmp_assign_source_64 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_assign_source_64 == NULL));
            goto try_return_handler_40;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_XDECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        goto outline_result_20;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_20:;
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_28;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_called_name_28 = tmp_class_creation_10__metaclass;
        tmp_args_element_name_83 = mod_consts[98];
        tmp_args_element_name_84 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_args_element_name_85 = tmp_class_creation_10__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_28, call_args);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_10__class == NULL);
        tmp_class_creation_10__class = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_29;
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_args_element_name_87;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_38;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[21]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_38;
        }
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 254;

            goto try_except_handler_38;
        }
        tmp_args_element_name_86 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[22]);
        if (tmp_args_element_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 254;

            goto try_except_handler_38;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 254;
        tmp_called_name_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_86);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_86);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_38;
        }
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_args_element_name_87 = tmp_class_creation_10__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 254;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_87);
        Py_DECREF(tmp_called_name_29);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_38;
        }
        {
            PyObject *old = tmp_class_creation_10__class;
            assert(old != NULL);
            tmp_class_creation_10__class = tmp_assign_source_67;
            Py_DECREF(old);
        }

    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__class);
    tmp_class_creation_10__class = NULL;
    Py_XDECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_assign_source_68 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_68);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_11;
            tmp_set_locals_11 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277 = tmp_set_locals_11;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_f2efa329e337c41e762f231f7743f0dd_12)) {
            Py_XDECREF(cache_frame_f2efa329e337c41e762f231f7743f0dd_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f2efa329e337c41e762f231f7743f0dd_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f2efa329e337c41e762f231f7743f0dd_12 = MAKE_FUNCTION_FRAME(codeobj_f2efa329e337c41e762f231f7743f0dd, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f2efa329e337c41e762f231f7743f0dd_12->m_type_description == NULL);
        frame_f2efa329e337c41e762f231f7743f0dd_12 = cache_frame_f2efa329e337c41e762f231f7743f0dd_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f2efa329e337c41e762f231f7743f0dd_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f2efa329e337c41e762f231f7743f0dd_12) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_name_88;
            tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_38 == NULL)) {
                tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_88 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 278;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[11], tmp_args_element_name_88);
            Py_DECREF(tmp_args_element_name_88);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_name_89;
            tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_39 == NULL)) {
                tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_89 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 284;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_39, mod_consts[11], tmp_args_element_name_89);
            Py_DECREF(tmp_args_element_name_89);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_name_90;
            tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_40 == NULL)) {
                tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_90 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[11], tmp_args_element_name_90);
            Py_DECREF(tmp_args_element_name_90);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_name_91;
            tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_41 == NULL)) {
                tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_91 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 296;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_41, mod_consts[11], tmp_args_element_name_91);
            Py_DECREF(tmp_args_element_name_91);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_name_92;
            tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_42 == NULL)) {
                tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_92 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[11], tmp_args_element_name_92);
            Py_DECREF(tmp_args_element_name_92);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_name_93;
            tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_43 == NULL)) {
                tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_93 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 308;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_43, mod_consts[11], tmp_args_element_name_93);
            Py_DECREF(tmp_args_element_name_93);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_name_94;
            tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_44 == NULL)) {
                tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_94 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 314;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_44, mod_consts[11], tmp_args_element_name_94);
            Py_DECREF(tmp_args_element_name_94);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_name_95;
            tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_45 == NULL)) {
                tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_95 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_45, mod_consts[11], tmp_args_element_name_95);
            Py_DECREF(tmp_args_element_name_95);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_name_96;
            tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_46 == NULL)) {
                tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto frame_exception_exit_12;
            }


            tmp_args_element_name_96 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes();

            frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame.f_lineno = 328;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_46, mod_consts[11], tmp_args_element_name_96);
            Py_DECREF(tmp_args_element_name_96);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto frame_exception_exit_12;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f2efa329e337c41e762f231f7743f0dd_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f2efa329e337c41e762f231f7743f0dd_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f2efa329e337c41e762f231f7743f0dd_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f2efa329e337c41e762f231f7743f0dd_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f2efa329e337c41e762f231f7743f0dd_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f2efa329e337c41e762f231f7743f0dd_12,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_f2efa329e337c41e762f231f7743f0dd_12 == cache_frame_f2efa329e337c41e762f231f7743f0dd_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f2efa329e337c41e762f231f7743f0dd_12);
            cache_frame_f2efa329e337c41e762f231f7743f0dd_12 = NULL;
        }

        assertFrameObject(frame_f2efa329e337c41e762f231f7743f0dd_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_43;
        skip_nested_handling_11:;
        tmp_assign_source_69 = locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277);
        locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277 = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277);
        locals_cryptography$hazmat$backends$interfaces$$$class_11_X509Backend_277 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 277;
        goto try_except_handler_42;
        outline_result_21:;
        assert(tmp_class_creation_11__class_dict == NULL);
        tmp_class_creation_11__class_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_key_name_22;
        tmp_key_name_21 = mod_consts[18];
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
        tmp_key_name_22 = mod_consts[18];
        tmp_assign_source_70 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_22, tmp_key_name_22);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_42;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_71;
            tmp_assign_source_71 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_11__base == NULL);
            Py_INCREF(tmp_assign_source_71);
            tmp_select_metaclass_11__base = tmp_assign_source_71;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_31;
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_expression_name_31 = tmp_select_metaclass_11__base;
            tmp_assign_source_70 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_31);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto try_except_handler_45;
            }
            goto try_return_handler_44;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
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

        {
            PyObject *tmp_type_arg_11;
            Py_DECREF(exception_keeper_type_33);
            Py_XDECREF(exception_keeper_value_33);
            Py_XDECREF(exception_keeper_tb_33);
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_type_arg_11 = tmp_select_metaclass_11__base;
            tmp_assign_source_70 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_assign_source_70 == NULL));
            goto try_return_handler_44;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        Py_XDECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        goto outline_result_22;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_22:;
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_args_element_name_99;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_called_name_31 = tmp_class_creation_11__metaclass;
        tmp_args_element_name_97 = mod_consts[117];
        tmp_args_element_name_98 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_args_element_name_99 = tmp_class_creation_11__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_name_97, tmp_args_element_name_98, tmp_args_element_name_99};
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_31, call_args);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_11__class == NULL);
        tmp_class_creation_11__class = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_32;
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_101;
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_42;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[21]);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_42;
        }
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 276;

            goto try_except_handler_42;
        }
        tmp_args_element_name_100 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[22]);
        if (tmp_args_element_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 276;

            goto try_except_handler_42;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 276;
        tmp_called_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_100);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_100);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_42;
        }
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_args_element_name_101 = tmp_class_creation_11__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 276;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_101);
        Py_DECREF(tmp_called_name_32);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_42;
        }
        {
            PyObject *old = tmp_class_creation_11__class;
            assert(old != NULL);
            tmp_class_creation_11__class = tmp_assign_source_73;
            Py_DECREF(old);
        }

    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__class);
    tmp_class_creation_11__class = NULL;
    Py_XDECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_assign_source_74 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_74);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_12;
            tmp_set_locals_12 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336 = tmp_set_locals_12;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_c7f98d901008ea311ea7a6aa63afd663_13)) {
            Py_XDECREF(cache_frame_c7f98d901008ea311ea7a6aa63afd663_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c7f98d901008ea311ea7a6aa63afd663_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c7f98d901008ea311ea7a6aa63afd663_13 = MAKE_FUNCTION_FRAME(codeobj_c7f98d901008ea311ea7a6aa63afd663, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c7f98d901008ea311ea7a6aa63afd663_13->m_type_description == NULL);
        frame_c7f98d901008ea311ea7a6aa63afd663_13 = cache_frame_c7f98d901008ea311ea7a6aa63afd663_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c7f98d901008ea311ea7a6aa63afd663_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c7f98d901008ea311ea7a6aa63afd663_13) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_47;
            PyObject *tmp_args_element_name_102;
            tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_47 == NULL)) {
                tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_102 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_47, mod_consts[11], tmp_args_element_name_102);
            Py_DECREF(tmp_args_element_name_102);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_48;
            PyObject *tmp_args_element_name_103;
            tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_48 == NULL)) {
                tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_103 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 344;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_48, mod_consts[11], tmp_args_element_name_103);
            Py_DECREF(tmp_args_element_name_103);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_49;
            PyObject *tmp_args_element_name_104;
            tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_49 == NULL)) {
                tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_104 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 351;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_49, mod_consts[11], tmp_args_element_name_104);
            Py_DECREF(tmp_args_element_name_104);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_50;
            PyObject *tmp_args_element_name_105;
            tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_50 == NULL)) {
                tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_105 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 358;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_50, mod_consts[11], tmp_args_element_name_105);
            Py_DECREF(tmp_args_element_name_105);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_51;
            PyObject *tmp_args_element_name_106;
            tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_51 == NULL)) {
                tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_106 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 364;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_51, mod_consts[11], tmp_args_element_name_106);
            Py_DECREF(tmp_args_element_name_106);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_52;
            PyObject *tmp_args_element_name_107;
            tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_52 == NULL)) {
                tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_107 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 370;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_52, mod_consts[11], tmp_args_element_name_107);
            Py_DECREF(tmp_args_element_name_107);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_53;
            PyObject *tmp_args_element_name_108;
            PyObject *tmp_defaults_1;
            tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_53 == NULL)) {
                tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto frame_exception_exit_13;
            }
            tmp_defaults_1 = mod_consts[130];
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_name_108 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported(tmp_defaults_1);

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 376;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_53, mod_consts[11], tmp_args_element_name_108);
            Py_DECREF(tmp_args_element_name_108);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_54;
            PyObject *tmp_args_element_name_109;
            tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_54 == NULL)) {
                tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;

                goto frame_exception_exit_13;
            }


            tmp_args_element_name_109 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported();

            frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame.f_lineno = 382;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_54, mod_consts[11], tmp_args_element_name_109);
            Py_DECREF(tmp_args_element_name_109);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;

                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c7f98d901008ea311ea7a6aa63afd663_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c7f98d901008ea311ea7a6aa63afd663_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c7f98d901008ea311ea7a6aa63afd663_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c7f98d901008ea311ea7a6aa63afd663_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c7f98d901008ea311ea7a6aa63afd663_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c7f98d901008ea311ea7a6aa63afd663_13,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_c7f98d901008ea311ea7a6aa63afd663_13 == cache_frame_c7f98d901008ea311ea7a6aa63afd663_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c7f98d901008ea311ea7a6aa63afd663_13);
            cache_frame_c7f98d901008ea311ea7a6aa63afd663_13 = NULL;
        }

        assertFrameObject(frame_c7f98d901008ea311ea7a6aa63afd663_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_47;
        skip_nested_handling_12:;
        tmp_assign_source_75 = locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_47;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336);
        locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336 = NULL;
        goto outline_result_23;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336);
        locals_cryptography$hazmat$backends$interfaces$$$class_12_DHBackend_336 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 336;
        goto try_except_handler_46;
        outline_result_23:;
        assert(tmp_class_creation_12__class_dict == NULL);
        tmp_class_creation_12__class_dict = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_23;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_dict_name_24;
        PyObject *tmp_key_name_24;
        tmp_key_name_23 = mod_consts[18];
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
        tmp_key_name_24 = mod_consts[18];
        tmp_assign_source_76 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_24, tmp_key_name_24);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_46;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        {
            PyObject *tmp_assign_source_77;
            tmp_assign_source_77 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_12__base == NULL);
            Py_INCREF(tmp_assign_source_77);
            tmp_select_metaclass_12__base = tmp_assign_source_77;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_34;
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_expression_name_34 = tmp_select_metaclass_12__base;
            tmp_assign_source_76 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_34);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto try_except_handler_49;
            }
            goto try_return_handler_48;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_12;
            Py_DECREF(exception_keeper_type_36);
            Py_XDECREF(exception_keeper_value_36);
            Py_XDECREF(exception_keeper_tb_36);
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_type_arg_12 = tmp_select_metaclass_12__base;
            tmp_assign_source_76 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_assign_source_76 == NULL));
            goto try_return_handler_48;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_XDECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        goto outline_result_24;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_24:;
        condexpr_end_12:;
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_name_34;
        PyObject *tmp_args_element_name_110;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_args_element_name_112;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_called_name_34 = tmp_class_creation_12__metaclass;
        tmp_args_element_name_110 = mod_consts[135];
        tmp_args_element_name_111 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_args_element_name_112 = tmp_class_creation_12__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = {tmp_args_element_name_110, tmp_args_element_name_111, tmp_args_element_name_112};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_34, call_args);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_12__class == NULL);
        tmp_class_creation_12__class = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_name_35;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_args_element_name_113;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_element_name_114;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_46;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[21]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_46;
        }
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 335;

            goto try_except_handler_46;
        }
        tmp_args_element_name_113 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[22]);
        if (tmp_args_element_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 335;

            goto try_except_handler_46;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 335;
        tmp_called_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_113);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_113);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_46;
        }
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_args_element_name_114 = tmp_class_creation_12__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 335;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_114);
        Py_DECREF(tmp_called_name_35);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_46;
        }
        {
            PyObject *old = tmp_class_creation_12__class;
            assert(old != NULL);
            tmp_class_creation_12__class = tmp_assign_source_79;
            Py_DECREF(old);
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__class);
    tmp_class_creation_12__class = NULL;
    Py_XDECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_assign_source_80 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_80);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_13;
            tmp_set_locals_13 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391 = tmp_set_locals_13;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391, mod_consts[10], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        if (isFrameUnusable(cache_frame_6149742c9e0cee83721633d84d3c690b_14)) {
            Py_XDECREF(cache_frame_6149742c9e0cee83721633d84d3c690b_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6149742c9e0cee83721633d84d3c690b_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6149742c9e0cee83721633d84d3c690b_14 = MAKE_FUNCTION_FRAME(codeobj_6149742c9e0cee83721633d84d3c690b, module_cryptography$hazmat$backends$interfaces, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6149742c9e0cee83721633d84d3c690b_14->m_type_description == NULL);
        frame_6149742c9e0cee83721633d84d3c690b_14 = cache_frame_6149742c9e0cee83721633d84d3c690b_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6149742c9e0cee83721633d84d3c690b_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6149742c9e0cee83721633d84d3c690b_14) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_55;
            PyObject *tmp_args_element_name_115;
            tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_55 == NULL)) {
                tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto frame_exception_exit_14;
            }


            tmp_args_element_name_115 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt();

            frame_6149742c9e0cee83721633d84d3c690b_14->m_frame.f_lineno = 392;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_55, mod_consts[11], tmp_args_element_name_115);
            Py_DECREF(tmp_args_element_name_115);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto frame_exception_exit_14;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6149742c9e0cee83721633d84d3c690b_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6149742c9e0cee83721633d84d3c690b_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6149742c9e0cee83721633d84d3c690b_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6149742c9e0cee83721633d84d3c690b_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6149742c9e0cee83721633d84d3c690b_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6149742c9e0cee83721633d84d3c690b_14,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_6149742c9e0cee83721633d84d3c690b_14 == cache_frame_6149742c9e0cee83721633d84d3c690b_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6149742c9e0cee83721633d84d3c690b_14);
            cache_frame_6149742c9e0cee83721633d84d3c690b_14 = NULL;
        }

        assertFrameObject(frame_6149742c9e0cee83721633d84d3c690b_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_51;
        skip_nested_handling_13:;
        tmp_assign_source_81 = locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_51;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391);
        locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391 = NULL;
        goto outline_result_25;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391);
        locals_cryptography$hazmat$backends$interfaces$$$class_13_ScryptBackend_391 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 391;
        goto try_except_handler_50;
        outline_result_25:;
        assert(tmp_class_creation_13__class_dict == NULL);
        tmp_class_creation_13__class_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        tmp_key_name_25 = mod_consts[18];
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
        tmp_key_name_26 = mod_consts[18];
        tmp_assign_source_82 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_name_26, tmp_key_name_26);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto try_except_handler_50;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        {
            PyObject *tmp_assign_source_83;
            tmp_assign_source_83 = (PyObject *)&PyBaseObject_Type;
            assert(tmp_select_metaclass_13__base == NULL);
            Py_INCREF(tmp_assign_source_83);
            tmp_select_metaclass_13__base = tmp_assign_source_83;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_name_37;
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_expression_name_37 = tmp_select_metaclass_13__base;
            tmp_assign_source_82 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_name_37);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto try_except_handler_53;
            }
            goto try_return_handler_52;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
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

        {
            PyObject *tmp_type_arg_13;
            Py_DECREF(exception_keeper_type_39);
            Py_XDECREF(exception_keeper_value_39);
            Py_XDECREF(exception_keeper_tb_39);
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_type_arg_13 = tmp_select_metaclass_13__base;
            tmp_assign_source_82 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_assign_source_82 == NULL));
            goto try_return_handler_52;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_XDECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        goto outline_result_26;
        // End of try:
        Py_XDECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_26:;
        condexpr_end_13:;
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_args_element_name_117;
        PyObject *tmp_args_element_name_118;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_called_name_37 = tmp_class_creation_13__metaclass;
        tmp_args_element_name_116 = mod_consts[138];
        tmp_args_element_name_117 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_args_element_name_118 = tmp_class_creation_13__class_dict;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = {tmp_args_element_name_116, tmp_args_element_name_117, tmp_args_element_name_118};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_37, call_args);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_13__class == NULL);
        tmp_class_creation_13__class = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_name_38;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_args_element_name_119;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_120;
        tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_38 == NULL)) {
            tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_50;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[21]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_50;
        }
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 390;

            goto try_except_handler_50;
        }
        tmp_args_element_name_119 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[22]);
        if (tmp_args_element_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 390;

            goto try_except_handler_50;
        }
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 390;
        tmp_called_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_119);
        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_element_name_119);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_50;
        }
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_args_element_name_120 = tmp_class_creation_13__class;
        frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame.f_lineno = 390;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_120);
        Py_DECREF(tmp_called_name_38);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_50;
        }
        {
            PyObject *old = tmp_class_creation_13__class;
            assert(old != NULL);
            tmp_class_creation_13__class = tmp_assign_source_85;
            Py_DECREF(old);
        }

    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__class);
    tmp_class_creation_13__class = NULL;
    Py_XDECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_41ca7abd8cc5164d1dbe6e200b93f46b);
#endif
    popFrameStack();

    assertFrameObject(frame_41ca7abd8cc5164d1dbe6e200b93f46b);

    goto frame_no_exception_14;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_41ca7abd8cc5164d1dbe6e200b93f46b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41ca7abd8cc5164d1dbe6e200b93f46b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41ca7abd8cc5164d1dbe6e200b93f46b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41ca7abd8cc5164d1dbe6e200b93f46b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_14:;
    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_assign_source_86 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_86);
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

    return module_cryptography$hazmat$backends$interfaces;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

