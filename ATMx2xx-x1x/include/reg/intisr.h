/**
 * @file intisr.h
 *
 * @brief Interrupt routing from modules to NVIC
 *
 * Copyright (C) Atmosic 2018-2019
 */

#ifndef __INTISR_H__
#define __INTISR_H__

/**
 * @defgroup INTISR INTISR
 * @ingroup DRIVERS
 * @brief Interrupt routing from modules to NVIC
 * @{
 */

#define INTISR_SRC_UART0_RXINT		(1U<<0)
#define INTISR_SRC_UART0_TXINT		(1U<<1)
#define INTISR_SRC_UART1_RXINT		(1U<<2)
#define INTISR_SRC_UART1_TXINT		(1U<<3)
#define INTISR_SRC_SPI1			(1U<<4)
#define INTISR_SRC_TIMER0		(1U<<5)
#define INTISR_SRC_TIMER1		(1U<<6)
#define INTISR_SRC_DUALTIMER2		(1U<<7)
#define INTISR_SRC_SPI0			(1U<<8)
#define INTISR_SRC_UART0_OVERFLOW	(1U<<9)
#define INTISR_SRC_UART1_OVERFLOW	(1U<<10)
#define INTISR_SRC_KSM			(1U<<11)
#define INTISR_SRC_SLWTIMER		(1U<<12)
#define INTISR_SRC_SPI2			(1U<<13)
#define INTISR_SRC_SPARE_14		(1U<<14)
#define INTISR_SRC_SPARE_15		(1U<<15)
#define INTISR_SRC_SPI_RADIO		(1U<<16)
#define INTISR_SRC_SPI_PMU		(1U<<17)
#define INTISR_SRC_I2C0			(1U<<18)
#define INTISR_SRC_I2C1			(1U<<19)
#define INTISR_SRC_NVM			(1U<<20)
#define INTISR_SRC_PDM			(1U<<21)
#define INTISR_SRC_GADC			(1U<<22)
#define INTISR_SRC_TRNG			(1U<<23)
#define INTISR_SRC_GPIO0_COMB		(1U<<24)
#define INTISR_SRC_GPIO1_COMB		(1U<<25)
#define INTISR_SRC_ATLC			(1U<<26)
#define INTISR_SRC_BLE			(1U<<27)
#define INTISR_SRC_DMA_ERR		(1U<<28)
#define INTISR_SRC_DMA_DONE		(1U<<29)
#define INTISR_SRC_PSEQ			(1U<<30)
#define INTISR_SRC_PMU			(1U<<31)

/// @} INTISR

#endif // __INTISR_H__
