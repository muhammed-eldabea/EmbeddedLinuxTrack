#include <iostream> 


int SetTempValue (int &TempValue) 
{
    TempValue = 100;
    return TempValue;
}

void SetTempValueByPointer (int * TempValue) 
{
    *TempValue = 100;
}



int& GetTempValue (int &TempValue) 
{
    TempValue = 200;
    return TempValue;
}


int main () 
{   
    int Value = 10 ;
    std::cout << "Value : " << Value << std::endl ;
    SetTempValue (Value) ;
    std::cout << "Value : " << Value << std::endl ;
    GetTempValue (Value) = 300 ;
    std::cout << "Value : " << Value << std::endl ; 

    return 0 ; 
}