/*
 * Copyright (c) 2018-2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/*********** WARNING: This is an auto-generated file. Do not edit! ***********/

#ifndef __TFM_SERVICE_LIST_INC__
#define __TFM_SERVICE_LIST_INC__

/******** ITS ********/
{"PSA_ITS_GET", ITS_ID, PSA_ITS_GET_MSK, 0x00011A00, true, 1, TFM_VERSION_POLICY_RELAXED},
{"PSA_ITS_SET", ITS_ID, PSA_ITS_SET_MSK, 0x00011A01, true, 1, TFM_VERSION_POLICY_RELAXED},
{"PSA_ITS_INFO", ITS_ID, PSA_ITS_INFO_MSK, 0x00011A02, true, 1, TFM_VERSION_POLICY_RELAXED},
{"PSA_ITS_REMOVE", ITS_ID, PSA_ITS_REMOVE_MSK, 0x00011A03, true, 1, TFM_VERSION_POLICY_RELAXED},
{"PSA_ITS_RESET", ITS_ID, PSA_ITS_RESET_MSK, 0x00011A04, false, 1, TFM_VERSION_POLICY_RELAXED},

/******** PLATFORM ********/
{"PSA_PLATFORM_LC_GET", PLATFORM_ID, PSA_PLATFORM_LC_GET_MSK, 0x00011000, true, 1, TFM_VERSION_POLICY_RELAXED},
{"PSA_PLATFORM_LC_SET", PLATFORM_ID, PSA_PLATFORM_LC_SET_MSK, 0x00011001, true, 1, TFM_VERSION_POLICY_RELAXED},
{"PSA_PLATFORM_SYSTEM_RESET", PLATFORM_ID, PSA_PLATFORM_SYSTEM_RESET_MSK, 0x00011002, true, 1, TFM_VERSION_POLICY_RELAXED},

/******** CRYPTO_SRV ********/
{"PSA_CRYPTO_INIT_ID", CRYPTO_SRV_ID, PSA_CRYPTO_INIT, 0x00000F00, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_MAC_ID", CRYPTO_SRV_ID, PSA_MAC, 0x00000F01, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_HASH_ID", CRYPTO_SRV_ID, PSA_HASH, 0x00000F02, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_ASYMMETRIC_ID", CRYPTO_SRV_ID, PSA_ASYMMETRIC, 0x00000F03, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_SYMMETRIC_ID", CRYPTO_SRV_ID, PSA_SYMMETRIC, 0x00000F04, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_AEAD_ID", CRYPTO_SRV_ID, PSA_AEAD, 0x00000F05, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_KEY_MNG_ID", CRYPTO_SRV_ID, PSA_KEY_MNG, 0x00000F06, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_RNG_ID", CRYPTO_SRV_ID, PSA_RNG, 0x00000F07, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_CRYPTO_FREE_ID", CRYPTO_SRV_ID, PSA_CRYPTO_FREE, 0x00000F08, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_GENERATOR_ID", CRYPTO_SRV_ID, PSA_GENERATOR, 0x00000F09, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_ENTROPY_ID", CRYPTO_SRV_ID, PSA_ENTROPY_INJECT, 0x00000F0A, true, 1, TFM_VERSION_POLICY_STRICT},

