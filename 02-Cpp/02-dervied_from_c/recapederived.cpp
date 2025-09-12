#include <algorithm>
#include <iostream>
#include <string> 
#include <vector>



// void Hello (std::string message = "Hello World") 
// {
//     std::cout << message << std::endl; // Print the message to the console
// } 

// if default value is provided to one paramters it is needed to be provided for the rest of the parameters as well
// void HelloWithName (std::string name = "Unknown" , std::string message ) 
// {  
//  }

// int add ( int a , int b ) 
// {
//     return a + b ; 
// } 

// double add ( double a , double b ) 
// {
//     return a + b ; 
// }

// float add ( float a , float b ) 
// {
//     return a + b ; 
// } 




// This is an example of function overloading where the same function name is used with different parameter
// types to perform addition on different data types (int, double, float).

// const int globalValue = 100; // Global constant variable

constexpr int sum(int a, int b) {
    return a + b; // Function to sum two integers at compile time
}

int main () 
{    
        
        
    constexpr  int a = 10,  b = 20; // Declare and initialize two integer variables
//     constexpr int result = sum(a, b); // Call the sum function at compile time
//     std::cout << "Sum of " << a << " and " << b << " is: " << result << std::endl; // Call the sum function and print the result
std::cout << "Sum of " << a << " and " << b << " is: " << sum(a, b) << std::endl; // Call the sum function and print the result


return 0; // Return 0 to indicate successful execution of the program
}


        // int X  = globalValue; // Initialize a local variable X with the value of the global constant variable
        // int arr[globalValue] = {0}; // Declare an array of size globalValue and initialize all elements to 0
        // switch (X) 
        // {
        //         case globalValue: // Check if X is equal to the global constant variable
        //                 std::cout << "X is equal to globalValue" << std::endl; // Print a message if the condition is true
        //                 break; // Exit the switch statement
        //         default: // Default case if no other case matches
        //                 std::cout << "X is not equal to globalValue" << std::endl;
        // } 
        
        // int const  *ptr = &globalValue; 


// }

        





        // int sum = 0 ; 
        // std::vector<int> v = {1,2,3,4,5}; // Initialize a vector of integers 
        // std::for_each(v.begin(), v.end(), [&sum](int number) { sum += number; }); // Use a lambda function to sum the elements of the vector
        // std::cout << "Sum of vector elements: " << sum << std::endl;


        // int temp = 10; // Declare an integer variable temp and initialize it to 10
        // auto fun = [&v=temp ,&x = temp ] (int number ) { return v + x + number; }; // Define a lambda function that adds temp and number
        // std::cout << "Result of lambda function: " << fun(5) << std::endl; // Call the lambda function with argument 5 and print the result



        // auto fun = [](auto a, auto b)->decltype(a+b) { return a + b; }; // Define a lambda function that adds two integers
        // std::cout << "Result of lambda function with double: " << fun(5, 3) << std::endl; // Print the result of the lambda function with double
        // std::cout << "Result of lambda function with float: " << fun(5.5f, 3.2f) << std::endl; // Print the result of the



	// int temp = 10 ; 
	// [temp] (int number )mutable  {
	// 	temp = temp+number ; 
	// 	std::cout << "the value of lambda " << temp ; 
	// } (5) ; 

	// std::cout << "the value after lambda " << temp ;  
	









   // std::vector<int> number = {11,12,144,12,145,15,1,2,44}; // Initialize a vector of integers 
   // std::sort(number.begin(), number.end() , [](int a , int b ) {return a >b ; }); // Sort the vector in ascending order
   // std::cout << "Sorted numbers: "; // Output message before printing sorted numbers
  //  for (const auto& num : number) {
 //       std::cout << num << " "; // Output each sorted number
 //   }
//    std::cout << std::endl; // New line after printing sorted numbers




    // int addnumber = [](int a, int b) { return a + b; }(5, 3); // Lambda function to add two integers
    // std::cout << "Sum of 5 and 3 is: " << addnumber << std::endl; // Output the result of the addition

    // int offset = 10; // Example offset value 
    // std::vector<int> numbers = {111, 2, 23, 42, 5}; // Example vector of integers
    // std::sort(numbers.begin(), numbers.end() , [offset](int a, int b) { return a + offset > b + offset; }); // Sort the vector in ascending order
    // std::cout << "Sorted numbers with offset: ";
    // for (const auto& num : numbers) {
    //     std::cout << num << " "; // Output each sorted number
    // }
    // std::cout << std::endl; // New line after printing sorted numbers

    // add(5, 3); // Call the add function with integer parameters
    // add(5.5, 3.2); // Call the add function with double parameters
    // add(5.5f, 3.2f); // Call the add 
    // Hello() ; 
    // Hello("Hello from the  function With Default Value Changed !") ; // Call the Hello function with a custom message


//    return 0 ;  
// }
