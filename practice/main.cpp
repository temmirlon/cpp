#include <iostream>
#include <string>
#include <functional>
#include <vector>

// Полиморфная оберка функции
// std::function


void foo(int a){                                    // сигнатура у всех должна быть одинаковая
    
    if (a > 10 && a < 40) {
        std::cout << "foo: " << a << std::endl;
    }
}

void bar(int a){
    
    if (a % 2 == 0) {
        std::cout << "bar: " << a << std::endl;
    }
}

void doWork(std::vector<int> &vc,  std::vector<std::function<void(int)>> funcVector){
    
    for (auto element : vc) {
        for (auto &funcelement : funcVector) {
            funcelement(element);
        }
    }
}

void baz(int a){
    std::cout << "baz" << std::endl;
}

int main(){
    
    std::function<int(int,int)> f;
    
    std::vector<int> nums = {11,23,53,34,89,9,40,76,37,55,29,23,39,26};
    
    std::vector<std::function<void(int)>> fVector;

    fVector.emplace_back(foo);
    fVector.emplace_back(bar);
    fVector.emplace_back(baz);
    
    doWork(nums, fVector);
    
    return 0;
}
