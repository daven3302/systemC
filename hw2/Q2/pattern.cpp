#include "pattern.h"
#include <cmath>
void pattern_gen::pattern()
{

	sc_int<1> a,b;
	a = rand()%2;
	b = rand()%2;
	A = a; B = b; 
	
	/**************************/
	cycle++;
	if(cycle == CYCLE)
		sc_stop();
}


