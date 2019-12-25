#include <systemc.h>

SC_MODULE(write_image){
	sc_in_clk clock;
	sc_in<sc_int<19> > result;
	sc_in<bool>output_valid;
	sc_in<bool>done;
	sc_int<19> RAM[256*256];
		
	
	
	void write_sobel();
	
	SC_CTOR(write_image){
		
		SC_METHOD(write_sobel);
		sensitive << clock.pos();
	}
};

