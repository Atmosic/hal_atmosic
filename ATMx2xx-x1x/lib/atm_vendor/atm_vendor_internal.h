/**
 *******************************************************************************
 *
 * @file atm_vendor_internal.h
 *
 * @brief Header File - HCI Vendor Command internal definitions
 *
 * Copyright (C) Atmosic 2024
 *
 *******************************************************************************
 */

#pragma once

#ifdef CFG_VND_GADC
#include "gadc.h"
#endif

#ifdef CFG_VND_SET_BDDR
#include "ble_common.h"
#endif

/**
 * @addtogroup ATM_BTFM_VEND HCI Vendor Command
 * @ingroup ATM_BTFM_PROC
 * @brief HCI Vendor Command
 *
 * This module contains the necessary definitions to deal with vendor command
 * internally.
 *
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

#define MFG_OGF 0x3E
#define MFG_OGF_SB1 (MFG_OGF << 2) // 0xF8

#define VND_OGF 0x3F
#define VND_OGF_SB1 (VND_OGF << 2) // 0xFC

typedef enum {
    MFG_OCF_LED = 0x01,
    MFG_OCF_EN_TXCW,
    MFG_OCF_CAP,
    MFG_OCF_MMR,
    MFG_OCF_TAG_R,
    MFG_OCF_SET_BDADDR,
    MFG_OCF_SET_ADV_CH,
    MFG_OCF_OTP_PUSH,
    MFG_OCF_MALLOC,
    MFG_OCF_IO,
    MFG_OCF_GADC,
    MFG_OCF_PV_TEST,
    MFG_OCF_EXIT_VENDOR,
    MFG_OCF_GPIO_SELF_TEST,
    MFG_OCF_PSM,

    MFG_OCF_END
} MFG_OCF;

typedef enum {
    VND_OCF_RD_MEM = 0x01,
    VND_OCF_WR_MEM,
    VND_OCF_BLE_REG_RD = 0x30,
    VND_OCF_BLE_REG_WR,

    VND_OCF_END
} VND_OCF;

// Enable Tx CW mode (0xF802)
#define EN_TXCW_CMD_OCF MFG_OCF_EN_TXCW
#define EN_TXCW_CMD_OGF MFG_OGF_SB1
#define EN_TXCW_CMD_LEN 0x01

// set 16MXtal cap. value (0xF803)
#define FREQCAL_CMD_OCF MFG_OCF_CAP
#define FREQCAL_CMD_OGF MFG_OGF_SB1
#define FREQCAL_CMD_LEN 0x01

// generic memory read (0xF804)
#define MM_R_CMD_OCF MFG_OCF_MMR
#define MM_R_CMD_OGF MFG_OGF_SB1
#define MM_R_CMD_LEN 0x04

// generic Flash NVDS Tag read (0xF805)
#define TAG_R_CMD_OCF MFG_OCF_TAG_R
#define TAG_R_CMD_OGF MFG_OGF_SB1
#define TAG_R_CMD_LEN 0x01

// set public bd addr (0xF806)
#define SET_BD_ADDR_CMD_OCF MFG_OCF_SET_BDADDR
#define SET_BD_ADDR_CMD_OGF MFG_OGF_SB1
#define SET_BD_ADDR_CMD_LEN 0x06

// set advertising channels (0xF807)
#define SET_ADV_CH_CMD_OCF MFG_OCF_SET_ADV_CH
#define SET_ADV_CH_CMD_OGF MFG_OGF_SB1
#define SET_ADV_CH_CMD_LEN 0x02

// OTP Push (0xF808)
#define OTP_PUSH_CMD_OCF MFG_OCF_OTP_PUSH
#define OTP_PUSH_CMD_OGF MFG_OGF_SB1
#define OTP_PUSH_CMD_LEN 0x05

// Malloc (0xF809)
#define MALLOC_CMD_OCF MFG_OCF_MALLOC
#define MALLOC_CMD_OGF MFG_OGF_SB1
#define MALLOC_CMD_LEN 0x05

// IO Control (0xF80A)
#define IO_CMD_OCF MFG_OCF_IO
#define IO_CMD_OGF MFG_OGF_SB1
#define IO_CMD_LEN 0x03
#define IO_CMD_OP_SETUP 0x00
#define IO_CMD_OP_READ 0x01
#define IO_CMD_OP_WRITE 0x02

// GADC (0xF80B)
#define GADC_CMD_OCF MFG_OCF_GADC
#define GADC_CMD_OGF MFG_OGF_SB1
#define GADC_CMD_LEN 0x03
#define GADC_CMD_ALT_LEN 0x09

// Enable PV test (0xF80C)
#define PV_TEST_CMD_OCF MFG_OCF_PV_TEST
#define PV_TEST_CMD_OGF MFG_OGF_SB1
#define PV_TEST_CMD_LEN 0x02

// Exit HCI vendor mode (0xF80D)
#define EXIT_VENDOR_CMD_OCF MFG_OCF_EXIT_VENDOR
#define EXIT_VENDOR_CMD_OGF MFG_OGF_SB1
#define EXIT_VENDOR_CMD_LEN 0x00

// GPIO Self test (0xF80E)
#define GPIO_SELF_TEST_CMD_OCF MFG_OCF_GPIO_SELF_TEST
#define GPIO_SELF_TEST_CMD_OGF MFG_OGF_SB1
#define GPIO_SELF_TEST_CMD_LEN 0x00

// Power Save Mode (0xF80F)
#define PSM_CMD_OCF MFG_OCF_PSM
#define PSM_CMD_OGF MFG_OGF_SB1
#define PSM_CMD_LEN 0x01

#define PSM_NONE SLEEP_ENABLE_NONE
#define PSM_DEEP SLEEP_ENABLE_DEEP
#define PSM_RETAIN SLEEP_ENABLE_RETAIN
#define PSM_RETAIN_DROP SLEEP_ENABLE_RETAIN_DROP
#define PSM_HIBERNATE SLEEP_ENABLE_HIBERNATE
#define PSM_SOC_OFF SLEEP_ENABLE_SOC_OFF

// Read memory (0xFC01)
#define RD_MEM_CMD_OCF VND_OCF_RD_MEM
#define RD_MEM_CMD_OGF VND_OGF_SB1
#define RD_MEM_CMD_LEN 0x06

// Write memory (0xFC02)
#define WR_MEM_CMD_OCF VND_OCF_WR_MEM
#define WR_MEM_CMD_OGF VND_OGF_SB1
#define WR_MEM_CMD_LEN 0x00

// BLE register Read (0xFC30)
#define BLE_REG_RD_CMD_OCF VND_OCF_BLE_REG_RD
#define BLE_REG_RD_CMD_OGF VND_OGF_SB1
#define BLE_REG_RD_CMD_LEN 0x02

// BLE register write (0xFC31)
#define BLE_REG_WR_CMD_OCF VND_OCF_BLE_REG_WR
#define BLE_REG_WR_CMD_OGF VND_OGF_SB1
#define BLE_REG_WR_CMD_LEN 0x06

#define HCI_OP_LEN_SIZE 3
#define HCI_CMD_LEN_POS (HCI_OP_LEN_SIZE - 1)
#define HCI_EVT_CODE_POS 1
#define HCI_EVT_LEN_POS 2
#define HCI_EVT_STATUS_POS 6
#define HCI_EVT_CS_STATUS_POS 3
#define HCI_EVT_NOC 5
#define HCI_EVT_CMD_CPM 0x0E
#define HCI_EVT_CMD_CS 0x0F
#define HCI_EVT_VENDOR 0xFF
#define HCI_RESET_U16 0x0c03
#define HCI_EVT_SUCCESS 0
#define HCI_EVT_ERROR 1
#define HCI_EVT_ERR_INVD_PARA 18
#define BASIC_HCI_EVT_HD_LEN 4
#define BASIC_HCI_EVT_CMD_LEN 7
#define MMR_ADDR_LEN 4
#ifndef HCI_EVT_MSG_TYPE
#define HCI_EVT_MSG_TYPE 0x04
#endif

#define NVDS_TAG_MFG 0xAF
#define NVDS_TAG_MFG_BUFF_LEN 256

struct vendor_handler {
    uint8_t ocf;
    uint8_t ogf;
    uint8_t cmd_len;
    bool check_cmd_len;
    void (*cmd_hdlr)(uint8_t *buf);
    void (*cmd_cmp_hdlr)(uint8_t **bufptr, uint32_t *size);
};

typedef enum {
    SEVT_DUT_READY,
} HCI_EVT_SUB_EVT_TYPE;

typedef union {
    uint8_t op;
    uint8_t io;
    uint8_t val;
} IO_CTRL_CMD;

// HCI_vendor RX states
enum H4TL_STATE_RX {
    // init state
    HCIV_STATE_RX_INIT,
    // receive message type
    HCIV_STATE_RX_START,
    // receive message header
    HCIV_STATE_RX_HDR,
    // receive (rest of) message payload
    HCIV_STATE_RX_PAYL,
};

enum otpush_err {
    OTP_PUSH_ERR_OK = HCI_EVT_SUCCESS,
    OTP_PUSH_ERR_INVALID_FILE = 2,
    OTP_PUSH_ERR_WRITE_FAIL = 3,
    OTP_PUSH_ERR_CHECKSUM_FAIL = 4,
    OTP_PUSH_ERR_NO_MEMORY = 5,
};

// gadc
enum gadc_op {
    GADC_CH_SAMPLE_START,
    GADC_CH_SAMPLE_GET,
    GADC_CH_CALIBRATE_START,
    GADC_CH_CALIBRATE_GET,
    GADC_CH_CALIBRATE_VDD1A_INTERNAL,
    GADC_CH_CALIBRATION_SETTING,
};

enum gadc_err {
    GADC_ERR_OK = HCI_EVT_SUCCESS,
    GADC_ERR_INVALID_OP,
    GADC_ERR_WRONG_CALI_SETTING,
    GADC_ERR_WRONG_CHANNEL,
};

enum malloc_type {
    MALLOC_FREE,
    MALLOC_ALLOC,
    MALLOC_ERR_NO_MEM,
    MALLOC_ERR_BAD_FREE,
};

#ifdef CFG_VND_EN_TXCW
#define EN_TXCW_CMD 1
typedef struct {
    uint8_t enabled;
} en_txsw_cmd_t;
#else
#define EN_TXCW_CMD 0
#endif

#ifdef CFG_VND_CAP
#define FREQCAL_CMD 1
typedef struct {
    uint8_t rx_byte;
} freqcal_cmd_t;
#else
#define FREQCAL_CMD 0
#endif

#ifdef CFG_VND_SYS_MMR
#define MM_R_CMD 1
typedef struct {
    union {
	uint8_t buf[MMR_ADDR_LEN];
	uint32_t value;
    };
} mm_r_cmd_t;
#else
#define MM_R_CMD 0
#endif

#ifdef CFG_VND_PV_TEST
#define PV_TEST_CMD 1
typedef struct {
    uint16_t pv_test_times;
} pv_test_cmd_t;
#else
#define PV_TEST_CMD 0
#endif

#ifdef CFG_VND_GPIO_TEST
#define GPIO_SELF_TEST_CMD 1
#else
#define GPIO_SELF_TEST_CMD 0
#endif

#ifdef CFG_VND_PSM
#define PSM_CMD 1
typedef struct {
    uint8_t psm_mode;
} psm_cmd_t;
#else
#define PSM_CMD 0
#endif

#ifdef CFG_VND_GADC
#define GADC_CMD 1
typedef struct {
    enum gadc_err gadc_status;
    enum gadc_op gadc_op;
    uint8_t ch;
    uint8_t sample_ch;
    uint8_t gext;
    int16_t ch_raw;
    int16_t vdd1a_raw;
    float ch_volt;
    struct gadc_cal_s ch_curcal;
    struct gadc_cal_s ch_newcal;
    __ieee_float_shape_type ch_newgain;
    int16_t ch_newoffset_x2;
} gadc_cmd_t;
#else
#define GADC_CMD 0
#endif

#ifdef CFG_VND_IO_CTRL
#define IO_CMD 1
typedef struct {
    uint8_t op;
    uint8_t io;
    bool par;
} io_cmd_t;
#else
#define IO_CMD 0
#endif

#ifdef CFG_VND_TAG_RD
#define TAG_R_CMD 1
typedef struct {
    uint8_t tag_id;
} tag_r_cmd_t;
#else
#define TAG_R_CMD 0
#endif

#ifdef CFG_VND_SET_BDDR
#define SET_BD_ADDR_CMD 1
typedef struct {
    uint8_t bd_addr[BLE_BDADDR_LEN];
} set_bd_addr_cmd_t;
#else
#define SET_BD_ADDR_CMD 0
#endif

#ifdef CFG_VND_SET_ADV_CH
#define SET_ADV_CH_CMD 1
#else
#define SET_ADV_CH_CMD 0
#endif

#ifdef CFG_VND_OTP_PUSH
#define OTP_PUSH_CMD 1
typedef struct {
    uint32_t otppush_address;
    uint8_t otppush_checksum;
} otp_push_cmd_t;
#else
#define OTP_PUSH_CMD 0
#endif

#if (defined(CFG_VND_MALLOC) || defined(CFG_VND_OTP_PUSH))
#define MALLOC_CMD 1
typedef struct {
    enum malloc_type type;
} malloc_cmd_t;

typedef struct {
    union {
	size_t malloc_size;
	void *malloc_mem;
    };
} malloc_ctx_t;
#else
#define MALLOC_CMD 0
#endif

#ifdef CFG_VND_DBG_MMR
#define RD_MEM_CMD 1
typedef struct {
    // Start address to read
    uint32_t start_addr;
    // Access size
    uint8_t type;
    // Length to read
    uint8_t length;
} rd_mem_cmd_t;
#else
#define RD_MEM_CMD 0
#endif

#ifdef CFG_VND_DBG_MMW
#define WR_MEM_CMD 1
typedef struct {
    // Start address to read
    uint32_t start_addr;
    // Access size
    uint8_t type;
    // length of buffer
    uint8_t length;
    // data of 128 bytes length
    uint8_t data[128];
} wr_mem_cmd_t;
#else
#define WR_MEM_CMD 0
#endif

#ifdef CFG_VND_BLE_REGR
#define BLE_REG_RD_CMD 1
typedef struct {
    // register address
    uint16_t reg_addr;
} ble_reg_rd_cmd_t;
#else
#define BLE_REG_RD_CMD 0
#endif

#ifdef CFG_VND_BLE_REGW
#define BLE_REG_WR_CMD 1
typedef struct {
    // register address
    uint16_t reg_addr;
    // register value
    uint32_t reg_value;
} ble_reg_wr_cmd_t;
#else
#define BLE_REG_WR_CMD 0
#endif

#ifdef __cplusplus
}
#endif

///@}