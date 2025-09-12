#include <iostream> 

int main () 
{
    int var = 88; 
    int& reftoVar = var;
    int* ptrtoVar = &var;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Value of reftoVar: " << reftoVar << std::endl;
    std::cout << "Value of ptrtoVar: " << *ptrtoVar << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Address of reftoVar: " << &reftoVar << std::endl;
    std::cout << "Address of ptrtoVar: " << ptrtoVar << std::endl;
    std::cout << "Address of ptrtoVar: " << &ptrtoVar << std::endl;


    return 0;
}