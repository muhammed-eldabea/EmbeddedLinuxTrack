#include <iostream> 


// A simple example of a lambda function in C++ 

/*

Get to Know Lambda Functions in C++: 
Lambda functions, also known as anonymous functions, are a powerful feature in C++ that allows you to define small, 
unnamed functions directly in your code. 
They are particularly useful for short operations that are not going to be reused elsewhere. 
Here's a brief overview of lambda functions in C++:
Key Features of Lambda Functions:
1. Syntax: The basic syntax of a lambda function is as follows:
   [capture](parameters) -> return_type { body }
   - capture: Specifies which variables from the surrounding scope are accessible inside the lambda.
   - parameters: The input parameters for the lambda function.
   - return_type: (Optional) The type of value the lambda returns. If omitted, the compiler deduces it.
   - body: The code that defines what the lambda does.
2. Capture Clause: The capture clause can take several forms:
   - []: No variables are captured.
   - [&]: All variables are captured by reference.
   - [=]: All variables are captured by value.
   - [x, &y]: Captures x by value and y by reference.
3. Usage: Lambda functions can be assigned to variables, passed as arguments to other functions, or used in algorithms (like those in the STL).
4. Examples:
   - Simple Lambda:
     auto add = [](int a, int b) { return a + b; };
     std::cout << add(2, 3); // Outputs: 5
   - Capturing Variables:
     int x = 10;
     auto printX = [x]() { std::cout << x; };
     printX(); // Outputs: 10
   - Using in STL:
     std::vector<int> vec = {1, 2, 3, 4     };
     std::for_each(vec.begin(), vec.end(), [](int n) { std::cout << n << " "; });
     // Outputs: 1 2 3 4
5. Advantages:
   - Conciseness: They allow for more concise code, especially for short functions.
   - Flexibility: They can capture and use variables from their surrounding scope.
   - Readability: They can improve readability by keeping related code together.
6. Limitations:     
   - Overuse: Overusing lambdas can lead to less readable code, especially if they become too complex.
   - Debugging: Debugging lambdas can be more challenging than named functions.
In summary, lambda functions in C++ are a versatile tool that can enhance your code by allowing for more functional programming styles. 
They are especially useful for short, throwaway functions that are not needed elsewhere in your codebase.       

*/


int main() 
{
    // Lambda function syntax: [capture](parameters) -> return_type { body }
    auto add = [](int a, int b) -> int { return a + b; };
    
    int result = add(5, 3);
    std::cout << "Result of addition: " << result << std::endl; // Output: 8

    return 0;
}