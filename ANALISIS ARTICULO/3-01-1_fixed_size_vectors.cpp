#include <iostream>
using namespace std;

int gVect[100];
int gnCount;


void insert(int elem)
{
    if( gnCount < 100 )
        gVect[gnCount++] = elem;
}

int main()
{
    return 0;
}