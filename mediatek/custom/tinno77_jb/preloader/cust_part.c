#include "typedefs.h"
#include "platform.h"
#include "blkdev.h"
#include "cust_part.h"

static part_t platform_parts[PART_MAX_COUNT] = {
	{PART_PRELOADER, 0, PART_SIZE_PRELOADER, 0,PART_FLAG_NONE},
	{PART_DSP_BL, 0, PART_SIZE_DSP_BL, 0,PART_FLAG_NONE},
	{PART_MBR, 0, PART_SIZE_MBR, 0,PART_FLAG_NONE},
	{PART_EBR1, 0, PART_SIZE_EBR1, 0,PART_FLAG_NONE},
	{PART_PMT, 0, PART_SIZE_PMT, 0,PART_FLAG_NONE},
	{PART_NVRAM, 0, PART_SIZE_NVRAM, 0,PART_FLAG_NONE},
	{PART_SECURE, 0, PART_SIZE_SECCFG, 0,PART_FLAG_NONE},
	{PART_UBOOT, 0, PART_SIZE_UBOOT, 0,PART_FLAG_NONE},
	{PART_BOOTIMG, 0, PART_SIZE_BOOTIMG, 0,PART_FLAG_NONE},
	{PART_RECOVERY, 0, PART_SIZE_RECOVERY, 0,PART_FLAG_NONE},
	{PART_SECSTATIC, 0, PART_SIZE_SEC_RO, 0,PART_FLAG_NONE},
	{PART_MISC, 0, PART_SIZE_MISC, 0,PART_FLAG_NONE},
	{PART_LOGO, 0, PART_SIZE_LOGO, 0,PART_FLAG_NONE},
	{PART_EXPDB, 0, PART_SIZE_EXPDB, 0,PART_FLAG_NONE},
	{PART_ANDSYSIMG, 0, PART_SIZE_ANDROID, 0,PART_FLAG_NONE},
	{PART_CACHE, 0, PART_SIZE_CACHE, 0,PART_FLAG_NONE},
	{PART_USER, 0, PART_SIZE_USRDATA, 0,PART_FLAG_NONE},
	{PART_FAT, 0, PART_SIZE_FAT, 0,PART_FLAG_NONE},
	{NULL,0,0,0,PART_FLAG_END},
};

void cust_part_init(void){}

part_t *cust_part_tbl(void)
{
	 return &platform_parts[0];
}

