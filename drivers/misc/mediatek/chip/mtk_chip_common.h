/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __MT_CHIP_COMMON_H__
#define __MT_CHIP_COMMON_H__
#include <mt-plat/mtk_chip.h>

#define CHIP_INFO_BIT(ID) (2 << ID)
#define CHIP_INFO_SUP(MASK, ID) ((MASK & CHIP_INFO_BIT(ID)) ? (1) : (0))

#define C_UNKNOWN_CHIP_ID (0x0000FFFF)

/* HW CODE 0x0551 and HW_SUBCODE 0x8A00 */
#define MT6757_SOC_ID	0x05518A00
/* HW CODE 0x0766 and HW_SUBCODE 0x8A00 */
#define MT6762_SOC_ID	0x07668A00

struct mt_chip_drv {
    /* raw information */
	unsigned int info_bit_mask;
	unsigned int (*get_chip_info)(unsigned int id);
};

typedef unsigned int (*chip_info_cb)(void);
struct mt_chip_drv *get_mt_chip_drv(void);


#endif
