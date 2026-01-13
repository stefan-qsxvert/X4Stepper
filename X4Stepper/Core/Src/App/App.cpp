#include "Args.hpp"
#include <iostream>
#include <cstdint>

class App{

private:
	Args args;
public:
	App(Args args_){
		args = args_;
	};

void run(){
	args.setADCWait(1024);
	uint32_t v =  args.getADCWait();
//	std::cout << v;

};


};
