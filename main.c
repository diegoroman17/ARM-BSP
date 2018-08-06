#include "Board_LED.h"
#include <stdint.h>

void delay(void)
{
	for(uint32_t i=0; i<500000; i++);
}

int main(void)
{
	while(1)
	{
		LED_Initialize();
		LED_On(0);
		LED_On(1);
		LED_On(2);
		LED_On(3);
		delay();
		LED_Off(0);
		LED_Off(1);
		LED_Off(2);
		LED_Off(3);
		delay();
	}
	return 0;
}
