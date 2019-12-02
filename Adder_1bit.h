#include "systemc.h"
SC_MODULE(Adder_1bit)
{	
	sc_in<sc_uint<1> > A,B,C_in;
	sc_out<sc_uint<1> > S,C_out;
	sc_uint<1> a,b,c_in,s,c_out;

	void adder_1bit();
	
	SC_CTOR(Adder_1bit)
	{
		SC_METHOD(adder_1bit);
		sensitive << A << B << C_in;
	}
};




