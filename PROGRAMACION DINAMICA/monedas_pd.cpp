#include <iostream>
using namespace std;

//Eduardo German Ruiz Mamani
//Problema del cambio de monedas con programacion dinámica

void rellenar_tabla (int** D, int& n, int& P, int* c, int* s)
{
    for (int i = 0; i < n; i++) D[i][0] = s[i] = 0;

    for (int j = 1; j < P+1; j++)
    {
        if (j - c[0] >= 0)
        {
            D[0][j] = 1 + D[0][j-c[0]];
            continue;
        }
        D[0][j] = -1;
    }
    int temp;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < P+1; j++)
        {
            if (j - c[i] >= 0)
            {
                temp = 1 + D[i][j-c[i]];
                if (temp <= D[i-1][j])
                {
                    D[i][j] = temp;
                    continue;
                }
            }
            D[i][j] = D[i-1][j];
        }
    }

    int filas = n-1;
    int columnas = P;

    while (filas >= 0 && columnas != 0)
    {
        if (D[filas][columnas] == D[filas-1][columnas])
            filas--;
        else
        {
            s[filas]++;
            columnas -= c[filas];
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
    int P = 8; //Valor a devolver (columnas)
    int n = 3 ; //Tipos (valores)(filas)
    int *c = new int[n]; //Array de valores de monedas
    int *s = new int[n]; //Array de beneficios
    c[0] = 1; c[1] = 4; c[2] = 6;
    
    int **D = new int*[n];
    for (int i = 0; i < n; i++)
        D[i] = new int[P+1];
    rellenar_tabla(D,n,P,c,s);
    imprimir_tabla(D,n,P+1);
    imprimir_solucion(n,s);

    return 0;
}
