#include <iostream> 
#include <vector> 

//  >>Demonstrating the use of const and constexpr with lambda functions
//  >>const variables cannot be modified after initialization
//  >>constexpr variables are evaluated at compile time and must be initialized with a constant expression  

int main () 
{
    // const int size = 5; 
    // int arr[size] = {10, 20, 30, 40, 50}; 

    // // Lambda function to print elements of the array
    // auto printArray = [arr, size]() {
    //     for(int i = 0; i < size; ++i) {
    //         std::cout << arr[i] << " ";
    //     }
    //     std::cout << std::endl;
    // };

    // printArray(); // Call the lambda function to print the array

    // constexpr int factor = 2;
    // // Lambda function to multiply each element by a factor
    // auto multiplyArray = [arr, size]() {
    //     std::vector<int> result;
    //     for(int i = 0; i < size; ++i) {
    //         result.push_back(arr[i] * factor);
    //     }
    //     return result;
    // };

    // std::vector<int> result = multiplyArray();
    // std::cout << "Multiplied Array: ";
    // for(const auto& val : result) {
    //     std::cout << val << " ";
    // }
    // std::cout << std::endl;     

        constexpr int factor ;
        factor = 2;
        std::cout << "Factor: " << factor << std::endl;
        


    return 0 ;
}