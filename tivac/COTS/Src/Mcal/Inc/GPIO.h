#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
#include "TYPES.h"
#include "tm4c123gh6pm.h"

#define GPIO              1
/*       pins    */
#define PORT_PIN0         0
#define PORT_PIN1         1
#define PORT_PIN2         2
#define PORT_PIN3         3
#define PORT_PIN4         4
#define PORT_PIN5         5
#define PORT_PIN6         6
#define PORT_PIN7         7
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*       ports    */
#define PORTA         0
#define PORTB         1
#define PORTC         2
#define PORTD         3
#define PORTE         4
#define PORTF         5
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
                          /* Macros for Pin Value */
#define HIGH                       1
#define LOW                        0
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
                          /* Macros for mode Value */
#define INPUT                       1
#define OUTPUT                      0
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
/* INPUT */
#define INPUT_FLOATING          0
#define INPUT_PULL_DOWN         1
#define INPUT_PULL_UP           2

/* Output */
#define OUTPUT_FLOATING          3
#define OUTPUT_OPEN_DRAIN        4
#define OUTPUT_2_MA              5
#define OUTPUT_4_MA              6
#define OUTPUT_8_MA              7

/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
   
#define GPIODATA   0x000
#define GPIODIR    0x400
#define GPIODEN    0x51C
#define GPIOODR    0x50C
#define GPIOPUR    0x510
#define GPIOPDR    0x514
#define GPIODR2R   0x500
#define GPIODR4R   0x504
#define GPIODR8R   0x508
#define RCGCGPIO   0x608



/*       pins    */
#define PA0         0
#define PA1         1
#define PA2         2
#define PA3         3
#define PA4         4
#define PA5         5
#define PA6         6
#define PA7         7
#define PB0         8
#define PB1         9
#define PB2         10
#define PB3         11
#define PB4         12
#define PB5         13
#define PB6         14
#define PB7         15
#define PC0         16
#define PC1         17
#define PC2         18
#define PC3         19
#define PC4         20
#define PC5         21
#define PC6         22
#define PC7         23
#define PD0         24
#define PD1         25
#define PD2         26
#define PD3         27
#define PD4         28
#define PD5         29
#define PD6         30
#define PD7         31
#define PE0         32
#define PE1         33
#define PE2         34
#define PE3         35
#define PE4         36
#define PE5         37
#define PF0         38
#define PF1         39
#define PF2         40
#define PF3         41
#define PF4         42

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*       ports    */
#define GPIO_PORTA         0
#define GPIO_PORTB         1
#define GPIO_PORTC         2
#define GPIO_PORTD         3
#define GPIO_PORTE         4
#define GPIO_PORTF         5
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
                          /* Macros for Pin Value */
#define GPIO_HIGH                       1
#define GPIO_LOW                        0


/***********************************/
typedef struct
{
	u8 PortId;
	u8 PinId;
  u8 PinMode;
	u8 Pindir;
	u8 pinlevel;
	u8 pinstatus;

}PORT_PinConfig;

//==========================================================
/****************-------API--------************************/
void GPIO_init(PORT_PinConfig* info);
u8 GPIO_Writepin(u8 Pin_number , u8 Pin_level);
void GPIO_Flippin(u8 Pin_number);



#endif