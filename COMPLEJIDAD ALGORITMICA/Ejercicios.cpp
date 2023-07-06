#include <iostream>
using namespace std;

int funcion_01 (int N)
{
    int c = 0;

    for (int i = 0; i <= N; i++)
    {
        c++; //De la iteracion
        if (i % 2 == 0)
        {
            c++; //cout << i << " ";   
        }
        c++; //Del if
    }

    return c;
}

int funcion_02 (int N)
{
    int c = 0;

    for (int i = 0; i <= N; i++)
    {
        c++; //De la iteracion
        for (int j = i; j <= N; j++)
        {
            c++; //De la iteracion
            c++; //cout << i << "," << j << " ";
        }
    }

    return c;
}

int funcion_03 (int A ,int B)
{
    int c = 0;

    for (int i = 0; i <= A; i++)
    {
        c++; //De la iteracion
        for (int j = 0; j <= B; j++)
        {
            c++; //De la iteracion
            c++; //cout << A + B << " ";
        }
    }

    return c;
}

int funcion_04 (int N)
{
    int c = 0;

    for (int i = 0; i <= N; i++)
    {
        c++; //De la iteracion

        int j = 1;
        c++;

        while (j < N)
        {
            c++; //Del bucle
            c++; //cout << j;

            j = j*2;
            c++;
        }
        c++; //La comparacion que hizo que salga del bucle
    }

    return c;
}

int funcion_05 (int N)
{
    int c = 0;

    for (int i = 0; i <= N; i++)
    {
        c++; //De la iteracion

        if (i%2 == 0)
        {
            c++; //cout << i
        }
        c++;
    }

    for (int i = 0; i <= N; i++)
    {
        c++; //De la iteracion

        if (i%2 != 0)
        {
            c++; //cout << i
        }
        c++;
    }

    return c;
}

int funcion_06 (int N)
{
    int c = 0;

    int i = 1;
    c++;

    while (i < N)
    {
        c++; //Del bucle

        c++; //cout << j;
        
        i = i*2;
        c++;
    }
    c++; //La comparacion que hizo que salga del bucle

    return c;
}

int funcion_07 (int N)
{
    int c = 0;

    for (int i = 0; i <= N; i++)
    {
        c++; //De la iteracion

        if (i % 2 == 0)
        {
            c++; //cout << "par";
        }
        else
        {
            c++; //cout << "impar";
        }
        c++;
    }

    return c;  
}

int main()
{
    int N = 5;
    cout << "COMPLEJIDAD FUNCION 01: " << funcion_01(N) << endl;
    cout << "COMPLEJIDAD FUNCION 02: " << funcion_02(N) << endl;
    cout << "COMPLEJIDAD FUNCION 03: " << funcion_03(N,N+1) << endl;
    cout << "COMPLEJIDAD FUNCION 04: " << funcion_04(N) << endl;
    cout << "COMPLEJIDAD FUNCION 05: " << funcion_05(N) << endl;
    cout << "COMPLEJIDAD FUNCION 06: " << funcion_06(N) << endl;
    cout << "COMPLEJIDAD FUNCION 07: " << funcion_07(N) << endl;
    return 0;
}