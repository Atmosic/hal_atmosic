/**
 ******************************************************************************
 *
 * @file at_clkrstgen.h
 *
 * @brief System clock
 *
 * Copyright (C) Atmosic 2020-2023
 *
 ******************************************************************************
 */

#pragma once

#include <stdint.h>

__STATIC_INLINE uint32_t
at_clkrstgen_get_bp(void)
{
    return (16000000);
}
