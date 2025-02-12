/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022-2023, STMicroelectronics - All Rights Reserved
 */

#ifndef __STPMIC2_H__
#define __STPMIC2_H__

#include <drivers/stm32_i2c.h>
#include <dt-bindings/mfd/st,stpmic2.h>
#include <util.h>

enum {
	STPMIC2_BUCK1 = 0,
	STPMIC2_BUCK2,
	STPMIC2_BUCK3,
	STPMIC2_BUCK4,
	STPMIC2_BUCK5,
	STPMIC2_BUCK6,
	STPMIC2_BUCK7,
	STPMIC2_REFDDR,
	STPMIC2_LDO1,
	STPMIC2_LDO2,
	STPMIC2_LDO3,
	STPMIC2_LDO4,
	STPMIC2_LDO5,
	STPMIC2_LDO6,
	STPMIC2_LDO7,
	STPMIC2_LDO8,
	STPMIC2_NB_REG,
};

/* Status Registers */
#define PRODUCT_ID		U(0x00)
#define VERSION_SR		U(0x01)
#define TURN_ON_SR		U(0x02)
#define TURN_OFF_SR		U(0x03)
#define RESTART_SR		U(0x04)
#define OCP_SR1			U(0x05)
#define OCP_SR2			U(0x06)
#define EN_SR1			U(0x07)
#define EN_SR2			U(0x08)
#define FS_CNT_SR1		U(0x09)
#define FS_CNT_SR2		U(0x0A)
#define FS_CNT_SR3		U(0x0B)
#define MODE_SR			U(0x0C)
/* Control Registers */
#define MAIN_CR			U(0x10)
#define VINLOW_CR		U(0x11)
#define PKEY_LKP_CR		U(0x12)
#define WDG_CR			U(0x13)
#define WDG_TMR_CR		U(0x14)
#define WDG_TMR_SR		U(0x15)
#define FS_OCP_CR1		U(0x16)
#define FS_OCP_CR2		U(0x17)
#define PADS_PULL_CR		U(0x18)
#define BUCKS_PD_CR1		U(0x19)
#define BUCKS_PD_CR2		U(0x1A)
#define LDOS_PD_CR1		U(0x1B)
#define LDOS_PD_CR2		U(0x1C)
#define BUCKS_MRST_CR		U(0x1D)
#define LDOS_MRST_CR		U(0x1E)
/* Buck CR */
#define BUCK1_MAIN_CR1		U(0x20)
#define BUCK1_MAIN_CR2		U(0x21)
#define BUCK1_ALT_CR1		U(0x22)
#define BUCK1_ALT_CR2		U(0x23)
#define BUCK1_PWRCTRL_CR	U(0x24)
#define BUCK2_MAIN_CR1		U(0x25)
#define BUCK2_MAIN_CR2		U(0x26)
#define BUCK2_ALT_CR1		U(0x27)
#define BUCK2_ALT_CR2		U(0x28)
#define BUCK2_PWRCTRL_CR	U(0x29)
#define BUCK3_MAIN_CR1		U(0x2A)
#define BUCK3_MAIN_CR2		U(0x2B)
#define BUCK3_ALT_CR1		U(0x2C)
#define BUCK3_ALT_CR2		U(0x2D)
#define BUCK3_PWRCTRL_CR	U(0x2E)
#define BUCK4_MAIN_CR1		U(0x2F)
#define BUCK4_MAIN_CR2		U(0x30)
#define BUCK4_ALT_CR1		U(0x31)
#define BUCK4_ALT_CR2		U(0x32)
#define BUCK4_PWRCTRL_CR	U(0x33)
#define BUCK5_MAIN_CR1		U(0x34)
#define BUCK5_MAIN_CR2		U(0x35)
#define BUCK5_ALT_CR1		U(0x36)
#define BUCK5_ALT_CR2		U(0x37)
#define BUCK5_PWRCTRL_CR	U(0x38)
#define BUCK6_MAIN_CR1		U(0x39)
#define BUCK6_MAIN_CR2		U(0x3A)
#define BUCK6_ALT_CR1		U(0x3B)
#define BUCK6_ALT_CR2		U(0x3C)
#define BUCK6_PWRCTRL_CR	U(0x3D)
#define BUCK7_MAIN_CR1		U(0x3E)
#define BUCK7_MAIN_CR2		U(0x3F)
#define BUCK7_ALT_CR1		U(0x40)
#define BUCK7_ALT_CR2		U(0x41)
#define BUCK7_PWRCTRL_CR	U(0x42)
/* LDO CR */
#define LDO1_MAIN_CR		U(0x4C)
#define LDO1_ALT_CR		U(0x4D)
#define LDO1_PWRCTRL_CR		U(0x4E)
#define LDO2_MAIN_CR		U(0x4F)
#define LDO2_ALT_CR		U(0x50)
#define LDO2_PWRCTRL_CR		U(0x51)
#define LDO3_MAIN_CR		U(0x52)
#define LDO3_ALT_CR		U(0x53)
#define LDO3_PWRCTRL_CR		U(0x54)
#define LDO4_MAIN_CR		U(0x55)
#define LDO4_ALT_CR		U(0x56)
#define LDO4_PWRCTRL_CR		U(0x57)
#define LDO5_MAIN_CR		U(0x58)
#define LDO5_ALT_CR		U(0x59)
#define LDO5_PWRCTRL_CR		U(0x5A)
#define LDO6_MAIN_CR		U(0x5B)
#define LDO6_ALT_CR		U(0x5C)
#define LDO6_PWRCTRL_CR		U(0x5D)
#define LDO7_MAIN_CR		U(0x5E)
#define LDO7_ALT_CR		U(0x5F)
#define LDO7_PWRCTRL_CR		U(0x60)
#define LDO8_MAIN_CR		U(0x61)
#define LDO8_ALT_CR		U(0x62)
#define LDO8_PWRCTRL_CR		U(0x63)
#define REFDDR_MAIN_CR		U(0x64)
#define REFDDR_ALT_CR		U(0x65)
#define REFDDR_PWRCTRL_CR	U(0x66)
/* INTERRUPT CR */
#define INT_PENDING_R1		U(0x70)
#define INT_PENDING_R2		U(0x71)
#define INT_PENDING_R3		U(0x72)
#define INT_PENDING_R4		U(0x73)
#define INT_CLEAR_R1		U(0x74)
#define INT_CLEAR_R2		U(0x75)
#define INT_CLEAR_R3		U(0x76)
#define INT_CLEAR_R4		U(0x77)
#define INT_MASK_R1		U(0x78)
#define INT_MASK_R2		U(0x79)
#define INT_MASK_R3		U(0x7A)
#define INT_MASK_R4		U(0x7B)
#define INT_SRC_R1		U(0x7C)
#define INT_SRC_R2		U(0x7D)
#define INT_SRC_R3		U(0x7E)
#define INT_SRC_R4		U(0x7F)
#define INT_DBG_LATCH_R1	U(0x80)
#define INT_DBG_LATCH_R2	U(0x81)
#define INT_DBG_LATCH_R3	U(0x82)
#define INT_DBG_LATCH_R4	U(0x83)

