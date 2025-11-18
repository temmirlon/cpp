#include <iostream>
#include <string>
#include <functional>


// Полиморфная оберка функции
// std::function


void foo(){
    
    std::cout << "foo" << std::endl;
    
}

void bar(){
    
    std::cout << "=====bar====="<< std::endl;
    
}

int sum(int a, int b){
    return a + b;
}

int main(){
    
    
    
    std::function<int(int,int)> f;
    
    f = sum;
    
    std::cout << f(3, 5) << std::endl; 
    
    return 0;
}
