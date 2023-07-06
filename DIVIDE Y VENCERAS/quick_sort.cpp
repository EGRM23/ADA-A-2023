#include <iostream>
using namespace std;

template <typename R>
R ubicar(R lista[], bool(*criterio)(R,R) , int ini, int fin)
{
	while (ini < fin)
	{
		while (criterio(lista[fin], lista[ini]) && ini < fin)
			fin--;
		
		swap(lista[fin],lista[ini]);
		
		while (criterio(lista[fin], lista[ini]) && ini < fin)
			ini++;
		
		swap(lista[ini],lista[fin]);
	}
	return ini;
}

template <typename R>
void quickSort(R lista[], bool(*criterio)(R,R), int ini, int fin)
{
	int u;
	if (ini < fin)
	{
		u = ubicar(lista, criterio, ini, fin);
		quickSort(lista, criterio, ini, u - 1);
		quickSort(lista, criterio, u + 1, fin);
	}
}

template <typename R>
bool ascendente(R v1, R v2)
{
	if (v1 >= v2) return true;
	else return false;
}

template <typename R>
bool descendente(R v1, R v2)
{
	if (v1 <= v2) return true;
	else return false;
}

template <typename R>
void printLista(R lista[], int tam)
{
	cout << "LISTA: ";
	for (int i = 0; i < tam; i++) cout << " " << lista[i];
	cout << endl;
}

int main()
{
	int R[] = {50,34,2,17,9,11,1,21,17,46};
	int tam = 10;

	printLista(R,tam);
	quickSort<int>(R,ascendente,0,tam-1);
	printLista(R,tam);
    return 0;
}