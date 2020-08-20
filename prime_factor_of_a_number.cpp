#include <stdio.h>
#include<iostream>
#include <math.h>
//program to find prime factors of a number. Check till num/2 only
int main()
{
    long long int  num = 600851475143;
    long int largest = 1, temp = 1;
    while( num % 2 == 0 )
    {
        largest = 2;
        num /= 2;
    }

    for (int i = 3; i < sqrt(num); i+= 2)
    {
        while (num % i == 0)
        {
            largest = i;
            num /= i;
        }
    }
    if(num > 2)
        largest = num;
    std::cout<<largest<<std::endl;   
}