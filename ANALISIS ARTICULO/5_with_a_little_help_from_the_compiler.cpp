#include <iostream>
using namespace std;

int bsearch(double a[], double key, int l, int u)
{
    int m;
    if (u<l)
    return -1;
    m = (l+u) / 2;
    if (a[m] == key)
    return m;
    if (a[m] < key)
    return bsearch(a, key, l, m-1);
    else
    return bsearch(a, key, m+1, u);
}

typedef unsigned long ulong;
static ulong fact_helper(ulong a, ulong n)
{
    if (n == 0)
    return a;
    else
    return fact_helper(a*n, n-1);
    }
    ulong fact(ulong n)
    {
    return fact_helper(1, n);
}