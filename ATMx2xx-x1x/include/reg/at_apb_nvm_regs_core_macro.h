/*                                                                           */
/* File:       at_apb_nvm_regs_core_macro.h                                  */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_nvm_regs_core.rdl           */
/*                                                                           */
/* Blueprint:   3.7.5 (Wed Feb 1 23:58:40 PST 2012)                          */
/* Machine:    gull                                                          */
/* OS:         Linux 2.6.32-696.13.2.el6.x86_64                              */
/* Description:                                                              */
/*                                                                           */
/* No Description Provided                                                   */
/*                                                                           */
/* Copyright (C) 2024 Atmosic Technologies.  All rights reserved             */
/*                                                                           */


#ifndef __REG_AT_APB_NVM_REGS_CORE_H__
#define __REG_AT_APB_NVM_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_NVM_REGS_CORE at_apb_nvm_regs_core
 * @ingroup AT_REG
 * @brief at_apb_nvm_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::NVM_opmode */
/**
 * @defgroup at_apb_nvm_regs_core_opmode opmode
 * @brief Contains register fields associated with opmode. definitions.
 * @{
 */
#ifndef __NVM_OPMODE_MACRO__
#define __NVM_OPMODE_MACRO__

/* macros for field read */
/**
 * @defgroup at_apb_nvm_regs_core_read_field read_field
 * @brief macros for field read
 * @details Indicates that the 'go' request is to read from the NVM.
 * @{
 */
#define NVM_OPMODE__READ__SHIFT                                               0
#define NVM_OPMODE__READ__WIDTH                                               1
#define NVM_OPMODE__READ__MASK                                      0x00000001U
#define NVM_OPMODE__READ__READ(src)             ((uint32_t)(src) & 0x00000001U)
#define NVM_OPMODE__READ__WRITE(src)            ((uint32_t)(src) & 0x00000001U)
#define NVM_OPMODE__READ__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define NVM_OPMODE__READ__VERIFY(src)     (!(((uint32_t)(src) & ~0x00000001U)))
#define NVM_OPMODE__READ__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define NVM_OPMODE__READ__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define NVM_OPMODE__READ__RESET_VALUE                               0x00000000U
/** @} */

/* macros for field program */
/**
 * @defgroup at_apb_nvm_regs_core_program_field program_field
 * @brief macros for field program
 * @details Indicates that the 'go' request is to program to the NVM.
 * @{
 */
#define NVM_OPMODE__PROGRAM__SHIFT                                            1
#define NVM_OPMODE__PROGRAM__WIDTH                                            1
#define NVM_OPMODE__PROGRAM__MASK                                   0x00000002U
#define NVM_OPMODE__PROGRAM__READ(src)   (((uint32_t)(src) & 0x00000002U) >> 1)
#define NVM_OPMODE__PROGRAM__WRITE(src)  (((uint32_t)(src) << 1) & 0x00000002U)
#define NVM_OPMODE__PROGRAM__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | (((uint32_t)(src) <<\
                    1) & 0x00000002U)
#define NVM_OPMODE__PROGRAM__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 1) & ~0x00000002U)))
#define NVM_OPMODE__PROGRAM__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define NVM_OPMODE__PROGRAM__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define NVM_OPMODE__PROGRAM__RESET_VALUE                            0x00000000U
/** @} */

/* macros for field word_size */
/**
 * @defgroup at_apb_nvm_regs_core_word_size_field word_size_field
 * @brief macros for field word_size
 * @details 0 = byte-read  1 = half-word read  2 = 3-bytes read  3 = word read
 * @{
 */
#define NVM_OPMODE__WORD_SIZE__SHIFT                                          2
#define NVM_OPMODE__WORD_SIZE__WIDTH                                          2
#define NVM_OPMODE__WORD_SIZE__MASK                                 0x0000000cU
#define NVM_OPMODE__WORD_SIZE__READ(src) (((uint32_t)(src) & 0x0000000cU) >> 2)
#define NVM_OPMODE__WORD_SIZE__WRITE(src) \
                    (((uint32_t)(src)\
                    << 2) & 0x0000000cU)
#define NVM_OPMODE__WORD_SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000000cU) | (((uint32_t)(src) <<\
                    2) & 0x0000000cU)
#define NVM_OPMODE__WORD_SIZE__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 2) & ~0x0000000cU)))
#define NVM_OPMODE__WORD_SIZE__RESET_VALUE                          0x00000000U
/** @} */

/* macros for field auto_inc */
/**
 * @defgroup at_apb_nvm_regs_core_auto_inc_field auto_inc_field
 * @brief macros for field auto_inc
 * @details 0 = read address is not auto-incremented  1 = read address is auto-inc
 * @{
 */
#define NVM_OPMODE__AUTO_INC__SHIFT                                           4
#define NVM_OPMODE__AUTO_INC__WIDTH                                           1
#define NVM_OPMODE__AUTO_INC__MASK                                  0x00000010U
#define NVM_OPMODE__AUTO_INC__READ(src)  (((uint32_t)(src) & 0x00000010U) >> 4)
#define NVM_OPMODE__AUTO_INC__WRITE(src) (((uint32_t)(src) << 4) & 0x00000010U)
#define NVM_OPMODE__AUTO_INC__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | (((uint32_t)(src) <<\
                    4) & 0x00000010U)
#define NVM_OPMODE__AUTO_INC__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 4) & ~0x00000010U)))
#define NVM_OPMODE__AUTO_INC__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define NVM_OPMODE__AUTO_INC__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define NVM_OPMODE__AUTO_INC__RESET_VALUE                           0x00000000U
/** @} */

/* macros for field go */
/**
 * @defgroup at_apb_nvm_regs_core_go_field go_field
 * @brief macros for field go
 * @details Requested operation starts when rising edge on 'go' is detected.
 * @{
 */
#define NVM_OPMODE__GO__SHIFT                                                31
#define NVM_OPMODE__GO__WIDTH                                                 1
#define NVM_OPMODE__GO__MASK                                        0x80000000U
#define NVM_OPMODE__GO__READ(src)       (((uint32_t)(src) & 0x80000000U) >> 31)
#define NVM_OPMODE__GO__WRITE(src)      (((uint32_t)(src) << 31) & 0x80000000U)
#define NVM_OPMODE__GO__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | (((uint32_t)(src) <<\
                    31) & 0x80000000U)
#define NVM_OPMODE__GO__VERIFY(src) \
                    (!((((uint32_t)(src)\
                    << 31) & ~0x80000000U)))
#define NVM_OPMODE__GO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define NVM_OPMODE__GO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define NVM_OPMODE__GO__RESET_VALUE                                 0x00000000U
/** @} */
#define NVM_OPMODE__TYPE                                               uint32_t
#define NVM_OPMODE__READ                                            0x8000001fU
#define NVM_OPMODE__WRITE                                           0x8000001fU
#define NVM_OPMODE__PRESERVED                                       0x00000000U
#define NVM_OPMODE__RESET_VALUE                                     0x00000000U

