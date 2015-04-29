#ifndef __DISCOVER_BOARD_H
#define __DISCOVER_BOARD_H

#include "stm32l1xx.h"  

#define bool _Bool
#define FALSE 0
#define TRUE !FALSE

#define GPIO_HIGH(a,b) 		a->BSRRL = b
#define GPIO_LOW(a,b)		a->BSRRH = b
#define GPIO_TOGGLE(a,b) 	a->ODR ^= b 

#define USERBUTTON_GPIO_PORT	GPIOA
#define USERBUTTON_GPIO_PIN     GPIO_Pin_0
#define USERBUTTON_GPIO_CLK     RCC_AHBPeriph_GPIOA

#define LD_GPIO_PORT 			GPIOB
#define LD_GREEN_GPIO_PIN 		GPIO_Pin_7
#define LD_BLUE_GPIO_PIN        GPIO_Pin_6
#define LD_GPIO_PORT_CLK    	RCC_AHBPeriph_GPIOB

#define CTN_GPIO_PORT           GPIOC
#define CTN_CNTEN_GPIO_PIN      GPIO_Pin_13
#define CTN_GPIO_CLK            RCC_AHBPeriph_GPIOC

#define WAKEUP_GPIO_PORT        GPIOA

#define IDD_MEASURE_PORT	GPIOA
#define IDD_MEASURE             GPIO_Pin_4

#endif

