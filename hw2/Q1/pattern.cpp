#include "pattern.h"
#include <cmath>
void pattern_gen::pattern()
{

	sc_int<4> a,b;
	sc_uint<1> c_in;
	a = rand()%16;
	b = rand()%16;
	c_in = rand()%2;
	A = a; B = b; C_in = c_in; 
	
	/**************************/
	cycle++;
	if(cycle == CYCLE)
		sc_stop();
}


