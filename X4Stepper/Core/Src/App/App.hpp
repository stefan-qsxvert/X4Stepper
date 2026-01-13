
#ifndef SRC_APP_HPP_
#define SRC_APP_HPP
#endif

#pragma once

#include <iostream>
#include "Args.hpp"
#include <cstdint>

class App{

private:
Args* args;

public:
	App(Args* args_){
		args = args_;
	}

void run();


};
