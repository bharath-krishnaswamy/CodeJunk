#include <iostream>

int main()
{
    int max_product = 0, temp, rev = 0, pali = 0;
    for(int i = 999; i >= 100; i--)
    {
        for (int j = 999;j >= i; j--)
        {
            // if(max_product  i * j)
            //     continue;
            max_product = i * j;
            temp = max_product;
            while( temp != 0 )
            {
                rev = (rev*10) + (temp%10);
                temp /= 10;
            }
            if(rev == max_product)
                pali = max_product;
            rev = 0;    
        }
    }
    std::cout<<pali<<std::endl;
}