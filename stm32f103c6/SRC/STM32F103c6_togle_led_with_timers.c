#include "STM32_TIMERS_DRIVER.h"
#include "GPIO_DRIVER.h"
int main(void)
{
	GPIOA_Clock_Enable();//enable porta clock
    AFIO_Clock_Enable();//enable AF io clock
	pinmode(GPIOA, pin1, GPIO_MODE_OUTPUT_AF_push_pull_Speed50);
	delay(200, U_ms,8000000);
	while(1){
		delay(5000, U_ms,8000000);
		pinwrite(GPIOA, pin1 ,HIGH);
		delay(1000, U_ms,8000000);
		pinwrite(GPIOA, pin1 ,LOW);
		
	}

}