#include "Write.h"
#include "image.h"
#include "sobel.h"
#include "clockreset.h"


int sc_main(int argc,char* argv[])
{
	sc_signal<sc_int<9> > Pixel;
	sc_signal<sc_int<19> >result;
	sc_signal<sc_uint<16> > i_addr;
	sc_signal<bool> i_rd,reset,clk;
	sc_signal<bool> done,output_valid;
	
	image m0("IMAGE");
	Sobel m1("Sobel");
	write_image m2("write_image");
	Clock clock("clock",5,100000000);
	Reset rst("reset",20);
	
	clock(clk);
	rst(reset);
	m0(clk,Pixel,i_addr,i_rd);
	m1(clk,reset,Pixel,result,i_addr,i_rd,output_valid,done);
	m2(clk,result,output_valid,done);
	sc_start(1000000000,SC_NS);
	
	return 0;
}

