/**
 ******************************************************************************
 *
 * @file at_wrpr.h
 *
 * @brief Peripheral module clock and reset control
 *
 * Copyright (C) Atmosic 2020-2024
 *
 ******************************************************************************
 */

#pragma once

#include <stdint.h>
#include <stdlib.h>
#include "at_apb_wrpr_regs_core_macro.h"
#include "at_apb1_wrpr_regs_core_macro.h"

#define WRPR_CTRL__CLK_DISABLE	0x00000000U
#define WRPR_CTRL__CLK_ENABLE	0x00000001U
#define WRPR_CTRL__SRESET	0x00000002U

#define APB_MOD_SIZE		0x1000
#define APB0_NUM_MODULES	16
#define APB1_NUM_MODULES	16

__STATIC_FORCEINLINE uint32_t volatile *
module_to_ctrl(void const volatile *addr)
{
    uintptr_t address = (uintptr_t)addr;

    if ((address >= CMSDK_APB_BASE) &&
	(address < CMSDK_APB_BASE + (APB_MOD_SIZE * APB0_NUM_MODULES))) {
	int i = (address - CMSDK_APB_BASE) / APB_MOD_SIZE;
	return ((&CMSDK_WRPR->APB0_CTRL) + i);
    }
    if ((address >= CMSDK_APB1_BASE) &&
	(address < CMSDK_APB1_BASE + (APB_MOD_SIZE * APB1_NUM_MODULES))) {
	int i = (address - CMSDK_APB1_BASE) / APB_MOD_SIZE;
	return ((&CMSDK_WRPR1->APB0_CTRL) + i);
    }
    return (NULL);
}

#define WRPR_CTRL_GET(__m) ({ \
    *module_to_ctrl(__m); \
})

#define WRPR_CTRL_SET(__m, __s) do { \
    *module_to_ctrl(__m) = (__s); \
} while (0)

#define WRPR_CTRL_GETSET(__m, __s) ({ \
    uint32_t volatile *_ctrl = module_to_ctrl(__m); \
    uint32_t _ret = *_ctrl; \
    *_ctrl = (__s); \
    _ret; \
})

/*
 * PUSH/POP macros mimic do/while syntax:
 *
 * WRPR_CTRL_PUSH(CMSDK_PSEQ, WRPR_CTRL__CLK_ENABLE) {
 *     ...;
 * } WRPR_CTRL_POP();
 */
#define WRPR_CTRL_PUSH(__m, __s) do { \
    uint32_t volatile *wrpr_ctrl_addr = module_to_ctrl(__m); \
    uint32_t wrpr_ctrl_save = *wrpr_ctrl_addr; \
    *wrpr_ctrl_addr = (__s); \
    do

#define WRPR_CTRL_POP() \
    while (0); \
    *wrpr_ctrl_addr = wrpr_ctrl_save; \
} while (0)

/*
 * Pin to selection register mapping
 */
#define PSEL_REG_P0	PIN_SELECTION_A
#define PSEL_REG_P1	PIN_SELECTION_A
#define PSEL_REG_P2	PIN_SELECTION_A
#define PSEL_REG_P3	PIN_SELECTION_A
#define PSEL_REG_P4	PIN_SELECTION_A
#define PSEL_REG_P5	PIN_SELECTION_A
#define PSEL_REG_P6	PIN_SELECTION_B
#define PSEL_REG_P7	PIN_SELECTION_B
#define PSEL_REG_P8	PIN_SELECTION_B
#define PSEL_REG_P9	PIN_SELECTION_B
#define PSEL_REG_P10	PIN_SELECTION_B
#define PSEL_REG_P11	PIN_SELECTION_B
#define PSEL_REG_P12	PIN_SELECTION_C
#define PSEL_REG_P13	PIN_SELECTION_C
#define PSEL_REG_P14	PIN_SELECTION_C
#define PSEL_REG_P15	PIN_SELECTION_C
#define PSEL_REG_P16	PIN_SELECTION_C
#define PSEL_REG_P17	PIN_SELECTION_C
#define PSEL_REG_P18	PIN_SELECTION_D
#define PSEL_REG_P19	PIN_SELECTION_D
#define PSEL_REG_P20	PIN_SELECTION_D
#define PSEL_REG_P21	PIN_SELECTION_D
#define PSEL_REG_P22	PIN_SELECTION_D
#define PSEL_REG_P23	PIN_SELECTION_D
#define PSEL_REG_P24	PIN_SELECTION_E
#define PSEL_REG_P25	PIN_SELECTION_E
#define PSEL_REG_P26	PIN_SELECTION_E
#define PSEL_REG_P27	PIN_SELECTION_E
#define PSEL_REG_P28	PIN_SELECTION_E
#define PSEL_REG_P29	PIN_SELECTION_E
#define PSEL_REG_P30	PIN_SELECTION_F
#define PSEL_REG_P31	PIN_SELECTION_F
#define PSEL_REG_P32	PIN_SELECTION_F
#define PSEL_REG_P33	PIN_SELECTION_F

