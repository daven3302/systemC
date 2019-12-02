#include "systemc.h"
//#include "B_point.h"
/*
    point b
*/
SC_MODULE(neural_network)
{	
	sc_in<sc_int<1> > A,B;
	sc_out<sc_int<1> > Y;
	sc_int<1> a,b,y;
    
	void Neural_network();

	SC_CTOR(neural_network)
	{
		SC_METHOD(Neural_network);
		sensitive << A << B;
	}
};




