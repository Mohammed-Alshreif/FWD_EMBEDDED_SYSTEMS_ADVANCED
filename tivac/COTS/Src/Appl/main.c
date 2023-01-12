#include "STK.h"
#include "GPIO.h"
#include "stdint.h"

uint8_t T ;
uint8_t PIN ;
uint8_t T_ON ;
uint8_t T_OFF ;

void FUNCTION (void);
void FUNCTION (void)
{

	GPIO_Flippin(PIN);//togle the led
	T	= T_OFF;       //swap -ve to +ve
  T_OFF = T_ON;
  T_ON = T;
	STK_control(T_ON,&FUNCTION);//load the value to the timer
}
int main(void)
{
  T_ON =5;// +ve
	T_OFF=1;//-ve
  STK_Init(); //init the timer
	
	
	PORT_PinConfig data ={PORTA,PORT_PIN1,GPIO,OUTPUT,LOW,OUTPUT_2_MA};
  GPIO_init(&data);
	PIN = GPIO_Writepin(PA1,GPIO_HIGH);
	
  STK_control(T_ON,&FUNCTION);//load the value to the timer

	while(1)
	{
		//the code
	}
	
	return 0;
}

