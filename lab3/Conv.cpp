#include "Conv.h"

void CONV::conv(){
    rom_rd = true;
        if(!flag)
        {
            Data = data.read();
            rom_addr = count;
        }            
        else
        {
            weight = data.read();
            rom_addr = count + 9;
        }
            
        if(flag){

            if(count == 9)
            {
                result += data.read();
                Result = result;

            }
            else
            {
                count++;
                result += weight * Data;
            }
            
        }
    
    if(count == 9)
    {
        flag = false;
        rom_addr = 18;
    }
    flag = !flag;
    
}

void CONV::initial()
{
    if(reset)
    {
        cout << "CONV has been reset" << endl;
        count = 0;
        result = 0;
        flag = false;    
    }
}