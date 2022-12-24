#include "main.h"


int main(void){
	port_init();
	
while(1){
	
	
	if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)==1)	
		{
		GPIO_SetBits(GPIOD,GPIO_Pin_0);
		GPIO_SetBits(GPIOD,GPIO_Pin_11);
		delay(1000000);
		GPIO_ResetBits(GPIOD,GPIO_Pin_11);
		GPIO_SetBits(GPIOD,GPIO_Pin_12);
		delay(1000000);
		GPIO_ResetBits(GPIOD,GPIO_Pin_12);
		GPIO_SetBits(GPIOD,GPIO_Pin_13);
		delay(1000000);
		GPIO_ResetBits(GPIOD,GPIO_Pin_13);
		GPIO_SetBits(GPIOD,GPIO_Pin_14);
		delay(1000000);
		GPIO_ResetBits(GPIOD,GPIO_Pin_14);
		GPIO_SetBits(GPIOD,GPIO_Pin_15);
		delay(1000000);
		GPIO_ResetBits(GPIOD,GPIO_Pin_15);
		}	else {
		GPIO_ResetBits(GPIOD,GPIO_Pin_15|GPIO_Pin_14|GPIO_Pin_13|GPIO_Pin_12|GPIO_Pin_11);
		}
	}
}
