//#ifndef SRC_APP_CPP_
//#define SRC_APP_CPP


#include "X00.hpp"
#include "stm32f4xx_hal.h"
#include <cstdint>
#include <iostream>
#include "adc.h"

void X00::run(){
//	HAL_ADC_Start(&hadc1);
//	App* app = new App();
	uint32_t t = 0;

		if (X00::wait(100)){
			t = HAL_GetTick() + 100;
			std::cout << t - 100;
		}
	}

void X00::prim(int i){
	 std::cout << "test" << std::endl;

	 HAL_ADC_Start(&hadc1);                      // uruchom konwersję
	 HAL_ADC_PollForConversion(&hadc1, 10);      // czekaj na zakończenie
	 uint32_t value = HAL_ADC_GetValue(&hadc1);  // pobierz wynik
}

void X00::sec(){
	HAL_GPIO_ReadPin( GPIOA, GPIO_PIN_7);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
}

void X00::tst(){
	uint64_t t = HAL_GetTick();
	std::cout << t;
}

bool X00::wait(uint32_t i){
    return HAL_GetTick() >= i;
}