#endif /* __NVM_OPMODE_MACRO__ */

/** @} end of opmode */

/* macros for BlueprintGlobalNameSpace::NVM_address */
/**
 * @defgroup at_apb_nvm_regs_core_address address
 * @brief Contains register fields associated with address. definitions.
 * @{
 */
#ifndef __NVM_ADDRESS_MACRO__
#define __NVM_ADDRESS_MACRO__

/* macros for field address */
/**
 * @defgroup at_apb_nvm_regs_core_address_field address_field
 * @brief macros for field address
 * @details The whole address space is made up of 4 blocks of 8kb efuse. If not programmed, fuse value is 0. Programming is not reversible. If opmode is program, specify per fuse using address bits [12:0] and specify the block with bits [14:13]. if opmode is read, specify per byte using address bits [9:0] and specify the block with bits [11:10].
 * @{
 */
#define NVM_ADDRESS__ADDRESS__SHIFT                                           0
#define NVM_ADDRESS__ADDRESS__WIDTH                                          15
#define NVM_ADDRESS__ADDRESS__MASK                                  0x00007fffU
#define NVM_ADDRESS__ADDRESS__READ(src)         ((uint32_t)(src) & 0x00007fffU)
#define NVM_ADDRESS__ADDRESS__WRITE(src)        ((uint32_t)(src) & 0x00007fffU)
#define NVM_ADDRESS__ADDRESS__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00007fffU) | ((uint32_t)(src) &\
                    0x00007fffU)
#define NVM_ADDRESS__ADDRESS__VERIFY(src) (!(((uint32_t)(src) & ~0x00007fffU)))
#define NVM_ADDRESS__ADDRESS__RESET_VALUE                           0x00000000U
/** @} */
#define NVM_ADDRESS__TYPE                                              uint32_t
#define NVM_ADDRESS__READ                                           0x00007fffU
#define NVM_ADDRESS__WRITE                                          0x00007fffU
#define NVM_ADDRESS__PRESERVED                                      0x00000000U
#define NVM_ADDRESS__RESET_VALUE                                    0x00000000U

#endif /* __NVM_ADDRESS_MACRO__ */

/** @} end of address */

/* macros for BlueprintGlobalNameSpace::NVM_status */
/**
 * @defgroup at_apb_nvm_regs_core_status status
 * @brief status information definitions.
 * @{
 */
#ifndef __NVM_STATUS_MACRO__
#define __NVM_STATUS_MACRO__

/* macros for field running */
/**
 * @defgroup at_apb_nvm_regs_core_running_field running_field
 * @brief macros for field running
 * @details core's busy indicator
 * @{
 */
#define NVM_STATUS__RUNNING__SHIFT                                           31
#define NVM_STATUS__RUNNING__WIDTH                                            1
#define NVM_STATUS__RUNNING__MASK                                   0x80000000U
#define NVM_STATUS__RUNNING__READ(src)  (((uint32_t)(src) & 0x80000000U) >> 31)
#define NVM_STATUS__RUNNING__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define NVM_STATUS__RUNNING__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define NVM_STATUS__RUNNING__RESET_VALUE                            0x00000000U
/** @} */
#define NVM_STATUS__TYPE                                               uint32_t
#define NVM_STATUS__READ                                            0x80000000U
#define NVM_STATUS__PRESERVED                                       0x00000000U
#define NVM_STATUS__RESET_VALUE                                     0x00000000U

#endif /* __NVM_STATUS_MACRO__ */

/** @} end of status */

/* macros for BlueprintGlobalNameSpace::NVM_read_data */
/**
 * @defgroup at_apb_nvm_regs_core_read_data read_data
 * @brief read data buffer definitions.
 * @{
 */
#ifndef __NVM_READ_DATA_MACRO__
#define __NVM_READ_DATA_MACRO__

/* macros for field read_data */
/**
 * @defgroup at_apb_nvm_regs_core_read_data_field read_data_field
 * @brief macros for field read_data
 * @details read data buffer
 * @{
 */
#define NVM_READ_DATA__READ_DATA__SHIFT                                       0
#define NVM_READ_DATA__READ_DATA__WIDTH                                      32
#define NVM_READ_DATA__READ_DATA__MASK                              0xffffffffU
#define NVM_READ_DATA__READ_DATA__READ(src)     ((uint32_t)(src) & 0xffffffffU)
#define NVM_READ_DATA__READ_DATA__RESET_VALUE                       0x00000000U
/** @} */
#define NVM_READ_DATA__TYPE                                            uint32_t
#define NVM_READ_DATA__READ                                         0xffffffffU
#define NVM_READ_DATA__PRESERVED                                    0x00000000U
#define NVM_READ_DATA__RESET_VALUE                                  0x00000000U

#endif /* __NVM_READ_DATA_MACRO__ */

/** @} end of read_data */

/* macros for BlueprintGlobalNameSpace::NVM_t_sp_pg_avdd */
/**
 * @defgroup at_apb_nvm_regs_core_t_sp_pg_avdd t_sp_pg_avdd
 * @brief Contains register fields associated with t_sp_pg_avdd. definitions.
 * @{
 */
