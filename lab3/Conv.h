#include "systemc.h"

SC_MODULE(CONV)
{	
	sc_in_clk clk;
	sc_in<bool>reset;
	sc_in<float> data;
	sc_out<bool>rom_rd;
	sc_out<sc_uint<5> >rom_addr;
	sc_out<float> Result;
	float Data,result,weight;
	int count;
	bool flag;
	
	
	void conv();
	bool Flag() {return flag;}
	void initial();
	SC_CTOR(CONV)
	{	
		SC_METHOD(conv);
		sensitive << clk.neg();
		SC_METHOD(initial)
		sensitive << clk.pos();
	}
};





