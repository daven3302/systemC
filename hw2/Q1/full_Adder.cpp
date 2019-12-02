#include "full_Adder.h"
void full_Adder::full_adder()
{
    a = A; b = B; c_in = C_in;
    c[0] = c_in;
    for(int i = 0 ; i < 4 ; i++)
    {
        s[i] = a[i]^b[i]^c[i];
        c[i+1] = (a[i]&b[i])|(a[i]&c[i])|(c[i]&b[i]);
    }
    c_out = c[4]; C_out = c_out; S = s;

}