#define PIN2REG(pin)	_PIN2REG(pin)
#define _PIN2REG(pin)	PSEL_REG_P ## pin

/*
 * Compute pin selection register core macro
 */
#define PIN_SEL(pin, sfx)	_PIN_SEL(PIN2REG(pin), pin, sfx)
#define _PIN_SEL(sel, pin, sfx)	__PIN_SEL(sel, pin, sfx)
#define __PIN_SEL(sel, pin, sfx) \
    WRPR_ ## sel ## __P ## pin ## _SEL__ ## sfx

/*
 * Compute signal macro (see at_pinmux.h)
 */
#define PIN_SIG(pin, sig)	P ## pin ## _ ## sig

/*
 * Assign signal to pin
 */
#define PIN_SELECT(pin, sig) \
    PIN_SEL(pin, MODIFY)(CMSDK_WRPR->PIN2REG(pin), PIN_SIG(pin, sig))

/*
 * Pin to pullup register mapping
 */
#define PUSEL_REG_P0	PIN_PU_A
#define PUSEL_REG_P1	PIN_PU_A
#define PUSEL_REG_P2	PIN_PU_A
#define PUSEL_REG_P3	PIN_PU_A
#define PUSEL_REG_P4	PIN_PU_A
#define PUSEL_REG_P5	PIN_PU_A
#define PUSEL_REG_P6	PIN_PU_A
#define PUSEL_REG_P7	PIN_PU_A
#define PUSEL_REG_P8	PIN_PU_B
#define PUSEL_REG_P9	PIN_PU_B
#define PUSEL_REG_P10	PIN_PU_B
#define PUSEL_REG_P11	PIN_PU_B
#define PUSEL_REG_P12	PIN_PU_B
#define PUSEL_REG_P13	PIN_PU_B
#define PUSEL_REG_P14	PIN_PU_B
#define PUSEL_REG_P15	PIN_PU_B
#define PUSEL_REG_P16	PIN_PU_C
#define PUSEL_REG_P17	PIN_PU_C
#define PUSEL_REG_P18	PIN_PU_C
#define PUSEL_REG_P19	PIN_PU_C
#define PUSEL_REG_P20	PIN_PU_C
#define PUSEL_REG_P21	PIN_PU_C
#define PUSEL_REG_P22	PIN_PU_C
#define PUSEL_REG_P23	PIN_PU_C
#define PUSEL_REG_P24	PIN_PU_D
#define PUSEL_REG_P25	PIN_PU_D
#define PUSEL_REG_P26	PIN_PU_D
#define PUSEL_REG_P27	PIN_PU_D
#define PUSEL_REG_P28	PIN_PU_D
#define PUSEL_REG_P29	PIN_PU_D
#define PUSEL_REG_P30	PIN_PU_D
#define PUSEL_REG_P31	PIN_PU_D
#define PUSEL_REG_P32	PIN_PU_E
#define PUSEL_REG_P33	PIN_PU_E

/*
 * Compute pin pullup register
 */
#define PIN2PUREG(pin) _PIN2PUREG(pin)
#define _PIN2PUREG(pin) PUSEL_REG_P ## pin

/*
 * Compute pin pullup macro
 */
#define PIN2PUMACRO(pin, sfx) _PIN2PUMACRO(pin, _PIN2PUREG(pin), sfx)
#define _PIN2PUMACRO(pin, reg, sfx) __PIN2PUMACRO(pin, reg, sfx)
#define __PIN2PUMACRO(pin, reg, sfx) \
    WRPR_ ## reg ## __P ## pin ## _PU__ ## sfx

/*
 * Set pin pullup
 */
#define PIN_PULLUP(pin) \
    PIN2PUMACRO(pin, SET)(CMSDK_WRPR->PIN2PUREG(pin))

/*
 * Clear pin pullup
 */
#define PIN_PULL_CLR(pin) \
    PIN2PUMACRO(pin, CLR)(CMSDK_WRPR->PIN2PUREG(pin))
