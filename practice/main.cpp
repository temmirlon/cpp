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
    
    // как лямбда функция определяет какой тип возвращаемого значения у нее есть
    
    auto l_one = [](int a, int b){
        
        return a + b; // должно что то возвращать
        
    };
    
    auto l_two = l_one(4, 3); // type of l_two is "int". depends of what we return from l_one lambda
    
    std::cout << l_two << std::endl;
    
    return 0;
}
