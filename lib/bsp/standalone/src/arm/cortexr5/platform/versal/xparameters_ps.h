/******************************************************************************
*
* Copyright (C) 2018 Xilinx, Inc. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/
/*****************************************************************************/
/**
* @file xparameters_ps.h
*
* @addtogroup r5_peripheral_definitions Cortex R5 peripheral definitions
*
* The xparameters_ps.h file contains the canonical definitions and constant
* declarations for peripherals within hardblock, attached to the ARM Cortex R5
* core. These definitions can be used by drivers or applications to access the
* peripherals.
*
* @{
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who     Date     Changes
* ----- ------- -------- ---------------------------------------------------
* 7.00  mus  	01/25/18 Initial version
*       mn      03/26/18 Change Interrupt IDs for versal
*       mn      03/26/18 Update SLCR base address
* </pre>
*
******************************************************************************/

#ifndef XPARAMETERS_PS_H_
#define XPARAMETERS_PS_H_

#ifndef ARMR5
#define ARMR5 ARMR5
#endif

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/

/************************** Constant Definitions *****************************/

/*
 * This block contains constant declarations for the peripherals
 * within the hardblock
 */

/* Canonical definitions for DDR MEMORY */
#define XPAR_DDR_MEM_BASEADDR		0x00000000U
#define XPAR_DDR_MEM_HIGHADDR		0x3FFFFFFFU

