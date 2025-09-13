#include <iostream> 
/*
>> inialization Types in C++ 
            1- Copy inialization

            2- Direct inialization

            3- Uniform inialization (C++11)

            4- List inialization (C++11)

            5- Value inialization

            6- Default inialization

            7- Aggregate inialization (C++11)






*/


int main () 
{ 
    // 1- Copy inialization 
    // Copy inialization is done using the assignment operator (=)
    // It involves creating a new object and initializing it with the value of an existing object or a literal.
    // Example:
    int a = 10; 
    std::cout << "Value of a (Copy inialization) : " << a << std::endl;
    // 2- Direct inialization 
    // Direct inialization is done using parentheses ()
    // It involves directly calling a constructor to initialize an object.
    // Example:
    int b(20); 
    std::cout << "Value of b (Direct inialization) : " << b << std::endl;
    // 3- Uniform inialization (C++11)
    // Uniform inialization is done using curly braces {}
    // It provides a consistent syntax for initializing objects, regardless of their type.
    // Example:
    int c{30}; 
    std::cout << "Value of c (Uniform inialization) : " << c << std::endl;
    // 4- List inialization (C++11)
    // List inialization is also done using curly braces {}
    // It allows initializing arrays and containers with a list of values.
    // Example:
    int arr[] = {1, 2, 3, 4, 5}; 
    std::cout << "Values in arr (List inialization) : ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    // 5- Value inialization
    // Value inialization is done using empty parentheses ()
    // It initializes an object to its default value.
    // Example: 
    int d(); 
    std::cout << "Value of d (Value inialization) : " << d << std::endl; // Note: This will not print the value of d as it is a function declaration.
    // 6- Default inialization
    // Default inialization occurs when an object is declared without an explicit initializer.
    // The object is initialized to a default value based on its type.
    // Example:
    int e; 
    std::cout << "Value of e (Default inialization) : " << e << std::endl; // Note: The value of e is indeterminate as it is not initialized.
    // 7- Aggregate inialization (C++11)
    // Aggregate inialization is done using curly braces {}
    // It allows initializing aggregate types (like structs and arrays) with a list of values.
    // Example:
    struct Point {
        int x;
        int y;
    };
    Point p = {10, 20}; 
    std::cout << "Values in Point p (Aggregate inialization) : x = " << p.x << ", y = " << p.y << std::endl;    
    




    return 0;
} 