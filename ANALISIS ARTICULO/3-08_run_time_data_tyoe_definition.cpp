#include <iostream>
#include <string.h>
using namespace std;

class CVector
{
private:
    void **m_pVect; // Pointer to the buffer
    int m_nCount, // Control how many elements are actually used
        m_nMax, // Control the number of allocated elements
        m_nDelta, // To control the growing
        m_nElemSize; // Element size
    // Pointer to the function to compare
    int (*m_lpfnCompare)(void *, void*);
    void Init(int delta); // Init our private variables, etc
    void Resize(); // Resize the vector when occurs an overflow
public:
    CVector( int (lpfnCompare)(void *, void*), int nElemSize, int delta = 10); // Constructor
    void Insert(void * elem); // Insert a new element
    void* DupBlock(void * elem);
    // More methods go here
};

// Class CVector implementation
CVector::CVector(int (*lpfnCompare)(void *, void*), int nElemSize, int delta)
{
    Init(delta);
    m_lpfnCompare = lpfnCompare;
    m_nElemSize = nElemSize;
}

void CVector::Insert(void *pElem)
{
    if( m_nCount == m_nMax ) // Verify the overflow
        Resize(); // Resize the vector before inserting elem
    m_pVect[m_nCount++] = DupBlock(pElem); // Insert the element at the end
}

void* CVector::DupBlock(void *pElem)
{
    void *p = new char[m_nElemSize];
    return memcpy(p, pElem, m_nElemSize);
}

int fnIntCompare( void *pVar1, void *pVar2 )
{
    // < 0 if *(int *)pVar1 < *(int *)pVar2,
    // > 0 if *(int *)pVar1 > *(int *)pVar2
    // else 0
    return *(int *)pVar1 - *(int *)pVar2;
}
// More implementations go here