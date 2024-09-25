#ifndef BASE_ADDR_H
#define BASE_ADDR_H

/**
 *****************************************************************************
 * @defgroup at_base_addr base_addr
 * @ingroup AT_REG
 * @brief base address definitions.
 * @{
 *****************************************************************************
 */
/*---------- AT_APB_WRPR ----------*/
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
  __IO uint32_t  CLK_HMC_PIN_OUT_CTRL;
  __IO uint32_t  CLK_LMC_PIN_OUT_CTRL;
  __IO uint32_t  DBG_CTRL;
  __IO uint32_t  PIN_SELECTION_A;
  __IO uint32_t  PIN_SELECTION_B;
  __IO uint32_t  PIN_SELECTION_C;
  __IO uint32_t  PIN_SELECTION_D;
  __IO uint32_t  PIN_SELECTION_E;
  __IO uint32_t  PIN_SELECTION_F;
  __IO uint32_t  PIN_PU_A;
  __IO uint32_t  PIN_PU_B;
  __IO uint32_t  PIN_PU_C;
  __IO uint32_t  PIN_PU_D;
  __IO uint32_t  PIN_PU_E;
  __IO uint32_t  INTRPT_CFG_0;
  __IO uint32_t  INTRPT_CFG_1;
  __IO uint32_t  INTRPT_CFG_2;
  __IO uint32_t  INTRPT_CFG_3;
  __IO uint32_t  INTRPT_CFG_4;
  __IO uint32_t  INTRPT_CFG_5;
  __IO uint32_t  INTRPT_CFG_6;
  __IO uint32_t  INTRPT_CFG_7;
  __IO uint32_t  INTRPT_CFG_8;
  __IO uint32_t  INTRPT_CFG_9;
  __IO uint32_t  INTRPT_CFG_10;
  __IO uint32_t  INTRPT_CFG_11;
  __IO uint32_t  INTRPT_CFG_12;
  __IO uint32_t  INTRPT_CFG_13;
  __IO uint32_t  INTRPT_CFG_14;
  __IO uint32_t  INTRPT_CFG_15;
  __IO uint32_t  REMAP;
  __IO uint32_t  AHB_INTERPOSERS;
  __IO uint32_t  SCRATCHPAD_A;
  __IO uint32_t  SCRATCHPAD_B;
  __IO uint32_t  SCRATCHPAD_C;
  __IO uint32_t  SCRATCHPAD_D;
       uint32_t  RESERVED0[967];
  __I  uint32_t  CHIPID1;
  __I  uint32_t  CHIPID2;
  __I  uint32_t  CHIPREV;
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_WRPR_TypeDef;

