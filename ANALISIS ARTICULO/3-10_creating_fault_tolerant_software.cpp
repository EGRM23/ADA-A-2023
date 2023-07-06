#include <iostream>
using namespace std;

// Class CVector definition
class CArithmetic
{
private:
    // Some attributes go here
public:
    static double Addition (double a, double b);
    static double Substraction (double a, double b);
    static double Multiplication (double a, double b);
    static double Division (double a, double b);
    // More methods go here
};

double CArithmetic::Division(double a, double b)
{
    if ( b == 0.0 ) {}
    throw (int)0; // an exceptions is thrown here
    return a/b;
}

int main()
{
    double x, y, z;
    try // our critical section with possible exceptions begins here
    {
        z = CArithmetic::Division(x, y);
        cout << z;
    }
    catch (int errorcode) // catching the exception
    {
    // Display some message, etc.
    }
    return 0;
}