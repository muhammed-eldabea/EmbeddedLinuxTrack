#include <iostream> 

// C++ program to demonstrate
// casting in C++
// casting types : 
// 1. static_cast
// 2. dynamic_cast
// 3. const_cast
// 4. reinterpret_cast 


int main () 
{
   
     /* 1- static cast
        * used for conversion between types
        * like int to float, char to int etc.
        * it is checked at compile time
        * it is faster than dynamic cast
        * it is safer than c-style cast
        * it is used for non-polymorphic types 
        */

     char c =  'a';     
     // invalid static cast example but is will not appear on the compiler time it will appear on the runtime
     int *p = (int*)&c; 
    // static case will give error at compile time 
    //  int *q = static_cast<char*>(&c); // invalid static cast
     char *q = static_cast<char*>(&c); // valid static cast
 /* 
    2- dynamic cast
        * used for conversion between polymorphic types
        * it is checked at runtime
        * it is slower than static cast
        * it is safer than c-style cast
        * it is used for polymorphic types 
        * it requires at least one virtual function in the base class
        * it returns nullptr if the cast is not possible
        * it is used for downcasting and cross-casting
        * it is used for casting within an inheritance hierarchy
        * it is used for casting from base class to derived class
        * it is used for casting from derived class to base class
        * it is used for casting from one derived class to another derived class
        * it is used for casting from base class to base class
        * it is used for casting from derived class to derived class
        * it is used for casting from base class to derived class
        * it is used for casting from derived class to base class
  
 */ 
    class Base {
        public:
            virtual void show() {
                std::cout << "Base class" << std::endl;
            }
    }; 
    class Derived : public Base {
        public:
            void show() {
                std::cout << "Derived class" << std::endl;
            }
    };

    Base *b = new Derived(); // upcasting
    Derived *d = dynamic_cast<Derived*>(b); // downcasting
    if(d) {
        d->show();
    } else {
        std::cout << "Invalid cast" << std::endl;
    }   
    delete b; // free memory 



    /*    3- const cast
        * used for casting away the constness of a variable
        * it is used to modify a const variable
        * it is used to pass a const variable to a function that takes a non-const variable
        * it is used to pass a non-const variable to a function that takes a const variable
        * it is used to cast a const pointer to a non-const pointer
        * it is used to cast a non-const pointer to a const pointer
        * it is used to cast a const reference to a non-const reference
        * it is used to cast a non-const reference to a const reference
        * it is used to cast a const object to a non-const object
        * it is used to cast a non-const object to a const object
    */
    const int x = 10;
    int *y = const_cast<int*>(&x); // casting away constness
    *y = 20; // modifying const variable
    std::cout << "x = " << x << std::endl; // x is still 10
    std::cout << "*y = " << *y << std::endl; // y is 20

    /* 4- reinterpret cast
        * used for low-level reinterpreting of bit patterns
        * it is used to cast a pointer to an integer
        * it is used to cast an integer to a pointer
        * it is used to cast a pointer to another pointer type
        * it is used to cast a pointer to a function pointer
        * it is used to cast a function pointer to a pointer
        * it is used to cast a function pointer to another function pointer type
        * it is used to cast a member pointer to another member pointer type
        * it is used to cast a member pointer to a member function pointer
        * it is used to cast a member function pointer to a member pointer
        * it is used to cast a member function pointer to another member function pointer type
    */
    int a = 65;
    char *b1 = reinterpret_cast<char*>(&a); // casting int pointer to char pointer
    std::cout << "*b1 = " << *b1 << std::endl; // prints A (ASCII value of 65 is A)
    int *c1 = reinterpret_cast<int*>(b1); // casting char pointer to int pointer
    std::cout << "*c1 = " << *c1 << std::endl; // prints 65 (ASCII value of A is 65)





     return 0;    


}