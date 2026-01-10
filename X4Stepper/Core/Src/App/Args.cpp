
#include <cstdint>
#include <iostream>
#include "Args.hpp"

	uint32_t Args::getADCWait(){
		return ADCWait;
	}

	void Args::setADCWait(uint32_t v){
		ADCWait = v;
	}
