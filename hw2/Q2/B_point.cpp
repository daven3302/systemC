#include "B_point.h"

void B_point::node()
{
    x1 = X1; x2 = X2; 
    o = w1*x1 + w2*x2 + b;
    if(o < 0) o = 0;
    else o = 1;
    O = o;
}
