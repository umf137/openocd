

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "imp.h"
#include <helper/binarybuffer.h>
#include <target/algorithm.h>
#include <target/armv7m.h>
#include "at32xx.h"


/*403/413/415/403a/407/421/wb415*/
#define AT32_FLASH_BANK1_REG_1              0x40022000
#define AT32_FLASH_BANK2_REG_1              0x40022040


/*403/413/415/403a/407/421/wb415*/

#define AT32_BANK1_BASE_ADDR_2              0x40023C00
#define AT32_BANK2_BASE_ADDR_2              0x40023C40


#define AT32_USD_ADDR_1                     0x1FFFF800
#define AT32_USD_ADDR_2                     0x1FFFFC00


mcu_type_info at32_mcu_type[NUM_OF_MCU_TYPE] = 
{
    //project id             
	{AT32F403XX_ID,   AT32_FLASH_BANK1_REG_1, AT32_FLASH_BANK2_REG_1, AT32_USD_ADDR_1, "at32403xx"},
	{AT32F413XX_ID,   AT32_FLASH_BANK1_REG_1, 0, AT32_USD_ADDR_1, "at32f413xx"},
	{AT32F415XX_ID,   AT32_FLASH_BANK1_REG_1, 0, AT32_USD_ADDR_1, "at32f415xx"},
	{AT32F403AXX_ID,  AT32_FLASH_BANK1_REG_1, AT32_FLASH_BANK2_REG_1, AT32_USD_ADDR_1, "at32f403axx"},
	{AT32F407XX_ID,   AT32_FLASH_BANK1_REG_1, AT32_FLASH_BANK2_REG_1, AT32_USD_ADDR_1, "at32f407xx"},
	{AT32F421XX_ID,   AT32_FLASH_BANK1_REG_1, 0, AT32_USD_ADDR_1, "at32f421xx"},
	{AT32F435XX_ID,   AT32_BANK1_BASE_ADDR_2, AT32_BANK2_BASE_ADDR_2, AT32_USD_ADDR_2, "at32f435xx"},
	{AT32F437XX_ID,   AT32_BANK1_BASE_ADDR_2, AT32_BANK2_BASE_ADDR_2, AT32_USD_ADDR_2, "at32f437xx"},
	{AT32F425XX_ID,   AT32_FLASH_BANK1_REG_1, 0, AT32_USD_ADDR_1, "at32f425xx"},
	{AT32L021XX_ID,   AT32_FLASH_BANK1_REG_1, 0, AT32_USD_ADDR_1, "at32l021xx"},
	{AT32WB415XX_ID,  AT32_FLASH_BANK1_REG_1, 0, AT32_USD_ADDR_1, "at32wb415xx"},
	{AT32F423XX_ID,   AT32_BANK1_BASE_ADDR_2, 0, AT32_USD_ADDR_1, "at32f423xx"},
	{0,  0, 0, 0, "at32xx"},
};



