#include "stm32f10x.h"
#include  "./led/bsp_led.h"
#include "bsp_key.h"


int main(void)	
{
	Led_GPIO_Config();
	key1_gpio_Config();
	LED1(1);
	LED2(0);
	while(1)
	{
//		if(GPIO_ReadInputDataBit(KEY1_PORT, KEY1_PIN) == Bit_SET)
//		{
//			LED1(1);
//		}
//		LED1(0);
	}


}


