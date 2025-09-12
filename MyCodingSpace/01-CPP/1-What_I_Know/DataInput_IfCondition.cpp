#include <iostream> 

    int number1 = 0 ; 
    int number2 = 0 ; 
    int sum = 0 ; 

int main () 
{

    std::cout << "Enter two integers: " ; 
    std::cin >> number1 >> number2 ;

    if (number1 == number2) 
    {
        std::cout << "The numbers are equal." << std::endl ; 
    } 
    else 
    {
        sum = number1 + number2 ; 
        std::cout << "The sum of " << number1 << " and " << number2 << " is " << sum << "." << std::endl ; 
    }

    return 0 ;
} 