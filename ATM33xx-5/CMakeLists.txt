# Copyright (c) 2022-2024 Atmosic
#
# SPDX-License-Identifier: Apache-2.0

zephyr_include_directories(
    include
    include/arm
    include/armgcc
    include/reg
)

add_subdirectory(drivers)