/* PRODUCT_ID bits definition */
#define PMIC_NVM_ID_MASK	GENMASK_32(3, 0)

/* VERSION_SR bits definition */
#define MINOR_VERSION_MASK	GENMASK_32(3, 0)
#define MAJOR_VERSION_MASK	GENMASK_32(7, 4)
#define MAJOR_VERSION_SHIFT	4

/* BUCKS_MRST_CR bits definition */
#define BUCK1_MRST		BIT(0)
#define BUCK2_MRST		BIT(1)
#define BUCK3_MRST		BIT(2)
#define BUCK4_MRST		BIT(3)
#define BUCK5_MRST		BIT(4)
#define BUCK6_MRST		BIT(5)
#define BUCK7_MRST		BIT(6)
#define REFDDR_MRST		BIT(7)

/* LDOS_MRST_CR bits definition */
#define LDO1_MRST		BIT(0)
#define LDO2_MRST		BIT(1)
#define LDO3_MRST		BIT(2)
#define LDO4_MRST		BIT(3)
#define LDO5_MRST		BIT(4)
#define LDO6_MRST		BIT(5)
#define LDO7_MRST		BIT(6)
#define LDO8_MRST		BIT(7)

/* LDOx_MAIN_CR */
#define LDO_VOLT_SHIFT		1
#define LDO_BYPASS		BIT(6)
#define LDO1_INPUT_SRC		BIT(7)
#define LDO3_SNK_SRC		BIT(7)
#define LDO4_INPUT_SRC_SHIFT	6
#define LDO4_INPUT_SRC_MASK	GENMASK_32(7, 6)

