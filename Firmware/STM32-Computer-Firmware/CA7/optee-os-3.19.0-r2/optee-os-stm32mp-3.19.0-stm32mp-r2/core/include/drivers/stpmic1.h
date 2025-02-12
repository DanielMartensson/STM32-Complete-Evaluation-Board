/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2016-2018, STMicroelectronics - All Rights Reserved
 */

#ifndef __STPMIC1_H__
#define __STPMIC1_H__

#include <drivers/stm32_i2c.h>
#include <util.h>

#define TURN_ON_REG			0x1U
#define TURN_OFF_REG			0x2U
#define ICC_LDO_TURN_OFF_REG		0x3U
#define ICC_BUCK_TURN_OFF_REG		0x4U
#define RESET_STATUS_REG		0x5U
#define VERSION_STATUS_REG		0x6U
#define MAIN_CONTROL_REG		0x10U
#define PADS_PULL_REG			0x11U
#define BUCK_PULL_DOWN_REG		0x12U
#define LDO14_PULL_DOWN_REG		0x13U
#define LDO56_PULL_DOWN_REG		0x14U
#define VIN_CONTROL_REG			0x15U
#define PONKEY_TIMER_REG		0x16U
#define MASK_RANK_BUCK_REG		0x17U
#define MASK_RESET_BUCK_REG		0x18U
#define MASK_RANK_LDO_REG		0x19U
#define MASK_RESET_LDO_REG		0x1AU
#define WATCHDOG_CONTROL_REG		0x1BU
#define WATCHDOG_TIMER_REG		0x1CU
#define BUCK_ICC_TURNOFF_REG		0x1DU
#define LDO_ICC_TURNOFF_REG		0x1EU
#define BUCK_APM_CONTROL_REG		0x1FU
#define BUCK1_CONTROL_REG		0x20U
#define BUCK2_CONTROL_REG		0x21U
#define BUCK3_CONTROL_REG		0x22U
#define BUCK4_CONTROL_REG		0x23U
#define VREF_DDR_CONTROL_REG		0x24U
#define LDO1_CONTROL_REG		0x25U
#define LDO2_CONTROL_REG		0x26U
#define LDO3_CONTROL_REG		0x27U
#define LDO4_CONTROL_REG		0x28U
#define LDO5_CONTROL_REG		0x29U
#define LDO6_CONTROL_REG		0x2AU
#define BUCK1_PWRCTRL_REG		0x30U
#define BUCK2_PWRCTRL_REG		0x31U
#define BUCK3_PWRCTRL_REG		0x32U
#define BUCK4_PWRCTRL_REG		0x33U
#define VREF_DDR_PWRCTRL_REG		0x34U
#define LDO1_PWRCTRL_REG		0x35U
#define LDO2_PWRCTRL_REG		0x36U
#define LDO3_PWRCTRL_REG		0x37U
#define LDO4_PWRCTRL_REG		0x38U
#define LDO5_PWRCTRL_REG		0x39U
#define LDO6_PWRCTRL_REG		0x3AU
#define FREQUENCY_SPREADING_REG		0x3BU
#define USB_CONTROL_REG			0x40U
#define ITLATCH1_REG			0x50U
#define ITLATCH2_REG			0x51U
#define ITLATCH3_REG			0x52U
#define ITLATCH4_REG			0x53U
#define ITSETLATCH1_REG			0x60U
#define ITSETLATCH2_REG			0x61U
#define ITSETLATCH3_REG			0x62U
#define ITSETLATCH4_REG			0x63U
#define ITCLEARLATCH1_REG		0x70U
#define ITCLEARLATCH2_REG		0x71U
#define ITCLEARLATCH3_REG		0x72U
#define ITCLEARLATCH4_REG		0x73U
#define ITMASK1_REG			0x80U
#define ITMASK2_REG			0x81U
#define ITMASK3_REG			0x82U
#define ITMASK4_REG			0x83U
#define ITSETMASK1_REG			0x90U
#define ITSETMASK2_REG			0x91U
#define ITSETMASK3_REG			0x92U
#define ITSETMASK4_REG			0x93U
#define ITCLEARMASK1_REG		0xA0U
#define ITCLEARMASK2_REG		0xA1U
#define ITCLEARMASK3_REG		0xA2U
#define ITCLEARMASK4_REG		0xA3U
#define ITSOURCE1_REG			0xB0U
#define ITSOURCE2_REG			0xB1U
#define ITSOURCE3_REG			0xB2U
#define ITSOURCE4_REG			0xB3U

