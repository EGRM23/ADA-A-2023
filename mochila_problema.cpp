#include <iostream>
#include <vector>
using namespace std;

const int n = 3;

int mejor_objeto(int p[], int b[], float X[])
{
    float m = 0;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if(X[i] > 0) continue;

        if ((b[i] + 0.0)/p[i] > m)
        {
            m = (b[i] + 0.0)/p[i];
            pos = i;
        }
    }
    return pos;
}

void mochila (int M, int p[], int b[], float X[])
{
    int pesoAct = 0;
    int i;
    
    for (int i = 0; i < n; i++)
        X[i] = 0;

    while (pesoAct < M)
    {
        i = mejor_objeto(p,b,X);

        if (pesoAct + p[i] <= M)
        {
            X[i] = 1;
            pesoAct += p[i];
        }
        else
        {
            X[i] = (M - pesoAct + 0.00)/p[i];
            pesoAct = M;
        }
    }
}

int main()
{
    int M = 10;
    int p[n] = {2,5,7};
    int b[n] = {3,3,5};
    float X[n];
    
    mochila(M,p,b,X);
    cout << "EL RESULTADO ES: ";
    for (int i = 0; i < n; i++) cout << X[i] << " | ";
}