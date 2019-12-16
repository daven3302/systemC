#include "Conv.h"
void CONV::conv()
{
    
    rom_rd = true;
    if(!has_rst)
    {
        if(weight_count <= 108)
        {   
            weight[weight_count-100] = data.read();
            rom_addr.write(++weight_count);
        }            
        else
        {
            if(weight_count++ == 109)
            {
                bias = data.read();
                rom_addr.write(start);
            }
            else
            {
                if(count < 8)
                {
                    result += data.read() * weight[count];
                    if((++y) % 3 == 0)
                    {
                        x++;
                        y = 0;
                    }
                    count++;
                }
                else
                {
                    result += data.read() * weight[count] + bias;
                    if(result < 0)
                        result = 0;
                    Result.write(result);
                    result = 0; count = 0;
                    if((++start) % 10 == 8)
                        start += 2;
                    x = 0; y = 0;
                }
                rom_addr.write(start + (x*10) + y);
            }
                
        } 
    }
    else 
    {
        weight_count = 100;
        start = 0; x = 0; y = 0;
        count = 0;
        result = 0;
        has_rst = false;
        c = 0;
        rom_addr.write(weight_count);
    }
}
void CONV::initial()
{
    has_rst = true;
}