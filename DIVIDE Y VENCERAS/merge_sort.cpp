#include <iostream>
using namespace std;

template <typename R>
void mezcla(R lista[], bool(*criterio)(R,R), int ini, int med, int fin)
{
	
	//Creamos una lista auxiliar para almacenar ah� la lista ordenada
	R* listaAux = NULL;
	listaAux = new R[fin-ini+1];
	
	int izq, der, ia;
	izq = ini;
	der = med+1;
	ia = 0;
	
	//Empezamos a comparar los numeros extremos de ambas mitades
	while (izq <= med && der <= fin)
	{
		if (criterio(lista[der], lista[izq]))
		{
			listaAux[ia] = lista[izq];
			izq++;
		}
		else
		{
			listaAux[ia] = lista[der];
			der++;
		}
		ia++;
	}
	
	for (int i = izq ; i <= med ; i++)
	{
		listaAux[ia]=lista[i];
		ia++;
	}
	
	for (int i = der ; i <= fin ; i++)
	{
		listaAux[ia]=lista[i];
		ia++;
	}
	
	for (int i = 0 ; i < ia ; i++) lista[ini+i]=listaAux[i];
	
	listaAux = NULL;
	delete [] listaAux;
}

template <typename R>
void mergeSort(R lista[], bool(*criterio)(R,R), int ini, int fin)
{
	if (ini < fin)
	{
		int med = (ini+fin) / 2;
		mergeSort(lista, criterio, ini, med);
		mergeSort(lista, criterio, med + 1, fin);
		mezcla(lista, criterio, ini, med, fin);
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
	mergeSort<int>(R,ascendente,0,tam-1);
	printLista(R,tam);
    return 0;
}