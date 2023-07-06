#include <iostream>
using namespace std;

float Addition (float,float);
float Subtraction (float,float);
float Multiplication (float,float);
float Division (float,float);

int main()
{
    // Code B
    // User type to simplify the declaration
    typedef float (*lpfnOperation)(float, float);
    // CVector of pointer to functions
    lpfnOperation vpf[4] = {&::Addition, &::Subtraction, &::Multiplication, &::Division};
    float a, b, c; int opt;
    // enter the operands
    cin >> a >> b;
    // enter the operation 0-Addition, 1-Subtraction, 3-Multiplication, 4-Division
    cin >> opt;
    // The next line replaces the switch and replaces the whole switch
    c = (*vpf[opt])(a, b);
}
