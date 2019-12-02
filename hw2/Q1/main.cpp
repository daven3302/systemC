#include "full_Adder.h"
#include "pattern.h"
#include "Monitor.h"
#include "clockreset.h"
#include <iostream>

using namespace std;

int sc_main(int argc,char* argv[])
{
	sc_signal<bool> clk,reset;
	sc_signal<sc_int<4> > A,B,S;
	sc_signal<sc_uint<1> > C_in,C_out;
	
	pattern_gen pattern("Generation");
	full_Adder adder_4bit("full_adder");
	Monitor mon("mon");
	Clock clock("clock",10);
	
	clock(clk);
	pattern(clk,A,B,C_in);
	adder_4bit(A,B,C_in,S,C_out);
	mon(clk,A,B,S,C_in,C_out);
	
	
	sc_start(500,SC_NS);
	return 0;

}


