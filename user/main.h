#ifndef MAIN_H_
#define MAIN_H_


#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "ports.h"

void port_init(void);
void delay(int n);

void port_init(void){
	GPIO_InitTypeDef initD;
	GPIO_InitTypeDef initA;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
	//LEDs
	initD.GPIO_Pin = GPIO_Pin_All;
	initD.GPIO_Mode = GPIO_Mode_OUT;	
	initD.GPIO_OType  = GPIO_OType_PP;
	initD.GPIO_PuPd = GPIO_PuPd_NOPULL;
	initD.GPIO_Speed = GPIO_Speed_2MHz;
	
	//But
	initA.GPIO_Pin = GPIO_Pin_All;
	initA.GPIO_Mode = GPIO_Mode_IN;	
	initA.GPIO_OType  = GPIO_OType_PP;
	initA.GPIO_PuPd = GPIO_PuPd_NOPULL;
	initA.GPIO_Speed = GPIO_Speed_2MHz;
	
	
	
	GPIO_Init(GPIOD,&initD);
	GPIO_Init(GPIOA,&initA);


}

void delay(int n)
{
 while(n > 0) n--;
}



#endif //MAIN_H_






