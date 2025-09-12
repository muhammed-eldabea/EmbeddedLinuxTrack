#include <iostream>
#include <string> 




int fun (int *p) {return *p;}
int fun (int p) {return *p;} 

int main () {
 

    // fun (nullptr); // This will cause a compilation error
    fun (NULL); // This will also cause a compilation error

    return 0;
}