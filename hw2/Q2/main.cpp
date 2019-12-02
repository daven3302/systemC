#include "neutal_network.h"
#include "pattern.h"
#include "Monitor.h"
#include "clockreset.h"
#include <iostream>

using namespace std;

int sc_main(int argc,char* argv[])
{
	sc_signal<bool> clk,reset;
	sc_signal<sc_int<1> > A,B;
	sc_signal<sc_int<1> > Y;
	
	pattern_gen pattern("Generation");
	neural_network Net("Neural_network");
	Monitor mon("mon");
	Clock clock("clock",10);
	
	clock(clk);
	pattern(clk,A,B);
	Net(A,B,Y);
	mon(clk,A,B,Y);
	
	
	sc_start(500,SC_NS);
	return 0;

}


