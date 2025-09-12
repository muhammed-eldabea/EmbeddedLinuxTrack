#include <iostream> 
#include <string>
#include <vector>




// std::ostream& operator<<(std::ostream& os, TrafficLight light) {
    //     switch (light) {
        //         case TrafficLight::Red: os << "Red"; break;
        //         case TrafficLight::Yellow: os << "Yellow"; break;
        //         case TrafficLight::Green: os << "Green"; break;
        //     }
        //     return os;
        // }
        
        

enum  class TrafficLight { Red, Yellow, Green };

void fun (TrafficLight light) {
    switch (light) {
        case TrafficLight::Red:
            std::cout << "Stop" << std::endl;
            break;
        case TrafficLight::Yellow:
            std::cout << "Caution" << std::endl;
            break;
        case TrafficLight::Green:
            std::cout << "Go" << std::endl;
            break;
    }
}

int main ()  
{ 
    
    TrafficLight light = TrafficLight::Red; 
    fun(light); // This will print "Stop"
    // fun(2) ;  // This will cause a compilation error because 2 is not a valid TrafficLight enum value 
    // This will compile but is not recommended, as it can lead to undefined behavior   
    return 0;
} 
    

    
    
    
    
    






    // // Normal Classes 
    // int x = Red; // cnverted from enum to int
    // TrafficLight light = 2; // This will compile but is not recommended, as it can lead to undefined behavior
    // TrafficLight light2 = static_cast<TrafficLight>(1); // safer way to    

    // // Using enum class
    // // Note that enum class provides better type safety      
    // TrafficLight light3 = TrafficLight::Red; // recommended way to use enum class
    // TrafficLight light4 = TrafficLight::Green; // another way to use enum class 

