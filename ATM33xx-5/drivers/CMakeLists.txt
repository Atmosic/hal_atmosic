# Copyright (c) 2023-2024 Atmosic
#
# SPDX-License-Identifier: Apache-2.0

add_subdirectory(atm_bp_clock)
add_subdirectory(at_tz_mpc)
add_subdirectory(rram_rom_prot)
add_subdirectory(sec_cache)
add_subdirectory(sec_dev_lockout)
add_subdirectory(sec_reset)
add_subdirectory(spi)
add_subdirectory(dma)

zephyr_include_directories(
    dma
    flash
    rep_vec
    timer
    trng
)

if (CONFIG_ATM_PLF_DEBUG)
    zephyr_compile_definitions(
	CFG_PLF_DEBUG
    )
    zephyr_sources(
	user_debug.c
    )
endif ()

if (CONFIG_ATM_AES_HW OR CONFIG_ATM_SHA2_HW OR CONFIG_ATM_UECC)
    zephyr_include_directories(
	../config
    )
    zephyr_link_libraries(mbedTLS)
endif ()
