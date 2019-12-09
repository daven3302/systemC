#include "systemc.h"
#include "B_point.h"
/*
    point b
*/
SC_MODULE(neural_network)
{	
	sc_in<sc_int<1> > A,B;
	sc_out<sc_int<1> > Y;
	sc_signal<sc_int<1> > O1,O2;
	void Neural_network();

	SC_CTOR(neural_network):b1("B_point1"),b2("B_point2"),b3("B_point3")
	{
		SC_METHOD(Neural_network);
		sensitive << A << B;
	}
	private:
		B_point b1,b2,b3;
};




