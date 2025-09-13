#include <iostream> 

int main () 
{
    //declaring a lambda function that takes two parameters of any type and returns their sum
    // decltype is used to deduce the return type based on the type of b 
    auto func = [](auto a, auto b)->decltype(b) { return a + b; };

    std::cout << "Sum of 10 and 20: " << func(10, 20) << std::endl;           // int
    std::cout << "Sum of 10.5 and 20.3: " << func(10.5, 20.3) << std::endl; // double
    std::cout << "Sum of 'A' and 2: " << func('A', 2) << std::endl;         // char + int
    auto result = func(10, 20.5); // double
    std::cout << typeid(result).name() << std::endl;         // char + int

    return 0 ; 
}