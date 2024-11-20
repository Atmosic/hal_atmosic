# Copyright (c) 2021-2024 Atmosic
#
# SPDX-License-Identifier: Apache-2.0

zephyr_include_directories(
    include
    include/arm
    include/armgcc
    include/reg
)
zephyr_compile_definitions(
    -DCORTEX_M0
    -DCFG_EMB
    -DCFG_HOST
    -DCFG_BLE
    -DCFG_AHITL
    -DCFG_NVDS
    -DCFG_DBG_MEM
    -DCFG_DBG_FLASH
    -DCFG_DBG_NVDS
    -DCFG_DBG_STACK_PROF
    -DCFG_RF_SYDNEY
    -DCFG_ALLROLES
    -DCFG_ACT=6
    -DCFG_RAL=3
    -DCFG_CON=5
    -DCFG_ISO_CON=0
    -DCFG_SEC_CON
    -DCFG_EXT_DB
    -DCFG_ATTC
    -DCFG_ATTS
    -DCFG_PRF
    -DCFG_NB_PRF=12
    -DCFG_HCITL
    -DCFG_AHITL
    -DCFG_BLE_DTM
)

if (CONFIG_ATMx2_ROM)
    add_subdirectory(drivers)
endif ()
