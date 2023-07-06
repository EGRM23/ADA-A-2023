#include <iostream>

using namespace std;

int BynarySearch(int A[], int ini, int fin, int clave)
{
    if (ini == fin)
    {
        if (A[ini] == clave) return ini;
        return -1;
    }

    int med = (fin - ini)/2;

    if (A[med] > clave) return BynarySearch(A,ini,ini+med-1,clave);
    else if (A[med] < clave) return BynarySearch(A,ini+med+1,fin,clave);
    
    return ini+med;
}

int main()
{
    int v[10] = {1,2,5,9,10,13,14,17,18,19};
    int tam = 10;
    int clave, pos;

    for (int i = 0; i < 10; i++)
    {
        clave = 1 + rand()%20;
        std::cout << "VALOR: " << clave << std::endl;

        pos = BynarySearch(v,0,tam-1,clave);
        if (pos < 0) std::cout << "NO ENCONTRADO!\n";
        else std::cout << "ENCONTRADO EN LA POSICION... " << pos << std::endl;
    }
    return 0;
}