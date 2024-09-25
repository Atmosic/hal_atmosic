/*                                                                           */
/* File:       at_apb_to_dma_regs_core_macro.h                               */
/*                                                                           */
/* Arguments:  /cad/tools/cadence/blueprint_3.7.5/Linux-64bit/blueprint -eval*/
/*             $DEFINE_PROPERTY=1; -ansic at_apb_to_dma_regs_core.rdl        */
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


#ifndef __REG_AT_APB_TO_DMA_REGS_CORE_H__
#define __REG_AT_APB_TO_DMA_REGS_CORE_H__

/**
 *****************************************************************************
 * @defgroup AT_APB_TO_DMA_REGS_CORE at_apb_to_dma_regs_core
 * @ingroup AT_REG
 * @brief at_apb_to_dma_regs_core definitions.
 * @{
 *****************************************************************************
 */

/* macros for BlueprintGlobalNameSpace::NVM_opmode */
/**
 * @defgroup at_apb_to_dma_regs_core_opmode opmode
 * @brief Contains register fields associated with opmode. definitions.
 * @{
 */
#ifndef __NVM_OPMODE_MACRO__
#define __NVM_OPMODE_MACRO__

/* macros for field go */
/**
 * @defgroup at_apb_to_dma_regs_core_go_field go_field
 * @brief macros for field go
 * @details op code start when rising edge on 'go' is detected.
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
#define NVM_OPMODE__READ                                            0x80000000U
#define NVM_OPMODE__WRITE                                           0x80000000U
#define NVM_OPMODE__PRESERVED                                       0x00000000U
#define NVM_OPMODE__RESET_VALUE                                     0x00000000U

#endif /* __NVM_OPMODE_MACRO__ */

/** @} end of opmode */

/* macros for BlueprintGlobalNameSpace::NVM_src_addr */
/**
 * @defgroup at_apb_to_dma_regs_core_src_addr src_addr
 * @brief Contains register fields associated with src_addr. definitions.
 * @{
 */
#ifndef __NVM_SRC_ADDR_MACRO__
#define __NVM_SRC_ADDR_MACRO__

/* macros for field src_addr */
/**
 * @defgroup at_apb_to_dma_regs_core_src_addr_field src_addr_field
 * @brief macros for field src_addr
 * @details source address
 * @{
 */
#define NVM_SRC_ADDR__SRC_ADDR__SHIFT                                         0
#define NVM_SRC_ADDR__SRC_ADDR__WIDTH                                        32
#define NVM_SRC_ADDR__SRC_ADDR__MASK                                0xffffffffU
#define NVM_SRC_ADDR__SRC_ADDR__READ(src)       ((uint32_t)(src) & 0xffffffffU)
#define NVM_SRC_ADDR__SRC_ADDR__WRITE(src)      ((uint32_t)(src) & 0xffffffffU)
#define NVM_SRC_ADDR__SRC_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define NVM_SRC_ADDR__SRC_ADDR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define NVM_SRC_ADDR__SRC_ADDR__RESET_VALUE                         0x00000000U
/** @} */
#define NVM_SRC_ADDR__TYPE                                             uint32_t
#define NVM_SRC_ADDR__READ                                          0xffffffffU
#define NVM_SRC_ADDR__WRITE                                         0xffffffffU
#define NVM_SRC_ADDR__PRESERVED                                     0x00000000U
#define NVM_SRC_ADDR__RESET_VALUE                                   0x00000000U

#endif /* __NVM_SRC_ADDR_MACRO__ */

/** @} end of src_addr */

/* macros for BlueprintGlobalNameSpace::NVM_tar_addr */
/**
 * @defgroup at_apb_to_dma_regs_core_tar_addr tar_addr
 * @brief Contains register fields associated with tar_addr. definitions.
 * @{
 */
#ifndef __NVM_TAR_ADDR_MACRO__
#define __NVM_TAR_ADDR_MACRO__