#ifndef __NVM_T_SP_PG_AVDD_MACRO__
#define __NVM_T_SP_PG_AVDD_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 1000 nsec; actual delay is programmed number plus 2
 * @{
 */
#define NVM_T_SP_PG_AVDD__CYCLES__SHIFT                                       0
#define NVM_T_SP_PG_AVDD__CYCLES__WIDTH                                      10
#define NVM_T_SP_PG_AVDD__CYCLES__MASK                              0x000003ffU
#define NVM_T_SP_PG_AVDD__CYCLES__READ(src)     ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_SP_PG_AVDD__CYCLES__WRITE(src)    ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_SP_PG_AVDD__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_SP_PG_AVDD__CYCLES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000003ffU)))
#define NVM_T_SP_PG_AVDD__CYCLES__RESET_VALUE                       0x0000000fU
/** @} */
#define NVM_T_SP_PG_AVDD__TYPE                                         uint32_t
#define NVM_T_SP_PG_AVDD__READ                                      0x000003ffU
#define NVM_T_SP_PG_AVDD__WRITE                                     0x000003ffU
#define NVM_T_SP_PG_AVDD__PRESERVED                                 0x00000000U
#define NVM_T_SP_PG_AVDD__RESET_VALUE                               0x0000000fU

#endif /* __NVM_T_SP_PG_AVDD_MACRO__ */

/** @} end of t_sp_pg_avdd */

/* macros for BlueprintGlobalNameSpace::NVM_t_sp_pgm */
/**
 * @defgroup at_apb_nvm_regs_core_t_sp_pgm t_sp_pgm
 * @brief Contains register fields associated with t_sp_pgm. definitions.
 * @{
 */
#ifndef __NVM_T_SP_PGM_MACRO__
#define __NVM_T_SP_PGM_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 100 nsec; actual delay is programmed number plus 2
 * @{
 */
#define NVM_T_SP_PGM__CYCLES__SHIFT                                           0
#define NVM_T_SP_PGM__CYCLES__WIDTH                                          10
#define NVM_T_SP_PGM__CYCLES__MASK                                  0x000003ffU
#define NVM_T_SP_PGM__CYCLES__READ(src)         ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_SP_PGM__CYCLES__WRITE(src)        ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_SP_PGM__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_SP_PGM__CYCLES__VERIFY(src) (!(((uint32_t)(src) & ~0x000003ffU)))
#define NVM_T_SP_PGM__CYCLES__RESET_VALUE                           0x00000000U
/** @} */
#define NVM_T_SP_PGM__TYPE                                             uint32_t
#define NVM_T_SP_PGM__READ                                          0x000003ffU
#define NVM_T_SP_PGM__WRITE                                         0x000003ffU
#define NVM_T_SP_PGM__PRESERVED                                     0x00000000U
#define NVM_T_SP_PGM__RESET_VALUE                                   0x00000000U

#endif /* __NVM_T_SP_PGM_MACRO__ */

/** @} end of t_sp_pgm */

/* macros for BlueprintGlobalNameSpace::NVM_t_pgm */
/**
 * @defgroup at_apb_nvm_regs_core_t_pgm t_pgm
 * @brief Contains register fields associated with t_pgm. definitions.
 * @{
 */
#ifndef __NVM_T_PGM_MACRO__
#define __NVM_T_PGM_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 9000 nsec and <= 11000 nsec; actual delay is programmed number plus 2
 * @{
 */
#define NVM_T_PGM__CYCLES__SHIFT                                              0
#define NVM_T_PGM__CYCLES__WIDTH                                             10
#define NVM_T_PGM__CYCLES__MASK                                     0x000003ffU
#define NVM_T_PGM__CYCLES__READ(src)            ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_PGM__CYCLES__WRITE(src)           ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_PGM__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_PGM__CYCLES__VERIFY(src)    (!(((uint32_t)(src) & ~0x000003ffU)))
#define NVM_T_PGM__CYCLES__RESET_VALUE                              0x0000008fU
/** @} */
#define NVM_T_PGM__TYPE                                                uint32_t
#define NVM_T_PGM__READ                                             0x000003ffU
#define NVM_T_PGM__WRITE                                            0x000003ffU
#define NVM_T_PGM__PRESERVED                                        0x00000000U
#define NVM_T_PGM__RESET_VALUE                                      0x0000008fU

#endif /* __NVM_T_PGM_MACRO__ */

/** @} end of t_pgm */

/* macros for BlueprintGlobalNameSpace::NVM_t_hp_pgm */
/**
 * @defgroup at_apb_nvm_regs_core_t_hp_pgm t_hp_pgm
 * @brief Contains register fields associated with t_hp_pgm. definitions.
 * @{
 */
#ifndef __NVM_T_HP_PGM_MACRO__
#define __NVM_T_HP_PGM_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 100 nsec; actual delay is programmed number plus 2
 * @{
 */
#define NVM_T_HP_PGM__CYCLES__SHIFT                                           0
#define NVM_T_HP_PGM__CYCLES__WIDTH                                          10
#define NVM_T_HP_PGM__CYCLES__MASK                                  0x000003ffU
#define NVM_T_HP_PGM__CYCLES__READ(src)         ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_HP_PGM__CYCLES__WRITE(src)        ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_HP_PGM__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_HP_PGM__CYCLES__VERIFY(src) (!(((uint32_t)(src) & ~0x000003ffU)))
#define NVM_T_HP_PGM__CYCLES__RESET_VALUE                           0x00000000U
/** @} */
#define NVM_T_HP_PGM__TYPE                                             uint32_t
#define NVM_T_HP_PGM__READ                                          0x000003ffU
#define NVM_T_HP_PGM__WRITE                                         0x000003ffU
#define NVM_T_HP_PGM__PRESERVED                                     0x00000000U
#define NVM_T_HP_PGM__RESET_VALUE                                   0x00000000U

#endif /* __NVM_T_HP_PGM_MACRO__ */

/** @} end of t_hp_pgm */

/* macros for BlueprintGlobalNameSpace::NVM_t_hp_pg_avdd */
/**
 * @defgroup at_apb_nvm_regs_core_t_hp_pg_avdd t_hp_pg_avdd
 * @brief Contains register fields associated with t_hp_pg_avdd. definitions.
 * @{
 */
#ifndef __NVM_T_HP_PG_AVDD_MACRO__
#define __NVM_T_HP_PG_AVDD_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 1000 nsec; actual delay is programmed number plus 2
 * @{
 */
#define NVM_T_HP_PG_AVDD__CYCLES__SHIFT                                       0
#define NVM_T_HP_PG_AVDD__CYCLES__WIDTH                                      10
#define NVM_T_HP_PG_AVDD__CYCLES__MASK                              0x000003ffU
#define NVM_T_HP_PG_AVDD__CYCLES__READ(src)     ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_HP_PG_AVDD__CYCLES__WRITE(src)    ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_HP_PG_AVDD__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_HP_PG_AVDD__CYCLES__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x000003ffU)))
#define NVM_T_HP_PG_AVDD__CYCLES__RESET_VALUE                       0x0000000fU
/** @} */
#define NVM_T_HP_PG_AVDD__TYPE                                         uint32_t
#define NVM_T_HP_PG_AVDD__READ                                      0x000003ffU
#define NVM_T_HP_PG_AVDD__WRITE                                     0x000003ffU
#define NVM_T_HP_PG_AVDD__PRESERVED                                 0x00000000U
#define NVM_T_HP_PG_AVDD__RESET_VALUE                               0x0000000fU

#endif /* __NVM_T_HP_PG_AVDD_MACRO__ */

/** @} end of t_hp_pg_avdd */

/* macros for BlueprintGlobalNameSpace::NVM_t_sr_rd */
/**
 * @defgroup at_apb_nvm_regs_core_t_sr_rd t_sr_rd
 * @brief Contains register fields associated with t_sr_rd. definitions.
 * @{
 */
#ifndef __NVM_T_SR_RD_MACRO__
#define __NVM_T_SR_RD_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 100 nsec; actual delay is programmed number plus 1
 * @{
 */
#define NVM_T_SR_RD__CYCLES__SHIFT                                            0
#define NVM_T_SR_RD__CYCLES__WIDTH                                           10
#define NVM_T_SR_RD__CYCLES__MASK                                   0x000003ffU
#define NVM_T_SR_RD__CYCLES__READ(src)          ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_SR_RD__CYCLES__WRITE(src)         ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_SR_RD__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_SR_RD__CYCLES__VERIFY(src)  (!(((uint32_t)(src) & ~0x000003ffU)))
#define NVM_T_SR_RD__CYCLES__RESET_VALUE                            0x00000001U
/** @} */
#define NVM_T_SR_RD__TYPE                                              uint32_t
#define NVM_T_SR_RD__READ                                           0x000003ffU
#define NVM_T_SR_RD__WRITE                                          0x000003ffU
#define NVM_T_SR_RD__PRESERVED                                      0x00000000U
#define NVM_T_SR_RD__RESET_VALUE                                    0x00000001U

#endif /* __NVM_T_SR_RD_MACRO__ */

/** @} end of t_sr_rd */

/* macros for BlueprintGlobalNameSpace::NVM_t_rd */
/**
 * @defgroup at_apb_nvm_regs_core_t_rd t_rd
 * @brief Contains register fields associated with t_rd. definitions.
 * @{
 */
#ifndef __NVM_T_RD_MACRO__
#define __NVM_T_RD_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 40 nsec; actual delay is programmed number + 1
 * @{
 */
#define NVM_T_RD__CYCLES__SHIFT                                               0
#define NVM_T_RD__CYCLES__WIDTH                                              10
#define NVM_T_RD__CYCLES__MASK                                      0x000003ffU
#define NVM_T_RD__CYCLES__READ(src)             ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_RD__CYCLES__WRITE(src)            ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_RD__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_RD__CYCLES__VERIFY(src)     (!(((uint32_t)(src) & ~0x000003ffU)))
#define NVM_T_RD__CYCLES__RESET_VALUE                               0x00000000U
/** @} */
#define NVM_T_RD__TYPE                                                 uint32_t
#define NVM_T_RD__READ                                              0x000003ffU
#define NVM_T_RD__WRITE                                             0x000003ffU
#define NVM_T_RD__PRESERVED                                         0x00000000U
#define NVM_T_RD__RESET_VALUE                                       0x00000000U

#endif /* __NVM_T_RD_MACRO__ */

/** @} end of t_rd */

/* macros for BlueprintGlobalNameSpace::NVM_t_hr_rd */
/**
 * @defgroup at_apb_nvm_regs_core_t_hr_rd t_hr_rd
 * @brief Contains register fields associated with t_hr_rd. definitions.
 * @{
 */
#ifndef __NVM_T_HR_RD_MACRO__
#define __NVM_T_HR_RD_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 100 nsec; actual delay is programmed number plus 1
 * @{
 */
#define NVM_T_HR_RD__CYCLES__SHIFT                                            0
#define NVM_T_HR_RD__CYCLES__WIDTH                                           10
#define NVM_T_HR_RD__CYCLES__MASK                                   0x000003ffU
#define NVM_T_HR_RD__CYCLES__READ(src)          ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_HR_RD__CYCLES__WRITE(src)         ((uint32_t)(src) & 0x000003ffU)
#define NVM_T_HR_RD__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x000003ffU) | ((uint32_t)(src) &\
                    0x000003ffU)
#define NVM_T_HR_RD__CYCLES__VERIFY(src)  (!(((uint32_t)(src) & ~0x000003ffU)))
#define NVM_T_HR_RD__CYCLES__RESET_VALUE                            0x00000001U
/** @} */
#define NVM_T_HR_RD__TYPE                                              uint32_t
#define NVM_T_HR_RD__READ                                           0x000003ffU
#define NVM_T_HR_RD__WRITE                                          0x000003ffU
#define NVM_T_HR_RD__PRESERVED                                      0x00000000U
#define NVM_T_HR_RD__RESET_VALUE                                    0x00000001U

#endif /* __NVM_T_HR_RD_MACRO__ */

/** @} end of t_hr_rd */

/* macros for BlueprintGlobalNameSpace::NVM_t_setup */
/**
 * @defgroup at_apb_nvm_regs_core_t_setup t_setup
 * @brief Contains register fields associated with t_setup. definitions.
 * @{
 */
#ifndef __NVM_T_SETUP_MACRO__
#define __NVM_T_SETUP_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 10 nsec; actual delay is programmed number + 1
 * @{
 */
#define NVM_T_SETUP__CYCLES__SHIFT                                            0
#define NVM_T_SETUP__CYCLES__WIDTH                                            5
#define NVM_T_SETUP__CYCLES__MASK                                   0x0000001fU
#define NVM_T_SETUP__CYCLES__READ(src)          ((uint32_t)(src) & 0x0000001fU)
#define NVM_T_SETUP__CYCLES__WRITE(src)         ((uint32_t)(src) & 0x0000001fU)
#define NVM_T_SETUP__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define NVM_T_SETUP__CYCLES__VERIFY(src)  (!(((uint32_t)(src) & ~0x0000001fU)))
#define NVM_T_SETUP__CYCLES__RESET_VALUE                            0x00000000U
/** @} */
#define NVM_T_SETUP__TYPE                                              uint32_t
#define NVM_T_SETUP__READ                                           0x0000001fU
#define NVM_T_SETUP__WRITE                                          0x0000001fU
#define NVM_T_SETUP__PRESERVED                                      0x00000000U
#define NVM_T_SETUP__RESET_VALUE                                    0x00000000U

#endif /* __NVM_T_SETUP_MACRO__ */

/** @} end of t_setup */

/* macros for BlueprintGlobalNameSpace::NVM_t_hold */
/**
 * @defgroup at_apb_nvm_regs_core_t_hold t_hold
 * @brief Contains register fields associated with t_hold. definitions.
 * @{
 */
#ifndef __NVM_T_HOLD_MACRO__
#define __NVM_T_HOLD_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 10 nsec; actual delay is programmed number + 1
 * @{
 */
#define NVM_T_HOLD__CYCLES__SHIFT                                             0
#define NVM_T_HOLD__CYCLES__WIDTH                                             5
#define NVM_T_HOLD__CYCLES__MASK                                    0x0000001fU
#define NVM_T_HOLD__CYCLES__READ(src)           ((uint32_t)(src) & 0x0000001fU)
#define NVM_T_HOLD__CYCLES__WRITE(src)          ((uint32_t)(src) & 0x0000001fU)
#define NVM_T_HOLD__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define NVM_T_HOLD__CYCLES__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000001fU)))
#define NVM_T_HOLD__CYCLES__RESET_VALUE                             0x00000000U
/** @} */
#define NVM_T_HOLD__TYPE                                               uint32_t
#define NVM_T_HOLD__READ                                            0x0000001fU
#define NVM_T_HOLD__WRITE                                           0x0000001fU
#define NVM_T_HOLD__PRESERVED                                       0x00000000U
#define NVM_T_HOLD__RESET_VALUE                                     0x00000000U

#endif /* __NVM_T_HOLD_MACRO__ */

/** @} end of t_hold */

/* macros for BlueprintGlobalNameSpace::NVM_t_addr */
/**
 * @defgroup at_apb_nvm_regs_core_t_addr t_addr
 * @brief Contains register fields associated with t_addr. definitions.
 * @{
 */
#ifndef __NVM_T_ADDR_MACRO__
#define __NVM_T_ADDR_MACRO__

/* macros for field cycles */
/**
 * @defgroup at_apb_nvm_regs_core_cycles_field cycles_field
 * @brief macros for field cycles
 * @details want >= 10 nsec; actual delay is programmed number + 1
 * @{
 */
#define NVM_T_ADDR__CYCLES__SHIFT                                             0
#define NVM_T_ADDR__CYCLES__WIDTH                                             5
#define NVM_T_ADDR__CYCLES__MASK                                    0x0000001fU
#define NVM_T_ADDR__CYCLES__READ(src)           ((uint32_t)(src) & 0x0000001fU)
#define NVM_T_ADDR__CYCLES__WRITE(src)          ((uint32_t)(src) & 0x0000001fU)
#define NVM_T_ADDR__CYCLES__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000001fU) | ((uint32_t)(src) &\
                    0x0000001fU)
#define NVM_T_ADDR__CYCLES__VERIFY(src)   (!(((uint32_t)(src) & ~0x0000001fU)))
#define NVM_T_ADDR__CYCLES__RESET_VALUE                             0x00000000U
/** @} */
#define NVM_T_ADDR__TYPE                                               uint32_t
#define NVM_T_ADDR__READ                                            0x0000001fU
#define NVM_T_ADDR__WRITE                                           0x0000001fU
#define NVM_T_ADDR__PRESERVED                                       0x00000000U
#define NVM_T_ADDR__RESET_VALUE                                     0x00000000U

#endif /* __NVM_T_ADDR_MACRO__ */

/** @} end of t_addr */

/* macros for BlueprintGlobalNameSpace::NVM_interrupt_mask */
/**
 * @defgroup at_apb_nvm_regs_core_interrupt_mask interrupt_mask
 * @brief interrupt mask definitions.
 * @{
 */
#ifndef __NVM_INTERRUPT_MASK_MACRO__
#define __NVM_INTERRUPT_MASK_MACRO__

/* macros for field passthru0 */
/**
 * @defgroup at_apb_nvm_regs_core_passthru0_field passthru0_field
 * @brief macros for field passthru0
 * @details 1=allow interrupt0 to be OR'ed into core interrupt
 * @{
 */
#define NVM_INTERRUPT_MASK__PASSTHRU0__SHIFT                                  0
#define NVM_INTERRUPT_MASK__PASSTHRU0__WIDTH                                  1
#define NVM_INTERRUPT_MASK__PASSTHRU0__MASK                         0x00000001U
#define NVM_INTERRUPT_MASK__PASSTHRU0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_INTERRUPT_MASK__PASSTHRU0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_INTERRUPT_MASK__PASSTHRU0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define NVM_INTERRUPT_MASK__PASSTHRU0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define NVM_INTERRUPT_MASK__PASSTHRU0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define NVM_INTERRUPT_MASK__PASSTHRU0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define NVM_INTERRUPT_MASK__PASSTHRU0__RESET_VALUE                  0x00000000U
/** @} */
#define NVM_INTERRUPT_MASK__TYPE                                       uint32_t
#define NVM_INTERRUPT_MASK__READ                                    0x00000001U
#define NVM_INTERRUPT_MASK__WRITE                                   0x00000001U
#define NVM_INTERRUPT_MASK__PRESERVED                               0x00000000U
#define NVM_INTERRUPT_MASK__RESET_VALUE                             0x00000000U

#endif /* __NVM_INTERRUPT_MASK_MACRO__ */

/** @} end of interrupt_mask */

/* macros for BlueprintGlobalNameSpace::NVM_interrupt_status */
/**
 * @defgroup at_apb_nvm_regs_core_interrupt_status interrupt_status
 * @brief interrupt status definitions.
 * @{
 */
#ifndef __NVM_INTERRUPT_STATUS_MACRO__
#define __NVM_INTERRUPT_STATUS_MACRO__

/* macros for field interrupt0 */
/**
 * @defgroup at_apb_nvm_regs_core_interrupt0_field interrupt0_field
 * @brief macros for field interrupt0
 * @details saw a rising edge on done; independent of mask
 * @{
 */
#define NVM_INTERRUPT_STATUS__INTERRUPT0__SHIFT                               0
#define NVM_INTERRUPT_STATUS__INTERRUPT0__WIDTH                               1
#define NVM_INTERRUPT_STATUS__INTERRUPT0__MASK                      0x00000001U
#define NVM_INTERRUPT_STATUS__INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_INTERRUPT_STATUS__INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define NVM_INTERRUPT_STATUS__INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define NVM_INTERRUPT_STATUS__INTERRUPT0__RESET_VALUE               0x00000000U
/** @} */
#define NVM_INTERRUPT_STATUS__TYPE                                     uint32_t
#define NVM_INTERRUPT_STATUS__READ                                  0x00000001U
#define NVM_INTERRUPT_STATUS__PRESERVED                             0x00000000U
#define NVM_INTERRUPT_STATUS__RESET_VALUE                           0x00000000U

#endif /* __NVM_INTERRUPT_STATUS_MACRO__ */

/** @} end of interrupt_status */

/* macros for BlueprintGlobalNameSpace::NVM_set_interrupt */
/**
 * @defgroup at_apb_nvm_regs_core_set_interrupt set_interrupt
 * @brief Contains register fields associated with set_interrupt. definitions.
 * @{
 */
#ifndef __NVM_SET_INTERRUPT_MACRO__
#define __NVM_SET_INTERRUPT_MACRO__

/* macros for field set_interrupt0 */
/**
 * @defgroup at_apb_nvm_regs_core_set_interrupt0_field set_interrupt0_field
 * @brief macros for field set_interrupt0
 * @details set the interrupt; not auto cleared; useful for software testing
 * @{
 */
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__SHIFT                              0
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__WIDTH                              1
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__MASK                     0x00000001U
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define NVM_SET_INTERRUPT__SET_INTERRUPT0__RESET_VALUE              0x00000000U
/** @} */
#define NVM_SET_INTERRUPT__TYPE                                        uint32_t
#define NVM_SET_INTERRUPT__READ                                     0x00000001U
#define NVM_SET_INTERRUPT__WRITE                                    0x00000001U
#define NVM_SET_INTERRUPT__PRESERVED                                0x00000000U
#define NVM_SET_INTERRUPT__RESET_VALUE                              0x00000000U

#endif /* __NVM_SET_INTERRUPT_MACRO__ */

/** @} end of set_interrupt */

/* macros for BlueprintGlobalNameSpace::NVM_reset_interrupt */
/**
 * @defgroup at_apb_nvm_regs_core_reset_interrupt reset_interrupt
 * @brief Contains register fields associated with reset_interrupt. definitions.
 * @{
 */
#ifndef __NVM_RESET_INTERRUPT_MACRO__
#define __NVM_RESET_INTERRUPT_MACRO__

/* macros for field reset_interrupt0 */
/**
 * @defgroup at_apb_nvm_regs_core_reset_interrupt0_field reset_interrupt0_field
 * @brief macros for field reset_interrupt0
 * @details clear the interrupt; not auto cleared
 * @{
 */
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__SHIFT                          0
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__WIDTH                          1
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__MASK                 0x00000001U
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__WRITE(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | ((uint32_t)(src) &\
                    0x00000001U)
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0x00000001U)))
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define NVM_RESET_INTERRUPT__RESET_INTERRUPT0__RESET_VALUE          0x00000000U
/** @} */
#define NVM_RESET_INTERRUPT__TYPE                                      uint32_t
#define NVM_RESET_INTERRUPT__READ                                   0x00000001U
#define NVM_RESET_INTERRUPT__WRITE                                  0x00000001U
#define NVM_RESET_INTERRUPT__PRESERVED                              0x00000000U
#define NVM_RESET_INTERRUPT__RESET_VALUE                            0x00000000U

#endif /* __NVM_RESET_INTERRUPT_MACRO__ */

/** @} end of reset_interrupt */

/* macros for BlueprintGlobalNameSpace::NVM_efuse_autoread */
/**
 * @defgroup at_apb_nvm_regs_core_efuse_autoread efuse_autoread
 * @brief read data from last word of efuse; HW initiated after each PORESETn de-assertion definitions.
 * @{
 */
#ifndef __NVM_EFUSE_AUTOREAD_MACRO__
#define __NVM_EFUSE_AUTOREAD_MACRO__

/* macros for field swd_disable */
/**
 * @defgroup at_apb_nvm_regs_core_swd_disable_field swd_disable_field
 * @brief macros for field swd_disable
 * @details Disable the SWD interface.  0 = enable SWD  1 = disable SWD
 * @{
 */
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__SHIFT                                0
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__WIDTH                                1
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__MASK                       0x00000001U
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__READ(src) \
                    ((uint32_t)(src)\
                    & 0x00000001U)
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(1)
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000001U) | (uint32_t)(0)
#define NVM_EFUSE_AUTOREAD__SWD_DISABLE__RESET_VALUE                0x00000000U
/** @} */

/* macros for field sysram_svt_en_hw */
/**
 * @defgroup at_apb_nvm_regs_core_sysram_svt_en_hw_field sysram_svt_en_hw_field
 * @brief macros for field sysram_svt_en_hw
 * @details SVT - If both groups are disabled, then SVT is enabled.  0 = SVT disabled by efuse bit  1 = SVT enabled by efuse bit
 * @{
 */
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__SHIFT                           1
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__WIDTH                           1
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__MASK                  0x00000002U
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000002U) >> 1)
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(1) << 1)
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000002U) | ((uint32_t)(0) << 1)
#define NVM_EFUSE_AUTOREAD__SYSRAM_SVT_EN_HW__RESET_VALUE           0x00000000U
/** @} */

/* macros for field sysram_hvt_en_hw */
/**
 * @defgroup at_apb_nvm_regs_core_sysram_hvt_en_hw_field sysram_hvt_en_hw_field
 * @brief macros for field sysram_hvt_en_hw
 * @details HVT  0 = HVT disabled by efuse bit  1 = HVT enabled by efuse bit
 * @{
 */
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__SHIFT                           2
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__WIDTH                           1
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__MASK                  0x00000004U
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000004U) >> 2)
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(1) << 2)
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000004U) | ((uint32_t)(0) << 2)
#define NVM_EFUSE_AUTOREAD__SYSRAM_HVT_EN_HW__RESET_VALUE           0x00000000U
/** @} */

