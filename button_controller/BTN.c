#include "discover_board.h"
#include "stm32l1xx.h"
#include "stm32l1xx_gpio.h"
#include "stm32l1xx_rcc.h"

void init_btn(){

	GPIO_InitTypeDef GPIO_InitStructure;

	/* Enable GPIOs clock (only port A for USR BTN) */
	  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA , ENABLE);
//	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,  ENABLE);
	/* Configure Output for LCD */
	  /* Port A */
	  GPIO_StructInit(&GPIO_InitStructure);
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	  GPIO_InitStructure.GPIO_Mode =  GPIO_Mode_IN;
	  GPIO_Init( GPIOA, &GPIO_InitStructure);

}

bool is_btn_clicked(){
	return GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0);
}
