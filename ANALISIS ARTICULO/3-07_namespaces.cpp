#import <mso9.dll> no_namespace rename("DocumentProperties","DocumentPropertiesXL")
#import <vbe6ext.olb> no_namespace
#import <excel9.olb>
rename("DialogBox", "DialogBoxXL") \
rename("RGB", "RBGXL") \
rename("DocumentProperties", "DocumentPropertiesXL") \
no_dual_interfaces
#import <msword9.olb> rename("DialogBox", "DialogBoxWord") \
rename("RGB", "RBGWord") \
rename("DocumentProperties", "DocumentPropertiesWord") \
no_dual_interfaces

// File MyNS.h
namespace MyNS
{
    int gnCount; // Global counter
    // Some small function implemented inline
    double Addition(double a, double b) // Global function
    { return a+b; }
    // Some prototypes
    long factorial(int n); // Global function
    class CTest
    {
        public:
        Test();
        void Method1();
    };
    // More variables, functions, methods, classes, structs go here
};

//File NS1.cpp
#include "MyNS.h" long MyNS::factorial(int n)
{
// Some complex code goes here
}
// Constructor for class CTest
MyNS::CTest::CTest()
{
    // Initialize something
}
void MyNS::CTest::Method1()
{
    // You have to write your code here
}
// More implementation for NS1.h prototypes goes here