/* macros for field pkg_5x5 */
/**
 * @defgroup at_apb_nvm_regs_core_pkg_5x5_field pkg_5x5_field
 * @brief macros for field pkg_5x5
 * @details Package type.  0 = 6x6/7x7  1 = 5x5/CSP
 * @{
 */
#define NVM_EFUSE_AUTOREAD__PKG_5X5__SHIFT                                    3
#define NVM_EFUSE_AUTOREAD__PKG_5X5__WIDTH                                    1
#define NVM_EFUSE_AUTOREAD__PKG_5X5__MASK                           0x00000008U
#define NVM_EFUSE_AUTOREAD__PKG_5X5__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000008U) >> 3)
#define NVM_EFUSE_AUTOREAD__PKG_5X5__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(1) << 3)
#define NVM_EFUSE_AUTOREAD__PKG_5X5__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000008U) | ((uint32_t)(0) << 3)
#define NVM_EFUSE_AUTOREAD__PKG_5X5__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field stacked_flash */
/**
 * @defgroup at_apb_nvm_regs_core_stacked_flash_field stacked_flash_field
 * @brief macros for field stacked_flash
 * @details PDAC = radio high power block   stacked_flash  0 = no stacked flash  1 = stacked flash
 * @{
 */
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__SHIFT                              4
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__WIDTH                              1
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__MASK                     0x00000010U
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000010U) >> 4)
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(1) << 4)
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000010U) | ((uint32_t)(0) << 4)
#define NVM_EFUSE_AUTOREAD__STACKED_FLASH__RESET_VALUE              0x00000000U
/** @} */

