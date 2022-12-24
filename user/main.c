#include "main.h"


int main(void){
	port_init();
	
while(1){

	
		GPIOD->ODR = (1<<PORT12) | (1<<PORT13);
		delay(2000000);
		GPIOD->ODR = (1<<PORT13) | (1<<PORT14);
		delay(2000000);
		GPIOD->ODR = (1<<PORT14) | (1<<PORT15);
		delay(2000000);
		GPIOD->ODR = (1<<PORT15) | (1<<PORT12);
		delay(2000000);
		GPIOD->ODR = (1<<PORT0);
		delay(2000000);
}

}
