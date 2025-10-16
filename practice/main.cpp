#include <iostream>
#include <string>
#include <vector>

class Person {
private:
    int age;
    std::string name;
public:
    Person(int a, std::string n){
        age = a;
        name = n;
    }
    
    void get_info(){
        std::cout << name << ": "<< age << std::endl;
    }
};

int main(){
    
    Person child(10, "Ali");
    
    child.get_info();
    
    return 0;
}