/* macros for field PDAC */
/**
 * @defgroup at_apb_nvm_regs_core_PDAC_field PDAC_field
 * @brief macros for field PDAC
 * @details PDAC = radio high power block   stacked_flash  0 = no stacked flash  1 = stacked flash
 * @{
 */
#define NVM_EFUSE_AUTOREAD__PDAC__SHIFT                                       5
#define NVM_EFUSE_AUTOREAD__PDAC__WIDTH                                       3
#define NVM_EFUSE_AUTOREAD__PDAC__MASK                              0x000000e0U
#define NVM_EFUSE_AUTOREAD__PDAC__READ(src) \
                    (((uint32_t)(src)\
                    & 0x000000e0U) >> 5)
#define NVM_EFUSE_AUTOREAD__PDAC__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field otp_harv_disabled */
/**
 * @defgroup at_apb_nvm_regs_core_otp_harv_disabled_field otp_harv_disabled_field
 * @brief macros for field otp_harv_disabled
 * @details harvester enable  0 = harvesting functionality enabled  1 = harvesting functionality disabled
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__SHIFT                          8
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__WIDTH                          1
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__MASK                 0x00000100U
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000100U) >> 8)
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(1) << 8)
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00000100U) | ((uint32_t)(0) << 8)
#define NVM_EFUSE_AUTOREAD__OTP_HARV_DISABLED__RESET_VALUE          0x00000000U
/** @} */

