/*
 * @Descripttion: Header file of AW87579
 * @version: 0.0.2
 * @Author: yulei
 * @Date: 2020-04-13 09:39:32
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2020-04-21 11:46:21
 */
#ifndef __AW87579_H__
#define __AW87579_H__

#define AW87579_REG_CHIPID		0x00
#define AW87579_REG_SYSCTRL		0x01
#define AW87579_REG_BATSAFE		0x02
#define AW87579_REG_BSTOVR		0x03
#define AW87579_REG_BSTVPR		0x04
#define AW87579_REG_PAGR		0x05
#define AW87579_REG_PAGC3OPR	0x06
#define AW87579_REG_PAGC3PR		0x07
#define AW87579_REG_PAGC2OPR	0x08
#define AW87579_REG_PAGC2PR		0x09
#define AW87579_REG_PAGC1PR		0x0A

#define AW87579_CHIPID			0x5A

/********************************************
 * Register Access
 *******************************************/
#define AW87579_REG_MAX			16

#define AW87579_REG_NONE_ACCESS		0
#define AW87579_REG_RD_ACCESS		(1 << 0)
#define AW87579_REG_WR_ACCESS		(1 << 1)

const unsigned char AW87579_reg_access[AW87579_REG_MAX] = {
	[AW87579_REG_CHIPID]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_SYSCTRL]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_BATSAFE]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_BSTOVR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_BSTVPR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_PAGR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_PAGC3OPR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_PAGC3PR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_PAGC2OPR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_PAGC2PR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,
	[AW87579_REG_PAGC1PR]	= AW87579_REG_RD_ACCESS | AW87579_REG_WR_ACCESS,

};
#endif
