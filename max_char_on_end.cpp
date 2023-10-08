#include "str.h"

int itc_max_char_on_end(std::string str)
{
        int max = 0;
        int current = 0;

        for (int i = 0; i <= itc_len(str); i++)
        {
            if (isdigit(str[i])) 
                current++;
            else 
            {
                if (current > max) 
                    max = current;
                current = 0;
            }
        }
        if (current > max) 
            max = current;
        return max;
   
}