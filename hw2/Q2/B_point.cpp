#include "B_point.h"

void B_point::node()
{
    x1 = X1; x2 = X2; b = B; w1 = W1; w2 = W2;
    o = w1*x1 + w2*x2 + b;
    O = o;
}

void B_point::initial()
{
    o = w1*x1 + w2*x2 + b;
    O = o;
}