#include <iostream> 
#include <vector>
int main () 
{ 
    std::vector<int> numbers = {1, 2, 3, 4, 5}; 
    for (int number : numbers) 
    { 
        std::cout << number << std::endl; 
    } 

// Code is transleted as the following by compiler 
// Despite Fact that Ranged Based For Loop is more readable
// It is less efficient than traditional for loop
// because of the extra iterator object creation and
// dereferencing operation
// So, if performance is critical, use traditional for loop
// instead of Ranged Based For Loop
//  std::vector<int, std::allocator<int> > numbers = std::vector<int, std::allocator<int> >{std::initializer_list<int>{1, 2, 3, 4, 5}, std::allocator<int>()};
//   {
//     std::vector<int, std::allocator<int> > & __range1 = numbers;
//     __gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int> > > __begin1 = __range1.begin();
//     __gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int> > > __end1 = __range1.end();
//     for(; __gnu_cxx::operator!=(__begin1, __end1); __begin1.operator++()) {
//       int number = __begin1.operator*();
//       std::cout.operator<<(number).operator<<(std::endl);
//     }
    
//   }

    // for (int i = 0; i < 5; i++) 
    // { 
    //     std::cout << "Hello World!" << std::endl; 
    // } 
    return 0; 

}