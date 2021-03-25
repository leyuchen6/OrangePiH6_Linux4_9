/*
 * drivers/power/axp/axp22x/axp22x-charger.h
 * (C) Copyright 2010-2016
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Pannan <pannan@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 */

#ifndef AXP22X_CHARGER_H
#define AXP22X_CHARGER_H
#include "axp22x.h"

#define AXP22X_CHARGE_STATUS             AXP22X_STATUS
#define AXP22X_IN_CHARGE                 (1 << 6)
#define AXP22X_PDBC                      (0x32)
#define AXP22X_CHARGE_CONTROL1           AXP22X_CHARGE1
#define AXP22X_CHARGER_ENABLE            (1 << 7)
#define AXP22X_CHARGE_CONTROL2           AXP22X_CHARGE2
#define AXP22X_CHARGE_VBUS               AXP22X_IPS_SET
#define AXP22X_CAP                       (0xB9)
#define AXP22X_BATCAP0                   (0xe0)
#define AXP22X_BATCAP1                   (0xe1)
#define AXP22X_COUCNT0                   (0xe2)
#define AXP22X_COUCNT1                   (0xe3)
#define AXP22X_OCV_PERCENT               (0xe4)
#define AXP22X_COU_PERCENT               (0xe5)
#define AXP22X_RDC0                      (0xba)
#define AXP22X_RDC1                      (0xbb)
#define AXP22X_WARNING_LEVEL             (0xe6)
#define AXP22X_ADJUST_PARA               (0xe8)
#define AXP22X_FAULT_LOG1                AXP22X_MODE_CHGSTATUS
#define AXP22X_FAULT_LOG_CHA_CUR_LOW     (1 << 2)
#define AXP22X_FAULT_LOG_BATINACT        (1 << 3)
#define AXP22X_FAULT_LOG_OVER_TEMP       (1 << 7)
#define AXP22X_FAULT_LOG2                AXP22X_INTSTS2
#define AXP22X_FAULT_LOG_COLD            (1 << 0)
#define AXP22X_FINISH_CHARGE             (1 << 2)
#define AXP22X_COULOMB_CONTROL           AXP22X_COULOMB_CTL
#define AXP22X_COULOMB_ENABLE            (1 << 7)
#define AXP22X_COULOMB_SUSPEND           (1 << 6)
#define AXP22X_COULOMB_CLEAR             (1 << 5)

#define AXP22X_ADC_CONTROL               AXP22X_ADC_EN
#define AXP22X_ADC_BATVOL_ENABLE         (1 << 7)
#define AXP22X_ADC_BATCUR_ENABLE         (1 << 6)
#define AXP22X_ADC_DCINVOL_ENABLE        (1 << 5)
#define AXP22X_ADC_DCINCUR_ENABLE        (1 << 4)
#define AXP22X_ADC_USBVOL_ENABLE         (1 << 3)
#define AXP22X_ADC_USBCUR_ENABLE         (1 << 2)
#define AXP22X_ADC_APSVOL_ENABLE         (1 << 1)
#define AXP22X_ADC_TSVOL_ENABLE          (1 << 0)
#define AXP22X_ADC_INTERTEM_ENABLE       (1 << 7)
#define AXP22X_ADC_GPIO0_ENABLE          (1 << 3)
#define AXP22X_ADC_GPIO1_ENABLE          (1 << 2)
#define AXP22X_ADC_GPIO2_ENABLE          (1 << 1)
#define AXP22X_ADC_GPIO3_ENABLE          (1 << 0)
#define AXP22X_ADC_CONTROL3              (0x84)
#define AXP22X_VBATH_RES                 (0x78)
#define AXP22X_IBATH_REG                 (0x7a)
#define AXP22X_DISIBATH_REG              (0x7c)
#define AXP22X_VTS_RES                   (0x58)
#define AXP22X_VBATL_RES                 (0x79)
#define AXP22X_OCVBATH_RES               (0xBC)
#define AXP22X_OCVBATL_RES               (0xBD)
#define AXP22X_OCV_BASE                  (0xC0)
#define AXP22X_INTTEMP                   (0x56)
#define AXP22X_DATA_BUFFER0              AXP22X_BUFFER1
#define AXP22X_DATA_BUFFER1              AXP22X_BUFFER2
#define AXP22X_DATA_BUFFER2              AXP22X_BUFFER3
#define AXP22X_DATA_BUFFER3              AXP22X_BUFFER4
#define AXP22X_DATA_BUFFER4              AXP22X_BUFFER5
#define AXP22X_DATA_BUFFER5              AXP22X_BUFFER6
#define AXP22X_DATA_BUFFER6              AXP22X_BUFFER7
#define AXP22X_DATA_BUFFER7              AXP22X_BUFFER8
#define AXP22X_DATA_BUFFER8              AXP22X_BUFFER9
#define AXP22X_DATA_BUFFER9              AXP22X_BUFFERA
#define AXP22X_DATA_BUFFERA              AXP22X_BUFFERB
#define AXP22X_DATA_BUFFERB              AXP22X_BUFFERC

#define AXP_CHG_ATTR(_name)                     \
{                                               \
	.attr = { .name = #_name, .mode = 0644 },    \
	.show =  _name##_show,                      \
	.store = _name##_store,                     \
}

#define AXP22X_VOL_MAX       1       /* capability buffer length */
#define AXP22X_TIME_MAX      20
#define AXP22X_AVER_MAX      10
#define AXP22X_RDC_COUNT     10

#endif /* AXP22X_CHARGER_H */
