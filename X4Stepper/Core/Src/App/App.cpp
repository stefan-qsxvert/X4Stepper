#include "Args.hpp"
#include "App.hpp"
#include <iostream>
#include <cstdint>
#include "X00.hpp"



void App::run(){

	args->setADCWait(1024);
	uint32_t v =  args->getADCWait();
	std::cout << v;

};