/* Canonical definitions for Interrupts  */
#define XPAR_XUARTPS_0_INTR		XPS_UART0_INT_ID
#define XPAR_XUARTPS_1_INTR		XPS_UART1_INT_ID
#define XPAR_XIICPS_0_INTR		XPS_I2C0_INT_ID
#define XPAR_XIICPS_1_INTR		XPS_I2C1_INT_ID
#define XPAR_XSPIPS_0_INTR		XPS_SPI0_INT_ID
#define XPAR_XSPIPS_1_INTR		XPS_SPI1_INT_ID
#define XPAR_XCANPS_0_INTR		XPS_CAN0_INT_ID
#define XPAR_XCANPS_1_INTR		XPS_CAN1_INT_ID
#define XPAR_XGPIOPS_0_INTR		XPS_GPIO_INT_ID
#define XPAR_XEMACPS_0_INTR		XPS_GEM0_INT_ID
#define XPAR_XEMACPS_0_WAKE_INTR	XPS_GEM0_WAKE_INT_ID
#define XPAR_XEMACPS_1_INTR		XPS_GEM1_INT_ID
#define XPAR_XEMACPS_1_WAKE_INTR	XPS_GEM1_WAKE_INT_ID
#define XPAR_XSDIOPS_0_INTR		XPS_SDIO0_INT_ID
#define XPAR_XQSPIPS_0_INTR		XPS_QSPI_INT_ID
#define XPAR_XSDIOPS_1_INTR		XPS_SDIO1_INT_ID
#define XPAR_XWDTPS_0_INTR		XPS_LPD_SWDT_INT_ID
#define XPAR_XWDTPS_1_INTR		XPS_FPD_SWDT_INT_ID
#define XPAR_XDCFG_0_INTR		XPS_DVC_INT_ID
#define XPAR_XTTCPS_0_INTR		XPS_TTC0_0_INT_ID
#define XPAR_XTTCPS_1_INTR		XPS_TTC0_1_INT_ID
#define XPAR_XTTCPS_2_INTR		XPS_TTC0_2_INT_ID
#define XPAR_XTTCPS_3_INTR		XPS_TTC1_0_INT_ID
#define XPAR_XTTCPS_4_INTR		XPS_TTC1_1_INT_ID
#define XPAR_XTTCPS_5_INTR		XPS_TTC1_2_INT_ID
#define XPAR_XTTCPS_6_INTR		XPS_TTC2_0_INT_ID
#define XPAR_XTTCPS_7_INTR		XPS_TTC2_1_INT_ID
#define XPAR_XTTCPS_8_INTR		XPS_TTC2_2_INT_ID
#define XPAR_XTTCPS_9_INTR		XPS_TTC3_0_INT_ID
#define XPAR_XTTCPS_10_INTR		XPS_TTC3_1_INT_ID
#define XPAR_XTTCPS_11_INTR		XPS_TTC3_2_INT_ID
#define XPAR_XNANDPS8_0_INTR        	XPS_NAND_INT_ID
#define XPAR_XADMAPS_0_INTR 		XPS_ADMA_CH0_INT_ID
#define XPAR_XADMAPS_1_INTR 		XPS_ADMA_CH1_INT_ID
#define XPAR_XADMAPS_2_INTR		XPS_ADMA_CH2_INT_ID
#define XPAR_XADMAPS_3_INTR 		XPS_ADMA_CH3_INT_ID
#define XPAR_XADMAPS_4_INTR		XPS_ADMA_CH4_INT_ID
#define XPAR_XADMAPS_5_INTR 		XPS_ADMA_CH5_INT_ID
#define XPAR_XADMAPS_6_INTR 		XPS_ADMA_CH6_INT_ID
#define XPAR_XADMAPS_7_INTR 		XPS_ADMA_CH7_INT_ID
#define XPAR_PSV_ADMA_0_INTR 		XPS_ADMA_CH0_INT_ID
#define XPAR_PSV_ADMA_1_INTR 		XPS_ADMA_CH1_INT_ID
#define XPAR_PSV_ADMA_2_INTR		XPS_ADMA_CH2_INT_ID
#define XPAR_PSV_ADMA_3_INTR 		XPS_ADMA_CH3_INT_ID
#define XPAR_PSV_ADMA_4_INTR		XPS_ADMA_CH4_INT_ID
#define XPAR_PSV_ADMA_5_INTR 		XPS_ADMA_CH5_INT_ID
#define XPAR_PSV_ADMA_6_INTR 		XPS_ADMA_CH6_INT_ID
#define XPAR_PSV_ADMA_7_INTR 		XPS_ADMA_CH7_INT_ID
#define XPAR_PSV_GDMA_0_INTR		XPS_ZDMA_CH0_INT_ID
#define XPAR_PSV_GDMA_1_INTR		XPS_ZDMA_CH1_INT_ID
#define XPAR_PSV_GDMA_2_INTR 		XPS_ZDMA_CH2_INT_ID
#define XPAR_PSV_GDMA_3_INTR 		XPS_ZDMA_CH3_INT_ID
#define XPAR_PSV_GDMA_4_INTR		XPS_ZDMA_CH4_INT_ID
#define XPAR_PSV_GDMA_5_INTR 		XPS_ZDMA_CH5_INT_ID
#define XPAR_PSV_GDMA_6_INTR 		XPS_ZDMA_CH6_INT_ID
#define XPAR_PSV_GDMA_7_INTR 		XPS_ZDMA_CH7_INT_ID
#define XPAR_PSV_PMC_DMA_0_INTR		XPS_PMCDMA0_INT_ID
#define XPAR_PSV_PMC_DMA_1_INTR		XPS_PMCDMA1_INT_ID
#define XPAR_XMPU_FPD_INTR 		XPS_XMPU_FPD_INT_ID
#define XPAR_XCCI_FPD_INTR 		XPS_FPD_CCI_INT_ID
#define XPAR_XSMMU_FPD_INTR 		XPS_FPD_SMMU_INT_ID
#define XPAR_XUSBPS_0_INTR		XPS_USB3_0_ENDPT_INT_ID
#define XPAR_XUSBPS_1_INTR		XPS_USB3_1_ENDPT_INT_ID
#define	XPAR_XRTCPSU_ALARM_INTR 	XPS_RTC_ALARM_INT_ID
#define	XPAR_XRTCPSU_SECONDS_INTR	XPS_RTC_SEC_INT_ID
#define XPAR_XSYSMONPSU_INTR		XPS_AMS_INT_ID

