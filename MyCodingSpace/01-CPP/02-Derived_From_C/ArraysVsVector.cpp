#include <iostream>
#include <vector> 



std::vector<int> numbinVector = {1, 2, 3, 4, 5};
int numbinArray[]             = {1, 2, 3, 4, 5};
// Both are valid ways to create a collection of integers
// But they have different properties and behaviors
// Vector is a dynamic array that can resize itself
// Array is a static array with a fixed size
// Vector has many built-in functions and methods for manipulation
// Array has limited functionality and requires manual management
// Vector is part of the C++ Standard Library
// Array is a built-in type in C and C++    
// Vector is generally safer and more convenient to use
// Array can be more efficient in terms of memory and performance in some cases 



int main()
{
    std::cout << numbinVector[2] << std::endl;
    std::cout << numbinArray[2] << std::endl; 

    std::cout << numbinVector[5] << std::endl;
    std::cout << numbinArray[5] << std::endl; 


    return 0;
}