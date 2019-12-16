#include "systemc.h"

SC_MODULE(CONV)
{	
	sc_in_clk clk;
	sc_in<bool>reset;
	sc_in<float> data;
	sc_out<bool>rom_rd;
	sc_out<sc_uint<7> >rom_addr;
	sc_out<float> Result;
	float result,bias,mul;
	int count,weight_count,start,x,y,c;
	float weight[9];
	bool flag,has_rst;
	
	
	void conv();
	void initial();
	SC_CTOR(CONV)
	{	
		has_rst = false;
		SC_METHOD(conv);
		sensitive << clk.neg() << reset;
		SC_METHOD(initial)
		sensitive << reset;
	}
	
};





 