
#ifndef SRC_APP_HPP_
#define SRC_APP_HPP

#endif /* SRC_APP_HPP_ */

#include <iostream>
#include "stm32f4xx_hal.h"
#include "adc.h"
#include <cstdint>

class App{

public:

void prim(int i);
void sec();
void tst();
bool wait(uint32_t i);
void run();

};
