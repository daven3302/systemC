#include <systemc.h>

SC_MODULE(Sobel){
	sc_in_clk clock;
	sc_in<bool>reset;
	sc_in<sc_int<9> > Pixel;
	sc_out<sc_int<19> > result;
	sc_out<sc_uint<16> >i_addr;
	sc_out<bool>i_rd;
	sc_out<bool>output_valid;
	sc_out<bool>done;
	
	
	
	void sobel_proc();
	
	SC_CTOR(Sobel){
		
		SC_METHOD(sobel_proc);
		sensitive << clock.pos();
	}
};