/* Canonical definitions for SCU GIC */
#define XPAR_SCUGIC_NUM_INSTANCES	1U
#define XPAR_SCUGIC_SINGLE_DEVICE_ID	0U
#define XPAR_SCUGIC_CPU_BASEADDR	(XPS_SCU_PERIPH_BASE + 0x00001000U)
#define XPAR_SCUGIC_DIST_BASEADDR	(XPS_SCU_PERIPH_BASE + 0x00002000U)
#define XPAR_SCUGIC_ACK_BEFORE		0U

#define XPAR_CPU_CORTEXR5_CORE_CLOCK_FREQ_HZ	XPAR_CPU_CORTEXR5_0_CPU_CLK_FREQ_HZ


/*
 * This block contains constant declarations for the peripherals
 * within the hardblock. These have been put for backwards compatibilty
 */

#define XPS_SYS_CTRL_BASEADDR		0xF1060000U
#define XPS_SCU_PERIPH_BASE		0xF9000000U
#define XPS_CRP_BASEADDRESS		0xF1260000U
#define XPS_PMC_GLOBAL_BASEADDRESS	0xF1110000U


/* Shared Peripheral Interrupts (SPI) */
#define XPS_FPGA0_INT_ID		121U
#define XPS_FPGA1_INT_ID		122U
#define XPS_FPGA2_INT_ID		123U
#define XPS_FPGA3_INT_ID		124U
#define XPS_FPGA4_INT_ID		125U
#define XPS_FPGA5_INT_ID		126U
#define XPS_FPGA6_INT_ID		127U
#define XPS_FPGA7_INT_ID		128U
#define XPS_FPGA8_INT_ID		136U
#define XPS_FPGA9_INT_ID		137U
#define XPS_FPGA10_INT_ID		138U
#define XPS_FPGA11_INT_ID		139U
#define XPS_FPGA12_INT_ID		140U
#define XPS_FPGA13_INT_ID		141U
#define XPS_FPGA14_INT_ID		142U
#define XPS_FPGA15_INT_ID		143U

/* Updated Interrupt-IDs */
#define XPS_OCMINTR_INT_ID		(10U + 32U)

#define XPS_OSPI_INT_ID			(124U + 32U)
#define XPS_QSPI_INT_ID			(125U + 32U)
#define XPS_GPIO_INT_ID			(13U + 32U)
#define XPS_I2C0_INT_ID			(14U + 32U)
#define XPS_I2C1_INT_ID			(15U + 32U)
#define XPS_SPI0_INT_ID			(16U + 32U)
#define XPS_SPI1_INT_ID			(17U + 32U)
#define XPS_UART0_INT_ID		(18U + 32U)
#define XPS_UART1_INT_ID		(19U + 32U)
#define XPS_CAN0_INT_ID			(20U + 32U)
#define XPS_CAN1_INT_ID			(21U + 32U)
#define XPS_RTC_ALARM_INT_ID 		(142U + 32U)
#define XPS_RTC_SEC_INT_ID	 	(143U + 32U)
#define XPS_TTC0_0_INT_ID		(37U + 32U)
#define XPS_TTC0_1_INT_ID		(38U + 32U)
#define XPS_TTC0_2_INT_ID 		(39U + 32U)
#define XPS_TTC1_0_INT_ID		(40U + 32U)
#define XPS_TTC1_1_INT_ID		(41U + 32U)
#define XPS_TTC1_2_INT_ID		(42U + 32U)
#define XPS_TTC2_0_INT_ID		(43U + 32U)
#define XPS_TTC2_1_INT_ID		(44U + 32U)
#define XPS_TTC2_2_INT_ID		(45U + 32U)
#define XPS_TTC3_0_INT_ID		(46U + 32U)
#define XPS_TTC3_1_INT_ID		(47U + 32U)
#define XPS_TTC3_2_INT_ID		(48U + 32U)
#define XPS_SDIO0_INT_ID		(126U + 32U)
#define XPS_SDIO0_WAKE_INT_ID		(127U + 32U)
#define XPS_SDIO1_INT_ID		(128U + 32U)
#define XPS_SDIO1_WAKE_INT_ID		(129U + 32U)
#define XPS_AMS_INT_ID			(53U + 32U)
#define XPS_GEM0_INT_ID			(56U + 32U)
#define XPS_GEM0_WAKE_INT_ID		(57U + 32U)
#define XPS_GEM1_INT_ID			(58U + 32U)
#define XPS_GEM1_WAKE_INT_ID		(59U + 32U)
#define XPS_ADMA_CH0_INT_ID		(60U + 32U)
#define XPS_ADMA_CH1_INT_ID		(61U + 32U)
#define XPS_ADMA_CH2_INT_ID		(62U + 32U)
#define XPS_ADMA_CH3_INT_ID		(63U + 32U)
#define XPS_ADMA_CH4_INT_ID		(64U + 32U)
#define XPS_ADMA_CH5_INT_ID		(65U + 32U)
#define XPS_ADMA_CH6_INT_ID		(66U + 32U)
#define XPS_ADMA_CH7_INT_ID		(67U + 32U)
#define XPS_XMPU_LPD_INT_ID		(68U + 32U)
#define XPS_XMPU_FPD_INT_ID		(102U + 32U)
#define XPS_FPD_CCI_INT_ID		(106U + 32U)
#define XPS_FPD_SMMU_INT_ID		(107U + 32U)
#define XPS_PMCDMA0_INT_ID		(131U + 32U)
#define XPS_PMCDMA1_INT_ID		(132U + 32U)

