#include <functional>
#include <iostream>

// >>Demonstrating casting a lambda function to a function pointer
// >>casting is possible only if the lambda does not capture any variables
// >>if it captures variables, it cannot be cast to a function pointer
// >> if the paramters list is present in that case the Converstion of the lambda will be class type 
//    you will need to overload the operator () to make it work 
//    you case use std::function to store the lambda function 


int main()
{  
    int c = 100;
    auto func = [](int a, int b) -> int { return a + b; };
    std::cout << "Result: " << func(10, 20) << std::endl;
    
    // Casting lambda to function pointer
    int (*funcPtr)(int, int) = func;
    std::function< int(int, int)> funca = [c](int a, int b) -> int { return a + b; };

    std::cout << "Result from function pointer: " << funcPtr(30, 40) << std::endl;
    std::cout << "Result from function pointer: " << funca(30, 40) << std::endl;

    return 0;
}