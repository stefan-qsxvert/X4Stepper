//#ifndef SRC_APP_CPP_
//#define SRC_APP_CPP

#include "App.hpp"

void App::run(){
//	HAL_ADC_Start(&hadc1);
//	App* app = new App();
	uint32_t t = 0;

		if (App::wait(100)){
			t = HAL_GetTick() + 100;
			std::cout << t - 100;
		}
	}

void App::prim(int i){
	 std::cout << "test" << std::endl;

	 HAL_ADC_Start(&hadc1);                      // uruchom konwersję
	 HAL_ADC_PollForConversion(&hadc1, 10);      // czekaj na zakończenie
	 uint32_t value = HAL_ADC_GetValue(&hadc1);  // pobierz wynik
}

void App::sec(){
	HAL_GPIO_ReadPin( GPIOA, GPIO_PIN_7);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
}

void App::tst(){
	uint64_t t = HAL_GetTick();
	std::cout << t;
}

bool App::wait(uint32_t i){
    return HAL_GetTick() >= i;
}
