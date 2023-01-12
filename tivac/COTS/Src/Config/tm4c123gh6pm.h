#ifndef tm4c123gh6pm_H
#define tm4c123gh6pm_H

#include "TYPES.h"
#define bit_band_alias        0x42000000
//=======================  GPIO ============================

#define GPIOA_Base           	    0x40058000
#define GPIOB_Base                0x40059000
#define GPIOC_Base         		    0x4005A000
#define GPIOD_Base         		    0x4005B000
#define GPIOE_Base         		    0x4005C000
#define GPIOF_Base         		    0x4005D000
#define GPIODATA_PORTA        *((volatile u32*)0x400583FC)
#define GPIODATA_PORTB        *((volatile u32*)0x400593FC)	
#define GPIODATA_PORTC        *((volatile u32*)0x4005A3FC)
#define GPIODATA_PORTD        *((volatile u32*)0x4005B3FC)
#define GPIODATA_PORTE        *((volatile u32*)0x4005C3FC)
#define GPIODATA_PORTF        *((volatile u32*)0x4005D3FC)
//=======================SYSTICK  ========================
#define STK_Base          0xE000E000
#define STK_CTRL       *((volatile u32*)(STK_Base+0x010 ))
#define STK_RELOAD      *((volatile u32*)(STK_Base+0x014 ))
#define STK_CURRENT    *((volatile u32*)(STK_Base+0x018 ))

#endif