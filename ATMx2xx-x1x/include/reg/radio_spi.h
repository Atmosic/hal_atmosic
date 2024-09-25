#ifndef RADIO_SPI_H
#define RADIO_SPI_H

/**
 *****************************************************************************
 * @defgroup at_radio_spi radio_spi
 * @ingroup AT_REG
 * @brief radio spi definitions.
 * @{
 *****************************************************************************
 */
#define RADIO_SPI__DUMMY_CYCLES                           3

#define RADIO_RX__REG_BLADDR                              0
#define RADIO_RX__MODE_CTRL_REG_ADDR                      0x0
#define RADIO_RX__CAL_CFG_REG_ADDR                        0x4
#define RADIO_RX__GAIN_CTRL_REG_ADDR                      0x8
#define RADIO_RX__ANA_CTRL_REG_ADDR                       0xc
#define RADIO_RX__LNAGAIN0_REG_ADDR                       0x10
#define RADIO_RX__LNAGAIN1_REG_ADDR                       0x14
#define RADIO_RX__RXBB_PGA_CTUNE_LUT_1M_REG_ADDR          0x18
#define RADIO_RX__RXBB_PGA_CTUNE_LUT_2M_REG_ADDR          0x1c
#define RADIO_RX__RXBB_PGA_CTUNE_LUT_HIGAIN_REG_ADDR      0x20
#define RADIO_RX__RXBIAS_REG_ADDR                         0x24
#define RADIO_RX__STATUS_REG_ADDR                         0x28
#define RADIO_RX__CORE_ID_REG_ADDR                        0x2c

#define RADIO_SYNTH__REG_BLADDR                           1
#define RADIO_SYNTH__SYNTH_CTRL_0_REG_ADDR                0x0
#define RADIO_SYNTH__SYNTH_CTRL_1_REG_ADDR                0x4
#define RADIO_SYNTH__SYNTH_CTRL_2_REG_ADDR                0x8
#define RADIO_SYNTH__SYNTH_CTRL_3_REG_ADDR                0xc
#define RADIO_SYNTH__SYNTH_READOUT_REG_ADDR               0x10
#define RADIO_SYNTH__CORE_ID_REG_ADDR                     0x14

#define RADIO_TOP__REG_BLADDR                             2
#define RADIO_TOP__MODE_REG_ADDR                          0x0
#define RADIO_TOP__TEST_REG_ADDR                          0x4
#define RADIO_TOP__STATUS_REG_ADDR                        0x8
#define RADIO_TOP__VERSION_REG_ADDR                       0xc
#define RADIO_TOP__PROCMON_REG_ADDR                       0x10
#define RADIO_TOP__PROCMON_RESULT_REG_ADDR                0x14
#define RADIO_TOP__CORE_ID_REG_ADDR                       0x18

/** @} end of at_radio_spi */
#endif
