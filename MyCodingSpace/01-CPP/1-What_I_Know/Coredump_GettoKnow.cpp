#include <iostream> 

// Coredump is way to debug the program crash
// It is a file that captures the memory of the program at the time of crash
// It contains the stack trace, memory information, and other useful data
// It helps in identifying the root cause of the crash  
// To enable coredump in Linux, use the command: ulimit -c unlimited
// After the program crashes, a core file will be generated in the current directory
// To analyze the core file, use the command: gdb <executable> core <core-file> 
// if the core file is not generated, check the /proc/sys/kernel/core_pattern file
// It defines the location and name pattern of the core files   
// sudo sysctl -w kernel.core_pattern=core   used to generate core file in current directory






int main() {
    int* p = nullptr; // Null pointer

    // Dereferencing a null pointer leads to undefined behavior and likely a crash
    std::cout << *p << std::endl; 

    return 0;
}