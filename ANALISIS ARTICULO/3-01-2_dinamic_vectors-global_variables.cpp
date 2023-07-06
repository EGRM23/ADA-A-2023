#include <iostream>
using namespace std;

int *gpVect = NULL;
int gnCount = 0;
int gnMax = 0;

void Insert(int);
void Resize();

void Insert(int elem)
{
    if( gnCount == gnMax )
        Resize();
    gpVect[gnCount++] = elem;
}

void Resize()
{
    const int delta = 10; // Used to increase the vector size
    realloc(gpVect, sizeof(int) * (gnMax + delta));
    // You can also use the following code:
    // int *pTemp, i;
    // pTemp = new int[gnMax + delta]; // Alloc a new vector
    // for(i = 0 ; i < gnMax ; i++) // Transfer the elements
    // pTemp[i] = gpVect[i]; // we can also use the function memcpy
    // delete [ ] gpVect; // delete the old vector
    // gpVect = pTemp; // Update the pointer
    gnMax += delta; // The Max has to be increased by delta
}

int main()
{
    return 0;
}