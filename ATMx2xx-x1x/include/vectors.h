/**
 *******************************************************************************
 *
 * @file vectors.h
 *
 * @brief Various replaceable pointers in the ROM
 *
 * Copyright (C) Atmosic 2017-2021
 *
 *******************************************************************************
 */

#pragma once

/**
 * @defgroup VECTORS Vectors
 * @ingroup ATM2x
 * @brief Various replaceable pointers in the ROM
 * @{
 */

#include "rep_vec.h"

#ifdef __cplusplus
extern "C" {
#endif

/// Type for ARM machine vectors
typedef void (*isr_vector_t)(void);

/// ARM machine vectors
extern const isr_vector_t __isr_vector[48];

#if defined(CFG_ROM) || defined(CFG_USER)
/// ARM machine vectors provided by ROM startup code
#define ISR_HANDLER_PROTO(__i) extern isr_vector_t __ram_isr_vector__ ## __i
#else // CFG_ROM || CFG_USER
/// ARM machine vectors installed by startup code
#define ISR_HANDLER_PROTO(__i) void __i(void)
#endif // CFG_ROM || CFG_USER

ISR_HANDLER_PROTO(NMI_Handler);
ISR_HANDLER_PROTO(HardFault_Handler);
ISR_HANDLER_PROTO(SVC_Handler);
ISR_HANDLER_PROTO(PendSV_Handler);
ISR_HANDLER_PROTO(SysTick_Handler);
ISR_HANDLER_PROTO(UARTRX0_Handler);
ISR_HANDLER_PROTO(UARTTX0_Handler);
ISR_HANDLER_PROTO(UARTRX1_Handler);
ISR_HANDLER_PROTO(UARTTX1_Handler);
ISR_HANDLER_PROTO(UARTRX2_Handler);
ISR_HANDLER_PROTO(UARTTX2_Handler);
ISR_HANDLER_PROTO(PORT0_COMB_Handler);
ISR_HANDLER_PROTO(PORT1_COMB_Handler);
ISR_HANDLER_PROTO(TIMER0_Handler);
ISR_HANDLER_PROTO(TIMER1_Handler);
ISR_HANDLER_PROTO(DUALTIMER_HANDLER);
ISR_HANDLER_PROTO(SPI_Handler);
ISR_HANDLER_PROTO(UARTOVF0_Handler);
ISR_HANDLER_PROTO(UARTOVF1_Handler);
ISR_HANDLER_PROTO(UARTOVF2_Handler);
ISR_HANDLER_PROTO(DMA_Handler);
ISR_HANDLER_PROTO(PORT0_0_Handler);
ISR_HANDLER_PROTO(PORT0_1_Handler);
ISR_HANDLER_PROTO(PORT0_2_Handler);
ISR_HANDLER_PROTO(PORT0_3_Handler);
ISR_HANDLER_PROTO(PORT0_4_Handler);
ISR_HANDLER_PROTO(PORT0_5_Handler);
ISR_HANDLER_PROTO(PORT0_6_Handler);
ISR_HANDLER_PROTO(PORT0_7_Handler);
ISR_HANDLER_PROTO(PORT0_8_Handler);
ISR_HANDLER_PROTO(PORT0_9_Handler);
ISR_HANDLER_PROTO(PORT0_10_Handler);
ISR_HANDLER_PROTO(PORT0_11_Handler);
ISR_HANDLER_PROTO(PORT0_12_Handler);
ISR_HANDLER_PROTO(PORT0_13_Handler);
ISR_HANDLER_PROTO(PORT0_14_Handler);
ISR_HANDLER_PROTO(PORT0_15_Handler);

#undef ISR_HANDLER_PROTO

/**
 * @brief Function to retrieve each external interface API
 * @param[in] idx External interface index
 * @return External interface api structure
 *
 * @note Modules (ROM or User) can call this function replacment vector
 * to obtain the software interface of the underlying external interface
 * transport driver (i.e UART). The driver may be resident in ROM, RAM or FLASH
 * This interface is used by H4TL and DTM to operate their respective protocols over
 * a UART. The idx (virtual index) is used to identify the
 * requesting module to allow the replacment function to map the requester to
 * the underlying physical hardware.
 * Index 0 is for HCI, 1,2 = reserved, 3 = DTM. The replacement function
 * can multiplex the requester to either a dummy UART instance or the real
 * physical instance.  Muxing however is not required if the system can
 * guarantee only a single requester, however some ROM modules startup automatically
 * (H4TL and DTM) in certain configurations and multiple requesters must be handled by the
 * replacement function.
 *
 */
extern const struct rwip_eif_api* (*plf_rwip_eif_get)(uint8_t idx);

#ifdef __cplusplus
}
#endif

/// @} VECTORS
