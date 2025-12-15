#include <iostream>
#include <string>


/*
 
 Деструктор - действие после уничтожение объекта класса.
 (Когда наш объект уйдет из зоны видимости  функции)
 Деструктор не может иметь аргументы и не имеет возвращаемого типа, так как его главная задача — автоматически освобождать ресурсы объекта при его уничтожении, и он вызывается неявно компилятором, а не разработчиком с передачей параметров, как обычная функция.
 
 */


class Point{
private:
    int x;
    int y;
    int z;
    

public:
    
    // Перегрузка 1
    Point(){
        x = 0;
        y = 0;
    };
    
    // Перегрузка 2
    Point(int valueX, int valueY){
        x = valueX;
        y = valueY;
    }
    
    // Перегрузка 3
    Point(int valueX, bool boolean){
        
        x = valueX;
        
        if(boolean)
        {
            y = 1;
        } else
        {
            y = -1;
        }
        
    };
    
    int GetY(){ return y; }
    void SetY(int valueY) { y = valueY; }
    
    int GetX(){ return x; }
    void SetX(int valueX) { x = valueX; }
    
    void Print(){
        std::cout << "X = " << x << "\t Y = " << y << std::endl;
    }
    
};
class CoffeeGrinder{
private:
    
    bool checkVoltage(){
        return true;
    }
    
public:
    void Start(){
        
        if (checkVoltage()){
            std::cout << "vhjuuuuuuHH!" << std::endl;
        } else {
            std::cout << "Beep Beep!" << std::endl;
        }
        
    }
    
};

class MyClass{
    int data;
public:
    MyClass(int value){
        data = value;
        std::cout << "Object " << value << " The constructor has been called." << std::endl;
    }
    
    // Всегда один деструтор в классе
    ~MyClass(){
        
        std:: cout << "Object " << data << " The destructor has been called." << std::endl;
        
    }
    
};


void func(){
    
    std::cout << "FUNC. Start of execution" << std::endl;
    MyClass a(1);
    std::cout << "FUNC. End of execution." << std::endl;
};


int main(){
    
    func();
    
    // Объекты уничтожаются в порядке обратно тому в котором они создавались
    
    return 0;
}