/* macros for field otp_brownout_thr */
/**
 * @defgroup at_apb_nvm_regs_core_otp_brownout_thr_field otp_brownout_thr_field
 * @brief macros for field otp_brownout_thr
 * @details VBAT brownout threshold level  25mV*(38+otp_brownout_thr) for otp_batt_type = 0  50mV*(38+otp_brownout_thr) for otp_batt_type = 1 or 3
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_BROWNOUT_THR__SHIFT                           9
#define NVM_EFUSE_AUTOREAD__OTP_BROWNOUT_THR__WIDTH                           3
#define NVM_EFUSE_AUTOREAD__OTP_BROWNOUT_THR__MASK                  0x00000e00U
#define NVM_EFUSE_AUTOREAD__OTP_BROWNOUT_THR__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00000e00U) >> 9)
#define NVM_EFUSE_AUTOREAD__OTP_BROWNOUT_THR__RESET_VALUE           0x00000000U
/** @} */

/* macros for field atm1 */
/**
 * @defgroup at_apb_nvm_regs_core_atm1_field atm1_field
 * @brief macros for field atm1
 * @details pkg_7x7  0 = 5x5/6x6/CSP  1 = 7x7   csp  0 = QFN  1 = CSP   atm1  0 = ATM2/ATM3  1 = ATM1
 * @{
 */
