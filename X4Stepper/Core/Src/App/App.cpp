#include "Args.hpp"
#include "App.hpp"
#include <iostream>
#include <cstdint>



void App::run(){

//	App app
	args->setADCWait(1024);
//	App::args.setADCWait(1024);
	uint32_t v =  args->getADCWait();
	std::cout << v;

};