/*---------- AT_APB_PWM ----------*/
typedef struct {
  __IO uint32_t  PWM0_CTRL;
  __IO uint32_t  PWM1_CTRL;
  __IO uint32_t  PWM2_CTRL;
  __IO uint32_t  PWM3_CTRL;
  __IO uint32_t  PWM4_CTRL;
  __IO uint32_t  PWM5_CTRL;
  __IO uint32_t  PWM6_CTRL;
  __IO uint32_t  PWM7_CTRL;
       uint32_t  RESERVED0[1015];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_PWM_TypeDef;

/*---------- AT_APB_SPI ----------*/
typedef struct {
  __IO uint32_t  TRANSACTION_SETUP;
  __I  uint32_t  TRANSACTION_STATUS;
  __IO uint32_t  DATA_BYTES_LOWER;
  __IO uint32_t  DATA_BYTES_UPPER;
  __IO uint32_t  INTERRUPT_MASK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
       uint32_t  RESERVED0[1015];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_SPI_TypeDef;

/*---------- AT_APB_OLED ----------*/
typedef struct {
  __IO uint32_t  CONTROL;
  __IO uint32_t  CHARS_0A;
  __IO uint32_t  CHARS_0B;
  __IO uint32_t  CHARS_0C;
  __IO uint32_t  CHARS_0D;
  __IO uint32_t  CHARS_1A;
  __IO uint32_t  CHARS_1B;
  __IO uint32_t  CHARS_1C;
  __IO uint32_t  CHARS_1D;
  __IO uint32_t  CHARS_2A;
  __IO uint32_t  CHARS_2B;
  __IO uint32_t  CHARS_2C;
  __IO uint32_t  CHARS_2D;
  __IO uint32_t  CHARS_3A;
  __IO uint32_t  CHARS_3B;
  __IO uint32_t  CHARS_3C;
  __IO uint32_t  CHARS_3D;
  __I  uint32_t  STATUS;
       uint32_t  RESERVED0[1005];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_OLED_TypeDef;

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
  __I  uint32_t  REMOTE_AHB_WLE_CNT;
  __I  uint32_t  REMOTE_AHB_WIP_CNT;
  __I  uint32_t  REMOTE_AHB_DBG0;
  __I  uint32_t  REMOTE_AHB_DBG1;
  __I  uint32_t  REMOTE_AHB_DBG2;
       uint32_t  RESERVED0[1008];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_QSPI_TypeDef;

/*---------- AT_APB_I2C ----------*/
typedef struct {
  __IO uint32_t  TRANSACTION_SETUP;
  __IO uint32_t  CLOCK_CONTROL;
  __IO uint32_t  OUTGOING_DATA;
  __IO uint32_t  IO_CTRL;
  __I  uint32_t  INCOMING_DATA;
  __I  uint32_t  TRANSACTION_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
       uint32_t  RESERVED0[1013];
  __I  uint32_t  ID;
} CMSDK_AT_APB_I2C_TypeDef;

/*---------- AT_APB_NVM ----------*/
typedef struct {
  __IO uint32_t  OPMODE;
  __IO uint32_t  ADDRESS;
  __I  uint32_t  STATUS;
  __I  uint32_t  READ_DATA;
  __IO uint32_t  T_SP_PG_AVDD;
  __IO uint32_t  T_SP_PGM;
  __IO uint32_t  T_PGM;
  __IO uint32_t  T_HP_PGM;
  __IO uint32_t  T_HP_PG_AVDD;
  __IO uint32_t  T_SR_RD;
  __IO uint32_t  T_RD;
  __IO uint32_t  T_HR_RD;
  __IO uint32_t  T_SETUP;
  __IO uint32_t  T_HOLD;
  __IO uint32_t  T_ADDR;
  __IO uint32_t  INTERRUPT_MASK;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
  __I  uint32_t  EFUSE_AUTOREAD;
       uint32_t  RESERVED0[1003];
  __I  uint32_t  ID;
} CMSDK_AT_APB_NVM_TypeDef;

/*---------- AT_APB1_WRPR ----------*/
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
} CMSDK_AT_APB1_WRPR_TypeDef;

/*---------- RIF ----------*/
typedef struct {
  __IO uint32_t  BIAS;
  __IO uint32_t  RXBBF_1M;
  __IO uint32_t  RXBBF_2M;
  __IO uint32_t  RXDC8;
  __IO uint32_t  SYNTX0;
  __IO uint32_t  TXGAIN0;
  __IO uint32_t  TXGAIN1;
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
  __IO uint32_t  SYNTX1;
  __IO uint32_t  SYNTX2;
  __IO uint32_t  SYNTX3;
  __IO uint32_t  SYNTX4;
  __IO uint32_t  RX0;
  __IO uint32_t  TIMER0;
  __IO uint32_t  TIMER1;
  __IO uint32_t  TIMER2;
  __IO uint32_t  TIMER3;
  __IO uint32_t  RXDC0;
  __IO uint32_t  RXDC1;
  __IO uint32_t  RXDC2;
  __IO uint32_t  RXDC3;
  __IO uint32_t  RXDC4;
  __IO uint32_t  RXDC5;
  __IO uint32_t  RXDC7;
  __IO uint32_t  SYNTH_CHAN0;
  __IO uint32_t  SYNTH_CHAN1;
  __IO uint32_t  SYNTH_CHAN2;
  __IO uint32_t  SYNTH_CHAN3;
  __IO uint32_t  SYNTH_CHAN4;
  __IO uint32_t  ADC_CNTL;
  __IO uint32_t  MODE_CNTL;
  __IO uint32_t  CAL_CNTL;
       uint32_t  RESERVED0[978];
  __I  uint32_t  ID;
} CMSDK_RIF_TypeDef;

/*---------- MDM ----------*/
typedef struct {
  __IO uint32_t  AGCMEAS;
  __IO uint32_t  AGCGAIN;
  __IO uint32_t  DCOFF;
  __IO uint32_t  IQCORR;
  __IO uint32_t  AGCSAT;
  __IO uint32_t  AGCINITSAT;
  __IO uint32_t  AGCPWRSTEPSAT;
  __IO uint32_t  AGCPWR;
  __IO uint32_t  AGCPWR2;
  __IO uint32_t  AGCTIME;
  __IO uint32_t  TWOMEG_AGCTIME;
  __IO uint32_t  AGCTIME2;
  __IO uint32_t  AGCCNTL;
  __IO uint32_t  SYNCH;
  __IO uint32_t  TIMETRACK;
  __IO uint32_t  TIMESYNC;
  __IO uint32_t  SYNCDEMOD;
  __IO uint32_t  TSTIMEOUT;
  __IO uint32_t  DEMOD;
  __IO uint32_t  DFEWITHFFE;
  __IO uint32_t  DFEWITHOUTFFE;
  __IO uint32_t  TWOMEG_DFEWITHFFE;
  __IO uint32_t  TWOMEG_DFEWITHOUTFFE;
  __IO uint32_t  FREQ;
  __IO uint32_t  FREQLIM;
  __IO uint32_t  LR;
  __IO uint32_t  MIXER;
  __IO uint32_t  ACCESS_ADDRESS;
  __IO uint32_t  FIR;
  __IO uint32_t  FFE1;
  __IO uint32_t  FFE2;
  __IO uint32_t  FFE3;
  __IO uint32_t  FFE4;
  __IO uint32_t  FFE5;
  __IO uint32_t  FFE6;
  __IO uint32_t  FFE7;
  __IO uint32_t  TWOMEG_FFE1;
  __IO uint32_t  TWOMEG_FFE2;
  __IO uint32_t  TWOMEG_FFE3;
  __IO uint32_t  TWOMEG_FFE4;
  __IO uint32_t  TWOMEG_FFE5;
  __IO uint32_t  TWOMEG_FFE6;
  __IO uint32_t  TWOMEG_FFE7;
  __IO uint32_t  PMODE;
  __IO uint32_t  DCCAL;
  __IO uint32_t  DCCAL2;
  __IO uint32_t  DCOFFTRK;
  __IO uint32_t  DCOFFTRK2;
  __I  uint32_t  DCCALRESULTS;
  __I  uint32_t  DCCALRESULTS2;
  __I  uint32_t  AGCSTATUS;
  __I  uint32_t  MEASFREQ;
  __IO uint32_t  DEBUG;
  __IO uint32_t  LC2LC;
  __IO uint32_t  ERR_INJ;
       uint32_t  RESERVED0[968];
  __I  uint32_t  CORE_ID;
} CMSDK_MDM_TypeDef;

/*---------- AT_APB_PSEQ ----------*/
typedef struct {
  __IO uint32_t  CTRL0;
  __IO uint32_t  RETAIN_ALL_WAKE_MASK;
  __IO uint32_t  HIB_WAKE_MASK;
  __IO uint32_t  BLE_RET_TO_BLE_ACT_WAKE_MASK;
  __IO uint32_t  BLE_RET_TO_CPU_ACT_WAKE_MASK;
  __IO uint32_t  GPIO_WAKE_MASK;
  __IO uint32_t  GPIO_WAKE_TYPE;
  __IO uint32_t  GPIO_WAKE_POL;
  __IO uint32_t  GPIO_WAKE_BOTH_EDGES;
  __IO uint32_t  WURX_CONFIG;
  __IO uint32_t  GADC_CONFIG;
  __IO uint32_t  COUNT0;
  __IO uint32_t  COUNT1;
  __IO uint32_t  COUNT2;
  __IO uint32_t  COUNT3;
  __IO uint32_t  COUNT4;
  __IO uint32_t  COUNT5;
  __IO uint32_t  COUNT6;
  __IO uint32_t  COUNT7;
  __IO uint32_t  COUNT8;
  __IO uint32_t  COUNT9;
  __IO uint32_t  COUNT0_RADIO;
  __IO uint32_t  COUNT1_RADIO;
  __IO uint32_t  COUNT2_RADIO;
  __IO uint32_t  COUNT3_RADIO;
  __IO uint32_t  COUNT4_RADIO;
  __IO uint32_t  COUNT5_RADIO;
  __IO uint32_t  COUNT6_RADIO;
  __IO uint32_t  COUNT7_RADIO;
  __IO uint32_t  COUNT8_RADIO;
  __IO uint32_t  COUNT9_RADIO;
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
  __IO uint32_t  SYSRAM_CONF;
  __IO uint32_t  EMRAM_OVERRIDES;
  __IO uint32_t  EMRAM_OVERRIDES2;
  __IO uint32_t  EMRAM_OVERRIDES3;
  __IO uint32_t  EMRAM_OVERRIDES4;
  __IO uint32_t  EMRAM_OVERRIDES5;
  __IO uint32_t  EMRAM_OVERRIDES6;
  __IO uint32_t  EMRAM_OVERRIDES7;
  __IO uint32_t  EMRAM_OVERRIDES8;
  __IO uint32_t  COUNTER_CONTROL;
  __I  uint32_t  CURRENT_REAL_TIME;
  __I  uint32_t  CURRENT_COUNT_DOWN_TIME;
  __IO uint32_t  INIT_COUNT_DOWN;
  __I  uint32_t  INST_PENDING;
  __I  uint32_t  STATUS;
  __IO uint32_t  PERSISTENT0;
  __IO uint32_t  SENSOR_HUB_CONTROL;
  __IO uint32_t  KSMQDEC_CONTROL;
  __I  uint32_t  PMU_STATUS;
  __IO uint32_t  FLASH_CONTROL;
  __IO uint32_t  PMU_INTERRUPT;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  RESET_INTERRUPT;
       uint32_t  RESERVED0[953];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_PSEQ_TypeDef;

/*---------- AT_APB_SWD ----------*/
typedef struct {
  __IO uint32_t  DAP_ADDR_CTRL;
  __IO uint32_t  DAP_WDATA_CTRL;
  __IO uint32_t  SWD_CLK_DIV_CTRL;
  __I  uint32_t  DAP_BRIDGE_STATUS;
  __I  uint32_t  DAP_RESP_STATUS;
  __IO uint32_t  RW_CTRL;
  __IO uint32_t  APNDP_CTRL;
  __IO uint32_t  TRIGGER_CTRL;
  __I  uint32_t  DAP_RDATA;
  __IO uint32_t  DTOP_BYPASS_CTRL;
  __I  uint32_t  DTOP_BYPASS_STAT;
  __IO uint32_t  DTOP_BYPASS_GPO;
       uint32_t  RESERVED0[1011];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_SWD_TypeDef;

/*---------- AT_APB_GADC ----------*/
typedef struct {
  __IO uint32_t  CTRL;
  __IO uint32_t  DATAPATH_PARAMETERS;
  __I  uint32_t  DATAPATH_OUTPUT;
  __IO uint32_t  FINAL_INVERSION;
  __I  uint32_t  INTERRUPTS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  INTERRUPT_CLEAR;
  __I  uint32_t  FIFO_DBG;
       uint32_t  RESERVED0[1015];
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
  __I  uint32_t  STAT;
       uint32_t  RESERVED0[1018];
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
       uint32_t  RESERVED0[943];
  __I  uint32_t  ID;
} CMSDK_AT_APB_SHUB_TypeDef;

/*---------- AT_LC ----------*/
typedef struct {
  __IO uint32_t  LC_CTRL0;
  __IO uint32_t  LC_CTRL1;
  __IO uint32_t  LC_CTRL2;
  __IO uint32_t  LC_CTRL3;
  __IO uint32_t  LC_CTRL4;
  __IO uint32_t  LC_CTRL5;
  __IO uint32_t  LC_CTRL6;
  __IO uint32_t  LC_CTRL7;
  __IO uint32_t  MDM_CTRL0;
  __IO uint32_t  LC_LP_CTRL0;
  __IO uint32_t  LC_LP_CTRL1;
  __IO uint32_t  LC_LP_CTRL2;
  __I  uint32_t  LC_LP_CTRL3;
  __IO uint32_t  IFG;
  __IO uint32_t  PWRUD_1MBPS;
  __IO uint32_t  PWRUD_2MBPS;
  __IO uint32_t  PWRUD_250KBPS;
  __IO uint32_t  RTX_WAIT;
  __I  uint32_t  LC_ST0;
  __IO uint32_t  LC_ST0_CLR;
  __I  uint32_t  LC_ST1;
  __IO uint32_t  WHT_CTRL;
  __IO uint32_t  ND_CTRL;
  __IO uint32_t  SYNC_WRD0;
  __IO uint32_t  SYNC_WRD1;
  __IO uint32_t  RX_ADDR0;
  __IO uint32_t  RX_ADDR1;
  __IO uint32_t  RX_ADDR2;
  __IO uint32_t  RX_ADDR3;
  __IO uint32_t  RX_ADDR4;
  __IO uint32_t  RX_ADDR5;
  __IO uint32_t  RX_ADDR6;
  __IO uint32_t  RX_ADDR7;
  __IO uint32_t  TFF0_ADDR;
  __IO uint32_t  RFF0_ADDR;
  __IO uint32_t  TFF1_ADDR;
  __IO uint32_t  RFF1_ADDR;
  __IO uint32_t  TFF2_ADDR;
  __IO uint32_t  RFF2_ADDR;
  __IO uint32_t  TFF3_ADDR;
  __IO uint32_t  RFF3_ADDR;
  __IO uint32_t  TFF4_ADDR;
  __IO uint32_t  RFF4_ADDR;
  __IO uint32_t  TFF5_ADDR;
  __IO uint32_t  RFF5_ADDR;
  __IO uint32_t  TFF6_ADDR;
  __IO uint32_t  RFF6_ADDR;
  __IO uint32_t  TFF7_ADDR;
  __IO uint32_t  RFF7_ADDR;
  __I  uint32_t  TFF0_RPTR;
  __IO uint32_t  TFF0_WPTR;
  __IO uint32_t  RFF0_RPTR;
  __I  uint32_t  RFF0_WPTR;
  __I  uint32_t  TFF1_RPTR;
  __IO uint32_t  TFF1_WPTR;
  __IO uint32_t  RFF1_RPTR;
  __I  uint32_t  RFF1_WPTR;
  __I  uint32_t  TFF2_RPTR;
  __IO uint32_t  TFF2_WPTR;
  __IO uint32_t  RFF2_RPTR;
  __I  uint32_t  RFF2_WPTR;
  __I  uint32_t  TFF3_RPTR;
  __IO uint32_t  TFF3_WPTR;
  __IO uint32_t  RFF3_RPTR;
  __I  uint32_t  RFF3_WPTR;
  __I  uint32_t  TFF4_RPTR;
  __IO uint32_t  TFF4_WPTR;
  __IO uint32_t  RFF4_RPTR;
  __I  uint32_t  RFF4_WPTR;
  __I  uint32_t  TFF5_RPTR;
  __IO uint32_t  TFF5_WPTR;
  __IO uint32_t  RFF5_RPTR;
  __I  uint32_t  RFF5_WPTR;
  __I  uint32_t  TFF6_RPTR;
  __IO uint32_t  TFF6_WPTR;
  __IO uint32_t  RFF6_RPTR;
  __I  uint32_t  RFF6_WPTR;
  __I  uint32_t  TFF7_RPTR;
  __IO uint32_t  TFF7_WPTR;
  __IO uint32_t  RFF7_RPTR;
  __I  uint32_t  RFF7_WPTR;
  __IO uint32_t  CRC_PLYNML;
  __IO uint32_t  CRC;
  __IO uint32_t  CMD;
  __I  uint32_t  ND_ST;
  __I  uint32_t  IRQ;
  __IO uint32_t  IRQM;
  __IO uint32_t  IRQ_SET;
  __IO uint32_t  IRQ_CLR;
  __IO uint32_t  AESKEY0;
  __IO uint32_t  AESKEY1;
  __IO uint32_t  AESKEY2;
  __IO uint32_t  AESKEY3;
       uint32_t  RESERVED0[930];
  __I  uint32_t  ID;
} CMSDK_AT_LC_TypeDef;

/*---------- AT_APB_PDM ----------*/
typedef struct {
  __IO uint32_t  CONTROL;
  __IO uint32_t  IIR_CONFIG;
  __IO uint32_t  GAIN_CONTROL_CONFIG;
  __I  uint32_t  PCM_SAMPLE;
  __I  uint32_t  FIFO_DEBUG;
  __I  uint32_t  INTERRUPTS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  INTERRUPT_CLEAR;
       uint32_t  RESERVED0[1015];
  __I  uint32_t  CORE_ID;
} CMSDK_AT_APB_PDM_TypeDef;

/*---------- AT_AHB_DMA ----------*/
typedef struct {
  __IO uint32_t  OPMODE;
  __IO uint32_t  CONST_WDATA;
  __IO uint32_t  SRC_ADDR;
  __IO uint32_t  TAR_ADDR;
  __IO uint32_t  SIZE;
  __I  uint32_t  INTERRUPT_STATUS;
  __IO uint32_t  INTERRUPT_MASK;
  __IO uint32_t  SET_INTERRUPT;
  __IO uint32_t  RESET_INTERRUPT;
  __I  uint32_t  ERR_STAT;
       uint32_t  RESERVED0[1013];
  __I  uint32_t  ID;
} CMSDK_AT_AHB_DMA_TypeDef;

#define CMSDK_WRPR_BASE                                   0x40003000
#define CMSDK_PWM_BASE                                    0x40006000
#define CMSDK_SPI0_BASE                                   0x40007000
#define CMSDK_OLED_BASE                                   0x40009000
#define CMSDK_KSM_BASE                                    0x4000a000
#define CMSDK_SPI2_BASE                                   0x4000b000
#define CMSDK_QDEC_BASE                                   0x4000c000
#define CMSDK_SPI1_BASE                                   0x4000d000
#define CMSDK_SLWTIMER_BASE                               0x4000e000
#define CMSDK_QSPI_BASE                                   0x4000f000
#define CMSDK_I2C0_BASE                                   0x50000000
#define CMSDK_I2C1_BASE                                   0x50001000
#define CMSDK_NVM_BASE                                    0x50002000
#define CMSDK_WRPR1_BASE                                  0x50003000
#define CMSDK_RIF_BASE                                    0x50004000
#define CMSDK_RADIO_BASE                                  0x50005000
#define CMSDK_MDM_BASE                                    0x50006000
#define CMSDK_PMU_BASE                                    0x50007000
#define CMSDK_PSEQ_BASE                                   0x50008000
#define CMSDK_SWD_BASE                                    0x50009000
#define CMSDK_GADC_BASE                                   0x5000a000
#define CMSDK_TRNG_BASE                                   0x5000b000
#define CMSDK_RCOS_CAL_BASE                               0x5000c000
#define CMSDK_SHUB_BASE                                   0x5000d000
#define CMSDK_ATLC_BASE                                   0x5000e000
#define CMSDK_PDM_BASE                                    0x5000f000
#define CMSDK_AT_DMA_BASE                                 0x70000000

#define CMSDK_WRPR                                        ((CMSDK_AT_APB_WRPR_TypeDef *) CMSDK_WRPR_BASE)
#define CMSDK_PWM                                         ((CMSDK_AT_APB_PWM_TypeDef *) CMSDK_PWM_BASE)
#define CMSDK_SPI0                                        ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI0_BASE)
#define CMSDK_OLED                                        ((CMSDK_AT_APB_OLED_TypeDef *) CMSDK_OLED_BASE)
#define CMSDK_KSM                                         ((CMSDK_AT_APB_KSM_TypeDef *) CMSDK_KSM_BASE)
#define CMSDK_SPI2                                        ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI2_BASE)
#define CMSDK_QDEC                                        ((CMSDK_AT_APB_QDEC_TypeDef *) CMSDK_QDEC_BASE)
#define CMSDK_SPI1                                        ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_SPI1_BASE)
#define CMSDK_SLWTIMER                                    ((CMSDK_AT_APB_SLWTIMER_TypeDef *) CMSDK_SLWTIMER_BASE)
#define CMSDK_QSPI                                        ((CMSDK_AT_APB_QSPI_TypeDef *) CMSDK_QSPI_BASE)
#define CMSDK_I2C0                                        ((CMSDK_AT_APB_I2C_TypeDef *) CMSDK_I2C0_BASE)
#define CMSDK_I2C1                                        ((CMSDK_AT_APB_I2C_TypeDef *) CMSDK_I2C1_BASE)
#define CMSDK_NVM                                         ((CMSDK_AT_APB_NVM_TypeDef *) CMSDK_NVM_BASE)
#define CMSDK_WRPR1                                       ((CMSDK_AT_APB1_WRPR_TypeDef *) CMSDK_WRPR1_BASE)
#define CMSDK_RIF                                         ((CMSDK_RIF_TypeDef *) CMSDK_RIF_BASE)
#define CMSDK_RADIO                                       ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_RADIO_BASE)
#define CMSDK_MDM                                         ((CMSDK_MDM_TypeDef *) CMSDK_MDM_BASE)
#define CMSDK_PMU                                         ((CMSDK_AT_APB_SPI_TypeDef *) CMSDK_PMU_BASE)
#define CMSDK_PSEQ                                        ((CMSDK_AT_APB_PSEQ_TypeDef *) CMSDK_PSEQ_BASE)
#define CMSDK_SWD                                         ((CMSDK_AT_APB_SWD_TypeDef *) CMSDK_SWD_BASE)
#define CMSDK_GADC                                        ((CMSDK_AT_APB_GADC_TypeDef *) CMSDK_GADC_BASE)
#define CMSDK_TRNG                                        ((CMSDK_AT_APB_TRNG_TypeDef *) CMSDK_TRNG_BASE)
#define CMSDK_RCOS_CAL                                    ((CMSDK_AT_APB_RCOS_CAL_TypeDef *) CMSDK_RCOS_CAL_BASE)
#define CMSDK_SHUB                                        ((CMSDK_AT_APB_SHUB_TypeDef *) CMSDK_SHUB_BASE)
#define CMSDK_ATLC                                        ((CMSDK_AT_LC_TypeDef *) CMSDK_ATLC_BASE)
#define CMSDK_PDM                                         ((CMSDK_AT_APB_PDM_TypeDef *) CMSDK_PDM_BASE)
#define CMSDK_AT_DMA                                      ((CMSDK_AT_AHB_DMA_TypeDef *) CMSDK_AT_DMA_BASE)
/** @} end of at_base_addr */

#endif
