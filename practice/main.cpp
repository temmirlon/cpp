#include <iostream>
#include <string>
#include <vector>

int main(){
    
    int a = 5, b = 4;
    
    double c = a / static_cast<double>(b); // C++ Schreibweise
    
    // double c = a / double(b);  // C Schreibweise
    
    std::cout << c << std::endl;
    
    return 0;
}
