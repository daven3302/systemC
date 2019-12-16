#include "systemc.h"
#include <iostream>

using namespace std;

SC_MODULE(Monitor)
{	
	sc_in_clk clock;
	sc_in<float> result;
	int t;
	void monitor();
	
	SC_CTOR(Monitor)
	{	
		SC_METHOD(monitor);
		t = 0;
		sensitive << result;
	}
};

