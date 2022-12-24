#ifndef MAIN_H_
#define MAIN_H_


#include "stm32f4xx.h"
#include "ports.h"

void port_init(void);
void delay(int n);

void port_init(void){

	RCC->AHB1ENR  |= RCC_AHB1ENR_GPIODEN;
 	//GPIOD->MODER = 0x40000000;
	GPIOD->MODER = 0x55000001;
	GPIOD->OTYPER = 0;
	GPIOD->OSPEEDR = 0;


}

void delay(int n)
{
 while(n > 0) n--;
}



#endif //MAIN_H_