/******** ATTEST_SRV ********/
{"PSA_ATTEST_GET_TOKEN_ID", ATTEST_SRV_ID, PSA_ATTEST_GET_TOKEN, 0x00000F10, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_ATTEST_GET_TOKEN_SIZE_ID", ATTEST_SRV_ID, PSA_ATTEST_GET_TOKEN_SIZE, 0x00000F11, true, 1, TFM_VERSION_POLICY_STRICT},
{"PSA_ATTEST_INJECT_KEY_ID", ATTEST_SRV_ID, PSA_ATTEST_INJECT_KEY, 0x00000F12, true, 1, TFM_VERSION_POLICY_STRICT},

#ifdef USE_PSA_TEST_PARTITIONS

#ifdef USE_CRYPTO_ACL_TEST
/******** CRYPTO_ACL_TEST ********/
{"CRYPTO_CREATE_PERSISTENT_KEY", CRYPTO_ACL_TEST_ID, CRYPTO_CREATE_PERSISTENT_KEY_MSK, 0x00000200, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_GENERATE_KEY", CRYPTO_ACL_TEST_ID, CRYPTO_GENERATE_KEY_MSK, 0x00000201, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_OPEN_PERSISTENT_KEY", CRYPTO_ACL_TEST_ID, CRYPTO_OPEN_PERSISTENT_KEY_MSK, 0x00000202, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_CLOSE_KEY", CRYPTO_ACL_TEST_ID, CRYPTO_CLOSE_KEY_MSK, 0x00000203, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_SET_KEY_POLICY", CRYPTO_ACL_TEST_ID, CRYPTO_SET_KEY_POLICY_MSK, 0x00000204, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_DESTROY_KEY", CRYPTO_ACL_TEST_ID, CRYPTO_DESTROY_KEY_MSK, 0x00000205, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_GET_KEY_INFO", CRYPTO_ACL_TEST_ID, CRYPTO_GET_KEY_INFO_MSK, 0x00000206, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_GET_KEY_POLICY", CRYPTO_ACL_TEST_ID, CRYPTO_GET_KEY_POLICY_MSK, 0x00000207, true, 1, TFM_VERSION_POLICY_RELAXED},
{"CRYPTO_IMPORT_KEY", CRYPTO_ACL_TEST_ID, CRYPTO_IMPORT_KEY_MSK, 0x00000208, true, 1, TFM_VERSION_POLICY_RELAXED},
#endif // USE_CRYPTO_ACL_TEST

#ifdef USE_CLIENT_TESTS_PART1
/******** CLIENT_TESTS_PART1 ********/
{"CLIENT_TESTS_PART1_ROT_SRV1", CLIENT_TESTS_PART1_ID, PART1_ROT_SRV1_MSK, 0x00001A05, true, 5, TFM_VERSION_POLICY_RELAXED},
{"CLIENT_TESTS_PART1_DROP_CONN", CLIENT_TESTS_PART1_ID, DROP_CONN_MSK, 0x00001A06, true, 5, TFM_VERSION_POLICY_RELAXED},
{"CLIENT_TESTS_PART1_SECURE_CLIENTS_ONLY", CLIENT_TESTS_PART1_ID, SECURE_CLIENTS_ONLY_MSK, 0x00001A07, false, 5, TFM_VERSION_POLICY_RELAXED},
#endif // USE_CLIENT_TESTS_PART1

#ifdef USE_SERVER_TESTS_PART1
/******** SERVER_TESTS_PART1 ********/
{"SERVER_TESTS_PART1_CONTROL", SERVER_TESTS_PART1_ID, CONTROL_MSK, 0x00001A01, true, 5, TFM_VERSION_POLICY_RELAXED},
{"SERVER_TESTS_PART1_TEST", SERVER_TESTS_PART1_ID, TEST_MSK, 0x00001A02, true, 12, TFM_VERSION_POLICY_STRICT},
#endif // USE_SERVER_TESTS_PART1

#ifdef USE_SERVER_TESTS_PART2
/******** SERVER_TESTS_PART2 ********/
{"SERVER_TESTS_PART2_ROT_SRV_REVERSE", SERVER_TESTS_PART2_ID, ROT_SRV_REVERSE_MSK, 0x00001A03, false, 5, TFM_VERSION_POLICY_STRICT},
{"SERVER_TESTS_PART2_ROT_SRV_DB_TST", SERVER_TESTS_PART2_ID, ROT_SRV_DB_TST_MSK, 0x00001A04, false, 5, TFM_VERSION_POLICY_STRICT},
#endif // USE_SERVER_TESTS_PART2

#ifdef USE_SMOKE_TESTS_PART1
/******** SMOKE_TESTS_PART1 ********/
{"SMOKE_TESTS_PART1_ROT_SRV1", SMOKE_TESTS_PART1_ID, ROT_SRV1_MSK, 0x00001A00, true, 5, TFM_VERSION_POLICY_RELAXED},
#endif // USE_SMOKE_TESTS_PART1

#endif // USE_PSA_TEST_PARTITIONS

#endif // __TFM_SERVICE_LIST_INC__