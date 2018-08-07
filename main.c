#include "Board_LED.h"
#include <stdint.h>

uint32_t value = 0;

void delay(void)
{
	for(uint32_t i=0; i<500000; i++);
}

void read_ram(void)
{
	uint32_t *addr = (uint32_t*)0x20000000;
	value = *addr;
}

int main(void)
{
	read_ram();
	LED_Initialize();
	while(1)
	{
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
