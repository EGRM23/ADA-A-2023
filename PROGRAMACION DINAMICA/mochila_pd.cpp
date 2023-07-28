#include <iostream>
using namespace std;

//Eduardo German Ruiz Mamani
//Problema de la mochila con programacion dinamica

void rellenar_tabla (int** V, int& n, int& M, int* p, int* b, int* s)
{
    for (int i = 0; i < n+1; i++) V[i][0] = 0;
    for (int j = 1; j < M+1; j++) V[0][j] = 0;

    int temp;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < M+1; j++)
        {
            if (j - p[i-1] >= 0)
            {
                temp = b[i-1] + V[i-1][j-p[i-1]];
                if (temp >= V[i-1][j])
                {
                    V[i][j] = temp;
                    s[i-1] = 1;
                    continue;
                }
            }
            V[i][j] = V[i-1][j];
            s[i-1] = 0;
        }
    }
}

void imprimir_tabla (int** T, int n, int M)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cout << T[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void imprimir_solucion (int& n, int* s)
{
    std::cout << "SOLUCION:\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << s[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int M = 6; //Peso (columnas)
    int n = 3 ; //Capacidad (filas)
    int *p = new int[n]; //Array de pesos
    int *b = new int[n]; //Array de beneficios
    int *s = new int[n]; //Array de beneficios
    p[0] = 2; p[1] = 3; p[2] = 4;
    b[0] = 1; b[1] = 2; b[2] = 5;

    int **V = new int*[n+1];
    for (int i = 0; i < n+1; i++)
        V[i] = new int[M+1];
    rellenar_tabla(V,n,M,p,b,s);
    imprimir_tabla(V,n+1,M+1);
    imprimir_solucion(n,s);

    return 0;
}