/* REDEFINES for TEST APP */
#define XPAR_PSV_SBSAUART_0_INTR        XPS_UART0_INT_ID
#define XPAR_PSV_SBSAUART_1_INTR        XPS_UART1_INT_ID
#define XPAR_PSV_USB_0_INTR		XPS_USB0_INT_ID
#define XPAR_PSV_USB_1_INTR		XPS_USB1_INT_ID
#define XPAR_PSV_I2C_0_INTR		XPS_I2C0_INT_ID
#define XPAR_PSV_I2C_1_INTR		XPS_I2C1_INT_ID
#define XPAR_PSV_SPI_0_INTR		XPS_SPI0_INT_ID
#define XPAR_PSV_SPI_1_INTR		XPS_SPI1_INT_ID
#define XPAR_PSV_CANFD_0_INTR		XPS_CAN0_INT_ID
#define XPAR_PSV_CANFD_1_INTR		XPS_CAN1_INT_ID
#define XPAR_PSV_GPIO_0_INTR		XPS_GPIO_INT_ID
#define XPAR_PSV_ETHERNET_0_INTR	XPS_GEM0_INT_ID
#define XPAR_PSV_ETHERNET_0_WAKE_INTR   XPS_GEM0_WAKE_INT_ID
#define XPAR_PSV_ETHERNET_1_INTR	XPS_GEM1_INT_ID
#define XPAR_PSV_ETHERNET_1_WAKE_INTR   XPS_GEM1_WAKE_INT_ID
#define XPAR_PSV_ETHERNET_2_INTR	XPS_GEM2_INT_ID
#define XPAR_PSV_ETHERNET_2_WAKE_INTR   XPS_GEM2_WAKE_INT_ID
#define XPAR_PSV_ETHERNET_3_INTR	XPS_GEM3_INT_ID
#define XPAR_PSV_ETHERNET_3_WAKE_INTR   XPS_GEM3_WAKE_INT_ID
#define XPAR_PSV_QSPI_0_INTR		XPS_QSPI_INT_ID
#define XPAR_PSV_WDT_0_INTR    		XPS_LPD_SWDT_INT_ID
#define XPAR_PSV_WDT_1_INTR     	XPS_FPD_SWDT_INT_ID
#define XPAR_PSV_XADC_0_INTR		XPS_SYSMON_INT_ID
#define XPAR_PSV_TTC_0_INTR		XPS_TTC0_0_INT_ID
#define XPAR_PSV_TTC_1_INTR		XPS_TTC0_1_INT_ID
#define XPAR_PSV_TTC_2_INTR		XPS_TTC0_2_INT_ID
#define XPAR_PSV_TTC_3_INTR		XPS_TTC1_0_INT_ID
#define XPAR_PSV_TTC_4_INTR		XPS_TTC1_1_INT_ID
#define XPAR_PSV_TTC_5_INTR		XPS_TTC1_2_INT_ID
#define XPAR_PSV_TTC_6_INTR		XPS_TTC2_0_INT_ID
#define XPAR_PSV_TTC_7_INTR		XPS_TTC2_1_INT_ID
#define XPAR_PSV_TTC_8_INTR		XPS_TTC2_2_INT_ID
#define XPAR_PSV_TTC_9_INTR		XPS_TTC3_0_INT_ID
#define XPAR_PSV_TTC_10_INTR		XPS_TTC3_1_INT_ID
#define XPAR_PSV_TTC_11_INTR		XPS_TTC3_2_INT_ID
#define XPAR_PSV_AMS_INTR		XPS_AMS_INT_ID