/* Registers masks */
#define LDO_VOLTAGE_MASK		GENMASK_32(6, 2)
#define BUCK_VOLTAGE_MASK		GENMASK_32(7, 2)
#define LDO_BUCK_VOLTAGE_SHIFT		2
#define LDO_BUCK_ENABLE_POS		0
#define LDO_BUCK_ENABLE_MASK		BIT(LDO_BUCK_ENABLE_POS)
#define LDO_BUCK_HPLP_POS		1
#define LDO_BUCK_RANK_MASK		BIT(0)
#define LDO_BUCK_RESET_MASK		BIT(0)
#define LDO_BUCK_PULL_DOWN_MASK		GENMASK_32(1, 0)

/* Pull down register */
#define BUCK1_PULL_DOWN_SHIFT		0
#define BUCK2_PULL_DOWN_SHIFT		2
#define BUCK3_PULL_DOWN_SHIFT		4
#define BUCK4_PULL_DOWN_SHIFT		6
#define VREF_DDR_PULL_DOWN_SHIFT	4

/* ICC register */
#define BUCK1_ICC_SHIFT			0
#define BUCK2_ICC_SHIFT			1
#define BUCK3_ICC_SHIFT			2
#define BUCK4_ICC_SHIFT			3
#define PWR_SW1_ICC_SHIFT		4
#define PWR_SW2_ICC_SHIFT		5
#define BOOST_ICC_SHIFT			6

#define LDO1_ICC_SHIFT			0
#define LDO2_ICC_SHIFT			1
#define LDO3_ICC_SHIFT			2
#define LDO4_ICC_SHIFT			3
#define LDO5_ICC_SHIFT			4
#define LDO6_ICC_SHIFT			5

/* Buck Mask reset register */
#define BUCK1_MASK_RESET_SHIFT		0
#define BUCK2_MASK_RESET_SHIFT		1
#define BUCK3_MASK_RESET_SHIFT		2
#define BUCK4_MASK_RESET_SHIFT		3

/* LDO Mask reset register */
#define LDO1_MASK_RESET_SHIFT		0
#define LDO2_MASK_RESET_SHIFT		1
#define LDO3_MASK_RESET_SHIFT		2
#define LDO4_MASK_RESET_SHIFT		3
#define LDO5_MASK_RESET_SHIFT		4
#define LDO6_MASK_RESET_SHIFT		5
#define VREF_DDR_MASK_RESET_SHIFT	6

/* LDO3 Special modes */
#define LDO3_BYPASS                     BIT(7)
#define LDO3_DDR_SEL                    31U

/* Main PMIC Control Register (MAIN_CONTROL_REG) */
#define ICC_EVENT_ENABLED		BIT(4)
#define PWRCTRL_POLARITY_HIGH		BIT(3)
#define PWRCTRL_PIN_VALID		BIT(2)
#define RESTART_REQUEST_ENABLED		BIT(1)
#define SOFTWARE_SWITCH_OFF_ENABLED	BIT(0)

/* Main PMIC PADS Control Register (PADS_PULL_REG) */
#define WAKEUP_DETECTOR_DISABLED	BIT(4)
#define PWRCTRL_PD_ACTIVE		BIT(3)
#define PWRCTRL_PU_ACTIVE		BIT(2)
#define WAKEUP_PD_ACTIVE		BIT(1)
#define PONKEY_PU_ACTIVE		BIT(0)

/* Main PMIC VINLOW Control Register (VIN_CONTROL_REGC DMSC) */
#define SWIN_DETECTOR_ENABLED		BIT(7)
#define SWOUT_DETECTOR_ENABLED          BIT(6)
#define VINLOW_HYST_MASK		GENMASK_32(5, 4)
#define VINLOW_HYST_SHIFT		4
#define VINLOW_THRESHOLD_MASK		GENMASK_32(3, 1)
#define VINLOW_THRESHOLD_SHIFT		1
#define VINLOW_ENABLED			BIT(0)
#define VINLOW_CTRL_REG_MASK		GENMASK_32(7, 0)

/* USB Control Register */
#define BOOST_OVP_DISABLED_POS		7
#define VBUS_OTG_DETECTION_DISABLED_POS	6
#define SW_OUT_DISCHARGE_POS		5
#define VBUS_OTG_DISCHARGE_POS		4
#define OCP_LIMIT_HIGH_POS		3
#define SWIN_SWOUT_ENABLED_POS		2
#define USBSW_OTG_SWITCH_ENABLED_POS	1
#define BOOST_ENABLED_POS		0

