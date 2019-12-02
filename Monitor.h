#include "systemc.h"
#include <iostream>

using namespace std;

SC_MODULE(Monitor)
{	
	sc_in_clk clock;
	sc_in<sc_int<4> > A,B,S;
	sc_in<sc_uint<1> > C_in,C_out;
	sc_int<4> a,b,s;

	void monitor();
	
	SC_CTOR(Monitor)
	{	

		SC_METHOD(monitor);
		sensitive << clock.pos();
	}
};

