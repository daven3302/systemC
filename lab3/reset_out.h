#include "systemc.h"

SC_MODULE(rst_mon)
{
    sc_in_clk clk;
    sc_in<bool> rst;

    void rst_out();

    SC_CTOR(rst_mon)
    {
        SC_METHOD(rst_out);
        sensitive << clk.pos();
    }
};