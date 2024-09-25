/**
 *******************************************************************************
 *
 * @file trng_internal.h
 *
 * @brief True Random Number Generator driver internal components
 *
 * Copyright (C) Atmosic 2023
 *
 *******************************************************************************
 */

#pragma once

#ifndef TRNG_INTERNAL_DIRECT_INCLUDE_GUARD
#error "trng_internal.h should only be included in trng source files"
#endif

/**
 * @defgroup TRNG_INTERNAL TRNG_INTERNAL
 * @ingroup DRIVERS
 * @brief Internal components for TRNG drivers
 * @{
 */

#include "arch.h"
#include "at_wrpr.h"
#include "at_apb_pseq_regs_core_macro.h"
#include "at_apb_trng_regs_core_macro.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief initializes the trng module.
 */
__INLINE void trng_internal_constructor(void)
{
    WRPR_CTRL_SET(CMSDK_TRNG, WRPR_CTRL__SRESET);
}

/**
 * @brief (re)configure trng module
 */
__INLINE void trng_internal_config(void)
{
    WRPR_CTRL_SET(CMSDK_TRNG, WRPR_CTRL__CLK_ENABLE);

    // Enable interrupt
    CMSDK_TRNG->INTERRUPT_MASK = TRNG_INTERRUPT_STATUS__TRNG_TROUBLE__MASK |
	TRNG_INTERRUPT_STATUS__TRNG_READY__MASK;
}

/**
 * @brief Collect a new random word immediately
 */
__INLINE void trng_internal_force_go_pulse(void)
{
    TRNG_CONTROL__GO__CLR(CMSDK_TRNG->CONTROL);
    TRNG_CONTROL__GO__SET(CMSDK_TRNG->CONTROL);
}

#ifdef __cplusplus
}
#endif

/// @} TRNG_INTERNAL
