/**
 ****************************************************************************************
 *
 * @file nvm.h
 *
 * @brief efuse driver interface
 *
 * Copyright (C) Atmosic 2017-2019
 *
 *
 ****************************************************************************************
 */

#ifndef __NVM_H__
#define __NVM_H__

/**
 * @defgroup NVM NVM
 * @ingroup DRIVERS
 * @brief User driver for One-Time-Programmable Non-Volatile Memory
 * @{
 */

#include "arch.h"
#include <stdint.h>               // standard integer functions
#include "at_apb_nvm_regs_core_macro.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * DEFINES
 ****************************************************************************************
 */

/// Size of entire OTP memory block
#define NVM_SIZE		0x1000		// 4KB (32Kb) of efuse
/// OTP memory used for NVDS
#define NVDS_NVM_SIZE		(NVM_SIZE - 4)	// Last word reserved for HW

/// EFUSE_AUTOREAD register value read during nvm_init()
extern uint32_t nvm_EFUSE_AUTOREAD;

/*
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */

/**
 * @brief Initialize nvm driver.
 */
void nvm_init(void);


/**
 * @brief check no 32khz xtal on board
 */
__PUREISH
static inline bool nvm_no_32khz_xtal(void)
{
    return NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__READ(nvm_EFUSE_AUTOREAD);
}

#ifdef __cplusplus
}
#endif

/// @} NVM

#endif // __NVM_H__