/* PWRCTRL register bit definition */
#define PWRCTRL_EN		BIT(0)
#define PWRCTRL_RS		BIT(1)
#define PWRCTRL_SEL_SHIFT	2
#define PWRCTRL_SEL_MASK	GENMASK_32(3, 2)

/* BUCKx_MAIN_CR2 */
#define PREG_MODE_SHIFT		1
#define PREG_MODE_MASK		GENMASK_32(2, 1)

/* BUCKS_PD_CR1 */
#define BUCK1_PD_MASK		GENMASK_32(1, 0)
#define BUCK2_PD_MASK		GENMASK_32(3, 2)
#define BUCK3_PD_MASK		GENMASK_32(5, 4)
#define BUCK4_PD_MASK		GENMASK_32(7, 6)

#define BUCK1_PD_FAST		BIT(1)
#define BUCK2_PD_FAST		BIT(3)
#define BUCK3_PD_FAST		BIT(5)
#define BUCK4_PD_FAST		BIT(7)

/* BUCKS_PD_CR2 */
#define BUCK5_PD_MASK		GENMASK_32(1, 0)
#define BUCK6_PD_MASK		GENMASK_32(3, 2)
#define BUCK7_PD_MASK		GENMASK_32(5, 4)

#define BUCK5_PD_FAST		BIT(1)
#define BUCK6_PD_FAST		BIT(3)
#define BUCK7_PD_FAST		BIT(5)

/* LDOS_PD_CR1 */
#define LDO1_PD			BIT(0)
#define LDO2_PD			BIT(1)
#define LDO3_PD			BIT(2)
#define LDO4_PD			BIT(3)
#define LDO5_PD			BIT(4)
#define LDO6_PD			BIT(5)
#define LDO7_PD			BIT(6)
#define LDO8_PD			BIT(7)

/* LDOS_PD_CR2 */
#define REFDDR_PD		BIT(0)

/* FS_OCP_CR1 */
#define FS_OCP_BUCK1		BIT(0)
#define FS_OCP_BUCK2		BIT(1)
#define FS_OCP_BUCK3		BIT(2)
#define FS_OCP_BUCK4		BIT(3)
#define FS_OCP_BUCK5		BIT(4)
#define FS_OCP_BUCK6		BIT(5)
#define FS_OCP_BUCK7		BIT(6)
#define FS_OCP_REFDDR		BIT(7)

/* FS_OCP_CR2 */
#define FS_OCP_LDO1		BIT(0)
#define FS_OCP_LDO2		BIT(1)
#define FS_OCP_LDO3		BIT(2)
#define FS_OCP_LDO4		BIT(3)
#define FS_OCP_LDO5		BIT(4)
#define FS_OCP_LDO6		BIT(5)
#define FS_OCP_LDO7		BIT(6)
#define FS_OCP_LDO8		BIT(7)

