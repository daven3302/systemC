#include "systemc.h"
#include "full_adder_1bit.h"
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
	sc_uint<5> c;
	sc_int<1> a1,b1,s1;
	sc_uint<1> cc1,co1;
	sc_signal<sc_int<1> > aa,bb,ss;
	sc_signal<sc_uint<1> > cc,co;
	bit_adder u1,u2,u3,u4;
	void full_adder();
	
	SC_CTOR(full_Adder):u1("u1"),u2("u2"),u3("u3"),u4("u4")
	{
		SC_METHOD(full_adder);
		sensitive << A << B << C_in;
	}
};




