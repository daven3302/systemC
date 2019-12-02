#include "systemc.h"
/*
    4 bit full_adder
*/

#define BIT_SIZE 4
SC_MODULE(full_Adder)
{	
	sc_in<sc_int<4> > A,B;
    sc_in<sc_uint<1> > C_in;
	sc_out<sc_int<4> > S;
    sc_out<sc_uint<1> > C_out;
	sc_int<4> a,b,s;
	sc_int<5> c;
	sc_uint<1> c_in,c_out;

	void full_adder();
	
	SC_CTOR(full_Adder)
	{
		SC_METHOD(full_adder);
		sensitive << A << B << C_in;
	}
};