#define NVM_EFUSE_AUTOREAD__ATM1__SHIFT                                      12
#define NVM_EFUSE_AUTOREAD__ATM1__WIDTH                                       1
#define NVM_EFUSE_AUTOREAD__ATM1__MASK                              0x00001000U
#define NVM_EFUSE_AUTOREAD__ATM1__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00001000U) >> 12)
#define NVM_EFUSE_AUTOREAD__ATM1__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(1) << 12)
#define NVM_EFUSE_AUTOREAD__ATM1__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00001000U) | ((uint32_t)(0) << 12)
#define NVM_EFUSE_AUTOREAD__ATM1__RESET_VALUE                       0x00000000U
/** @} */

/* macros for field csp */
/**
 * @defgroup at_apb_nvm_regs_core_csp_field csp_field
 * @brief macros for field csp
 * @details pkg_7x7  0 = 5x5/6x6/CSP  1 = 7x7   csp  0 = QFN  1 = CSP   atm1  0 = ATM2/ATM3  1 = ATM1
 * @{
 */
#define NVM_EFUSE_AUTOREAD__CSP__SHIFT                                       13
#define NVM_EFUSE_AUTOREAD__CSP__WIDTH                                        1
#define NVM_EFUSE_AUTOREAD__CSP__MASK                               0x00002000U
#define NVM_EFUSE_AUTOREAD__CSP__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00002000U) >> 13)
#define NVM_EFUSE_AUTOREAD__CSP__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(1) << 13)
#define NVM_EFUSE_AUTOREAD__CSP__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00002000U) | ((uint32_t)(0) << 13)
#define NVM_EFUSE_AUTOREAD__CSP__RESET_VALUE                        0x00000000U
/** @} */

/* macros for field pkg_7x7 */
/**
 * @defgroup at_apb_nvm_regs_core_pkg_7x7_field pkg_7x7_field
 * @brief macros for field pkg_7x7
 * @details pkg_7x7  0 = 5x5/6x6/CSP  1 = 7x7   csp  0 = QFN  1 = CSP   atm1  0 = ATM2/ATM3  1 = ATM1
 * @{
 */
#define NVM_EFUSE_AUTOREAD__PKG_7X7__SHIFT                                   14
#define NVM_EFUSE_AUTOREAD__PKG_7X7__WIDTH                                    1
#define NVM_EFUSE_AUTOREAD__PKG_7X7__MASK                           0x00004000U
#define NVM_EFUSE_AUTOREAD__PKG_7X7__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00004000U) >> 14)
#define NVM_EFUSE_AUTOREAD__PKG_7X7__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(1) << 14)
#define NVM_EFUSE_AUTOREAD__PKG_7X7__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x00004000U) | ((uint32_t)(0) << 14)
#define NVM_EFUSE_AUTOREAD__PKG_7X7__RESET_VALUE                    0x00000000U
/** @} */

/* macros for field otp_nabg_trim */
/**
 * @defgroup at_apb_nvm_regs_core_otp_nabg_trim_field otp_nabg_trim_field
 * @brief macros for field otp_nabg_trim
 * @details ignore_32khz_xtal_check  0 = wait for external 32.768kHz crystal to stabilize before entering low power states  1 = do not wait for external 32.768kHz crystal to stabilize before entering low power states   otp_nabg_trim = trim bits for native bandgap
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_NABG_TRIM__SHIFT                             15
#define NVM_EFUSE_AUTOREAD__OTP_NABG_TRIM__WIDTH                              9
#define NVM_EFUSE_AUTOREAD__OTP_NABG_TRIM__MASK                     0x00ff8000U
#define NVM_EFUSE_AUTOREAD__OTP_NABG_TRIM__READ(src) \
                    (((uint32_t)(src)\
                    & 0x00ff8000U) >> 15)
#define NVM_EFUSE_AUTOREAD__OTP_NABG_TRIM__RESET_VALUE              0x00000000U
/** @} */

/* macros for field ignore_32khz_xtal_check */
/**
 * @defgroup at_apb_nvm_regs_core_ignore_32khz_xtal_check_field ignore_32khz_xtal_check_field
 * @brief macros for field ignore_32khz_xtal_check
 * @details ignore_32khz_xtal_check  0 = wait for external 32.768kHz crystal to stabilize before entering low power states  1 = do not wait for external 32.768kHz crystal to stabilize before entering low power states   otp_nabg_trim = trim bits for native bandgap
 * @{
 */
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__SHIFT                   24
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__WIDTH                    1
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__MASK           0x01000000U
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__READ(src) \
                    (((uint32_t)(src)\
                    & 0x01000000U) >> 24)
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(1) << 24)
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x01000000U) | ((uint32_t)(0) << 24)
#define NVM_EFUSE_AUTOREAD__IGNORE_32KHZ_XTAL_CHECK__RESET_VALUE    0x00000000U
/** @} */

