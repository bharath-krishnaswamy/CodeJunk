#include <iostream>
#include <stdio.h>

int main()
{
    int i, j, temp, max_product = 0, rev = 0, highest = 0;
    for(i = 999; i >= 100; i--)
    {
        for(j = 999; j >= 100; j--)
        {
            if(highest > i*j)
                continue;
            max_product = i * j;
            temp = max_product;
            while(temp > 0)
            {
                rev = (rev * 10) + (temp % 10);
                temp = temp / 10;
            }
            if(rev == max_product)
                highest = max_product;
            
            // std::cout<<rev<<std::endl;
            rev = 0;
        }
        rev = 0;
    }
    std::cout<<highest<<std::endl;
}