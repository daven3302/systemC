#include "full_Adder.h"
#include "Adder_1bit.h"
void full_Adder::full_adder()
{
    Adder_1bit single_adder("adder_1bit");
    a = A; b = B; 
    for(int i = 0 ; i < BIT_SIZE ; i++)
    {
        ra = (sc_bit)a[i]; rb = (sc_bit)b[i]; rra = ra; rrb = rb; Ai = rra; Bi = rrb;
        single_adder(Ai,Bi,C_in,Si,C_out);
        rs = Si; s[i] = rs;
        c_out = C_out;
        c_in = c_out;
        C_in = c_in;
    }
    S = s;
}