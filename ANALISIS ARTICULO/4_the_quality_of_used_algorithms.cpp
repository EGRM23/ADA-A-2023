#include <iostream>
using namespace std;

unsigned long fibo1(unsigned n)
{
    if( n < 2 )
    return 1;
    return fibo1(n-1) + fibo1(n-2);
}

unsigned long fibo2(unsigned n)
{
    if( n < 2 )
    return 1;
    unsigned long f1 = 0, f2 = 1;
    unsigned long output;
    do
    {
    output = f1 + f2;
    f1 = f2;
    f2 = output;
    }while(--n >= 2);
    return output;
}