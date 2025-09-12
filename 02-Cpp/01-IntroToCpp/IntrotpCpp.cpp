#include <iostream> 

int Valeu_Mohamed ; // Global variable
// Function to print a greeting message
void printGreeting() 
{  
    Valeu_Mohamed = 42; // Assign a value to the global variable
    std::cout << "Hello, World!"<<Valeu_Mohamed<< std::endl;
}
int main () 
{   
    // namespace std is used to avoid prefixing standard library names with std::
    // std::cout << "Hello, World!" << std::endl;

    int num1 = 5; 
    int num2 = 10;  
    Valeu_Mohamed = 42; // Assign a value to the global variable
        std::cout << "Hello, World!"<<Valeu_Mohamed<< std::endl;

    std::cin >> num1 >> num2; // Input two integers 
    if (num1 > num2) 
    {
        std::cout << "" << num1 << " is greater than " << num2 << std::endl;
    }
    else if (num1 < num2) 
    {
        std::cout << "" << num2 << " is greater than " << num1 << std::endl;
    } 
    else 
    {
        std::cout << "Both numbers are equal." << std::endl;
    } 
    printGreeting(); // Call the function to print greeting
    return 0;
} 
// Output: Hello, World!    