enum stpmic2_prop_id {
	STPMIC2_MASK_RESET = 0,
	STPMIC2_PULL_DOWN,
	STPMIC2_BYPASS,
	STPMIC2_SINK_SOURCE,
	STPMIC2_OCP,
	STPMIC2_PWRCTRL_EN,
	STPMIC2_PWRCTRL_RS,
	STPMIC2_PWRCTRL_SEL,	/* takes arg = pwrctrl line number */
	STPMIC2_MAIN_PREG_MODE,	/* takes arg = preg mode HP=1, CCM=2 */
	STPMIC2_ALT_PREG_MODE,	/* takes arg = preg mode HP=1, CCM=2 */
	STPMIC2_BYPASS_UV,
	STPMIC2_ALTERNATE_INPUT_SOURCE,
};

#define PROP_BYPASS_RESET	U(0)
#define PROP_BYPASS_SET		U(1)

#ifdef CFG_STM32_PWR_IRQ
struct pmic_it_handle_s {
	uint8_t pmic_it;
	uint8_t notif_id;

	SLIST_ENTRY(pmic_it_handle_s) link;
};
#endif

struct pmic_handle_s {
	struct i2c_handle_s *pmic_i2c_handle;
	uint16_t pmic_i2c_addr;
	uint16_t irq_count;
#ifdef CFG_STM32_PWR_IRQ
	SLIST_HEAD(, pmic_it_handle_s) it_list;
#endif
};

TEE_Result stpmic2_register_read(struct pmic_handle_s *pmic,
				 uint8_t register_id, uint8_t *value);
TEE_Result stpmic2_register_write(struct pmic_handle_s *pmic,
				  uint8_t register_id, uint8_t value);
TEE_Result stpmic2_register_update(struct pmic_handle_s *pmic,
				   uint8_t register_id, uint8_t value,
				   uint8_t mask);

TEE_Result stpmic2_regulator_set_state(struct pmic_handle_s *pmic,
				       uint8_t id, bool enable);
TEE_Result stpmic2_regulator_get_state(struct pmic_handle_s *pmic,
				       uint8_t id, bool *enabled);

TEE_Result stpmic2_regulator_levels_mv(struct pmic_handle_s *pmic,
				       uint8_t id, const uint16_t **levels,
				       size_t *levels_count);
TEE_Result stpmic2_regulator_get_voltage(struct pmic_handle_s *pmic,
					 uint8_t id, uint16_t *val);
TEE_Result stpmic2_regulator_set_voltage(struct pmic_handle_s *pmic,
					 uint8_t id, uint16_t millivolts);

TEE_Result stpmic2_regulator_get_prop(struct pmic_handle_s *pmic, uint8_t id,
				      enum stpmic2_prop_id prop, uint8_t *arg);
TEE_Result stpmic2_regulator_set_prop(struct pmic_handle_s *pmic, uint8_t id,
				      enum stpmic2_prop_id prop, uint8_t arg);

void stpmic2_dump_regulators(struct pmic_handle_s *pmic);
TEE_Result stpmic2_get_version(struct pmic_handle_s *pmic, uint8_t *val);
TEE_Result stpmic2_get_product_id(struct pmic_handle_s *pmic, uint8_t *val);

/* Low Power handling */
TEE_Result stpmic2_lp_set_state(struct pmic_handle_s *pmic, uint8_t id,
				bool enable);
TEE_Result stpmic2_lp_set_voltage(struct pmic_handle_s *pmic, uint8_t id,
				  uint16_t mv);

/* Interrupt Handling */
enum itr_return stpmic2_irq_callback(struct pmic_handle_s *pmic, uint8_t it_id);
TEE_Result stpmic2_set_irq_mask(struct pmic_handle_s *pmic, uint8_t num,
				bool state);
TEE_Result stpmic2_irq_gen(struct pmic_handle_s *pmic, uint8_t num);
int stpmic2_handle_irq(struct pmic_handle_s *pmic);

#endif /*__STPMIC2_H__*/
