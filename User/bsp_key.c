#include "bsp_key.h"

/*
 * ˵	��: ������������
 *
 */
void key1_gpio_Config(void)
{
	 GPIO_InitTypeDef GPIO_InitStruct;
	 
	/* ��һ����������ʱ��*/
	RCC_APB2PeriphClockCmd(KEY1_CLK, ENABLE);
	 
	/*�ڶ��������ó�ʼ���ṹ��*/
	GPIO_InitStruct.GPIO_Pin = KEY1_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;

	/*���ó�ʼ�������������úõĽṹ���Աд���Ĵ�����*/
	GPIO_Init(KEY1_PORT, &GPIO_InitStruct);
}

