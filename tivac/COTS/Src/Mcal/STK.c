
#include "tm4c123gh6pm.h"
#include "STK.h"


static void(*STK_PTR)(void)  ; //pointer to function
static unsigned int count =0;            //numper of blocks of ticks
static unsigned int TIME =0;             //numper of ticks
void STK_Init(void)
{
	/* 
	-Disable Timer 
	-select the CLK Source 
	-Enable interrupt
	*/
STK_CTRL = 0x00000006; //control register

}
void STK_control(u8 TIME_SECONDS, void(*PTR_FUNC)(void))
{

/* Set Load Register */
	if (TIME_SECONDS >= 1){
	STK_RELOAD = 12000000; //1 second or 1 block
	}
/* Enable Timer */
STK_CTRL = 0x00000007;	
	
/* Set Callback */
STK_PTR = PTR_FUNC ;
TIME = TIME_SECONDS;//set time
}

void SysTick_Handler(void) //isr_ handler
{
if(count == TIME-1)
{
STK_CTRL = 0x00000006;/*enable*/
STK_RELOAD = 0x00000000;
STK_CURRENT = 0x00000000; //reser timer
count=0;	//rest block
STK_PTR(); //call functin
}
else {count++;} //add block 1 sec

}
