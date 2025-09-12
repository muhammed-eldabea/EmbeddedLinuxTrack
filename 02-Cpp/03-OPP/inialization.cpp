#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



int main ()  
{
    

     int x = 0 ; // copy initialization
     int x1{}  ; // uniform initialization (C++11)
     int x2(0) ; // direct initialization
// narrow conversion 
float dec = 3.14f ; // copy initialization
int number = dec ; // narrowing conversion, may cause loss of data
int number1{dec} ; // narrowing conversion, will cause a compile error
int number2( dec ) ; // narrowing conversion, will cause a compile error


    return 0 ; 
}