#define XPAR_XADCPS_NUM_INSTANCES 1U
#define XPAR_XADCPS_0_DEVICE_ID   0U
#define XPAR_XADCPS_0_BASEADDR	  (0xF8007000U)
#define XPAR_XADCPS_INT_ID		XPS_SYSMON_INT_ID

/* For backwards compatibilty */
#define XPAR_XUARTPS_0_CLOCK_HZ		XPAR_XUARTPS_0_UART_CLK_FREQ_HZ
#define XPAR_XUARTPS_1_CLOCK_HZ		XPAR_XUARTPS_1_UART_CLK_FREQ_HZ
#define XPAR_XTTCPS_0_CLOCK_HZ		XPAR_XTTCPS_0_TTC_CLK_FREQ_HZ
#define XPAR_XTTCPS_1_CLOCK_HZ		XPAR_XTTCPS_1_TTC_CLK_FREQ_HZ
#define XPAR_XTTCPS_2_CLOCK_HZ		XPAR_XTTCPS_2_TTC_CLK_FREQ_HZ
#define XPAR_XTTCPS_3_CLOCK_HZ		XPAR_XTTCPS_3_TTC_CLK_FREQ_HZ
#define XPAR_XTTCPS_4_CLOCK_HZ		XPAR_XTTCPS_4_TTC_CLK_FREQ_HZ
#define XPAR_XTTCPS_5_CLOCK_HZ		XPAR_XTTCPS_5_TTC_CLK_FREQ_HZ
#define XPAR_XIICPS_0_CLOCK_HZ		XPAR_XIICPS_0_I2C_CLK_FREQ_HZ
#define XPAR_XIICPS_1_CLOCK_HZ		XPAR_XIICPS_1_I2C_CLK_FREQ_HZ

#define XPAR_XQSPIPS_0_CLOCK_HZ		XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ

#ifdef XPAR_CPU_CORTEXR5_0_CPU_CLK_FREQ_HZ
#define XPAR_CPU_CORTEXR5_CORE_CLOCK_FREQ_HZ	XPAR_CPU_CORTEXR5_0_CPU_CLK_FREQ_HZ
#endif

#ifdef XPAR_CPU_CORTEXR5_1_CPU_CLK_FREQ_HZ
#define XPAR_CPU_CORTEXR5_CORE_CLOCK_FREQ_HZ	XPAR_CPU_CORTEXR5_1_CPU_CLK_FREQ_HZ
#endif

#define XPAR_SCUWDT_DEVICE_ID		0U


#ifdef __cplusplus
}
#endif

#endif /* protection macro */
/**
* @} End of "addtogroup r5_peripheral_definitions".
*/
