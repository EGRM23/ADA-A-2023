#include <iostream>
using namespace std;

int potencia(int num, int ptc)
{
	if (ptc == 1) return num;
    else if (ptc == 0) return 1;
	
	return potencia(num,ptc-1) * num;
}

int main(int argc, char *argv[])
{
	int num, ptc;
	
	cout << "Numero: ";
	cin >> num;
	cout << "Potencia: ";
	cin >> ptc;
	cout << "Resultado: " << potencia(num, ptc);
	return 0;
}