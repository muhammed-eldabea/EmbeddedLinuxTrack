#include <iostream>
#include <string> 



int main () { 
    int x = 10 ; // Declare an integer variable x and initialize it to 10
    int* pointerToX = &x; // Pointer to x
    int& referenceToX = x; // Reference to x using reference variable
    std::cout << "Value of x: " << x << std::endl; // Print the value of x
    std::cout << "Pointer to x: " << pointerToX << std::endl; // Print the address of x using pointer
    std::cout << "Value pointed by pointerToX: " << *pointerToX << std::endl; // Print the value pointed by pointer
    std::cout << "Reference to x: " << referenceToX << std::endl; // Print the value of x using reference
    std::cout << "Address of x: " << &x << std::endl; // Print the address of x
    std::cout << "Address of pointerToX: " << &pointerToX << std::endl; // Print the address of pointer
    std::cout << "Address of referenceToX: " << &referenceToX << std::endl; // Print the address of reference


    return 0; // Return 0 to indicate successful execution 
}