#include <cstdint>
#include "Args.hpp"

class X00{

private:
	Args* args;
public:
	X00(Args* args_){
		args = args_;
	}

void prim(int i);
void sec();
void tst();
bool wait(uint32_t i);
void run();

};
