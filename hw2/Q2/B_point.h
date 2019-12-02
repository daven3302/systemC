#include "systemc.h"
/*
    point b
*/
SC_MODULE(B_point)
{	
	sc_in<sc_int<1> > X1,X2,B,W1,W2;
	sc_out<sc_int<1> > O;
	sc_int<1> x1,x2,b,o,w1,w2;

	void node();
	void initial();
	SC_CTOR(B_point)
	{
		SC_METHOD(node);
		sensitive << X1 << X2 << B << W1 << W2;
	}
};




