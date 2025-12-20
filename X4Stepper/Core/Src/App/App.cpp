/*
 * App.cpp
 *
 *  Created on: 20 gru 2025
 *      Author: stefa
 */

#include <iostream>
#include "App.hpp"
#include "stm32f4xx_hal.h"


//class App{

//public:



void App::prim(int i){
	 std::cout << "test" << std::endl;
}

void App::sec(){
	HAL_GPIO_ReadPin( GPIOA, GPIO_PIN_7);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
}

//};
