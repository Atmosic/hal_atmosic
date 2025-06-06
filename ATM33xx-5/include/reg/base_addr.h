/**
 *****************************************************************************
 *
 * @file base_addr.h
 *
 * @brief Base Address definitions
 *
 * Copyright (C) Atmosic 2022-2025
 *
 *****************************************************************************
 */

#pragma once
#include "base_addr_place_holders.h"

/**
 * @defgroup at_base_addr base_addr
 * @ingroup AT_REG
 * @brief base address definitions.
 * @{
 */
/*---------- AT_AHB_PRRF ----------*/
typedef struct {
  __IO uint32_t  PATCH_TAG0;
  __IO uint32_t  PATCH_TAG1;
  __IO uint32_t  PATCH_TAG2;
  __IO uint32_t  PATCH_TAG3;
  __IO uint32_t  PATCH_TAG4;
  __IO uint32_t  PATCH_TAG5;
  __IO uint32_t  PATCH_TAG6;
  __IO uint32_t  PATCH_TAG7;
  __IO uint32_t  PATCH_TAG8;
  __IO uint32_t  PATCH_TAG9;
  __IO uint32_t  PATCH_TAG10;
  __IO uint32_t  PATCH_TAG11;
  __IO uint32_t  PATCH_TAG12;
  __IO uint32_t  PATCH_TAG13;
  __IO uint32_t  PATCH_TAG14;
  __IO uint32_t  PATCH_TAG15;
  __IO uint32_t  PATCH0;
  __IO uint32_t  PATCH1;
  __IO uint32_t  PATCH2;
  __IO uint32_t  PATCH3;
  __IO uint32_t  PATCH4;
  __IO uint32_t  PATCH5;
  __IO uint32_t  PATCH6;
  __IO uint32_t  PATCH7;
  __IO uint32_t  PATCH8;
  __IO uint32_t  PATCH9;
  __IO uint32_t  PATCH10;
  __IO uint32_t  PATCH11;
  __IO uint32_t  PATCH12;
  __IO uint32_t  PATCH13;
  __IO uint32_t  PATCH14;
  __IO uint32_t  PATCH15;
  __IO uint32_t  PATCH16;
  __IO uint32_t  PATCH17;
  __IO uint32_t  PATCH18;
  __IO uint32_t  PATCH19;
  __IO uint32_t  PATCH20;
  __IO uint32_t  PATCH21;
  __IO uint32_t  PATCH22;
  __IO uint32_t  PATCH23;
  __IO uint32_t  PATCH24;
  __IO uint32_t  PATCH25;
  __IO uint32_t  PATCH26;
  __IO uint32_t  PATCH27;
  __IO uint32_t  PATCH28;
  __IO uint32_t  PATCH29;
  __IO uint32_t  PATCH30;
  __IO uint32_t  PATCH31;
  __IO uint32_t  PATCH32;
  __IO uint32_t  PATCH33;
  __IO uint32_t  PATCH34;
  __IO uint32_t  PATCH35;
  __IO uint32_t  PATCH36;
  __IO uint32_t  PATCH37;
  __IO uint32_t  PATCH38;
  __IO uint32_t  PATCH39;
  __IO uint32_t  PATCH40;
  __IO uint32_t  PATCH41;
  __IO uint32_t  PATCH42;
  __IO uint32_t  PATCH43;
  __IO uint32_t  PATCH44;
  __IO uint32_t  PATCH45;
  __IO uint32_t  PATCH46;
  __IO uint32_t  PATCH47;
  __IO uint32_t  RRAM_WRT_CONFIG_LO;
  __IO uint32_t  RRAM_WRT_CONFIG_HI;
  __I  uint32_t  RRAM_READ_CONFIG_LO;
  __I  uint32_t  RRAM_READ_CONFIG_HI;
  __IO uint32_t  RRAM_CACHE_CONFIG;
  __IO uint32_t  RRAM_MEM_CONFIG;
  __I  uint32_t  RRAM_STATUS;
} CMSDK_AT_AHB_PRRF_TypeDef;

/*---------- AT_AHB_SHA2 ----------*/
typedef struct {
  __IO uint32_t  CONTROL;
  __IO uint32_t  SIDELOAD_CTRL;
  __IO uint32_t  CMD;
  __I  uint32_t  MESSAGE_LENGTH_LO;
  __I  uint32_t  MESSAGE_LENGTH_HI;
  __IO uint32_t  WIPE_V;
  __IO uint32_t  FIFO_PUSH;
  __I  uint32_t  DIGEST0;
  __I  uint32_t  DIGEST1;
  __I  uint32_t  DIGEST2;
  __I  uint32_t  DIGEST3;
  __I  uint32_t  DIGEST4;
  __I  uint32_t  DIGEST5;
  __I  uint32_t  DIGEST6;
  __I  uint32_t  DIGEST7;
  __IO uint32_t  KEY_0;
  __IO uint32_t  KEY_1;
  __IO uint32_t  KEY_2;
  __IO uint32_t  KEY_3;
  __IO uint32_t  KEY_4;
  __IO uint32_t  KEY_5;
  __IO uint32_t  KEY_6;
  __IO uint32_t  KEY_7;
  __I  uint32_t  STATUS;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
  __I  uint32_t  ERR_CODE;
       uint32_t  RESERVED0[994];
  __I  uint32_t  ID;
} CMSDK_AT_AHB_SHA2_TypeDef;

