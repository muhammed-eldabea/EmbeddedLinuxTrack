#include <iostream>
#include <string> 



int main () { 



    // Declare a lambda function that takes two integers and returns their sum 
    //  auto lambdaFunction = [](int a, int b) { return a + b; }; // Define a lambda function that adds two integers
    //  int result = lambdaFunction(5, 3); // Call the lambda function with arguments
    //  std::cout << "Result of lambda function: " << result << std::endl; //

    // int temp = 10; // Declare an integer variable temp and initialize it to 10 
    // [temp](int number)mutable {
    //     temp += number; // Capture temp by value and modify it inside the lambda
    //     std::cout << "Value of temp inside lambda: " << temp << std::endl; // Print the value of temp inside the lambda
    // }(3) ; // Call the lambda with an argument (3) to execute it 

    // std::cout << "Lambda executed successfully." << std::endl; // Print a message indicating successful execution of the lamb
    // std::cout << "Final value of temp: " << temp << std::endl; // Print the final value of temp after lambda execution
    // return 0; // Return 0 to indicate successful execution  



    // int temp = 10; // Declare an integer variable temp and initialize it to 10 
    // [&temp](int number)mutable {
    //     temp += number; // Capture temp by value and modify it inside the lambda
    //     std::cout << "Value of temp inside lambda: " << temp << std::endl; // Print the value of temp inside the lambda
    // }(3) ; // Call the lambda with an argument (3) to execute it 

    // std::cout << "Lambda executed successfully." << std::endl; // Print a message indicating successful execution of the lamb
    // std::cout << "Final value of temp: " << temp << std::endl; // Print the final value of temp after lambda execution
  
  
  int temp =10 ; 
  int number = 3; // Declare an integer variable number and initialize it to 3 

      std::cout << " value of temp: " << temp << std::endl; // Print the final value of temp after lambda execution

//   [=,&temp]()mutable  
//   {
//     temp += number; // Capture temp by reference and modify it inside the lambda
//     std::cout << "Value of temp inside lambda: " << temp << std::endl; // Print the value of temp inside the lambda
//   }(); 
  
//     std::cout << "Lambda executed successfully." << std::endl; // Print a message indicating successful execution of the lambda
//     std::cout << "Final value of temp: " << temp << std::endl; // Print the final value of temp after lambda execution


[=] (int number) mutable {
    [temp,number]() mutable {
        temp += number; // Capture temp by reference and modify it inside the lambda
            std::cout << "Value of temp inside  of inside lambda: " << temp << std::endl; // Print the value of temp inside the lambda

    }(); // Call the inner lambda to modify temp
    std::cout << "Value of temp inside lambda: " << temp << std::endl; // Print the value of temp inside the lambda
    std::cout << "Value of number inside lambda: " << number << std::endl  ; 
}(2) ; 

    std::cout << "Lambda executed successfully." << std::endl; // Print a message indicating successful execution of the lambda
    std::cout << "Final value of temp: " << temp << std::endl;
  
  
    return 0; // Return 0 to indicate successful execution  

}