/* macros for field tar_addr */
/**
 * @defgroup at_apb_to_dma_regs_core_tar_addr_field tar_addr_field
 * @brief macros for field tar_addr
 * @details target address
 * @{
 */
#define NVM_TAR_ADDR__TAR_ADDR__SHIFT                                         0
#define NVM_TAR_ADDR__TAR_ADDR__WIDTH                                        32
#define NVM_TAR_ADDR__TAR_ADDR__MASK                                0xffffffffU
#define NVM_TAR_ADDR__TAR_ADDR__READ(src)       ((uint32_t)(src) & 0xffffffffU)
#define NVM_TAR_ADDR__TAR_ADDR__WRITE(src)      ((uint32_t)(src) & 0xffffffffU)
#define NVM_TAR_ADDR__TAR_ADDR__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0xffffffffU) | ((uint32_t)(src) &\
                    0xffffffffU)
#define NVM_TAR_ADDR__TAR_ADDR__VERIFY(src) \
                    (!(((uint32_t)(src)\
                    & ~0xffffffffU)))
#define NVM_TAR_ADDR__TAR_ADDR__RESET_VALUE                         0x00000000U
/** @} */
#define NVM_TAR_ADDR__TYPE                                             uint32_t
#define NVM_TAR_ADDR__READ                                          0xffffffffU
#define NVM_TAR_ADDR__WRITE                                         0xffffffffU
#define NVM_TAR_ADDR__PRESERVED                                     0x00000000U
#define NVM_TAR_ADDR__RESET_VALUE                                   0x00000000U

#endif /* __NVM_TAR_ADDR_MACRO__ */

/** @} end of tar_addr */

/* macros for BlueprintGlobalNameSpace::NVM_size */
/**
 * @defgroup at_apb_to_dma_regs_core_size size
 * @brief Contains register fields associated with size. definitions.
 * @{
 */
#ifndef __NVM_SIZE_MACRO__
#define __NVM_SIZE_MACRO__

/* macros for field size */
/**
 * @defgroup at_apb_to_dma_regs_core_size_field size_field
 * @brief macros for field size
 * @details payload size in bytes.
 * @{
 */
#define NVM_SIZE__SIZE__SHIFT                                                 0
#define NVM_SIZE__SIZE__WIDTH                                                16
#define NVM_SIZE__SIZE__MASK                                        0x0000ffffU
#define NVM_SIZE__SIZE__READ(src)               ((uint32_t)(src) & 0x0000ffffU)
#define NVM_SIZE__SIZE__WRITE(src)              ((uint32_t)(src) & 0x0000ffffU)
#define NVM_SIZE__SIZE__MODIFY(dst, src) \
                    (dst) = ((dst) &\
                    ~0x0000ffffU) | ((uint32_t)(src) &\
                    0x0000ffffU)
#define NVM_SIZE__SIZE__VERIFY(src)       (!(((uint32_t)(src) & ~0x0000ffffU)))
#define NVM_SIZE__SIZE__RESET_VALUE                                 0x00000000U
/** @} */
#define NVM_SIZE__TYPE                                                 uint32_t
#define NVM_SIZE__READ                                              0x0000ffffU
#define NVM_SIZE__WRITE                                             0x0000ffffU
#define NVM_SIZE__PRESERVED                                         0x00000000U
#define NVM_SIZE__RESET_VALUE                                       0x00000000U

#endif /* __NVM_SIZE_MACRO__ */

/** @} end of size */

/* macros for BlueprintGlobalNameSpace::NVM_id */
/**
 * @defgroup at_apb_to_dma_regs_core_id id
 * @brief Contains register fields associated with id. definitions.
 * @{
 */
#ifndef __NVM_ID_MACRO__
#define __NVM_ID_MACRO__

/* macros for field id */
/**
 * @defgroup at_apb_to_dma_regs_core_id_field id_field
 * @brief macros for field id
 * @details DMA
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

/** @} end of AT_APB_TO_DMA_REGS_CORE */
#endif /* __REG_AT_APB_TO_DMA_REGS_CORE_H__ */
