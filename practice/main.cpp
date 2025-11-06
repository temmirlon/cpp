#include <iostream>
#include <string>


// Base class
class Animal {
public:
    std::string name;
    
    Animal(std::string n) : name(n) {}
    
    virtual void speak(){
        std::cout << "making voice" << std::endl;
    }
    
};

// Derived Class (произвольный класс)

class Dog : public Animal {
public:
    
    Dog (std::string name) : Animal(name) {}
    
    void speak() override{
        std::cout << "Gav Gav!" << std::endl;
    }
    
};


// Another derived class

class Cat : public Animal{
public:
    Cat (std::string name) : Animal(name) {}
    
    void speak() override{
        std::cout << "Mew Mew!" << std::endl;
    }
};


int main(){
    
    int x = 5;
    
    int *p = &x;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "*p = " << *p << std::endl;
    
    return 0;
}
