#include <iostream> 

int    add(int a   , int   b)     {return a + b;}
int    add(float a , float b)     {return a + b;}
double add(double a, double b)    {return a + b;}
// Funcation overloading : 
// Same name, different parameters 
// Return type is not considered for overloading 
// Compiler differentiates functions by their signature (name + parameters) 


int mutiple(int a=1, int b=1) {return a * b;}
// Default parameters :
// Parameters with default values must be the trailing parameters
// If a parameter has a default value, all parameters to its right must also have default values


int main ()
{
    std::cout << add(1, 2) << std::endl;         // Calls int version
    std::cout << add(1.5f, 2.5f) << std::endl;   // Calls float version
    std::cout << add(1.5, 2.5) << std::endl;     // Calls double version
    return 0;
}