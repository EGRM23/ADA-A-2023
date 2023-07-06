#include <iostream>
#include <time.h>
using namespace std;

void RandomMatrix (int n, int p, double **matrix)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = 1 + rand()%p;
}

void PrintMatrix (int n, double **matrix)
{
    cout << "MATRIZ:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < n; j++)
            cout << " " << matrix[i][j];
        cout << " ]\n";
    }
}

void Strassen (int n, double **m1, double **m2)
{

}

int main()
{
    return 0;
}