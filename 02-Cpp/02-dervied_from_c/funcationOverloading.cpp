#include <iostream> 


// Function to add two integers 
int add(int a, int b) {
    return a + b;
}
// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}
// Function to add two floating-point numbers
double add(double a, double b) {
    return a + b;
}


int main ()
{
    int x = 5, y = 10, z = 15;
    double p = 2.5, q = 3.5;

    // Calling the function to add two integers
    std::cout << "Sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;

    // // Calling the function to add three integers
    // std::cout << "Sum of " << x << ", " << y << ", and " << z << " is: " << add(x, y, z) << std::endl;

    // // Calling the function to add two floating-point numbers
    // std::cout << "Sum of " << p << " and " << q << " is: " << add(p, q) << std::endl;

    return 0;
}