/*---------- AT_APB_WRPR_PINS ----------*/
typedef struct {
  __IO uint32_t  APB0_CTRL;
  __IO uint32_t  APB1_CTRL;
  __IO uint32_t  APB2_CTRL;
  __IO uint32_t  APB3_CTRL;
  __IO uint32_t  APB4_CTRL;
  __IO uint32_t  APB5_CTRL;
  __IO uint32_t  APB6_CTRL;
  __IO uint32_t  APB7_CTRL;
  __IO uint32_t  APB8_CTRL;
  __IO uint32_t  APB9_CTRL;
  __IO uint32_t  APB10_CTRL;
  __IO uint32_t  APB11_CTRL;
  __IO uint32_t  APB12_CTRL;
  __IO uint32_t  APB13_CTRL;
  __IO uint32_t  APB14_CTRL;
  __IO uint32_t  APB15_CTRL;
  __IO uint32_t  CLK_HPC_PIN_OUT_CTRL;
  __IO uint32_t  CLK_MPC_PIN_OUT_CTRL;
  __IO uint32_t  CLK_LPC_PIN_OUT_CTRL;
  __IO uint32_t  DBG_CTRL;
  __IO uint32_t  PSEL_A;
  __IO uint32_t  PSEL_B;
  __IO uint32_t  PSEL_C;
  __IO uint32_t  PSEL_D;
  __IO uint32_t  PSEL_E;
  __IO uint32_t  PSEL_F;
  __IO uint32_t  PSEL_G;
  __IO uint32_t  PSEL_H;
  __IO uint32_t  PSEL_I;
  __IO uint32_t  PUPD_OVRD;
  __IO uint32_t  PUPD_OVRD_VAL;
  __IO uint32_t  REMAP;
  __IO uint32_t  AHB_INTERPOSERS;
  __IO uint32_t  SCRATCHPAD_A;
  __IO uint32_t  SCRATCHPAD_B;
  __IO uint32_t  SCRATCHPAD_C;
  __IO uint32_t  SCRATCHPAD_D;
  __IO uint32_t  RRAM_WRITE_PROTECTION0;
  __IO uint32_t  RRAM_WRITE_PROTECTION1;
  __IO uint32_t  RRAM_WRITE_PROTECTION2;
  __IO uint32_t  RRAM_WRITE_PROTECTION3;
  __IO uint32_t  RRAM_WRITE_PROTECTION4;
  __IO uint32_t  RRAM_WRITE_PROTECTION5;
  __IO uint32_t  RRAM_WRITE_PROTECTION6;
  __IO uint32_t  RRAM_WRITE_PROTECTION7;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION0;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION1;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION2;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION3;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION4;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION5;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION6;
  __IO uint32_t  RRAM_STICKY_WRITE_PROTECTION7;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS0;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS1;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS2;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS3;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS4;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS5;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS6;
  __I  uint32_t  RRAM_STICKY_WRITE_PROTECTION_STATUS7;
  __IO uint32_t  RRAM_STICKY_READ_PROTECTION0;
  __I  uint32_t  RRAM_STICKY_READ_PROTECTION_STATUS0;
  __IO uint32_t  PROT_BITS_SET0;
  __IO uint32_t  PROT_BITS_SET1;
  __I  uint32_t  PROT_BITS_STAT0;
  __I  uint32_t  PROT_BITS_STAT1;
  __IO uint32_t  QSPI_STICKY_WRITE_PROTECTION0;
  __IO uint32_t  QSPI_STICKY_WRITE_PROTECTION1;
  __I  uint32_t  QSPI_STICKY_WRITE_PROTECTION_STATUS0;
  __I  uint32_t  QSPI_STICKY_WRITE_PROTECTION_STATUS1;
  __IO uint32_t  PDSN;
  __I  uint32_t  CALCOUNTRC;
  __IO uint32_t  SECURE_DEBUG_CTRL;
  __I  uint32_t  SECURE_DEBUG_STAT;
       uint32_t  RESERVED0[945];
  __I  uint32_t  CHIPID1;
  __I  uint32_t  CHIPID2;
  __I  uint32_t  CHIPREV;
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_WRPR_PINS_TypeDef;

/*---------- AT_APB_UART ----------*/
typedef struct {
  __IO uint32_t  DATA;
  __IO uint32_t  STATE;
  __IO uint32_t  CTRL;
  union {
    __IO uint32_t  INTSTATUS_CLEAR;
    __I  uint32_t  INTSTATUS;
    __O  uint32_t  INTCLEAR;
  };
  __IO uint32_t  BAUDDIV;
  __IO uint32_t  RX_LWM;
  __IO uint32_t  TX_LWM;
  __I  uint32_t  RX_FIFO_SPACES;
  __I  uint32_t  TX_FIFO_SPACES;
  __IO uint32_t  HW_FLOW_OVRD;
  __IO uint32_t  BAUD_RATE_DETECT;
  __IO uint32_t  BAUD_DIV_CEIL;
  __I  uint32_t  BRD_STAT;
  __IO uint32_t  INTMASK;
  __I  uint32_t  RX_FIFO_ENTRIES;
  union {
    __IO uint32_t  INTSTATUS_SET;
    __IO uint32_t  INTSET;
  };
       uint32_t  RESERVED0[996];
  __I  uint32_t  PID4;
  __I  uint32_t  PID5;
  __I  uint32_t  PID6;
  __I  uint32_t  PID7;
  __I  uint32_t  PID0;
  __I  uint32_t  PID1;
  __I  uint32_t  PID2;
  __I  uint32_t  PID3;
  __I  uint32_t  CID0;
  __I  uint32_t  CID1;
  __I  uint32_t  CID2;
  __I  uint32_t  CID3;
} CMSDK_AT_APB_UART_TypeDef;

/*---------- AT_APB_PWM ----------*/
typedef struct {
  __IO uint32_t  PWM_CTRL;
  __IO uint32_t  PWM0_CTRL;
  __IO uint32_t  PWM0_DUR;
  __IO uint32_t  PWM0_CFG;
  __IO uint32_t  PWM1_CTRL;
  __IO uint32_t  PWM1_DUR;
  __IO uint32_t  PWM1_CFG;
  __IO uint32_t  PWM2_CTRL;
  __IO uint32_t  PWM2_DUR;
  __IO uint32_t  PWM2_CFG;
  __IO uint32_t  PWM3_CTRL;
  __IO uint32_t  PWM3_DUR;
  __IO uint32_t  PWM3_CFG;
  __IO uint32_t  PWM4_CTRL;
  __IO uint32_t  PWM4_DUR;
  __IO uint32_t  PWM4_CFG;
  __IO uint32_t  PWM5_CTRL;
  __IO uint32_t  PWM5_DUR;
  __IO uint32_t  PWM5_CFG;
  __IO uint32_t  PWM6_CTRL;
  __IO uint32_t  PWM6_DUR;
  __IO uint32_t  PWM6_CFG;
  __IO uint32_t  PWM7_CTRL;
  __IO uint32_t  PWM7_DUR;
  __IO uint32_t  PWM7_CFG;
  __I  uint32_t  FSM_STATE;
  __IO uint32_t  FIFO_CFG;
  __IO uint32_t  FIFO_CARRIER1_DUR;
  __IO uint32_t  FIFO_CARRIER2_DUR;
  __I  uint32_t  FIFO_STAT;
  __I  uint32_t  FIFO_STAT1;
  __IO uint32_t  FIFO_SEL_ERR_SOURCE;
  __I  uint32_t  INTERRUPTS;
  __IO uint32_t  INTERRUPTS_MASK;
  __IO uint32_t  INTERRUPTS_CLEAR;
  __IO uint32_t  INTERRUPTS_SET;
       uint32_t  RESERVED0[984];
  __IO uint32_t  FIFO_DATA;
  __I  uint32_t  CORE_ID;
  __I  uint32_t  REV_HASH;
  __I  uint32_t  REV_KEY;
} CMSDK_AT_APB_PWM_TypeDef;

/*---------- AT_APB_SPI ----------*/
typedef struct {
  __IO uint32_t  CTRL;
  __IO uint32_t  TRANSACTION_SETUP;
  __IO uint32_t  TRANSACTION_SETUP_DMA;
  __I  uint32_t  TRANSACTION_STATUS;
  __IO uint32_t  DATA_BYTES_LOWER;
  __IO uint32_t  DATA_BYTES_UPPER;
  __IO uint32_t  INTERRUPT_MASK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
       uint32_t  RESERVED0[1013];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_SPI_TypeDef;

/*---------- AT_APB_KSM ----------*/
typedef struct {
  __IO uint32_t  CTRL0;
  __IO uint32_t  TIME_PARAM0;
  __IO uint32_t  TIME_PARAM1;
  __IO uint32_t  MATRIX_SIZE;
       uint32_t  RESERVED0[12];
  __I  uint32_t  KEYBOARD_PACKET;
  __I  uint32_t  LOW_POWER;
       uint32_t  RESERVED1[4];
  __IO uint32_t  LPBACK_KSI;
       uint32_t  RESERVED2[9];
  __I  uint32_t  STATUS;
       uint32_t  RESERVED3[15];
  __I  uint32_t  INTERRUPTS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  INTERRUPT_CLEAR;
       uint32_t  RESERVED4[970];
  __I  uint32_t  DEBUG;
  __I  uint32_t  DEBUG2;
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_KSM_TypeDef;

/*---------- AT_APB_QDEC ----------*/
typedef struct {
  __IO uint32_t  SETUP_FOR_AXIS_0;
  __I  uint32_t  ACCUM_PURGE_STATUS_FOR_AXIS_0;
  __I  uint32_t  ACCUMULATOR_VALUE_FOR_AXIS_0;
  __I  uint32_t  ERR_PURGE_STATUS_FOR_AXIS_0;
  __I  uint32_t  ERROR_COUNT_FOR_AXIS_0;
  __IO uint32_t  SETUP_FOR_AXIS_1;
  __I  uint32_t  ACCUM_PURGE_STATUS_FOR_AXIS_1;
  __I  uint32_t  ACCUMULATOR_VALUE_FOR_AXIS_1;
  __I  uint32_t  ERR_PURGE_STATUS_FOR_AXIS_1;
  __I  uint32_t  ERROR_COUNT_FOR_AXIS_1;
  __IO uint32_t  SETUP_FOR_AXIS_2;
  __I  uint32_t  ACCUM_PURGE_STATUS_FOR_AXIS_2;
  __I  uint32_t  ACCUMULATOR_VALUE_FOR_AXIS_2;
  __I  uint32_t  ERR_PURGE_STATUS_FOR_AXIS_2;
  __I  uint32_t  ERROR_COUNT_FOR_AXIS_2;
       uint32_t  RESERVED0[1008];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_QDEC_TypeDef;

/*---------- AT_APB_SLWTIMER ----------*/
typedef struct {
  __IO uint32_t  CONTROL;
  __IO uint32_t  INIT_LOW;
  __IO uint32_t  INIT_HIGH;
  __I  uint32_t  CNT_LOW;
  __I  uint32_t  CNT_HIGH;
  __IO uint32_t  THRES0_LOW;
  __IO uint32_t  THRES0_HIGH;
  __IO uint32_t  THRES1_LOW;
  __IO uint32_t  THRES1_HIGH;
  __IO uint32_t  THRES2_LOW;
  __IO uint32_t  THRES2_HIGH;
  __I  uint32_t  STATUS;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
       uint32_t  RESERVED0[1009];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_SLWTIMER_TypeDef;

/*---------- AT_APB_QSPI ----------*/
typedef struct {
  __IO uint32_t  TRANSACTION_SETUP;
  __I  uint32_t  READ_DATA;
  __IO uint32_t  OVERRIDE_DIN;
  __IO uint32_t  MODE;
  __IO uint32_t  REMOTE_AHB_SETUP;
  __IO uint32_t  REMOTE_AHB_SETUP_2;
  __IO uint32_t  REMOTE_AHB_SETUP_3;
  __IO uint32_t  REMOTE_AHB_SETUP_4;
  __IO uint32_t  REMOTE_AHB_SETUP_5;
  __IO uint32_t  REMOTE_AHB_SETUP_6;
  __IO uint32_t  REMOTE_AHB_SETUP_7;
  __I  uint32_t  REMOTE_AHB_WLE_CNT;
  __I  uint32_t  REMOTE_AHB_WIP_CNT;
  __I  uint32_t  REMOTE_AHB_DBG0;
  __I  uint32_t  REMOTE_AHB_DBG1;
  __I  uint32_t  REMOTE_AHB_DBG2;
       uint32_t  RESERVED0[1007];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_QSPI_TypeDef;

/*---------- AT_APB_I2C ----------*/
typedef struct {
  __IO uint32_t  TRANSACTION_SETUP;
  __IO uint32_t  CLOCK_CONTROL;
  __IO uint32_t  OUTGOING_DATA;
  __IO uint32_t  OUTGOING_DATA1;
  __IO uint32_t  IO_CTRL;
  __I  uint32_t  INCOMING_DATA;
  __I  uint32_t  INCOMING_DATA1;
  __I  uint32_t  TRANSACTION_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
       uint32_t  RESERVED0[1011];
  __I  uint32_t  ID;
} CMSDK_AT_APB_I2C_TypeDef;

/*---------- AT_APB_TSMC_NVM ----------*/
typedef struct {
  __IO uint32_t  OPMODE;
  __IO uint32_t  CTRL;
  __IO uint32_t  DATA0;
  __IO uint32_t  DATA1;
  __I  uint32_t  STATUS;
  __IO uint32_t  T_SP_VQ;
  __IO uint32_t  T_HP_VQ;
  __IO uint32_t  T_SP_PG;
  __IO uint32_t  T_HP_PG;
  __IO uint32_t  T_HP_CK;
  __IO uint32_t  T_S_PGM;
  __IO uint32_t  T_H_PGM;
  __IO uint32_t  T_CKHP;
  __IO uint32_t  T_CKLP;
  __IO uint32_t  T_SPS_CK;
  __IO uint32_t  T_SR_CK;
  __IO uint32_t  T_HR_CK;
  __IO uint32_t  T_CKLR;
  __IO uint32_t  T_CKHR;
  __IO uint32_t  T_SRS_CK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  INTERRUPT_SET;
  __IO uint32_t  INTERRUPT_RESET;
       uint32_t  RESERVED0[999];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_TSMC_NVM_TypeDef;

/*---------- AT_APB_WRPR_SHORT ----------*/
typedef struct {
  __IO uint32_t  APB0_CTRL;
  __IO uint32_t  APB1_CTRL;
  __IO uint32_t  APB2_CTRL;
  __IO uint32_t  APB3_CTRL;
  __IO uint32_t  APB4_CTRL;
  __IO uint32_t  APB5_CTRL;
  __IO uint32_t  APB6_CTRL;
  __IO uint32_t  APB7_CTRL;
  __IO uint32_t  APB8_CTRL;
  __IO uint32_t  APB9_CTRL;
  __IO uint32_t  APB10_CTRL;
  __IO uint32_t  APB11_CTRL;
  __IO uint32_t  APB12_CTRL;
  __IO uint32_t  APB13_CTRL;
  __IO uint32_t  APB14_CTRL;
  __IO uint32_t  APB15_CTRL;
       uint32_t  RESERVED0[1007];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_WRPR_SHORT_TypeDef;

/*---------- RIF ----------*/
typedef struct {
  __IO uint32_t  BIAS;
  __IO uint32_t  RXBBF;
  __IO uint32_t  RXBBF_1M;
  __IO uint32_t  RXBBF_2M;
  __IO uint32_t  SYNTX_MODGAIN;
  __IO uint32_t  SYNTX_VCOCAP;
  __IO uint32_t  LNA;
  __IO uint32_t  RGT;
  __IO uint32_t  RGTHW;
  __IO uint32_t  TXGAIN0;
  __IO uint32_t  TXGAIN1;
  __IO uint32_t  TXGAIN2;
  __IO uint32_t  TXGAIN3;
  __IO uint32_t  RXGAIN0;
  __IO uint32_t  RXGAIN1;
  __IO uint32_t  RXGAIN2;
  __IO uint32_t  RXGAIN3;
  __IO uint32_t  RXGAIN4;
  __IO uint32_t  RXGAIN5;
  __IO uint32_t  RXGAIN6;
  __IO uint32_t  RXGAIN7;
  __IO uint32_t  RXGAIN8;
  __IO uint32_t  RXGAIN9;
  __IO uint32_t  RXGAIN10;
  __IO uint32_t  RXGAIN11;
  __IO uint32_t  RXGAIN12;
  __IO uint32_t  RXGAIN13;
  __IO uint32_t  RXGAIN14;
  __IO uint32_t  RXGAIN15;
  __IO uint32_t  SYNTX_CAL;
  __IO uint32_t  SYNTX0;
  __IO uint32_t  SYNTX1;
  __IO uint32_t  SYNTX2;
  __IO uint32_t  SYNTX3;
  __IO uint32_t  SYNTX4;
  __IO uint32_t  SYNTX5;
  __IO uint32_t  DUTY_CYCLE;
  __IO uint32_t  TXGAIN0_PMU;
  __IO uint32_t  TXGAIN1_PMU;
  __IO uint32_t  TXGAIN2_PMU;
  __IO uint32_t  RX0;
  __IO uint32_t  TIMER0;
  __IO uint32_t  TIMER1;
  __IO uint32_t  TIMER2;
  __IO uint32_t  TIMER3;
  __IO uint32_t  HADM_TIMER0;
  __IO uint32_t  HADM_TIMER1;
  __IO uint32_t  HADM_TIMER2;
  __IO uint32_t  HADM_TIMER3;
  __IO uint32_t  RXDC7;
  __IO uint32_t  SYNTH_CHAN0;
  __IO uint32_t  SYNTH_CHAN1;
  __IO uint32_t  SYNTH_CHAN2;
  __IO uint32_t  SYNTH_CHAN3;
  __IO uint32_t  SYNTH_CHAN4;
  __IO uint32_t  SYNTH_CHAN5;
  __IO uint32_t  ADC_CNTL;
  __IO uint32_t  MODE_CNTL;
  __IO uint32_t  MODE_CNTL2;
  __IO uint32_t  XLNA_XPA_CNTL;
  __IO uint32_t  CAL_CNTL;
  __I  uint32_t  CAL_DONE;
       uint32_t  RESERVED0[961];
  __I  uint32_t  ID;
} CMSDK_RIF_TypeDef;

/*---------- MDM ----------*/
typedef struct {
  __IO uint32_t  AGCMEAS;
  __IO uint32_t  AGCGAIN;
  __IO uint32_t  DCOFF;
  __IO uint32_t  TIA_FORCE_DCCALRESULTS;
  __IO uint32_t  TIA_FORCE_DCCALRESULTS2;
  __IO uint32_t  TIA_LP_FORCE_DCCALRESULTS;
  __IO uint32_t  TIA_LP_FORCE_DCCALRESULTS2;
  __IO uint32_t  PGA_FORCE_DCCALRESULTS;
  __IO uint32_t  PGA_FORCE_DCCALRESULTS2;
  __IO uint32_t  PGA_LP_FORCE_DCCALRESULTS;
  __IO uint32_t  PGA_LP_FORCE_DCCALRESULTS2;
  __IO uint32_t  NOTCH_FORCE_DCCALRESULTS;
  __IO uint32_t  PGA_CAL_GAIN_FORCE_DCCALRESULTS;
  __IO uint32_t  PGA_CAL_GAIN_FORCE_DCCALRESULTS2;
  __IO uint32_t  IQCORR;
  __IO uint32_t  AGCMEAS_ALT;
  __IO uint32_t  AGCGAIN_ALT;
  __IO uint32_t  XLNA;
  __IO uint32_t  XLNA_ALT;
  __IO uint32_t  AGCSAT;
  __IO uint32_t  AGCSAT_ALT;
  __IO uint32_t  BASELINE;
  __IO uint32_t  BASELINE_ALT;
  __IO uint32_t  MARGIN;
  __IO uint32_t  MARGIN_ALT;
  __IO uint32_t  PWRSTEP;
  __IO uint32_t  PWRSTEP_ALT;
  __IO uint32_t  AGCPWR;
  __IO uint32_t  AGCPWR_ALT;
  __IO uint32_t  AGCPWR2;
  __IO uint32_t  AGCPWR2_ALT;
  __IO uint32_t  AGCTIME;
  __IO uint32_t  AGCTIME_ALT;
  __IO uint32_t  TWOMEG_AGCTIME;
  __IO uint32_t  TWOMEG_AGCTIME_ALT;
  __IO uint32_t  AGCTIME2;
  __IO uint32_t  AGCTIME2_ALT;
  __IO uint32_t  AGCCNTL;
  __IO uint32_t  AGCCNTL_ALT;
  __IO uint32_t  AGCPD;
  __IO uint32_t  AGCPD_ALT;
  __IO uint32_t  AGCDET;
  __IO uint32_t  AGCDET_ALT;
  __IO uint32_t  AGCOFFSET;
  __IO uint32_t  AGCOFFSET_ALT;
  __IO uint32_t  SYNCH;
  __IO uint32_t  SYNCH_ALT;
  __IO uint32_t  TIMETRACK;
  __IO uint32_t  TIMESYNC;
  __IO uint32_t  TIMESYNC_ALT;
  __IO uint32_t  SYNCDEMOD;
  __IO uint32_t  SYNCDEMOD_ALT;
  __IO uint32_t  RESETINITCFO;
  __IO uint32_t  RESETINITCFO_ALT;
  __IO uint32_t  INTMFREQ;
  __IO uint32_t  INTMFREQ_ALT;
  __IO uint32_t  TSTIMEOUT;
  __IO uint32_t  DEMOD;
  __IO uint32_t  DFEWITHFFE;
  __IO uint32_t  DFEWITHOUTFFE;
  __IO uint32_t  TWOMEG_DFEWITHFFE;
  __IO uint32_t  TWOMEG_DFEWITHOUTFFE;
  __IO uint32_t  FREQ;
  __IO uint32_t  FREQLIM;
  __IO uint32_t  LR;
  __IO uint32_t  LR_ALT;
  __IO uint32_t  MIXER;
  __IO uint32_t  ACCESS_ADDRESS;
  __IO uint32_t  MODE;
  __IO uint32_t  DCCAL;
  __IO uint32_t  DCCAL2;
  __IO uint32_t  DCCAL_CTRL;
  __IO uint32_t  TIA_DCCAL;
  __IO uint32_t  TIA_DCCAL2;
  __IO uint32_t  TIA_DCCAL3;
  __IO uint32_t  TIA_DCCAL4;
  __IO uint32_t  PGA_DCCAL;
  __IO uint32_t  PGA_DCCAL2;
  __IO uint32_t  PGA_DCCAL3;
  __IO uint32_t  PGA_DCCAL4;
  __IO uint32_t  PGA_DCCAL5;
  __IO uint32_t  NOTCH_DCCAL;
  __IO uint32_t  NOTCH_DCCAL2;
  __IO uint32_t  NOTCH_DCCAL3;
  __IO uint32_t  DCOFFTRK;
  __IO uint32_t  DCOFFTRK_ALT;
  __IO uint32_t  DCOFFTRK2;
  __IO uint32_t  DCOFFTRK2_ALT;
  __IO uint32_t  DFCNTL;
  __IO uint32_t  DFCNTL_ALT;
  __IO uint32_t  SWANTCTETIME;
  __IO uint32_t  DFTABLE;
  __I  uint32_t  DFSTATUS;
  __IO uint32_t  ANTRX3TO0;
  __IO uint32_t  ANTTX3TO0;
  __IO uint32_t  ANTRX7TO4;
  __IO uint32_t  ANTTX7TO4;
  __IO uint32_t  ANTIDLE;
  __IO uint32_t  ANTID3TO0;
  __IO uint32_t  ANTID7TO4;
  __IO uint32_t  WHT_CTRL;
  __I  uint32_t  DCCALRESULTS;
  __I  uint32_t  DCCALRESULTS2;
  __I  uint32_t  TIA_RETENT_DCCALRESULTS;
  __I  uint32_t  TIA_DCCALRESULTS2;
  __I  uint32_t  TIA_DCCALRESULTS3;
  __I  uint32_t  TIA_LP_RETENT_DCCALRESULTS;
  __I  uint32_t  TIA_LP_DCCALRESULTS2;
  __I  uint32_t  PGA_RETENT_DCCALRESULTS;
  __I  uint32_t  PGA_DCCALRESULTS2;
  __I  uint32_t  PGA_DCCALRESULTS3;
  __I  uint32_t  PGA_LP_RETENT_DCCALRESULTS;
  __I  uint32_t  PGA_LP_DCCALRESULTS2;
  __I  uint32_t  NOTCH_RETENT_DCCALRESULTS;
  __I  uint32_t  NOTCH_DCCALRESULTS2;
  __I  uint32_t  AGCSTATUS;
  __I  uint32_t  MEASFREQ;
  __IO uint32_t  EXPER;
  __IO uint32_t  SPARE0;
  __IO uint32_t  DEBUG;
  __IO uint32_t  LC2LC;
  __I  uint32_t  IRQ;
  __IO uint32_t  IRQM;
  __IO uint32_t  IRQC;
  __IO uint32_t  ERR_INJ;
  __IO uint32_t  DEBUG32;
  __IO uint32_t  DUO;
       uint32_t  RESERVED0[896];
  __I  uint32_t  CORE_ID;
} CMSDK_MDM_TypeDef;

/*---------- AT_APB_PSEQ_PARIS ----------*/
typedef struct {
  __IO uint32_t  CTRL0;
  __IO uint32_t  CTRL1;
  __IO uint32_t  RETAIN_ALL_WAKE_MASK;
  __IO uint32_t  HIB_WAKE_MASK;
  __IO uint32_t  BLE_RET_TO_BLE_ACT_WAKE_MASK;
  __IO uint32_t  BLE_RET_TO_CPU_ACT_WAKE_MASK;
  __IO uint32_t  GPIO_WAKE_MASK;
  __IO uint32_t  GPIO_WAKE_TYPE;
  __IO uint32_t  GPIO_WAKE_POL;
  __IO uint32_t  GPIO_WAKE_BOTH_EDGES;
  __I  uint32_t  GPIO_WAKE_STATUS;
  __IO uint32_t  WURX_CONFIG;
  __IO uint32_t  WURX_CONFIG1;
  __IO uint32_t  WURX_CONFIG2;
  __IO uint32_t  GADC_CONFIG;
  __IO uint32_t  XTAL_BITS0;
  __IO uint32_t  XTAL_BITS1;
  __IO uint32_t  OVERRIDES;
  __IO uint32_t  OVERRIDES2;
  __IO uint32_t  OVERRIDES3;
  __IO uint32_t  OVERRIDES4;
  __IO uint32_t  OVERRIDES5;
  __IO uint32_t  SYSRAM_OVERRIDES;
  __IO uint32_t  SYSRAM_OVERRIDES2;
  __IO uint32_t  SYSRAM_OVERRIDES3;
  __IO uint32_t  SYSRAM_OVERRIDES4;
  __IO uint32_t  SYSRAM_OVERRIDES5;
  __IO uint32_t  SYSRAM_OVERRIDES6;
  __IO uint32_t  SYSRAM_OVERRIDES7;
  __IO uint32_t  SYSRAM_OVERRIDES8;
  __IO uint32_t  EMRAM_OVERRIDES;
  __IO uint32_t  EMRAM_OVERRIDES2;
  __IO uint32_t  EMRAM_OVERRIDES3;
  __IO uint32_t  EMRAM_OVERRIDES4;
  __IO uint32_t  EMRAM_OVERRIDES5;
  __IO uint32_t  EMRAM_OVERRIDES6;
  __IO uint32_t  EMRAM_OVERRIDES7;
  __IO uint32_t  EMRAM_OVERRIDES8;
  __IO uint32_t  ICACHE_OVERRIDES;
  __IO uint32_t  ICACHE_OVERRIDES2;
  __IO uint32_t  ICACHE_OVERRIDES3;
  __IO uint32_t  ICACHE_OVERRIDES4;
  __IO uint32_t  ICACHE_OVERRIDES5;
  __IO uint32_t  ICACHE_OVERRIDES6;
  __IO uint32_t  ICACHE_OVERRIDES7;
  __IO uint32_t  ICACHE_OVERRIDES8;
  __IO uint32_t  RRAMCACHE_OVERRIDES;
  __IO uint32_t  RRAMCACHE_OVERRIDES2;
  __IO uint32_t  RRAMCACHE_OVERRIDES3;
  __IO uint32_t  RRAMCACHE_OVERRIDES4;
  __IO uint32_t  RRAMCACHE_OVERRIDES5;
  __IO uint32_t  RRAMCACHE_OVERRIDES6;
  __IO uint32_t  RRAMCACHE_OVERRIDES7;
  __IO uint32_t  RRAMCACHE_OVERRIDES8;
  __IO uint32_t  QSPICACHE_OVERRIDES;
  __IO uint32_t  COUNTER_CONTROL;
  __I  uint32_t  CURRENT_REAL_TIME;
  __I  uint32_t  CURRENT_COUNT_DOWN_TIME;
  __IO uint32_t  INIT_COUNT_DOWN;
  __I  uint32_t  INST_PENDING;
  __I  uint32_t  STATUS;
  __IO uint32_t  PERSISTENT0;
  __IO uint32_t  PERSISTENT1;
  __IO uint32_t  PERSISTENT2;
  __IO uint32_t  PERSISTENT3;
  __IO uint32_t  PERSISTENT4;
  __IO uint32_t  PERSISTENT5;
  __IO uint32_t  PERSISTENT6;
  __IO uint32_t  PERSISTENT7;
  __IO uint32_t  SENSOR_HUB_CONTROL;
  __IO uint32_t  KSMQDEC_CONTROL;
  __IO uint32_t  SPII2C_CONTROL;
  __IO uint32_t  FLASH_CONTROL;
  __IO uint32_t  FLASH_CONTROL2;
  __I  uint32_t  PMU_STATUS;
  __IO uint32_t  PMU_INTERRUPT;
  __IO uint32_t  SYSRAM_WRITE_BLOCK_CFG;
  __IO uint32_t  SYSRAM_SSRS_CFG;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  RESET_INTERRUPT;
  __IO uint32_t  FPGA_CFG;
  __IO uint32_t  PLL;
  __I  uint32_t  RADIO_STATUS;
  __I  uint32_t  RRAM_READ_CONFIG_LO;
  __I  uint32_t  RRAM_READ_CONFIG_HI;
  __IO uint32_t  SENSOR_HUB_IMM_BREAKOUT_MASK;
  __IO uint32_t  FSM_TUNINGA;
  __IO uint32_t  FSM_TUNINGB;
  __IO uint32_t  WDOG_CONTROL;
  __I  uint32_t  WDOG_TIMER;
       uint32_t  RESERVED0[932];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_PSEQ_PARIS_TypeDef;

/*---------- AT_APB_SWD ----------*/
typedef struct {
  __IO uint32_t  DAP_ADDR_CTRL;
  __IO uint32_t  DAP_WDATA_CTRL;
  __IO uint32_t  SWD_CLK_DIV_CTRL;
  __IO uint32_t  PATTERN_UPPER_CTRL;
  __IO uint32_t  PATTERN_LOWER_CTRL;
  __IO uint32_t  TAIL_DUR;
  __IO uint32_t  PATTERN_DUR;
  __I  uint32_t  DAP_BRIDGE_STATUS;
  __I  uint32_t  DAP_RESP_STATUS;
  __IO uint32_t  RW_CTRL;
  __IO uint32_t  APNDP_CTRL;
  __IO uint32_t  TRIGGER_CTRL;
  __I  uint32_t  DAP_RDATA;
  __IO uint32_t  INTERRUPT_MASK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
  __IO uint32_t  DTOP_BYPASS_CTRL;
  __I  uint32_t  DTOP_BYPASS_STAT;
  __IO uint32_t  DTOP_BYPASS_GPO;
  __IO uint32_t  DTOP_BYPASS_RIF_MODE_CNTL;
  __IO uint32_t  DTOP_BYPASS_RIF_CAL_CNTL;
  __IO uint32_t  DTOP_BYPASS_RIF_RXDC7;
       uint32_t  RESERVED0[1000];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_SWD_TypeDef;

/*---------- AT_APB_GADC ----------*/
typedef struct {
  __IO uint32_t  CTRL;
  __IO uint32_t  CTRL1;
  __IO uint32_t  CH1_DATAPATH_CONFIG;
  __IO uint32_t  CH2_DATAPATH_CONFIG;
  __IO uint32_t  CH3_DATAPATH_CONFIG;
  __IO uint32_t  CH4_DATAPATH_CONFIG;
  __IO uint32_t  CH5_DATAPATH_CONFIG;
  __IO uint32_t  CH6_DATAPATH_CONFIG;
  __IO uint32_t  CH7_DATAPATH_CONFIG;
  __IO uint32_t  CH8_DATAPATH_CONFIG;
  __IO uint32_t  CH9_DATAPATH_CONFIG;
  __IO uint32_t  CH10_DATAPATH_CONFIG;
  __IO uint32_t  CH11_DATAPATH_CONFIG;
  __IO uint32_t  CH12_DATAPATH_CONFIG;
  __IO uint32_t  GAIN_CONFIG0;
  __IO uint32_t  GAIN_CONFIG1;
  __I  uint32_t  DATAPATH_OUTPUT;
  __I  uint32_t  INTERRUPTS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  INTERRUPT_CLEAR;
  __I  uint32_t  FIFO_DBG;
       uint32_t  RESERVED0[1002];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_GADC_TypeDef;

/*---------- AT_APB_TRNG ----------*/
typedef struct {
  __IO uint32_t  CONTROL;
  __I  uint32_t  STATUS;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
  __I  uint32_t  TRNG;
       uint32_t  RESERVED0[1016];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_TRNG_TypeDef;

/*---------- AT_APB_RCOS_CAL ----------*/
typedef struct {
  __IO uint32_t  CAL_CTRL;
  __IO uint32_t  SLOW_CLK_SET;
  __I  uint32_t  SLOW_CLK_CNT;
  __I  uint32_t  FAST_CLK_CNT;
  __IO uint32_t  SOURCE_CLK_SEL;
  __IO uint32_t  FORCE_RESET;
  __I  uint32_t  STAT;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
       uint32_t  RESERVED0[1012];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_RCOS_CAL_TypeDef;

/*---------- AT_APB_SHUB ----------*/
typedef struct {
  __IO uint32_t  SETUP0;
  __IO uint32_t  SETUP1;
  __IO uint32_t  PORT0_SETUP;
  __IO uint32_t  PORT0_SENSOR0_SETUP;
  __IO uint32_t  PORT0_SENSOR1_SETUP;
  __IO uint32_t  PORT0_SENSOR2_SETUP;
  __IO uint32_t  PORT0_SENSOR3_SETUP;
  __IO uint32_t  PORT0_SENSOR4_SETUP;
  __IO uint32_t  PORT0_SENSOR5_SETUP;
  __IO uint32_t  PORT0_SENSOR6_SETUP;
  __IO uint32_t  PORT0_SENSOR7_SETUP;
  __IO uint32_t  PORT0_SPI_ENG0_CTRL;
  __IO uint32_t  PORT0_I2C_IDW_0;
  __IO uint32_t  PORT0_I2C_IDW_1;
  __IO uint32_t  PORT0_I2C_IDW_2;
  __IO uint32_t  PORT0_I2C_IDW_3;
  __IO uint32_t  PORT0_I2C_IDW_4;
  __IO uint32_t  PORT0_I2C_IDW_5;
  __IO uint32_t  PORT0_I2C_IDW_6;
  __IO uint32_t  PORT0_I2C_IDW_7;
  __IO uint32_t  PORT0_I2C_ADDR_0;
  __IO uint32_t  PORT0_I2C_ADDR_1;
  __IO uint32_t  PORT0_I2C_ADDR_2;
  __IO uint32_t  PORT0_I2C_ADDR_3;
  __IO uint32_t  PORT0_I2C_ADDR_4;
  __IO uint32_t  PORT0_I2C_ADDR_5;
  __IO uint32_t  PORT0_I2C_ADDR_6;
  __IO uint32_t  PORT0_I2C_ADDR_7;
  __IO uint32_t  PORT0_I2C_IDR_0;
  __IO uint32_t  PORT0_I2C_IDR_1;
  __IO uint32_t  PORT0_I2C_IDR_2;
  __IO uint32_t  PORT0_I2C_IDR_3;
  __IO uint32_t  PORT0_I2C_IDR_4;
  __IO uint32_t  PORT0_I2C_IDR_5;
  __IO uint32_t  PORT0_I2C_IDR_6;
  __IO uint32_t  PORT0_I2C_IDR_7;
  __IO uint32_t  PORT0_I2C_DAT_CTRL;
  __IO uint32_t  PORT0_I2C_DAT_LAST_CTRL;
  __IO uint32_t  PORT0_ALM0_QUAN_CTRL;
  __IO uint32_t  PORT0_ALM1_QUAN_CTRL;
  __IO uint32_t  PORT0_ALM0_TRIG_CTRL;
  __IO uint32_t  PORT0_ALM1_TRIG_CTRL;
  __IO uint32_t  PORT0_ALM0_THRHLD_MAX_0;
  __IO uint32_t  PORT0_ALM0_THRHLD_MAX_1;
  __IO uint32_t  PORT0_ALM0_THRHLD_MAX_2;
  __IO uint32_t  PORT0_ALM0_THRHLD_MIN_0;
  __IO uint32_t  PORT0_ALM0_THRHLD_MIN_1;
  __IO uint32_t  PORT0_ALM0_THRHLD_MIN_2;
  __IO uint32_t  PORT0_ALM1_THRHLD_MAX_0;
  __IO uint32_t  PORT0_ALM1_THRHLD_MAX_1;
  __IO uint32_t  PORT0_ALM1_THRHLD_MAX_2;
  __IO uint32_t  PORT0_ALM1_THRHLD_MIN_0;
  __IO uint32_t  PORT0_ALM1_THRHLD_MIN_1;
  __IO uint32_t  PORT0_ALM1_THRHLD_MIN_2;
  __I  uint32_t  PORT0_STATUS;
  __IO uint32_t  PORT1_SETUP;
  __IO uint32_t  PORT1_SENSOR0_SETUP;
  __IO uint32_t  PORT1_SPI_ENG0_CTRL;
  __IO uint32_t  PORT1_I2C_IDW_0;
  __IO uint32_t  PORT1_I2C_ADDR_0;
  __IO uint32_t  PORT1_I2C_IDR_0;
  __IO uint32_t  PORT1_I2C_DAT_CTRL;
  __IO uint32_t  PORT1_I2C_DAT_LAST_CTRL;
  __IO uint32_t  PORT1_ALM0_QUAN_CTRL;
  __IO uint32_t  PORT1_ALM0_TRIG_CTRL;
  __IO uint32_t  PORT1_ALM0_THRHLD_MAX_0;
  __IO uint32_t  PORT1_ALM0_THRHLD_MAX_1;
  __IO uint32_t  PORT1_ALM0_THRHLD_MAX_2;
  __IO uint32_t  PORT1_ALM0_THRHLD_MIN_0;
  __IO uint32_t  PORT1_ALM0_THRHLD_MIN_1;
  __IO uint32_t  PORT1_ALM0_THRHLD_MIN_2;
  __I  uint32_t  PORT1_STATUS;
  __IO uint32_t  FLASH_CTRL0;
  __IO uint32_t  FLASH_CTRL1;
  __IO uint32_t  FLASH_CTRL2;
  __IO uint32_t  FLASH_CTRL3;
  __IO uint32_t  FLASH_CTRL4;
  __I  uint32_t  FLASH_STATUS0;
  __I  uint32_t  FLASH_STATUS1;
  __I  uint32_t  SHUB_STATUS0;
  __IO uint32_t  PC_CTRL;
  __IO uint32_t  PC_CTRL2;
  __I  uint32_t  REG7;
  __IO uint32_t  SHUB_SRAM_CLK_SEL;
  __IO uint32_t  REGFILE_SEL;
  __IO uint32_t  REGFILE_REGW;
       uint32_t  RESERVED0[937];
  __I  uint32_t  ID;
} CMSDK_AT_APB_SHUB_TypeDef;

/*---------- AT_APB_PDM ----------*/
typedef struct {
  __IO uint32_t  CONTROL;
  __IO uint32_t  FILTER_CONFIG;
  __IO uint32_t  FILTER_CONFIG1;
  __IO uint32_t  GAIN_CONTROL_CONFIG;
  __I  uint32_t  PCM_SAMPLE;
  __I  uint32_t  FIFO_DEBUG;
  __I  uint32_t  INTERRUPTS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  INTERRUPT_CLEAR;
  __IO uint32_t  BUFFER_ACCESS_MODE;
  __I  uint32_t  AUTO_COUNTER;
  __I  uint32_t  BUFFER_DEPTH;
       uint32_t  RESERVED0[1009];
  __I  uint32_t  CORE_ID;
  __I  uint32_t  REV_HASH;
  __I  uint32_t  REV_KEY;
} CMSDK_AT_APB_PDM_TypeDef;

/*---------- AT_I2S ----------*/
typedef struct {
  __IO uint32_t  I2S_CTRL0;
  __IO uint32_t  I2S_CTRL1_TX;
  __IO uint32_t  I2S_CTRL1_RX;
  __IO uint32_t  I2S_CTRL2_TX;
  __IO uint32_t  I2S_CTRL2_RX;
  __IO uint32_t  I2S_CTRL3;
  __IO uint32_t  I2S_CTRL4;
  __IO uint32_t  I2S_CTRL5_TX;
  __IO uint32_t  I2S_CTRL5_RX;
  __IO uint32_t  I2S_INTRP_CTRL;
  __I  uint32_t  I2S_PP1_RDATA;
  __O  uint32_t  I2S_PP0_WDATA;
  __IO uint32_t  I2S_PP1_CTRL;
  __IO uint32_t  I2S_PP0_CTRL;
  __I  uint32_t  I2S_IRQ0;
  __IO uint32_t  I2S_IRQM0;
  __IO uint32_t  I2S_IRQS0;
  __IO uint32_t  I2S_IRQC0;
  __I  uint32_t  I2S_IRQ1;
  __IO uint32_t  I2S_IRQM1;
  __IO uint32_t  I2S_IRQS1;
  __IO uint32_t  I2S_IRQC1;
  __I  uint32_t  BUFFER_DEPTH;
  __I  uint32_t  PP_ST;
  __IO uint32_t  I2S_SPARE;
  __IO uint32_t  I2S_DBG;
       uint32_t  RESERVED0[997];
  __I  uint32_t  ID;
} CMSDK_AT_I2S_TypeDef;

/*---------- AT_APB_CLKRSTGEN ----------*/
typedef struct {
  __IO uint32_t  CLK_BP_CTRL;
  __I  uint32_t  CLK_BP_CTRL_STAT;
  __IO uint32_t  CLK_AUD_CTRL;
  __IO uint32_t  PLL_CTRL;
  __IO uint32_t  USER_RESETS;
  __IO uint32_t  USER_CLK_DISABLES;
  __IO uint32_t  USER_CLK_GATE_FORCE_ON;
  __IO uint32_t  USER_CLK_GATE_CTRL;
  __I  uint32_t  CONFIGURATION;
  __IO uint32_t  CLKSYNC;
       uint32_t  RESERVED0[1013];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_CLKRSTGEN_TypeDef;

/*---------- AT_APB_AES ----------*/
typedef struct {
  __IO uint32_t  ALERT_TEST;
  __IO uint32_t  KEY_SHARE0_0;
  __IO uint32_t  KEY_SHARE0_1;
  __IO uint32_t  KEY_SHARE0_2;
  __IO uint32_t  KEY_SHARE0_3;
  __IO uint32_t  KEY_SHARE0_4;
  __IO uint32_t  KEY_SHARE0_5;
  __IO uint32_t  KEY_SHARE0_6;
  __IO uint32_t  KEY_SHARE0_7;
  __IO uint32_t  KEY_SHARE1_0;
  __IO uint32_t  KEY_SHARE1_1;
  __IO uint32_t  KEY_SHARE1_2;
  __IO uint32_t  KEY_SHARE1_3;
  __IO uint32_t  KEY_SHARE1_4;
  __IO uint32_t  KEY_SHARE1_5;
  __IO uint32_t  KEY_SHARE1_6;
  __IO uint32_t  KEY_SHARE1_7;
  __IO uint32_t  IV_0;
  __IO uint32_t  IV_1;
  __IO uint32_t  IV_2;
  __IO uint32_t  IV_3;
  __IO uint32_t  DATA_IN_0;
  __IO uint32_t  DATA_IN_1;
  __IO uint32_t  DATA_IN_2;
  __IO uint32_t  DATA_IN_3;
  __I  uint32_t  DATA_OUT_0;
  __I  uint32_t  DATA_OUT_1;
  __I  uint32_t  DATA_OUT_2;
  __I  uint32_t  DATA_OUT_3;
  __IO uint32_t  CTRL_SHADOWED;
  __IO uint32_t  TRIGGER;
  __I  uint32_t  STATUS;
       uint32_t  RESERVED0[989];
  __I  uint32_t  STATUS1;
  __IO uint32_t  SIDELOAD_CTRL;
  __I  uint32_t  ID;
} CMSDK_AT_APB_AES_TypeDef;

/*---------- AT_AHB_DMA ----------*/
typedef struct {
  __IO uint32_t  OPMODE;
  __IO uint32_t  CONST_WDATA;
  __IO uint32_t  SRC_ADDR;
  __IO uint32_t  TAR_ADDR;
  __IO uint32_t  SIZE;
  __IO uint32_t  SRC_CTRL;
  __IO uint32_t  TAR_CTRL;
  __IO uint32_t  FIFO_DPTH_ADDR;
  __IO uint32_t  FIFO_PORT_SEL;
  __IO uint32_t  SPI_PORT_SEL;
  __I  uint32_t  ERR_STAT;
  __I  uint32_t  STATUS;
  __I  uint32_t  TOTAL_WRITE_REMAINDER;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
  __IO uint32_t  CFG_HNONSEC;
  __IO uint32_t  CHAN1_OPMODE;
  __IO uint32_t  CHAN1_CONST_WDATA;
  __IO uint32_t  CHAN1_SRC_ADDR;
  __IO uint32_t  CHAN1_TAR_ADDR;
  __IO uint32_t  CHAN1_SIZE;
  __IO uint32_t  CHAN1_SRC_CTRL;
  __IO uint32_t  CHAN1_TAR_CTRL;
  __IO uint32_t  CHAN1_FIFO_DPTH_ADDR;
  __IO uint32_t  CHAN1_FIFO_PORT_SEL;
  __IO uint32_t  CHAN1_SPI_PORT_SEL;
  __I  uint32_t  CHAN1_ERR_STAT;
  __I  uint32_t  CHAN1_STATUS;
  __I  uint32_t  CHAN1_TOTAL_WRITE_REMAINDER;
  __I  uint32_t  CHAN1_INTERRUPT_STATUS;
  __IO uint32_t  CHAN1_INTERRUPT_MASK;
  __IO uint32_t  CHAN1_SET_INTERRUPT;
  __IO uint32_t  CHAN1_RESET_INTERRUPT;
  __IO uint32_t  CHAN1_CFG_HNONSEC;
  __IO uint32_t  CHAN2_OPMODE;
  __IO uint32_t  CHAN2_CONST_WDATA;
  __IO uint32_t  CHAN2_SRC_ADDR;
  __IO uint32_t  CHAN2_TAR_ADDR;
  __IO uint32_t  CHAN2_SIZE;
  __IO uint32_t  CHAN2_SRC_CTRL;
  __IO uint32_t  CHAN2_TAR_CTRL;
  __IO uint32_t  CHAN2_FIFO_DPTH_ADDR;
  __IO uint32_t  CHAN2_FIFO_PORT_SEL;
  __IO uint32_t  CHAN2_SPI_PORT_SEL;
  __I  uint32_t  CHAN2_ERR_STAT;
  __I  uint32_t  CHAN2_STATUS;
  __I  uint32_t  CHAN2_TOTAL_WRITE_REMAINDER;
  __I  uint32_t  CHAN2_INTERRUPT_STATUS;
  __IO uint32_t  CHAN2_INTERRUPT_MASK;
  __IO uint32_t  CHAN2_SET_INTERRUPT;
  __IO uint32_t  CHAN2_RESET_INTERRUPT;
  __IO uint32_t  CHAN2_CFG_HNONSEC;
  __IO uint32_t  CHAN3_OPMODE;
  __IO uint32_t  CHAN3_CONST_WDATA;
  __IO uint32_t  CHAN3_SRC_ADDR;
  __IO uint32_t  CHAN3_TAR_ADDR;
  __IO uint32_t  CHAN3_SIZE;
  __IO uint32_t  CHAN3_SRC_CTRL;
  __IO uint32_t  CHAN3_TAR_CTRL;
  __IO uint32_t  CHAN3_FIFO_DPTH_ADDR;
  __IO uint32_t  CHAN3_FIFO_PORT_SEL;
  __IO uint32_t  CHAN3_SPI_PORT_SEL;
  __I  uint32_t  CHAN3_ERR_STAT;
  __I  uint32_t  CHAN3_STATUS;
  __I  uint32_t  CHAN3_TOTAL_WRITE_REMAINDER;
  __I  uint32_t  CHAN3_INTERRUPT_STATUS;
  __IO uint32_t  CHAN3_INTERRUPT_MASK;
  __IO uint32_t  CHAN3_SET_INTERRUPT;
  __IO uint32_t  CHAN3_RESET_INTERRUPT;
  __IO uint32_t  CHAN3_CFG_HNONSEC;
  __IO uint32_t  ERR_INTERRUPT_DLY;
  __IO uint32_t  ARBITER_CTRL;
  __I  uint32_t  ARBITER_GRANT_STAT;
  __IO uint32_t  DIAGCNTL;
       uint32_t  RESERVED0[947];
  __I  uint32_t  ID;
} CMSDK_AT_AHB_DMA_TypeDef;

#define CMSDK_AT_PRRF_NONSECURE_BASE                      0x1ffe00
#define CMSDK_AT_PRRF_SECURE_BASE                         0x101ffe00
#define CMSDK_SHA2_NONSECURE_BASE                         0x40103000
#define CMSDK_WRPR0_NONSECURE_BASE                        0x40143000
#define CMSDK_AT_UART0_NONSECURE_BASE                     0x40144000
#define CMSDK_AT_UART1_NONSECURE_BASE                     0x40145000
#define CMSDK_PWM_NONSECURE_BASE                          0x40146000
#define CMSDK_SPI0_NONSECURE_BASE                         0x40147000
#define CMSDK_KSM_NONSECURE_BASE                          0x4014a000
#define CMSDK_SPI2_NONSECURE_BASE                         0x4014b000
#define CMSDK_QDEC_NONSECURE_BASE                         0x4014c000
#define CMSDK_SPI1_NONSECURE_BASE                         0x4014d000
#define CMSDK_SLWTIMER_NONSECURE_BASE                     0x4014e000
#define CMSDK_QSPI_NONSECURE_BASE                         0x4014f000
#define CMSDK_I2C0_NONSECURE_BASE                         0x40150000
#define CMSDK_I2C1_NONSECURE_BASE                         0x40151000
#define CMSDK_NVM_NONSECURE_BASE                          0x40152000
#define CMSDK_WRPR1_NONSECURE_BASE                        0x40153000
#define CMSDK_RIF_NONSECURE_BASE                          0x40154000
#define CMSDK_RADIO_NONSECURE_BASE                        0x40155000
#define CMSDK_MDM_NONSECURE_BASE                          0x40156000
#define CMSDK_PMU_NONSECURE_BASE                          0x40157000
#define CMSDK_PSEQ_NONSECURE_BASE                         0x40158000
#define CMSDK_SWD_NONSECURE_BASE                          0x40159000
#define CMSDK_GADC_NONSECURE_BASE                         0x4015a000
#define CMSDK_TRNG_NONSECURE_BASE                         0x4015b000
#define CMSDK_RCOS_CAL_NONSECURE_BASE                     0x4015c000
#define CMSDK_SHUB_NONSECURE_BASE                         0x4015d000
#define CMSDK_PDM0_NONSECURE_BASE                         0x40160000
#define CMSDK_PDM1_NONSECURE_BASE                         0x40161000
#define CMSDK_WRPR2_NONSECURE_BASE                        0x40163000
#define CMSDK_I2S_NONSECURE_BASE                          0x40165000
#define CMSDK_CLKRSTGEN_NONSECURE_BASE                    0x40166000
#define CMSDK_AES_NONSECURE_BASE                          0x40167000
#define CMSDK_AT_DMA_NONSECURE_BASE                       0x40170000
#define CMSDK_SHA2_SECURE_BASE                            0x50103000
#define CMSDK_WRPR0_SECURE_BASE                           0x50143000
#define CMSDK_AT_UART0_SECURE_BASE                        0x50144000
#define CMSDK_AT_UART0_BASE                               CMSDK_AT_UART0_SECURE_BASE
#define CMSDK_AT_UART1_SECURE_BASE                        0x50145000
#define CMSDK_AT_UART1_BASE                               CMSDK_AT_UART1_SECURE_BASE
#define CMSDK_PWM_SECURE_BASE                             0x50146000
#define CMSDK_SPI0_SECURE_BASE                            0x50147000
#define CMSDK_KSM_SECURE_BASE                             0x5014a000
#define CMSDK_SPI2_SECURE_BASE                            0x5014b000
#define CMSDK_QDEC_SECURE_BASE                            0x5014c000
#define CMSDK_SPI1_SECURE_BASE                            0x5014d000
#define CMSDK_SLWTIMER_SECURE_BASE                        0x5014e000
#define CMSDK_QSPI_SECURE_BASE                            0x5014f000
#define CMSDK_I2C0_SECURE_BASE                            0x50150000
#define CMSDK_I2C1_SECURE_BASE                            0x50151000
#define CMSDK_NVM_SECURE_BASE                             0x50152000
#define CMSDK_WRPR1_SECURE_BASE                           0x50153000
#define CMSDK_RIF_SECURE_BASE                             0x50154000
#define CMSDK_RADIO_SECURE_BASE                           0x50155000
#define CMSDK_MDM_SECURE_BASE                             0x50156000
#define CMSDK_PMU_SECURE_BASE                             0x50157000
#define CMSDK_PSEQ_SECURE_BASE                            0x50158000
#define CMSDK_SWD_SECURE_BASE                             0x50159000
#define CMSDK_GADC_SECURE_BASE                            0x5015a000
#define CMSDK_TRNG_SECURE_BASE                            0x5015b000
#define CMSDK_RCOS_CAL_SECURE_BASE                        0x5015c000
#define CMSDK_SHUB_SECURE_BASE                            0x5015d000
#define CMSDK_PDM0_SECURE_BASE                            0x50160000
#define CMSDK_PDM1_SECURE_BASE                            0x50161000
#define CMSDK_WRPR2_SECURE_BASE                           0x50163000
#define CMSDK_I2S_SECURE_BASE                             0x50165000
#define CMSDK_CLKRSTGEN_SECURE_BASE                       0x50166000
#define CMSDK_AES_SECURE_BASE                             0x50167000
#define CMSDK_AT_DMA_SECURE_BASE                          0x50170000

#define CMSDK_AT_PRRF_NONSECURE                           ((CMSDK_AT_AHB_PRRF_TypeDef *) CMSDK_AT_PRRF_NONSECURE_BASE)
#define CMSDK_AT_PRRF_SECURE                              ((CMSDK_AT_AHB_PRRF_TypeDef *) CMSDK_AT_PRRF_SECURE_BASE)
#define CMSDK_SHA2_NONSECURE                              ((CMSDK_AT_AHB_SHA2_TypeDef *) CMSDK_SHA2_NONSECURE_BASE)
#define CMSDK_WRPR0_NONSECURE                             ((CMSDK_AT_APB_WRPR_PINS_TypeDef *) CMSDK_WRPR0_NONSECURE_BASE)
#define CMSDK_AT_UART0_NONSECURE                          ((CMSDK_AT_APB_UART_TypeDef *) CMSDK_AT_UART0_NONSECURE_BASE)
#define CMSDK_AT_UART1_NONSECURE                          ((CMSDK_AT_APB_UART_TypeDef *) CMSDK_AT_UART1_NONSECURE_BASE)
#define CMSDK_PWM_NONSECURE                               ((CMSDK_AT_APB_PWM_TypeDef *) CMSDK_PWM_NONSECURE_BASE)
#define CMSDK_SPI0_NONSECURE                              ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI0_NONSECURE_BASE)
#define CMSDK_KSM_NONSECURE                               ((CMSDK_AT_APB_KSM_TypeDef *) CMSDK_KSM_NONSECURE_BASE)
#define CMSDK_SPI2_NONSECURE                              ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI2_NONSECURE_BASE)
#define CMSDK_QDEC_NONSECURE                              ((CMSDK_AT_APB_QDEC_TypeDef *) CMSDK_QDEC_NONSECURE_BASE)
#define CMSDK_SPI1_NONSECURE                              ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI1_NONSECURE_BASE)
#define CMSDK_SLWTIMER_NONSECURE                          ((CMSDK_AT_APB_SLWTIMER_TypeDef *) CMSDK_SLWTIMER_NONSECURE_BASE)
#define CMSDK_QSPI_NONSECURE                              ((CMSDK_AT_APB_QSPI_TypeDef *) CMSDK_QSPI_NONSECURE_BASE)
#define CMSDK_I2C0_NONSECURE                              ((CMSDK_AT_APB_I2C_TypeDef *) CMSDK_I2C0_NONSECURE_BASE)
#define CMSDK_I2C1_NONSECURE                              ((CMSDK_AT_APB_I2C_TypeDef *) CMSDK_I2C1_NONSECURE_BASE)
#define CMSDK_NVM_NONSECURE                               ((CMSDK_AT_APB_TSMC_NVM_TypeDef *) CMSDK_NVM_NONSECURE_BASE)
#define CMSDK_WRPR1_NONSECURE                             ((CMSDK_AT_APB_WRPR_SHORT_TypeDef *) CMSDK_WRPR1_NONSECURE_BASE)
#define CMSDK_RIF_NONSECURE                               ((CMSDK_RIF_TypeDef *) CMSDK_RIF_NONSECURE_BASE)
#define CMSDK_RADIO_NONSECURE                             ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_RADIO_NONSECURE_BASE)
#define CMSDK_MDM_NONSECURE                               ((CMSDK_MDM_TypeDef *) CMSDK_MDM_NONSECURE_BASE)
#define CMSDK_PMU_NONSECURE                               ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_PMU_NONSECURE_BASE)
#define CMSDK_PSEQ_NONSECURE                              ((CMSDK_AT_APB_PSEQ_PARIS_TypeDef *) CMSDK_PSEQ_NONSECURE_BASE)
#define CMSDK_SWD_NONSECURE                               ((CMSDK_AT_APB_SWD_TypeDef *) CMSDK_SWD_NONSECURE_BASE)
#define CMSDK_GADC_NONSECURE                              ((CMSDK_AT_APB_GADC_TypeDef *) CMSDK_GADC_NONSECURE_BASE)
#define CMSDK_TRNG_NONSECURE                              ((CMSDK_AT_APB_TRNG_TypeDef *) CMSDK_TRNG_NONSECURE_BASE)
#define CMSDK_RCOS_CAL_NONSECURE                          ((CMSDK_AT_APB_RCOS_CAL_TypeDef *) CMSDK_RCOS_CAL_NONSECURE_BASE)
#define CMSDK_SHUB_NONSECURE                              ((CMSDK_AT_APB_SHUB_TypeDef *) CMSDK_SHUB_NONSECURE_BASE)
#define CMSDK_PDM0_NONSECURE                              ((CMSDK_AT_APB_PDM_TypeDef *) CMSDK_PDM0_NONSECURE_BASE)
#define CMSDK_PDM1_NONSECURE                              ((CMSDK_AT_APB_PDM_TypeDef *) CMSDK_PDM1_NONSECURE_BASE)
#define CMSDK_WRPR2_NONSECURE                             ((CMSDK_AT_APB_WRPR_SHORT_TypeDef *) CMSDK_WRPR2_NONSECURE_BASE)
#define CMSDK_I2S_NONSECURE                               ((CMSDK_AT_I2S_TypeDef *) CMSDK_I2S_NONSECURE_BASE)
#define CMSDK_CLKRSTGEN_NONSECURE                         ((CMSDK_AT_APB_CLKRSTGEN_TypeDef *) CMSDK_CLKRSTGEN_NONSECURE_BASE)
#define CMSDK_AES_NONSECURE                               ((CMSDK_AT_APB_AES_TypeDef *) CMSDK_AES_NONSECURE_BASE)
#define CMSDK_AT_DMA_NONSECURE                            ((CMSDK_AT_AHB_DMA_TypeDef *) CMSDK_AT_DMA_NONSECURE_BASE)
#define CMSDK_SHA2_SECURE                                 ((CMSDK_AT_AHB_SHA2_TypeDef *) CMSDK_SHA2_SECURE_BASE)
#define CMSDK_WRPR0_SECURE                                ((CMSDK_AT_APB_WRPR_PINS_TypeDef *) CMSDK_WRPR0_SECURE_BASE)
#define CMSDK_AT_UART0_SECURE                             ((CMSDK_AT_APB_UART_TypeDef *) CMSDK_AT_UART0_SECURE_BASE)
#define CMSDK_AT_UART0                                    CMSDK_AT_UART0_SECURE
#define CMSDK_AT_UART1_SECURE                             ((CMSDK_AT_APB_UART_TypeDef *) CMSDK_AT_UART1_SECURE_BASE)
#define CMSDK_AT_UART1                                    CMSDK_AT_UART1_SECURE
#define CMSDK_PWM_SECURE                                  ((CMSDK_AT_APB_PWM_TypeDef *) CMSDK_PWM_SECURE_BASE)
#define CMSDK_SPI0_SECURE                                 ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI0_SECURE_BASE)
#define CMSDK_KSM_SECURE                                  ((CMSDK_AT_APB_KSM_TypeDef *) CMSDK_KSM_SECURE_BASE)
#define CMSDK_SPI2_SECURE                                 ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI2_SECURE_BASE)
#define CMSDK_QDEC_SECURE                                 ((CMSDK_AT_APB_QDEC_TypeDef *) CMSDK_QDEC_SECURE_BASE)
#define CMSDK_SPI1_SECURE                                 ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI1_SECURE_BASE)
#define CMSDK_SLWTIMER_SECURE                             ((CMSDK_AT_APB_SLWTIMER_TypeDef *) CMSDK_SLWTIMER_SECURE_BASE)
#define CMSDK_QSPI_SECURE                                 ((CMSDK_AT_APB_QSPI_TypeDef *) CMSDK_QSPI_SECURE_BASE)
#define CMSDK_I2C0_SECURE                                 ((CMSDK_AT_APB_I2C_TypeDef *) CMSDK_I2C0_SECURE_BASE)
#define CMSDK_I2C1_SECURE                                 ((CMSDK_AT_APB_I2C_TypeDef *) CMSDK_I2C1_SECURE_BASE)
#define CMSDK_NVM_SECURE                                  ((CMSDK_AT_APB_TSMC_NVM_TypeDef *) CMSDK_NVM_SECURE_BASE)
#define CMSDK_WRPR1_SECURE                                ((CMSDK_AT_APB_WRPR_SHORT_TypeDef *) CMSDK_WRPR1_SECURE_BASE)
#define CMSDK_RIF_SECURE                                  ((CMSDK_RIF_TypeDef *) CMSDK_RIF_SECURE_BASE)
#define CMSDK_RADIO_SECURE                                ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_RADIO_SECURE_BASE)
#define CMSDK_MDM_SECURE                                  ((CMSDK_MDM_TypeDef *) CMSDK_MDM_SECURE_BASE)
#define CMSDK_PMU_SECURE                                  ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_PMU_SECURE_BASE)
#define CMSDK_PSEQ_SECURE                                 ((CMSDK_AT_APB_PSEQ_PARIS_TypeDef *) CMSDK_PSEQ_SECURE_BASE)
#define CMSDK_SWD_SECURE                                  ((CMSDK_AT_APB_SWD_TypeDef *) CMSDK_SWD_SECURE_BASE)
#define CMSDK_GADC_SECURE                                 ((CMSDK_AT_APB_GADC_TypeDef *) CMSDK_GADC_SECURE_BASE)
#define CMSDK_TRNG_SECURE                                 ((CMSDK_AT_APB_TRNG_TypeDef *) CMSDK_TRNG_SECURE_BASE)
#define CMSDK_RCOS_CAL_SECURE                             ((CMSDK_AT_APB_RCOS_CAL_TypeDef *) CMSDK_RCOS_CAL_SECURE_BASE)
#define CMSDK_SHUB_SECURE                                 ((CMSDK_AT_APB_SHUB_TypeDef *) CMSDK_SHUB_SECURE_BASE)
#define CMSDK_PDM0_SECURE                                 ((CMSDK_AT_APB_PDM_TypeDef *) CMSDK_PDM0_SECURE_BASE)
#define CMSDK_PDM1_SECURE                                 ((CMSDK_AT_APB_PDM_TypeDef *) CMSDK_PDM1_SECURE_BASE)
#define CMSDK_WRPR2_SECURE                                ((CMSDK_AT_APB_WRPR_SHORT_TypeDef *) CMSDK_WRPR2_SECURE_BASE)
#define CMSDK_I2S_SECURE                                  ((CMSDK_AT_I2S_TypeDef *) CMSDK_I2S_SECURE_BASE)
#define CMSDK_CLKRSTGEN_SECURE                            ((CMSDK_AT_APB_CLKRSTGEN_TypeDef *) CMSDK_CLKRSTGEN_SECURE_BASE)
#define CMSDK_AES_SECURE                                  ((CMSDK_AT_APB_AES_TypeDef *) CMSDK_AES_SECURE_BASE)
#define CMSDK_AT_DMA_SECURE                               ((CMSDK_AT_AHB_DMA_TypeDef *) CMSDK_AT_DMA_SECURE_BASE)
/** @} end of at_base_addr */
