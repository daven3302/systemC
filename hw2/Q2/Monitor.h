#include "systemc.h"
#include <iostream>

using namespace std;

SC_MODULE(Monitor)
{	
	sc_in_clk clock;
	sc_in<sc_int<1> > A,B,Y;
	void monitor();
	
	SC_CTOR(Monitor)
	{	

		SC_METHOD(monitor);
		sensitive << clock.pos();
	}
};

