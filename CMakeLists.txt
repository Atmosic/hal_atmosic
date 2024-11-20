# Copyright (c) 2021-2024 Atmosic
#
# SPDX-License-Identifier: Apache-2.0

add_subdirectory_ifdef(CONFIG_SOC_ATMX2XX_X1X ATMx2xx-x1x)
add_subdirectory_ifdef(CONFIG_SOC_ATM33XX_5 ATM33xx-5)

if(CONFIG_UU_TEST_ATM_HAL)
  file(GLOB_RECURSE HAL_FILES
    ${CMAKE_CURRENT_LIST_DIR}/*.c
  )
  set_coverage_properties_for_files(HAL_FILES CONFIG_UU_TEST_ATM_HAL)
endif()