/*
 * Bind SPMIC1 device driver with a specific I2C bus instance
 * @i2c_handle: target I2C instance to use
 * @i2c_addr: I2C address of the STPMIC1 device
 */
void stpmic1_bind_i2c(struct i2c_handle_s *i2c_handle, uint16_t i2c_addr);

/* Read STPMIC1 device version information */
int stpmic1_get_version(unsigned long *version);

/* Read STPMIC1 device internal registers content */
void stpmic1_dump_regulators(void);

/* Enable power control in STPMIC1 device */
int stpmic1_powerctrl_on(void);

/* Disable STPMIC1 device */
int stpmic1_switch_off(void);

/* Read/write/update STPMIC1 device internal register */
int stpmic1_register_read(uint8_t register_id, uint8_t *value);
int stpmic1_register_write(uint8_t register_id, uint8_t value);
int stpmic1_register_update(uint8_t register_id, uint8_t value, uint8_t mask);

/* API for low power configuration of regulators driven from STPMIC1 device */
bool stpmic1_regu_has_lp_cfg(const char *name);
int stpmic1_lp_copy_reg(const char *name);
int stpmic1_lp_reg_on_off(const char *name, uint8_t enable);
int stpmic1_lp_set_mode(const char *name, uint8_t hplp);
int stpmic1_lp_set_voltage(const char *name, uint16_t millivolts);

#ifdef CFG_STM32MP15
/*
 * Specific API for controlling regulators driven from STPMIC1 device
 * from unpaged execution context of the STPMIC1 driver.
 */

/*
 * The STPMIC1 is accessed during low power sequence in unpaged
 * execution context. To prevent adding an unpaged constraint on
 * STPMIC1 regulator definitions, conversion tables and device tree
 * content, the regulators configurations are read from device tree
 * at boot time and saved in memory for being applied at runtime
 * without needing pager support.
 *
 * There are 2 types of regulator configuration loaded during such
 * low power and unpaged sequences: boot-on (bo) configuration and
 * low power (lp) configuration.
 */
struct stpmic1_bo_cfg {
	uint8_t ctrl_reg;
	uint8_t min_value;
	uint8_t enable_pos;
	uint8_t mask;
	uint8_t pd_reg;
	uint8_t pd_value;
	uint8_t pd_mask;
	uint8_t mrst_reg;
	uint8_t mrst_value;
	uint8_t mrst_mask;
};

struct stpmic1_lp_cfg {
	uint8_t ctrl_reg;
	uint8_t lp_reg;
	uint8_t value;
	uint8_t mask;
};

int stpmic1_bo_enable_cfg(const char *name, struct stpmic1_bo_cfg *cfg);
int stpmic1_bo_enable_unpg(struct stpmic1_bo_cfg *cfg);
int stpmic1_bo_voltage_cfg(const char *name, uint16_t min_millivolt,
			   struct stpmic1_bo_cfg *cfg);
int stpmic1_bo_voltage_unpg(struct stpmic1_bo_cfg *cfg);

int stpmic1_bo_pull_down_cfg(const char *name,
			     struct stpmic1_bo_cfg *cfg);
int stpmic1_bo_pull_down_unpg(struct stpmic1_bo_cfg *cfg);

int stpmic1_bo_mask_reset_cfg(const char *name, struct stpmic1_bo_cfg *cfg);
int stpmic1_bo_mask_reset_unpg(struct stpmic1_bo_cfg *cfg);

int stpmic1_lp_cfg(const char *name, struct stpmic1_lp_cfg *cfg);
int stpmic1_lp_load_unpg(struct stpmic1_lp_cfg *cfg);
int stpmic1_lp_on_off_unpg(struct stpmic1_lp_cfg *cfg, int enable);
int stpmic1_lp_mode_unpg(struct stpmic1_lp_cfg *cfg,
			 unsigned int mode);
int stpmic1_lp_voltage_cfg(const char *name, uint16_t millivolts,
			   struct stpmic1_lp_cfg *cfg);
int stpmic1_lp_voltage_unpg(struct stpmic1_lp_cfg *cfg);
#endif /* CFG_STM32MP15 */

#endif /*__STPMIC1_H__*/
