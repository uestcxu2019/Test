#ifndef __BSP_KEY_H
#define __BSP_KEY_H

#include "stm32f10x.h"


#define  KEY1_CLK 		RCC_APB2Periph_GPIOA
#define  KEY1_PORT		GPIOA
#define  KEY1_PIN		GPIO_Pin_0

 void key1_gpio_Config(void);

#endif /*__BSP_KEY_H*/
