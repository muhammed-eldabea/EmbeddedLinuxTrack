#include <iostream> 

int main () 
{
    int a = 10 ;
    auto b = a ; // 'b' is automatically deduced to be of type '
    const int const_a = 20 ;
    auto const_b = const_a ; // 'const_b' is deduced to be of type 'int', not 'const int'
    // because top-level const is ignored in type deduction for 'auto'
    std::cout << "a: " << a << ", b: " << b << std::endl ;
    std::cout << "const_a: " << const_a << ", const_b: " << const_b << std::endl ;  
    const_b = 30 ; // This is valid because 'const_b' is of type 'int'  
    std::cout << "const_a: " << const_a << ", const_b: " << const_b << std::endl ;  





    return 0 ; 
}