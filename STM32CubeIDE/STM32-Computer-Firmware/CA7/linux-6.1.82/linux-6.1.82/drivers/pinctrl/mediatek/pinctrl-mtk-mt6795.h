/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 Collabora Ltd.
 * Author: AngeloGioacchino Del Regno <angelogioacchino.delregno@collabora.com>
 */

#ifndef __PINCTRL_MTK_MT6795_H
#define __PINCTRL_MTK_MT6795_H

#include "pinctrl-paris.h"

static const struct mtk_pin_desc mtk_pins_mt6795[] = {
	MTK_PIN(
		0, "GPIO0",
		MTK_EINT_FUNCTION(0, 0),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO0"),
		MTK_FUNCTION(1, "IRDA_PDN"),
		MTK_FUNCTION(2, "I2S1_WS"),
		MTK_FUNCTION(4, "TDD_TMS"),
		MTK_FUNCTION(5, "UTXD0")
	),
	MTK_PIN(
		1, "GPIO1",
		MTK_EINT_FUNCTION(0, 1),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO1"),
		MTK_FUNCTION(1, "IRDA_RXD"),
		MTK_FUNCTION(2, "I2S1_BCK"),
		MTK_FUNCTION(3, "SDA4"),
		MTK_FUNCTION(4, "TDD_TCK"),
		MTK_FUNCTION(5, "URXD0")
	),
	MTK_PIN(
		2, "GPIO2",
		MTK_EINT_FUNCTION(0, 2),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO2"),
		MTK_FUNCTION(1, "IRDA_TXD"),
		MTK_FUNCTION(2, "I2S1_MCK"),
		MTK_FUNCTION(3, "SCL4"),
		MTK_FUNCTION(4, "TDD_TDI"),
		MTK_FUNCTION(5, "UTXD3")
	),
	MTK_PIN(
		3, "GPIO3",
		MTK_EINT_FUNCTION(0, 3),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO3"),
		MTK_FUNCTION(1, "DSI1_TE"),
		MTK_FUNCTION(2, "I2S1_DO_1"),
		MTK_FUNCTION(3, "SDA3"),
		MTK_FUNCTION(4, "TDD_TDO"),
		MTK_FUNCTION(5, "URXD3")
	),
	MTK_PIN(
		4, "GPIO4",
		MTK_EINT_FUNCTION(0, 4),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO4"),
		MTK_FUNCTION(1, "DISP_PWM1"),
		MTK_FUNCTION(2, "I2S1_DO_2"),
		MTK_FUNCTION(3, "SCL3"),
		MTK_FUNCTION(4, "TDD_TRSTN")
	),
	MTK_PIN(
		5, "GPIO5",
		MTK_EINT_FUNCTION(0, 5),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO5"),
		MTK_FUNCTION(1, "PCM1_CLK"),
		MTK_FUNCTION(2, "I2S2_WS"),
		MTK_FUNCTION(3, "SPI_CK_3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TMS"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TMS")
	),
	MTK_PIN(
		6, "GPIO6",
		MTK_EINT_FUNCTION(0, 6),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO6"),
		MTK_FUNCTION(1, "PCM1_SYNC"),
		MTK_FUNCTION(2, "I2S2_BCK"),
		MTK_FUNCTION(3, "SPI_MI_3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TCK"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TCK")
	),
	MTK_PIN(
		7, "GPIO7",
		MTK_EINT_FUNCTION(0, 7),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO7"),
		MTK_FUNCTION(1, "PCM1_DI"),
		MTK_FUNCTION(2, "I2S2_DI_1"),
		MTK_FUNCTION(3, "SPI_MO_3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TDI"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TDI")
	),
	MTK_PIN(
		8, "GPIO8",
		MTK_EINT_FUNCTION(0, 8),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO8"),
		MTK_FUNCTION(1, "PCM1_DO"),
		MTK_FUNCTION(2, "I2S2_DI_2"),
		MTK_FUNCTION(3, "SPI_CS_3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TDO"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TDO")
	),
	MTK_PIN(
		9, "GPIO9",
		MTK_EINT_FUNCTION(0, 9),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO9"),
		MTK_FUNCTION(1, "USB_DRVVBUS"),
		MTK_FUNCTION(2, "I2S2_MCK"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TRST"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TRST")
	),
	MTK_PIN(
		10, "GPIO10",
		MTK_EINT_FUNCTION(0, 10),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO10"),
		MTK_FUNCTION(2, "I2S0_WS")
	),
	MTK_PIN(
		11, "GPIO11",
		MTK_EINT_FUNCTION(0, 11),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO11"),
		MTK_FUNCTION(2, "I2S0_BCK")
	),
	MTK_PIN(
		12, "GPIO12",
		MTK_EINT_FUNCTION(0, 12),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO12"),
		MTK_FUNCTION(2, "I2S0_MCK")
	),
	MTK_PIN(
		13, "GPIO13",
		MTK_EINT_FUNCTION(0, 13),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO13"),
		MTK_FUNCTION(2, "I2S0_DO")
	),
	MTK_PIN(
		14, "GPIO14",
		MTK_EINT_FUNCTION(0, 14),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO14"),
		MTK_FUNCTION(2, "I2S0_DI"),
		MTK_FUNCTION(3, "DISP_PWM1"),
		MTK_FUNCTION(4, "PWM4"),
		MTK_FUNCTION(5, "IRDA_RXD"),
		MTK_FUNCTION(6, "I2S1_BCK")
	),
	MTK_PIN(
		15, "GPIO15",
		MTK_EINT_FUNCTION(0, 15),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO15"),
		MTK_FUNCTION(2, "DSI1_TE"),
		MTK_FUNCTION(3, "USB_DRVVBUS"),
		MTK_FUNCTION(4, "PWM5"),
		MTK_FUNCTION(5, "IRDA_TXD"),
		MTK_FUNCTION(6, "I2S1_MCK")
	),
	MTK_PIN(
		16, "GPIO16",
		MTK_EINT_FUNCTION(0, 16),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO16"),
		MTK_FUNCTION(1, "IDDIG"),
		MTK_FUNCTION(2, "FLASH"),
		MTK_FUNCTION(3, "EXT_FRAME_SYNC"),
		MTK_FUNCTION(4, "PWM5")
	),
	MTK_PIN(
		17, "GPIO17",
		MTK_EINT_FUNCTION(0, 17),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO17"),
		MTK_FUNCTION(1, "SIM1_SCLK"),
		MTK_FUNCTION(2, "SIM2_SCLK")
	),
	MTK_PIN(
		18, "GPIO18",
		MTK_EINT_FUNCTION(0, 18),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO18"),
		MTK_FUNCTION(1, "SIM1_SRST"),
		MTK_FUNCTION(2, "SIM2_SRST")
	),
	MTK_PIN(
		19, "GPIO19",
		MTK_EINT_FUNCTION(0, 19),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO19"),
		MTK_FUNCTION(1, "SIM1_SDAT"),
		MTK_FUNCTION(2, "SIM2_SDAT")
	),
	MTK_PIN(
		20, "GPIO20",
		MTK_EINT_FUNCTION(0, 20),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO20"),
		MTK_FUNCTION(1, "SIM2_SCLK"),
		MTK_FUNCTION(2, "SIM1_SCLK")
	),
	MTK_PIN(
		21, "GPIO21",
		MTK_EINT_FUNCTION(0, 21),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO21"),
		MTK_FUNCTION(1, "SIM2_SRST"),
		MTK_FUNCTION(2, "SIM1_SRST")
	),
	MTK_PIN(
		22, "GPIO22",
		MTK_EINT_FUNCTION(0, 22),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO22"),
		MTK_FUNCTION(1, "SIM2_SDAT"),
		MTK_FUNCTION(2, "SIM1_SDAT")
	),
	MTK_PIN(
		23, "GPIO23",
		MTK_EINT_FUNCTION(0, 23),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO23"),
		MTK_FUNCTION(1, "MSDC3_DAT0")
	),
	MTK_PIN(
		24, "GPIO24",
		MTK_EINT_FUNCTION(0, 24),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO24"),
		MTK_FUNCTION(1, "MSDC3_DAT1")
	),
	MTK_PIN(
		25, "GPIO25",
		MTK_EINT_FUNCTION(0, 25),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO25"),
		MTK_FUNCTION(1, "MSDC3_DAT2")
	),
	MTK_PIN(
		26, "GPIO26",
		MTK_EINT_FUNCTION(0, 26),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO26"),
		MTK_FUNCTION(1, "MSDC3_DAT3")
	),
	MTK_PIN(
		27, "GPIO27",
		MTK_EINT_FUNCTION(0, 27),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO27"),
		MTK_FUNCTION(1, "MSDC3_CLK")
	),
	MTK_PIN(
		28, "GPIO28",
		MTK_EINT_FUNCTION(0, 28),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO28"),
		MTK_FUNCTION(1, "MSDC3_CMD")
	),
	MTK_PIN(
		29, "GPIO29",
		MTK_EINT_FUNCTION(0, 29),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO29"),
		MTK_FUNCTION(1, "PTA_RXD"),
		MTK_FUNCTION(2, "UCTS2")
	),
	MTK_PIN(
		30, "GPIO30",
		MTK_EINT_FUNCTION(0, 30),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO30"),
		MTK_FUNCTION(1, "PTA_TXD"),
		MTK_FUNCTION(2, "URTS2")
	),
	MTK_PIN(
		31, "GPIO31",
		MTK_EINT_FUNCTION(0, 31),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO31"),
		MTK_FUNCTION(1, "URXD2"),
		MTK_FUNCTION(2, "UTXD2")
	),
	MTK_PIN(
		32, "GPIO32",
		MTK_EINT_FUNCTION(0, 32),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO32"),
		MTK_FUNCTION(1, "UTXD2"),
		MTK_FUNCTION(2, "URXD2")
	),
	MTK_PIN(
		33, "GPIO33",
		MTK_EINT_FUNCTION(0, 33),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO33"),
		MTK_FUNCTION(1, "MRG_CLK"),
		MTK_FUNCTION(2, "PCM0_CLK")
	),
	MTK_PIN(
		34, "GPIO34",
		MTK_EINT_FUNCTION(0, 34),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO34"),
		MTK_FUNCTION(1, "MRG_DI"),
		MTK_FUNCTION(2, "PCM0_DI")
	),
	MTK_PIN(
		35, "GPIO35",
		MTK_EINT_FUNCTION(0, 35),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO35"),
		MTK_FUNCTION(1, "MRG_DO"),
		MTK_FUNCTION(2, "PCM0_DO")
	),
	MTK_PIN(
		36, "GPIO36",
		MTK_EINT_FUNCTION(0, 36),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO36"),
		MTK_FUNCTION(1, "MRG_SYNC"),
		MTK_FUNCTION(2, "PCM0_SYNC")
	),
	MTK_PIN(
		37, "GPIO37",
		MTK_EINT_FUNCTION(0, 37),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO37"),
		MTK_FUNCTION(1, "GPS_SYNC")
	),
	MTK_PIN(
		38, "GPIO38",
		MTK_EINT_FUNCTION(0, 38),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO38"),
		MTK_FUNCTION(1, "DAIRSTB")
	),
	MTK_PIN(
		39, "GPIO39",
		MTK_EINT_FUNCTION(0, 39),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO39"),
		MTK_FUNCTION(1, "CM2MCLK")
	),
	MTK_PIN(
		40, "GPIO40",
		MTK_EINT_FUNCTION(0, 40),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO40"),
		MTK_FUNCTION(1, "CM3MCLK"),
		MTK_FUNCTION(2, "IRDA_PDN"),
		MTK_FUNCTION(3, "PWM6"),
		MTK_FUNCTION(4, "I2S1_WS")
	),
	MTK_PIN(
		41, "GPIO41",
		MTK_EINT_FUNCTION(0, 41),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO41"),
		MTK_FUNCTION(1, "CMPCLK"),
		MTK_FUNCTION(2, "CMCSK"),
		MTK_FUNCTION(3, "FLASH")
	),
	MTK_PIN(
		42, "GPIO42",
		MTK_EINT_FUNCTION(0, 42),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO42"),
		MTK_FUNCTION(1, "CMMCLK")
	),
	MTK_PIN(
		43, "GPIO43",
		MTK_EINT_FUNCTION(0, 43),
		DRV_FIXED,
		MTK_FUNCTION(0, "GPIO43"),
		MTK_FUNCTION(1, "SDA2")
	),
	MTK_PIN(
		44, "GPIO44",
		MTK_EINT_FUNCTION(0, 44),
		DRV_FIXED,
		MTK_FUNCTION(0, "GPIO44"),
		MTK_FUNCTION(1, "SCL2")
	),
	MTK_PIN(
		45, "GPIO45",
		MTK_EINT_FUNCTION(0, 45),
		DRV_FIXED,
		MTK_FUNCTION(0, "GPIO45"),
		MTK_FUNCTION(1, "SDA0")
	),
	MTK_PIN(
		46, "GPIO46",
		MTK_EINT_FUNCTION(0, 46),
		DRV_FIXED,
		MTK_FUNCTION(0, "GPIO46"),
		MTK_FUNCTION(1, "SCL0")
	),
	MTK_PIN(
		47, "GPIO47",
		MTK_EINT_FUNCTION(0, 47),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO47"),
		MTK_FUNCTION(1, "BPI_BUS0")
	),
	MTK_PIN(
		48, "GPIO48",
		MTK_EINT_FUNCTION(0, 48),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO48"),
		MTK_FUNCTION(1, "BPI_BUS1")
	),
	MTK_PIN(
		49, "GPIO49",
		MTK_EINT_FUNCTION(0, 49),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO49"),
		MTK_FUNCTION(1, "BPI_BUS2")
	),
	MTK_PIN(
		50, "GPIO50",
		MTK_EINT_FUNCTION(0, 50),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO50"),
		MTK_FUNCTION(1, "BPI_BUS3")
	),
	MTK_PIN(
		51, "GPIO51",
		MTK_EINT_FUNCTION(0, 51),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO51"),
		MTK_FUNCTION(1, "BPI_BUS4")
	),
	MTK_PIN(
		52, "GPIO52",
		MTK_EINT_FUNCTION(0, 52),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO52"),
		MTK_FUNCTION(1, "BPI_BUS5")
	),
	MTK_PIN(
		53, "GPIO53",
		MTK_EINT_FUNCTION(0, 53),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO53"),
		MTK_FUNCTION(1, "BPI_BUS6")
	),
	MTK_PIN(
		54, "GPIO54",
		MTK_EINT_FUNCTION(0, 54),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO54"),
		MTK_FUNCTION(1, "BPI_BUS7")
	),
	MTK_PIN(
		55, "GPIO55",
		MTK_EINT_FUNCTION(0, 55),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO55"),
		MTK_FUNCTION(1, "BPI_BUS8")
	),
	MTK_PIN(
		56, "GPIO56",
		MTK_EINT_FUNCTION(0, 56),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO56"),
		MTK_FUNCTION(1, "BPI_BUS9")
	),
	MTK_PIN(
		57, "GPIO57",
		MTK_EINT_FUNCTION(0, 57),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO57"),
		MTK_FUNCTION(1, "BPI_BUS10")
	),
	MTK_PIN(
		58, "GPIO58",
		MTK_EINT_FUNCTION(0, 58),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO58"),
		MTK_FUNCTION(1, "BPI_BUS11")
	),
	MTK_PIN(
		59, "GPIO59",
		MTK_EINT_FUNCTION(0, 59),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO59"),
		MTK_FUNCTION(1, "BPI_BUS12")
	),
	MTK_PIN(
		60, "GPIO60",
		MTK_EINT_FUNCTION(0, 60),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO60"),
		MTK_FUNCTION(1, "BPI_BUS13")
	),
	MTK_PIN(
		61, "GPIO61",
		MTK_EINT_FUNCTION(0, 61),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO61"),
		MTK_FUNCTION(1, "BPI_BUS14")
	),
	MTK_PIN(
		62, "GPIO62",
		MTK_EINT_FUNCTION(0, 62),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO62"),
		MTK_FUNCTION(1, "RFIC1_BSI_CK")
	),
	MTK_PIN(
		63, "GPIO63",
		MTK_EINT_FUNCTION(0, 63),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO63"),
		MTK_FUNCTION(1, "RFIC1_BSI_D0")
	),
	MTK_PIN(
		64, "GPIO64",
		MTK_EINT_FUNCTION(0, 64),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO64"),
		MTK_FUNCTION(1, "RFIC1_BSI_D1")
	),
	MTK_PIN(
		65, "GPIO65",
		MTK_EINT_FUNCTION(0, 65),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO65"),
		MTK_FUNCTION(1, "RFIC1_BSI_D2")
	),
	MTK_PIN(
		66, "GPIO66",
		MTK_EINT_FUNCTION(0, 66),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO66"),
		MTK_FUNCTION(1, "RFIC1_BSI_CS")
	),
	MTK_PIN(
		67, "GPIO67",
		MTK_EINT_FUNCTION(0, 67),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO67"),
		MTK_FUNCTION(1, "TD_TXBPI")
	),
	MTK_PIN(
		68, "GPIO68",
		MTK_EINT_FUNCTION(0, 68),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO68"),
		MTK_FUNCTION(1, "RFIC0_BSI_CK")
	),
	MTK_PIN(
		69, "GPIO69",
		MTK_EINT_FUNCTION(0, 69),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO69"),
		MTK_FUNCTION(1, "RFIC0_BSI_D0")
	),
	MTK_PIN(
		70, "GPIO70",
		MTK_EINT_FUNCTION(0, 70),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO70"),
		MTK_FUNCTION(1, "RFIC0_BSI_D1")
	),
	MTK_PIN(
		71, "GPIO71",
		MTK_EINT_FUNCTION(0, 71),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO71"),
		MTK_FUNCTION(1, "RFIC0_BSI_D2")
	),
	MTK_PIN(
		72, "GPIO72",
		MTK_EINT_FUNCTION(0, 72),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO72"),
		MTK_FUNCTION(1, "RFIC0_BSI_CS")
	),
	MTK_PIN(
		73, "GPIO73",
		MTK_EINT_FUNCTION(0, 73),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO73"),
		MTK_FUNCTION(1, "MISC_BSI_DO")
	),
	MTK_PIN(
		74, "GPIO74",
		MTK_EINT_FUNCTION(0, 74),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO74"),
		MTK_FUNCTION(1, "MISC_BSI_CK")
	),
	MTK_PIN(
		75, "GPIO75",
		MTK_EINT_FUNCTION(0, 75),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO75"),
		MTK_FUNCTION(1, "MISC_BSI_CS0B"),
		MTK_FUNCTION(2, "MIPI1_SCLK")
	),
	MTK_PIN(
		76, "GPIO76",
		MTK_EINT_FUNCTION(0, 76),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO76"),
		MTK_FUNCTION(1, "MISC_BSI_CS1B")
	),
	MTK_PIN(
		77, "GPIO77",
		MTK_EINT_FUNCTION(0, 77),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO77"),
		MTK_FUNCTION(1, "MISC_BSI_DI"),
		MTK_FUNCTION(2, "MIPI1_SDATA")
	),
	MTK_PIN(
		78, "GPIO78",
		MTK_EINT_FUNCTION(0, 78),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO78"),
		MTK_FUNCTION(1, "LTE_TXBPI")
	),
	MTK_PIN(
		79, "GPIO79",
		MTK_EINT_FUNCTION(0, 79),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO79"),
		MTK_FUNCTION(1, "BPI_BUS15")
	),
	MTK_PIN(
		80, "GPIO80",
		MTK_EINT_FUNCTION(0, 80),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO80"),
		MTK_FUNCTION(1, "BPI_BUS16")
	),
	MTK_PIN(
		81, "GPIO81",
		MTK_EINT_FUNCTION(0, 81),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO81"),
		MTK_FUNCTION(1, "BPI_BUS17")
	),
	MTK_PIN(
		82, "GPIO82",
		MTK_EINT_FUNCTION(0, 82),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO82"),
		MTK_FUNCTION(1, "BPI_BUS18")
	),
	MTK_PIN(
		83, "GPIO83",
		MTK_EINT_FUNCTION(0, 83),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO83"),
		MTK_FUNCTION(1, "BPI_BUS19")
	),
	MTK_PIN(
		84, "GPIO84",
		MTK_EINT_FUNCTION(0, 84),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO84"),
		MTK_FUNCTION(1, "BPI_BUS20")
	),
	MTK_PIN(
		85, "GPIO85",
		MTK_EINT_FUNCTION(0, 85),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO85"),
		MTK_FUNCTION(1, "BPI_BUS21")
	),
	MTK_PIN(
		86, "GPIO86",
		MTK_EINT_FUNCTION(0, 86),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO86"),
		MTK_FUNCTION(1, "BPI_BUS22")
	),
	MTK_PIN(
		87, "GPIO87",
		MTK_EINT_FUNCTION(0, 87),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO87"),
		MTK_FUNCTION(1, "BPI_BUS23")
	),
	MTK_PIN(
		88, "GPIO88",
		MTK_EINT_FUNCTION(0, 88),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO88"),
		MTK_FUNCTION(1, "BPI_BUS24")
	),
	MTK_PIN(
		89, "GPIO89",
		MTK_EINT_FUNCTION(0, 89),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO89"),
		MTK_FUNCTION(1, "BPI_BUS25")
	),
	MTK_PIN(
		90, "GPIO90",
		MTK_EINT_FUNCTION(0, 90),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO90"),
		MTK_FUNCTION(1, "BPI_BUS26")
	),
	MTK_PIN(
		91, "GPIO91",
		MTK_EINT_FUNCTION(0, 91),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO91"),
		MTK_FUNCTION(1, "BPI_BUS27")
	),
	MTK_PIN(
		92, "GPIO92",
		MTK_EINT_FUNCTION(0, 92),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO92"),
		MTK_FUNCTION(1, "PCM1_CLK"),
		MTK_FUNCTION(2, "I2S0_BCK"),
		MTK_FUNCTION(3, "NLD6")
	),
	MTK_PIN(
		93, "GPIO93",
		MTK_EINT_FUNCTION(0, 93),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO93"),
		MTK_FUNCTION(1, "PCM1_SYNC"),
		MTK_FUNCTION(2, "I2S0_WS"),
		MTK_FUNCTION(3, "NLD7")
	),
	MTK_PIN(
		94, "GPIO94",
		MTK_EINT_FUNCTION(0, 94),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO94"),
		MTK_FUNCTION(1, "PCM1_DI"),
		MTK_FUNCTION(2, "I2S0_DI"),
		MTK_FUNCTION(3, "NREB")
	),
	MTK_PIN(
		95, "GPIO95",
		MTK_EINT_FUNCTION(0, 95),
		DRV_GRP0,
		MTK_FUNCTION(0, "GPIO95"),
		MTK_FUNCTION(1, "PCM1_DO"),
		MTK_FUNCTION(2, "I2S0_DO"),
		MTK_FUNCTION(3, "NRNB0")
	),
	MTK_PIN(
		96, "GPIO96",
		MTK_EINT_FUNCTION(0, 96),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO96"),
		MTK_FUNCTION(1, "URXD1"),
		MTK_FUNCTION(2, "UTXD1"),
		MTK_FUNCTION(3, "NWEB")
	),
	MTK_PIN(
		97, "GPIO97",
		MTK_EINT_FUNCTION(0, 97),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO97"),
		MTK_FUNCTION(1, "UTXD1"),
		MTK_FUNCTION(2, "URXD1"),
		MTK_FUNCTION(3, "NCEB0")
	),
	MTK_PIN(
		98, "GPIO98",
		MTK_EINT_FUNCTION(0, 98),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO98"),
		MTK_FUNCTION(1, "URTS1"),
		MTK_FUNCTION(2, "UCTS1"),
		MTK_FUNCTION(3, "NALE")
	),
	MTK_PIN(
		99, "GPIO99",
		MTK_EINT_FUNCTION(0, 99),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO99"),
		MTK_FUNCTION(1, "UCTS1"),
		MTK_FUNCTION(2, "URTS1"),
		MTK_FUNCTION(3, "NCLE")
	),
	MTK_PIN(
		100, "GPIO100",
		MTK_EINT_FUNCTION(0, 100),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO100"),
		MTK_FUNCTION(1, "MSDC2_DAT0"),
		MTK_FUNCTION(2, "URXD1"),
		MTK_FUNCTION(3, "USB_DRVVBUS"),
		MTK_FUNCTION(4, "SDA4")
	),
	MTK_PIN(
		101, "GPIO101",
		MTK_EINT_FUNCTION(0, 101),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO101"),
		MTK_FUNCTION(1, "MSDC2_DAT1"),
		MTK_FUNCTION(2, "UTXD1"),
		MTK_FUNCTION(4, "SCL4")
	),
	MTK_PIN(
		102, "GPIO102",
		MTK_EINT_FUNCTION(0, 102),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO102"),
		MTK_FUNCTION(1, "MSDC2_DAT2"),
		MTK_FUNCTION(2, "URTS1"),
		MTK_FUNCTION(3, "UTXD0"),
		MTK_FUNCTION(5, "PWM0"),
		MTK_FUNCTION(6, "SPI_CK_1")
	),
	MTK_PIN(
		103, "GPIO103",
		MTK_EINT_FUNCTION(0, 103),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO103"),
		MTK_FUNCTION(1, "MSDC2_DAT3"),
		MTK_FUNCTION(2, "UCTS1"),
		MTK_FUNCTION(3, "URXD0"),
		MTK_FUNCTION(5, "PWM1"),
		MTK_FUNCTION(6, "SPI_MI_1")
	),
	MTK_PIN(
		104, "GPIO104",
		MTK_EINT_FUNCTION(0, 104),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO104"),
		MTK_FUNCTION(1, "MSDC2_CLK"),
		MTK_FUNCTION(2, "NLD4"),
		MTK_FUNCTION(3, "UTXD3"),
		MTK_FUNCTION(4, "SDA3"),
		MTK_FUNCTION(5, "PWM2"),
		MTK_FUNCTION(6, "SPI_MO_1")
	),
	MTK_PIN(
		105, "GPIO105",
		MTK_EINT_FUNCTION(0, 105),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO105"),
		MTK_FUNCTION(1, "MSDC2_CMD"),
		MTK_FUNCTION(2, "NLD5"),
		MTK_FUNCTION(3, "URXD3"),
		MTK_FUNCTION(4, "SCL3"),
		MTK_FUNCTION(5, "PWM3"),
		MTK_FUNCTION(6, "SPI_CS_1")
	),
	MTK_PIN(
		106, "GPIO106",
		MTK_EINT_FUNCTION(0, 106),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO106"),
		MTK_FUNCTION(1, "LCM_RST")
	),
	MTK_PIN(
		107, "GPIO107",
		MTK_EINT_FUNCTION(0, 107),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO107"),
		MTK_FUNCTION(1, "DSI_TE")
	),
	MTK_PIN(
		108, "GPIO108",
		MTK_EINT_FUNCTION(0, 108),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO108"),
		MTK_FUNCTION(1, "JTMS"),
		MTK_FUNCTION(2, "MFG_JTAG_TMS"),
		MTK_FUNCTION(3, "TDD_TMS"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TMS"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TMS"),
		MTK_FUNCTION(6, "DFD_TMS")
	),
	MTK_PIN(
		109, "GPIO109",
		MTK_EINT_FUNCTION(0, 109),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO109"),
		MTK_FUNCTION(1, "JTCK"),
		MTK_FUNCTION(2, "MFG_JTAG_TCK"),
		MTK_FUNCTION(3, "TDD_TCK"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TCK"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TCK"),
		MTK_FUNCTION(6, "DFD_TCK")
	),
	MTK_PIN(
		110, "GPIO110",
		MTK_EINT_FUNCTION(0, 110),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO110"),
		MTK_FUNCTION(1, "JTDI"),
		MTK_FUNCTION(2, "MFG_JTAG_TDI"),
		MTK_FUNCTION(3, "TDD_TDI"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TDI"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TDI"),
		MTK_FUNCTION(6, "DFD_TDI")
	),
	MTK_PIN(
		111, "GPIO111",
		MTK_EINT_FUNCTION(0, 111),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO111"),
		MTK_FUNCTION(1, "JTDO"),
		MTK_FUNCTION(2, "MFG_JTAG_TDO"),
		MTK_FUNCTION(3, "TDD_TDO"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TDO"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TDO"),
		MTK_FUNCTION(6, "DFD_TDO")
	),
	MTK_PIN(
		112, "GPIO112",
		MTK_EINT_FUNCTION(0, 112),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO112"),
		MTK_FUNCTION(1, "JTRST_B"),
		MTK_FUNCTION(2, "MFG_JTAG_TRSTN"),
		MTK_FUNCTION(3, "TDD_TRSTN"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TRST"),
		MTK_FUNCTION(5, "AP_MD32_JTAG_TRST"),
		MTK_FUNCTION(6, "DFD_NTRST")
	),
	MTK_PIN(
		113, "GPIO113",
		MTK_EINT_FUNCTION(0, 113),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO113"),
		MTK_FUNCTION(1, "URXD0"),
		MTK_FUNCTION(2, "UTXD0"),
		MTK_FUNCTION(3, "MD_URXD"),
		MTK_FUNCTION(4, "LTE_URXD"),
		MTK_FUNCTION(5, "TDD_TXD"),
		MTK_FUNCTION(6, "I2S2_WS")
	),
	MTK_PIN(
		114, "GPIO114",
		MTK_EINT_FUNCTION(0, 114),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO114"),
		MTK_FUNCTION(1, "UTXD0"),
		MTK_FUNCTION(2, "URXD0"),
		MTK_FUNCTION(3, "MD_UTXD"),
		MTK_FUNCTION(4, "LTE_UTXD"),
		MTK_FUNCTION(5, "TDD_TXD"),
		MTK_FUNCTION(6, "I2S2_BCK")
	),
	MTK_PIN(
		115, "GPIO115",
		MTK_EINT_FUNCTION(0, 115),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO115"),
		MTK_FUNCTION(1, "URTS0"),
		MTK_FUNCTION(2, "UCTS0"),
		MTK_FUNCTION(3, "MD_URXD"),
		MTK_FUNCTION(4, "LTE_URXD"),
		MTK_FUNCTION(5, "TDD_TXD"),
		MTK_FUNCTION(6, "I2S2_MCK")
	),
	MTK_PIN(
		116, "GPIO116",
		MTK_EINT_FUNCTION(0, 116),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO116"),
		MTK_FUNCTION(1, "UCTS0"),
		MTK_FUNCTION(2, "URTS0"),
		MTK_FUNCTION(3, "MD_UTXD"),
		MTK_FUNCTION(4, "LTE_UTXD"),
		MTK_FUNCTION(5, "TDD_TXD"),
		MTK_FUNCTION(6, "I2S2_DI_1")
	),
	MTK_PIN(
		117, "GPIO117",
		MTK_EINT_FUNCTION(0, 117),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO117"),
		MTK_FUNCTION(1, "URXD3"),
		MTK_FUNCTION(2, "UTXD3"),
		MTK_FUNCTION(3, "MD_URXD"),
		MTK_FUNCTION(4, "LTE_URXD"),
		MTK_FUNCTION(5, "TDD_TXD")
	),
	MTK_PIN(
		118, "GPIO118",
		MTK_EINT_FUNCTION(0, 118),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO118"),
		MTK_FUNCTION(1, "UTXD3"),
		MTK_FUNCTION(2, "URXD3"),
		MTK_FUNCTION(3, "MD_UTXD"),
		MTK_FUNCTION(4, "LTE_UTXD"),
		MTK_FUNCTION(5, "TDD_TXD")
	),
	MTK_PIN(
		119, "GPIO119",
		MTK_EINT_FUNCTION(0, 119),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO119"),
		MTK_FUNCTION(1, "KROW0")
	),
	MTK_PIN(
		120, "GPIO120",
		MTK_EINT_FUNCTION(0, 120),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO120"),
		MTK_FUNCTION(1, "KROW1"),
		MTK_FUNCTION(3, "PWM6")
	),
	MTK_PIN(
		121, "GPIO121",
		MTK_EINT_FUNCTION(0, 121),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO121"),
		MTK_FUNCTION(1, "KROW2"),
		MTK_FUNCTION(2, "IRDA_PDN"),
		MTK_FUNCTION(3, "I2S1_DO_1"),
		MTK_FUNCTION(4, "USB_DRVVBUS"),
		MTK_FUNCTION(5, "SPI_CK_2"),
		MTK_FUNCTION(6, "PWM4")
	),
	MTK_PIN(
		122, "GPIO122",
		MTK_EINT_FUNCTION(0, 122),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO122"),
		MTK_FUNCTION(1, "KCOL0")
	),
	MTK_PIN(
		123, "GPIO123",
		MTK_EINT_FUNCTION(0, 123),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO123"),
		MTK_FUNCTION(1, "KCOL1"),
		MTK_FUNCTION(2, "IRDA_RXD"),
		MTK_FUNCTION(3, "I2S2_DI_2"),
		MTK_FUNCTION(4, "PWM5")
	),
	MTK_PIN(
		124, "GPIO124",
		MTK_EINT_FUNCTION(0, 124),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO124"),
		MTK_FUNCTION(1, "KCOL2"),
		MTK_FUNCTION(2, "IRDA_TXD"),
		MTK_FUNCTION(3, "I2S1_DO_2"),
		MTK_FUNCTION(4, "USB_DRVVBUS"),
		MTK_FUNCTION(5, "SPI_MI_2"),
		MTK_FUNCTION(6, "PWM3")
	),
	MTK_PIN(
		125, "GPIO125",
		MTK_EINT_FUNCTION(0, 125),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO125"),
		MTK_FUNCTION(1, "SDA1")
	),
	MTK_PIN(
		126, "GPIO126",
		MTK_EINT_FUNCTION(0, 126),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO126"),
		MTK_FUNCTION(1, "SCL1")
	),
	MTK_PIN(
		127, "GPIO127",
		MTK_EINT_FUNCTION(1, 127),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO127"),
		MTK_FUNCTION(1, "MD_EINT1"),
		MTK_FUNCTION(2, "DISP_PWM1"),
		MTK_FUNCTION(3, "SPI_MO_2")
	),
	MTK_PIN(
		128, "GPIO128",
		MTK_EINT_FUNCTION(1, 128),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO128"),
		MTK_FUNCTION(1, "MD_EINT2"),
		MTK_FUNCTION(2, "DSI1_TE"),
		MTK_FUNCTION(3, "SPI_CS_2")
	),
	MTK_PIN(
		129, "GPIO129",
		MTK_EINT_FUNCTION(0, 129),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO129"),
		MTK_FUNCTION(1, "I2S3_WS"),
		MTK_FUNCTION(2, "I2S2_WS"),
		MTK_FUNCTION(3, "PWM0")
	),
	MTK_PIN(
		130, "GPIO130",
		MTK_EINT_FUNCTION(0, 130),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO130"),
		MTK_FUNCTION(1, "I2S3_BCK"),
		MTK_FUNCTION(2, "I2S2_BCK"),
		MTK_FUNCTION(3, "PWM1")
	),
	MTK_PIN(
		131, "GPIO131",
		MTK_EINT_FUNCTION(0, 131),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO131"),
		MTK_FUNCTION(1, "I2S3_MCK"),
		MTK_FUNCTION(2, "I2S2_MCK"),
		MTK_FUNCTION(3, "PWM2")
	),
	MTK_PIN(
		132, "GPIO132",
		MTK_EINT_FUNCTION(0, 132),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO132"),
		MTK_FUNCTION(1, "I2S3_DO_1"),
		MTK_FUNCTION(2, "I2S2_DI_1"),
		MTK_FUNCTION(3, "PWM3")
	),
	MTK_PIN(
		133, "GPIO133",
		MTK_EINT_FUNCTION(0, 133),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO133"),
		MTK_FUNCTION(1, "I2S3_DO_2"),
		MTK_FUNCTION(2, "I2S2_DI_2"),
		MTK_FUNCTION(3, "PWM4")
	),
	MTK_PIN(
		134, "GPIO134",
		MTK_EINT_FUNCTION(0, 134),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO134"),
		MTK_FUNCTION(1, "I2S3_DO_3"),
		MTK_FUNCTION(2, "DISP_PWM1"),
		MTK_FUNCTION(3, "I2S1_DO_1"),
		MTK_FUNCTION(4, "PWM5")
	),
	MTK_PIN(
		135, "GPIO135",
		MTK_EINT_FUNCTION(0, 135),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO135"),
		MTK_FUNCTION(1, "I2S3_DO_4"),
		MTK_FUNCTION(2, "DSI1_TE"),
		MTK_FUNCTION(3, "I2S1_DO_2"),
		MTK_FUNCTION(4, "PWM6")
	),
	MTK_PIN(
		136, "GPIO136",
		MTK_EINT_FUNCTION(0, 136),
		DRV_FIXED,
		MTK_FUNCTION(0, "GPIO136"),
		MTK_FUNCTION(1, "SDA3")
	),
	MTK_PIN(
		137, "GPIO137",
		MTK_EINT_FUNCTION(0, 137),
		DRV_FIXED,
		MTK_FUNCTION(0, "GPIO137"),
		MTK_FUNCTION(1, "SCL3")
	),
	MTK_PIN(
		138, "GPIO138",
		MTK_EINT_FUNCTION(0, 138),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO138"),
		MTK_FUNCTION(1, "DPI_CK"),
		MTK_FUNCTION(2, "NLD6"),
		MTK_FUNCTION(3, "UTXD0"),
		MTK_FUNCTION(4, "USB_DRVVBUS"),
		MTK_FUNCTION(5, "IRDA_PDN")
	),
	MTK_PIN(
		139, "GPIO139",
		MTK_EINT_FUNCTION(0, 139),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO139"),
		MTK_FUNCTION(1, "DPI_DE"),
		MTK_FUNCTION(2, "NLD7"),
		MTK_FUNCTION(3, "URXD0"),
		MTK_FUNCTION(4, "MD_UTXD"),
		MTK_FUNCTION(5, "IRDA_RXD")
	),
	MTK_PIN(
		140, "GPIO140",
		MTK_EINT_FUNCTION(0, 140),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO140"),
		MTK_FUNCTION(1, "DPI_D0"),
		MTK_FUNCTION(2, "NREB"),
		MTK_FUNCTION(3, "UCTS0"),
		MTK_FUNCTION(4, "MD_URXD"),
		MTK_FUNCTION(5, "IRDA_TXD")
	),
	MTK_PIN(
		141, "GPIO141",
		MTK_EINT_FUNCTION(0, 141),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO141"),
		MTK_FUNCTION(1, "DPI_D1"),
		MTK_FUNCTION(2, "NRNB0"),
		MTK_FUNCTION(3, "URTS0"),
		MTK_FUNCTION(4, "LTE_UTXD"),
		MTK_FUNCTION(5, "I2S2_WS")
	),
	MTK_PIN(
		142, "GPIO142",
		MTK_EINT_FUNCTION(0, 142),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO142"),
		MTK_FUNCTION(1, "DPI_D2"),
		MTK_FUNCTION(2, "NWEB"),
		MTK_FUNCTION(3, "UTXD1"),
		MTK_FUNCTION(4, "LTE_URXD"),
		MTK_FUNCTION(5, "I2S2_BCK")
	),
	MTK_PIN(
		143, "GPIO143",
		MTK_EINT_FUNCTION(0, 143),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO143"),
		MTK_FUNCTION(1, "DPI_D3"),
		MTK_FUNCTION(2, "NCEB0"),
		MTK_FUNCTION(3, "URXD1"),
		MTK_FUNCTION(4, "TDD_TXD"),
		MTK_FUNCTION(5, "I2S2_MCK")
	),
	MTK_PIN(
		144, "GPIO144",
		MTK_EINT_FUNCTION(0, 144),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO144"),
		MTK_FUNCTION(1, "DPI_D4"),
		MTK_FUNCTION(2, "NALE"),
		MTK_FUNCTION(3, "UCTS1"),
		MTK_FUNCTION(4, "TDD_TMS"),
		MTK_FUNCTION(5, "I2S2_DI_1")
	),
	MTK_PIN(
		145, "GPIO145",
		MTK_EINT_FUNCTION(0, 145),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO145"),
		MTK_FUNCTION(1, "DPI_D5"),
		MTK_FUNCTION(2, "NCLE"),
		MTK_FUNCTION(3, "URTS1"),
		MTK_FUNCTION(4, "TDD_TCK"),
		MTK_FUNCTION(5, "I2S2_DI_2")
	),
	MTK_PIN(
		146, "GPIO146",
		MTK_EINT_FUNCTION(0, 146),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO146"),
		MTK_FUNCTION(1, "DPI_D6"),
		MTK_FUNCTION(2, "NLD8"),
		MTK_FUNCTION(3, "UTXD2"),
		MTK_FUNCTION(4, "TDD_TDI")
	),
	MTK_PIN(
		147, "GPIO147",
		MTK_EINT_FUNCTION(0, 147),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO147"),
		MTK_FUNCTION(1, "DPI_D7"),
		MTK_FUNCTION(2, "NLD9"),
		MTK_FUNCTION(3, "URXD2"),
		MTK_FUNCTION(4, "TDD_TDO"),
		MTK_FUNCTION(5, "I2S1_WS")
	),
	MTK_PIN(
		148, "GPIO148",
		MTK_EINT_FUNCTION(0, 148),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO148"),
		MTK_FUNCTION(1, "DPI_D8"),
		MTK_FUNCTION(2, "NLD10"),
		MTK_FUNCTION(3, "UCTS2"),
		MTK_FUNCTION(4, "TDD_TRSTN"),
		MTK_FUNCTION(5, "I2S1_BCK")
	),
	MTK_PIN(
		149, "GPIO149",
		MTK_EINT_FUNCTION(0, 149),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO149"),
		MTK_FUNCTION(1, "DPI_D9"),
		MTK_FUNCTION(2, "NLD11"),
		MTK_FUNCTION(3, "URTS2"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TMS"),
		MTK_FUNCTION(5, "I2S1_MCK")
	),
	MTK_PIN(
		150, "GPIO150",
		MTK_EINT_FUNCTION(0, 150),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO150"),
		MTK_FUNCTION(1, "DPI_D10"),
		MTK_FUNCTION(2, "NLD12"),
		MTK_FUNCTION(3, "UTXD3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TCK"),
		MTK_FUNCTION(5, "I2S1_DO_1")
	),
	MTK_PIN(
		151, "GPIO151",
		MTK_EINT_FUNCTION(0, 151),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO151"),
		MTK_FUNCTION(1, "DPI_D11"),
		MTK_FUNCTION(2, "NLD13"),
		MTK_FUNCTION(3, "URXD3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TDI"),
		MTK_FUNCTION(5, "I2S1_DO_2")
	),
	MTK_PIN(
		152, "GPIO152",
		MTK_EINT_FUNCTION(0, 152),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO152"),
		MTK_FUNCTION(1, "DPI_HSYNC"),
		MTK_FUNCTION(2, "NLD14"),
		MTK_FUNCTION(3, "UCTS3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TDO"),
		MTK_FUNCTION(5, "DSI1_TE")
	),
	MTK_PIN(
		153, "GPIO153",
		MTK_EINT_FUNCTION(0, 153),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO153"),
		MTK_FUNCTION(1, "DPI_VSYNC"),
		MTK_FUNCTION(2, "NLD15"),
		MTK_FUNCTION(3, "URTS3"),
		MTK_FUNCTION(4, "LTE_MD32_JTAG_TRST"),
		MTK_FUNCTION(5, "DISP_PWM1")
	),
	MTK_PIN(
		154, "GPIO154",
		MTK_EINT_FUNCTION(0, 154),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO154"),
		MTK_FUNCTION(1, "MSDC0_DAT0"),
		MTK_FUNCTION(2, "NLD8")
	),
	MTK_PIN(
		155, "GPIO155",
		MTK_EINT_FUNCTION(0, 155),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO155"),
		MTK_FUNCTION(1, "MSDC0_DAT1"),
		MTK_FUNCTION(2, "NLD9")
	),
	MTK_PIN(
		156, "GPIO156",
		MTK_EINT_FUNCTION(0, 156),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO156"),
		MTK_FUNCTION(1, "MSDC0_DAT2"),
		MTK_FUNCTION(2, "NLD10")
	),
	MTK_PIN(
		157, "GPIO157",
		MTK_EINT_FUNCTION(0, 157),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO157"),
		MTK_FUNCTION(1, "MSDC0_DAT3"),
		MTK_FUNCTION(2, "NLD11")
	),
	MTK_PIN(
		158, "GPIO158",
		MTK_EINT_FUNCTION(0, 158),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO158"),
		MTK_FUNCTION(1, "MSDC0_DAT4"),
		MTK_FUNCTION(2, "NLD12")
	),
	MTK_PIN(
		159, "GPIO159",
		MTK_EINT_FUNCTION(0, 159),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO159"),
		MTK_FUNCTION(1, "MSDC0_DAT5"),
		MTK_FUNCTION(2, "NLD13")
	),
	MTK_PIN(
		160, "GPIO160",
		MTK_EINT_FUNCTION(0, 160),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO160"),
		MTK_FUNCTION(1, "MSDC0_DAT6"),
		MTK_FUNCTION(2, "NLD14")
	),
	MTK_PIN(
		161, "GPIO161",
		MTK_EINT_FUNCTION(0, 161),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO161"),
		MTK_FUNCTION(1, "MSDC0_DAT7"),
		MTK_FUNCTION(2, "NLD15")
	),
	MTK_PIN(
		162, "GPIO162",
		MTK_EINT_FUNCTION(0, 162),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO162"),
		MTK_FUNCTION(1, "MSDC0_CMD")
	),
	MTK_PIN(
		163, "GPIO163",
		MTK_EINT_FUNCTION(0, 163),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO163"),
		MTK_FUNCTION(1, "MSDC0_CLK")
	),
	MTK_PIN(
		164, "GPIO164",
		MTK_EINT_FUNCTION(0, 164),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO164"),
		MTK_FUNCTION(1, "MSDC0_DSL")
	),
	MTK_PIN(
		165, "GPIO165",
		MTK_EINT_FUNCTION(0, 165),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO165"),
		MTK_FUNCTION(1, "MSDC0_RSTB")
	),
	MTK_PIN(
		166, "GPIO166",
		MTK_EINT_FUNCTION(0, 166),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO166"),
		MTK_FUNCTION(1, "SPI_CK_0"),
		MTK_FUNCTION(3, "PWM0")
	),
	MTK_PIN(
		167, "GPIO167",
		MTK_EINT_FUNCTION(0, 167),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO167"),
		MTK_FUNCTION(1, "SPI_MI_0"),
		MTK_FUNCTION(3, "PWM1"),
		MTK_FUNCTION(4, "SPI_MO_0")
	),
	MTK_PIN(
		168, "GPIO168",
		MTK_EINT_FUNCTION(2, 168),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO168"),
		MTK_FUNCTION(1, "SPI_MO_0"),
		MTK_FUNCTION(2, "MD_EINT3"),
		MTK_FUNCTION(3, "PWM2"),
		MTK_FUNCTION(4, "SPI_MI_0")
	),
	MTK_PIN(
		169, "GPIO169",
		MTK_EINT_FUNCTION(2, 169),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO169"),
		MTK_FUNCTION(1, "SPI_CS_0"),
		MTK_FUNCTION(2, "MD_EINT4"),
		MTK_FUNCTION(3, "PWM3")
	),
	MTK_PIN(
		170, "GPIO170",
		MTK_EINT_FUNCTION(0, 170),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO170"),
		MTK_FUNCTION(1, "MSDC1_CMD")
	),
	MTK_PIN(
		171, "GPIO171",
		MTK_EINT_FUNCTION(0, 171),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO171"),
		MTK_FUNCTION(1, "MSDC1_DAT0")
	),
	MTK_PIN(
		172, "GPIO172",
		MTK_EINT_FUNCTION(0, 172),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO172"),
		MTK_FUNCTION(1, "MSDC1_DAT1")
	),
	MTK_PIN(
		173, "GPIO173",
		MTK_EINT_FUNCTION(0, 173),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO173"),
		MTK_FUNCTION(1, "MSDC1_DAT2")
	),
	MTK_PIN(
		174, "GPIO174",
		MTK_EINT_FUNCTION(0, 174),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO174"),
		MTK_FUNCTION(1, "MSDC1_DAT3")
	),
	MTK_PIN(
		175, "GPIO175",
		MTK_EINT_FUNCTION(0, 175),
		DRV_GRP4,
		MTK_FUNCTION(0, "GPIO175"),
		MTK_FUNCTION(1, "MSDC1_CLK")
	),
	MTK_PIN(
		176, "GPIO176",
		MTK_EINT_FUNCTION(0, 176),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO176"),
		MTK_FUNCTION(1, "PWRAP_SPIMI"),
		MTK_FUNCTION(2, "PWRAP_SPIMO")
	),
	MTK_PIN(
		177, "GPIO177",
		MTK_EINT_FUNCTION(0, 177),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO177"),
		MTK_FUNCTION(1, "PWRAP_SPIMO"),
		MTK_FUNCTION(2, "PWRAP_SPIMI")
	),
	MTK_PIN(
		178, "GPIO178",
		MTK_EINT_FUNCTION(0, 178),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO178"),
		MTK_FUNCTION(1, "PWRAP_SPICK")
	),
	MTK_PIN(
		179, "GPIO179",
		MTK_EINT_FUNCTION(0, 179),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO179"),
		MTK_FUNCTION(1, "PWRAP_SPICS")
	),
	MTK_PIN(
		180, "GPIO180",
		MTK_EINT_FUNCTION(0, 180),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO180"),
		MTK_FUNCTION(1, "AUD_CLK_MOSI"),
		MTK_FUNCTION(2, "I2S1_WS"),
		MTK_FUNCTION(3, "I2S2_WS"),
		MTK_FUNCTION(4, "I2S0_WS")
	),
	MTK_PIN(
		181, "GPIO181",
		MTK_EINT_FUNCTION(0, 181),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO181"),
		MTK_FUNCTION(1, "AUD_DAT_MISO_1"),
		MTK_FUNCTION(2, "I2S1_BCK"),
		MTK_FUNCTION(3, "I2S2_BCK"),
		MTK_FUNCTION(4, "I2S0_BCK")
	),
	MTK_PIN(
		182, "GPIO182",
		MTK_EINT_FUNCTION(0, 182),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO182"),
		MTK_FUNCTION(1, "AUD_DAT_MOSI_1"),
		MTK_FUNCTION(2, "I2S1_MCK"),
		MTK_FUNCTION(3, "I2S2_MCK"),
		MTK_FUNCTION(4, "I2S0_MCK")
	),
	MTK_PIN(
		183, "GPIO183",
		MTK_EINT_FUNCTION(0, 183),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO183"),
		MTK_FUNCTION(1, "AUD_DAT_MISO_2"),
		MTK_FUNCTION(2, "I2S1_DO_1"),
		MTK_FUNCTION(3, "I2S2_DI_1"),
		MTK_FUNCTION(4, "I2S0_DO")
	),
	MTK_PIN(
		184, "GPIO184",
		MTK_EINT_FUNCTION(0, 184),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO184"),
		MTK_FUNCTION(1, "AUD_DAT_MOSI_2"),
		MTK_FUNCTION(2, "I2S1_DO_2"),
		MTK_FUNCTION(3, "I2S2_DI_2"),
		MTK_FUNCTION(4, "I2S0_DI")
	),
	MTK_PIN(
		185, "GPIO185",
		MTK_EINT_FUNCTION(0, 185),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO185"),
		MTK_FUNCTION(1, "RTC32K_CK")
	),
	MTK_PIN(
		186, "GPIO186",
		MTK_EINT_FUNCTION(0, 186),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO186"),
		MTK_FUNCTION(1, "DISP_PWM0"),
		MTK_FUNCTION(2, "DISP_PWM1")
	),
	MTK_PIN(
		187, "GPIO187",
		MTK_EINT_FUNCTION(0, 187),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO187"),
		MTK_FUNCTION(1, "SRCLKENAI")
	),
	MTK_PIN(
		188, "GPIO188",
		MTK_EINT_FUNCTION(0, 188),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO188"),
		MTK_FUNCTION(1, "SRCLKENAI2")
	),
	MTK_PIN(
		189, "GPIO189",
		MTK_EINT_FUNCTION(0, 189),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO189"),
		MTK_FUNCTION(1, "SRCLKENA0")
	),
	MTK_PIN(
		190, "GPIO190",
		MTK_EINT_FUNCTION(0, 190),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO190"),
		MTK_FUNCTION(1, "SRCLKENA1")
	),
	MTK_PIN(
		191, "GPIO191",
		MTK_EINT_FUNCTION(0, 191),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO191"),
		MTK_FUNCTION(1, "WATCHDOG_AO")
	),
	MTK_PIN(
		192, "GPIO192",
		MTK_EINT_FUNCTION(0, 192),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO192"),
		MTK_FUNCTION(1, "I2S0_WS"),
		MTK_FUNCTION(2, "I2S1_WS"),
		MTK_FUNCTION(3, "I2S2_WS"),
		MTK_FUNCTION(4, "NCEB1")
	),
	MTK_PIN(
		193, "GPIO193",
		MTK_EINT_FUNCTION(0, 193),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO193"),
		MTK_FUNCTION(1, "I2S0_BCK"),
		MTK_FUNCTION(2, "I2S1_BCK"),
		MTK_FUNCTION(3, "I2S2_BCK"),
		MTK_FUNCTION(4, "NRNB1")
	),
	MTK_PIN(
		194, "GPIO194",
		MTK_EINT_FUNCTION(0, 194),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO194"),
		MTK_FUNCTION(1, "I2S0_MCK"),
		MTK_FUNCTION(2, "I2S1_MCK"),
		MTK_FUNCTION(3, "I2S2_MCK")
	),
	MTK_PIN(
		195, "GPIO195",
		MTK_EINT_FUNCTION(0, 195),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO195"),
		MTK_FUNCTION(1, "I2S0_DO"),
		MTK_FUNCTION(2, "I2S1_DO_1"),
		MTK_FUNCTION(3, "I2S2_DI_1")
	),
	MTK_PIN(
		196, "GPIO196",
		MTK_EINT_FUNCTION(0, 196),
		DRV_GRP2,
		MTK_FUNCTION(0, "GPIO196"),
		MTK_FUNCTION(1, "I2S0_DI"),
		MTK_FUNCTION(2, "I2S1_DO_2"),
		MTK_FUNCTION(3, "I2S2_DI_2")
	),
};

#endif /* __PINCTRL_MTK_MT6795_H */