#include "bsp_key.h"

/*
 * 说	明: 按键引脚配置
 *
 */
void key1_gpio_Config(void)
{
	 GPIO_InitTypeDef GPIO_InitStruct;
	 
	/* 第一步：打开外设时钟*/
	RCC_APB2PeriphClockCmd(KEY1_CLK, ENABLE);
	 
	/*第二步：配置初始化结构体*/
	GPIO_InitStruct.GPIO_Pin = KEY1_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;

	/*调用初始化函数，把配置好的结构体成员写到寄存器里*/
	GPIO_Init(KEY1_PORT, &GPIO_InitStruct);
}

