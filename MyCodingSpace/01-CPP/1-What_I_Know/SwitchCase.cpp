#include <iostream> 

const int a = 10;
const int B = 20;
const int C = 30;

// Cpp allow only integral types in switch case
// float, double, string are not allowed
// enum, char, int are allowed 
// this diffrence from other languages like Java, C# where string is allowed
// switch case is used when we have multiple options and we need to select one of them
// the switch statement is used to select one of many code blocks to be executed.



int choice = 0 ; 
int main () 
{
  std::cout << "Enter your choice (10, 20, 30): ";
  std::cin >> choice;
 
  switch (choice) 
  {
    case a:
      std::cout << "You entered 10." << std::endl
                << "This is case A." << std::endl;
      break;
    case B:
      std::cout << "You entered 20." << std::endl
                << "This is case B." << std::endl;
      break;        
    case C:
      std::cout << "You entered 30." << std::endl
                << "This is case C." << std::endl;
      break;
    default:
      std::cout << "You entered an invalid choice." << std::endl;
      break;
  } 
  return 0;

}