#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    //Even Fibonacci sequence sum up to 4 million
    long int i = 1, j = 1, result = 0, total = 0;
    while((i < 4000000) || ( j < 4000000 ))
    {
        result = i + j;
        if( result % 2 == 0)
            total = total + result;
        i = j;
        j = result;
    }
    cout<<total;
    return 0;
}