/* macros for field otp_disable_vddIO */
/**
 * @defgroup at_apb_nvm_regs_core_otp_disable_vddIO_field otp_disable_vddIO_field
 * @brief macros for field otp_disable_vddIO
 * @details VDDIO generation  0 = internal VDDIO/VDDIOA  1 = external VDDIO/VDDIOA
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__SHIFT                         25
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__WIDTH                          1
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__MASK                 0x02000000U
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__READ(src) \
                    (((uint32_t)(src)\
                    & 0x02000000U) >> 25)
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(1) << 25)
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x02000000U) | ((uint32_t)(0) << 25)
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDDIO__RESET_VALUE          0x00000000U
/** @} */

/* macros for field otp_harv_type */
/**
 * @defgroup at_apb_nvm_regs_core_otp_harv_type_field otp_harv_type_field
 * @brief macros for field otp_harv_type
 * @details harvester type  0 = non-RF harvesting  1 = RF harvesting
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__SHIFT                             26
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__WIDTH                              1
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__MASK                     0x04000000U
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x04000000U) >> 26)
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(1) << 26)
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x04000000U) | ((uint32_t)(0) << 26)
#define NVM_EFUSE_AUTOREAD__OTP_HARV_TYPE__RESET_VALUE              0x00000000U
/** @} */

/* macros for field otp_batt_type */
/**
 * @defgroup at_apb_nvm_regs_core_otp_batt_type_field otp_batt_type_field
 * @brief macros for field otp_batt_type
 * @details battery type  0 = Battery <= 1.8V  1 = Battery > 1.8V  2 = No Battery  3 = Rechargeable Battery > 1.8V
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_BATT_TYPE__SHIFT                             27
#define NVM_EFUSE_AUTOREAD__OTP_BATT_TYPE__WIDTH                              2
#define NVM_EFUSE_AUTOREAD__OTP_BATT_TYPE__MASK                     0x18000000U
#define NVM_EFUSE_AUTOREAD__OTP_BATT_TYPE__READ(src) \
                    (((uint32_t)(src)\
                    & 0x18000000U) >> 27)
#define NVM_EFUSE_AUTOREAD__OTP_BATT_TYPE__RESET_VALUE              0x00000000U
/** @} */

/* macros for field otp_disable_vdd */
/**
 * @defgroup at_apb_nvm_regs_core_otp_disable_vdd_field otp_disable_vdd_field
 * @brief macros for field otp_disable_vdd
 * @details no_32khz_xtal_on_board  0 = external 32.768kHz crystal present  1 = no external 32.768kHz crystal   disable_otp_writes  0 = OTP writes allowed  1 = OTP writes disabled   otp_disable_vdd  0 = internal DVDD1 and VDD1A  1 = external DVDD1 and VDD1A
 * @{
 */
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__SHIFT                           29
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__WIDTH                            1
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__MASK                   0x20000000U
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x20000000U) >> 29)
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(1) << 29)
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x20000000U) | ((uint32_t)(0) << 29)
#define NVM_EFUSE_AUTOREAD__OTP_DISABLE_VDD__RESET_VALUE            0x00000000U
/** @} */

/* macros for field disable_otp_writes */
/**
 * @defgroup at_apb_nvm_regs_core_disable_otp_writes_field disable_otp_writes_field
 * @brief macros for field disable_otp_writes
 * @details no_32khz_xtal_on_board  0 = external 32.768kHz crystal present  1 = no external 32.768kHz crystal   disable_otp_writes  0 = OTP writes allowed  1 = OTP writes disabled   otp_disable_vdd  0 = internal DVDD1 and VDD1A  1 = external DVDD1 and VDD1A
 * @{
 */
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__SHIFT                        30
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__WIDTH                         1
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__MASK                0x40000000U
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__READ(src) \
                    (((uint32_t)(src)\
                    & 0x40000000U) >> 30)
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(1) << 30)
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x40000000U) | ((uint32_t)(0) << 30)
#define NVM_EFUSE_AUTOREAD__DISABLE_OTP_WRITES__RESET_VALUE         0x00000000U
/** @} */

/* macros for field no_32khz_xtal_on_board */
/**
 * @defgroup at_apb_nvm_regs_core_no_32khz_xtal_on_board_field no_32khz_xtal_on_board_field
 * @brief macros for field no_32khz_xtal_on_board
 * @details no_32khz_xtal_on_board  0 = external 32.768kHz crystal present  1 = no external 32.768kHz crystal   disable_otp_writes  0 = OTP writes allowed  1 = OTP writes disabled   otp_disable_vdd  0 = internal DVDD1 and VDD1A  1 = external DVDD1 and VDD1A
 * @{
 */
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__SHIFT                    31
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__WIDTH                     1
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__MASK            0x80000000U
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__READ(src) \
                    (((uint32_t)(src)\
                    & 0x80000000U) >> 31)
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__SET(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(1) << 31)
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__CLR(dst) \
                    (dst) = ((dst) &\
                    ~0x80000000U) | ((uint32_t)(0) << 31)
#define NVM_EFUSE_AUTOREAD__NO_32KHZ_XTAL_ON_BOARD__RESET_VALUE     0x00000000U
/** @} */
#define NVM_EFUSE_AUTOREAD__TYPE                                       uint32_t
#define NVM_EFUSE_AUTOREAD__READ                                    0xffffffffU
#define NVM_EFUSE_AUTOREAD__PRESERVED                               0x00000000U
#define NVM_EFUSE_AUTOREAD__RESET_VALUE                             0x00000000U

#endif /* __NVM_EFUSE_AUTOREAD_MACRO__ */

/** @} end of efuse_autoread */

/* macros for BlueprintGlobalNameSpace::NVM_id */
/**
 * @defgroup at_apb_nvm_regs_core_id id
 * @brief core ID definitions.
 * @{
 */
#ifndef __NVM_ID_MACRO__
#define __NVM_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_nvm_regs_core_id_field id_field
 * @brief macros for field id
 * @details NVM in ASCII
 * @{
 */
#define NVM_ID__ID__SHIFT                                                     0
#define NVM_ID__ID__WIDTH                                                    32
#define NVM_ID__ID__MASK                                            0xffffffffU
#define NVM_ID__ID__READ(src)                   ((uint32_t)(src) & 0xffffffffU)
#define NVM_ID__ID__RESET_VALUE                                     0x4e564d20U
/** @} */
#define NVM_ID__TYPE                                                   uint32_t
#define NVM_ID__READ                                                0xffffffffU
#define NVM_ID__PRESERVED                                           0x00000000U
#define NVM_ID__RESET_VALUE                                         0x4e564d20U

#endif /* __NVM_ID_MACRO__ */

/** @} end of id */

/** @} end of AT_APB_NVM_REGS_CORE */
#endif /* __REG_AT_APB_NVM_REGS_CORE_H__ */
