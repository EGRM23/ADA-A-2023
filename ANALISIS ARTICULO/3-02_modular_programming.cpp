#include <iostream>
using namespace std;

struct Vector
{
    int*m_pVect,    // Pointer to the buffer
    m_nCount,       // Control how many elements are actually used
    m_nMax,         // Control how many are allocated as maximum
    m_nDelta;       // To control the growing
};

void Insert(Vector*,int);
void Resize(Vector*);

/*
void Insert(int *& rpVect, int& rnCount, int& rnMax, int elem)
{
    if( rnCount == rnMax )      // Verify the overflow
        Resize(rpVect, rnMax);  // Resize the vector before inserting elem
    rpVect[rnCount++] = elem;   // Insert the element at the end of the sequence
}

void Resize(int *& rpVect, int& rnMax)
{
    const int delta = 10; // Used to increase the vector size
    realloc(rpVect, sizeof(int) * (rnMax + delta));
    rnMax += delta; // The Max has to be increased by delta
}
*/



void Insert(Vector *pThis, int elem)
{
    if( pThis->m_nCount == pThis->m_nMax ) // Verify the overflow
    Resize(pThis); // Resize the vector before inserting elem
    // Insert the element at the end of the sequence
    pThis->m_pVect[pThis->m_nCount++] = elem;
}

void Resize(Vector *pThis)
{
    realloc(pThis->m_pVect, sizeof(int) * (pThis->m_nMax + pThis->m_nDelta));
    // The Max has to be increased by delta
    pThis->m_nMax += pThis->m_nDelta;
}

int main()
{
    return 0;
}