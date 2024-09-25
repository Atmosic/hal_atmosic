/**
 *******************************************************************************
 *
 * @file calibration.h
 *
 * @brief Calibration data
 *
 * Copyright (C) Atmosic 2018-2022
 *
 *******************************************************************************
 */

#pragma once

/**
 * @defgroup CALIBRATION Calibration
 * @ingroup DRIVERS
 * @brief Calibration data
 * @{
 */

#include <stdint.h>
#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

/// Duration for an RCOS measurement to remain valid in 32KHz cycles
#define LPC_RCOS_VALID	(5U * 32768U)	// 5 seconds

/// Need 9ms in deep sleep to measure LPC
#define LPC_RCOS_CAL_WAKEUP_US 9000U

/// Platform NVDS tags
/// @note the range should within PARAM_ID_CAL1_MIN and PARAM_ID_CAL1_MAX or
/// within PARAM_ID_CAL2_MIN and PARAM_ID_CAL2_MAX
enum sydney_nvds_tag {
    /// Manufacturing calibration for RIF module
    SYDNEY_TAG_RIF_CAL = 0xb0,
    /// Manufacturing calibration for MDM module
    SYDNEY_TAG_MDM_CAL = 0xb1,
    /// Manufacturing overrides for LC registers
    SYDNEY_TAG_BLE_RADIO_OVR = 0xb2,
    SYDNEY_TAG_FLASH_POWERUP_DELAY = 0xb3,
    /// Customer configuration for WURX module
    SYDNEY_TAG_PMU_WURX = 0xb4,
    SYDNEY_TAG_WATCHDOG = 0xb5,
    SYDNEY_TAG_USER_APP = 0xb6,
    SYDNEY_TAG_PMU_WKUP = 0xb7,
    SYDNEY_TAG_ATE = 0xb8,
    SYDNEY_TAG_HIBERNATE_ADJ = 0xb9,
    SYDNEY_TAG_RETAIN_ADJ = 0xba,
    SYDNEY_TAG_SLEEP_MIN = 0xbb,
    /// Manufacturing calibration for various registers
    SYDNEY_TAG_MISC_CAL = 0xbc,
    /// Customer design-specific calibration for various registers
    SYDNEY_TAG_CUST_CFG = 0xbd,
    SYDNEY_TAG_RADIO_CAL = 0xbe,
    SYDNEY_TAG_LED_ENABLE = 0xbf,

    /*
     * NOTE: Place new entires above this comment
     */

    /// Arbitrary 32,16,8-bit register write
    SYDNEY_TAG_PMU_W = 0xfc,

    /// Arbitrary 32,16,8-bit register write
    SYDNEY_TAG_MEM_W = 0xfd,

    /// Arbitrary 32,16,8-bit register read-modify-write
    SYDNEY_TAG_MEM_RMW = 0xfe,
};

/// Manufacturing overrides for LC registers
struct BLE_radio_ovr_s {
    uint32_t RADIOCNTL0;
    uint32_t RADIOCNTL1;
    uint32_t RADIOCNTL2;
    uint32_t RADIOCNTL3;
    uint32_t RADIOPWRUPDN0;
    uint32_t RADIOPWRUPDN1;
    uint32_t RADIOPWRUPDN2;
    uint32_t RADIOPWRUPDN3;
    uint32_t RADIOTXRXTIM0;
    uint32_t RADIOTXRXTIM1;
    uint32_t RADIOTXRXTIM2;
    uint32_t RADIOTXRXTIM3;
};

/// Customer configuration for WURX module
struct PMU_wurx_s {
    uint32_t WURX_GENERAL_REG_ADDR;
    uint32_t WURX0_0_REG_ADDR;
    uint32_t WURX0_1_REG_ADDR;
    uint32_t WURX0_2_REG_ADDR;
    uint32_t WURX0_3_REG_ADDR;
    uint32_t WURX0_4_REG_ADDR;
    uint32_t WURX1_0_REG_ADDR;
    uint32_t WURX1_1_REG_ADDR;
};

