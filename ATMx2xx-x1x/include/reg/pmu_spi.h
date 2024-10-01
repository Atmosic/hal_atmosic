#ifndef PMU_SPI_H
#define PMU_SPI_H

/**
 *****************************************************************************
 * @defgroup at_pmu_spi pmu_spi
 * @ingroup AT_REG
 * @brief pmu spi definitions.
 * @{
 *****************************************************************************
 */
#define PMU_SPI__DUMMY_CYCLES                             3

#define PMU_TOP__REG_BLADDR                               9
#define PMU_TOP__PMU0_REG_ADDR                            0x0
#define PMU_TOP__PMU1_REG_ADDR                            0x4
#define PMU_TOP__PMU2_REG_ADDR                            0x8
#define PMU_TOP__PMU2A_REG_ADDR                           0xc
#define PMU_TOP__PMU3_REG_ADDR                            0x10
#define PMU_TOP__PMU4_REG_ADDR                            0x14
#define PMU_TOP__PMU5_REG_ADDR                            0x18
#define PMU_TOP__PMU6_REG_ADDR                            0x1c
#define PMU_TOP__PMU7_REG_ADDR                            0x20
#define PMU_TOP__PMU8_REG_ADDR                            0x24
#define PMU_TOP__PMU9_REG_ADDR                            0x28
#define PMU_TOP__PMU10_REG_ADDR                           0x2c
#define PMU_TOP__PMU11_REG_ADDR                           0x30
#define PMU_TOP__PMU12_REG_ADDR                           0x34
#define PMU_TOP__PMU13_REG_ADDR                           0x38
#define PMU_TOP__PMU14_REG_ADDR                           0x3c
#define PMU_TOP__PMU15_REG_ADDR                           0x40
#define PMU_TOP__PMU_RB0_REG_ADDR                         0x44
#define PMU_TOP__PMU_RB1_REG_ADDR                         0x48
#define PMU_TOP__CORE_ID_REG_ADDR                         0x4c

#define PMU_WURX__REG_BLADDR                              10
#define PMU_WURX__WURX_GENERAL_REG_ADDR                   0x0
#define PMU_WURX__WURX0_0_REG_ADDR                        0x4
#define PMU_WURX__WURX0_1_REG_ADDR                        0x8
#define PMU_WURX__WURX0_2_REG_ADDR                        0xc
#define PMU_WURX__WURX0_3_REG_ADDR                        0x10
#define PMU_WURX__WURX0_4_REG_ADDR                        0x14
#define PMU_WURX__WURX0_RB_REG_ADDR                       0x18
#define PMU_WURX__WURX1_0_REG_ADDR                        0x1c
#define PMU_WURX__WURX1_1_REG_ADDR                        0x20
#define PMU_WURX__WURX1_RB_REG_ADDR                       0x24
#define PMU_WURX__WURX_SPARE_REG_ADDR                     0x28
#define PMU_WURX__CORE_ID_REG_ADDR                        0x2c

#define PMU_GADC__REG_BLADDR                              11
#define PMU_GADC__GADC_CTRL_REG_ADDR                      0x0
#define PMU_GADC__GADC_BIAS_0_REG_ADDR                    0x4
#define PMU_GADC__CORE_ID_REG_ADDR                        0x8

#define PMU_SWREG__REG_BLADDR                             12
#define PMU_SWREG__SWREG_CTRL_0_REG_ADDR                  0x0
#define PMU_SWREG__SWREG_CTRL_1_REG_ADDR                  0x4
#define PMU_SWREG__SWREG_CTRL_2_REG_ADDR                  0x8
#define PMU_SWREG__SWREG_CTRL_3_REG_ADDR                  0xc
#define PMU_SWREG__SWREG_CTRL_4_REG_ADDR                  0x10
#define PMU_SWREG__SWREG_CTRL_5_REG_ADDR                  0x14
#define PMU_SWREG__SWREG_CTRL_6_REG_ADDR                  0x18
#define PMU_SWREG__SWREG_CTRL_7_REG_ADDR                  0x1c
#define PMU_SWREG__SWREG_READOUT_REG_ADDR                 0x20
#define PMU_SWREG__CORE_ID_REG_ADDR                       0x24

/** @} end of at_pmu_spi */
#endif
