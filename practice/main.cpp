#include <iostream>
#include <string>
#include <functional>
#include <vector>

// Lambda function
// Лябмда функции


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

void baz(int a){
    std::cout << "baz" << std::endl;
}



void doWork(std::vector<int> &vc,  std::function<void(int)> func){
    
    for (auto el : vc) {
        func(el);
    }
    
}

int main(){
    
    int p = 0;
    
    auto f = [&p](){
        
        p = 5;
        
    };
    
    f();
    
    std::cout << p << std::endl; // 5
    
//    std::vector<int> nums = {11,23,53,34,89,9,40,76,37,55,29,23,39,26};
//    doWork(nums, [](int a) // анонимная функция
//    {
//        if (a % 3 == 0) {
//            std::cout << "lambda: " << a << std::endl;
//        }
//    });
    
    return 0;
}