#define MISC_CAL__MISC_FLASH_WAIT_XTAL_STABLE__SHIFT	0
#define MISC_CAL__MISC_FLASH_WAIT_XTAL_STABLE__MASK	0x01
#define MISC_CAL__MISC_FLASH_WAIT_XTAL_STABLE__READ(src) \
		(((uint32_t)(src) \
                    & 0x00000001U) >> 0)

#define MISC_CAL__MISC_WURX_BIAS_AMP__SHIFT	1
#define MISC_CAL__MISC_WURX_BIAS_AMP__MASK	0x0E
#define MISC_CAL__MISC_WURX_BIAS_AMP__READ(src) \
		(((uint32_t)(src) \
                    & 0x0000000EU) >> 1)

/// Manufacturing calibration for various registers
struct misc_cal_s {
    uint32_t GADC_GAIN_OFFSET[12][2];
    uint32_t PSEQ_XTAL_BITS1;
    uint32_t PMU_TOP_PMU2A;
    uint32_t PMU_TOP_PMU3;
    uint32_t PMU_TOP_PMU4;
    int8_t tx_gain_offset;
    uint8_t misc;		// See MISC_CAL__MISC above
    uint8_t pad[2];		// Available for post-tapeout use
    uint32_t spare[7];		// Available for post-tapeout use
};
extern struct misc_cal_s misc_cal;
extern uint16_t misc_cal_len;

/// Customer design-specific calibration for various registers
struct cust_cfg_s {
    uint32_t PSEQ_XTAL_BITS0;
    uint32_t PMU_TOP_PMU2;
    uint8_t PWR_STEP_SIZE;
    int8_t external_pa_gain;
    uint8_t pad[2];		// Available for post-tapeout use
    uint32_t spare[5];		// Available for post-tapeout use
};
extern struct cust_cfg_s cust_cfg;
extern uint16_t cust_cfg_len;

struct radio_cal_s {
    uint32_t /* SYNTH */ SYNTH_CTRL_3;
    uint32_t /* SYNTH */ SYNTH_CTRL_2;
    uint32_t /* RX */ RXBIAS;
    uint32_t /* RX */ ANA_CTRL;
    uint32_t /* RX */ LNAGAIN1;
    uint32_t /* RX */ LNAGAIN0;
};
extern struct radio_cal_s radio_cal;
extern uint16_t radio_cal_len;

/// Check for presence of calibration field
#define CAL_PRESENT(__s, __f) \
    (__s ## _len >= __OFFSET(__s, __f) + sizeof((__s).__f))

#define PMU_TOP_CAL(__s, __f, __reg) do { \
    if (CAL_PRESENT(__s, __f)) { \
	spi_pmuradio_write_word(&spi_pmu, PMU_TOP__REG_BLADDR, \
				PMU_TOP__ ## __reg, (__s).__f); \
	PMU_VERIFY(TOP, __reg, (__s).__f); \
    } \
} while (0)

#define PMU_WURX_PROG(__wurx, __len, __reg) \
    if ((__len) < (__OFFSET(__wurx, __reg) + sizeof(uint32_t))) { \
	break; \
    } \
    spi_pmuradio_write_word(&spi_pmu, PMU_WURX__REG_BLADDR, \
	PMU_WURX__ ## __reg, (__wurx).__reg); \
    PMU_VERIFY(WURX, __reg, (__wurx).__reg)

#define RADIO_CAL(__m, __f) \
    if (!CAL_PRESENT(radio_cal, __f)) { \
	break; \
    } \
    spi_pmuradio_write_word(&spi_radio, RADIO_ ## __m ## __REG_BLADDR, \
		    RADIO_ ## __m ## __ ## __f ## _REG_ADDR, radio_cal.__f); \
    RADIO_VERIFY(__m, __f ## _REG_ADDR, radio_cal.__f)

#ifdef __cplusplus
}
#endif

/// @} CALIBRATION
