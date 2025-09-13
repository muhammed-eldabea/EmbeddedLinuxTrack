#include <iostream> 

// What Feature Provided By Lambda Function? 
// 1- Scope Control of Variables  : 
//      if the variable if defined outside the lambda function, we can control its scope using capture list. 
//      Capture list is defined inside the square brackets [] at the beginning of the lambda function.
//      - [] : No variable is captured.
//      - [=] : All variables are captured by value.
//      - [&] : All variables are captured by reference.
//      - [x] : Only variable x is captured by value.
//      - [&x] : Only variable x is captured by reference.
//      - [x, &y] : Variable x is captured by value and variable y is captured by reference.







int main () 
{
    // Lambda function syntax: [capture](parameters) -> return_type { body }
    int c = 10; 
    // auto add = [](int a, int b) -> int { return a + b +c ; };
    // the line of code above will give error because c is not captured.
    // To fix this, we can capture c by value or by reference.
    // auto add = [=](int a, int b) -> int { return a + b +c ; }; // capture all by value
    // auto add = [&](int int a, int b) -> int { return a + b +c ; }; // capture all by reference
    //auto add = [&](int a, int b) -> int { return a + b +c ; };
    // int result = add(5, 3);
    // std::cout << "Result of addition: " << result << std::endl; // Output: 8



    //  c variable here can not be changed because it is captured by value.
    // add mutable lambda function to change the value of c inside the lambda function. 
    auto changeinC = [c]()mutable { c = 20; }; // capture all by reference
    
    std::cout << "Value of c before calling lambda function: " << c << std::endl; // Output: 10
    changeinC();
    std::cout << "Value of c after calling lambda function: " << c << std::endl; // Output: 20
    
    auto changeinc = [&c]()mutable { c = 20; }; // capture all by reference
    
    std::cout << "Value of c before calling lambda function: " << c << std::endl; // Output: 10
    changeinc();
    std::cout << "Value of c after calling lambda function: " << c << std::endl; // Output: 20






    return 0;


}