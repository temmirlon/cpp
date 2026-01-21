#include <iostream>
#include <string>


/*
 
 Конструктор копирования
 
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
public:
    int *data;
    
    MyClass(int size){
        
        this->Size = size;
        // Создание массива
        this->data = new int[size];
        
        // Заполняем массив
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        
        std::cout << "The constructor has been called. " << this << std::endl;
    };
    
    // Конструктор копирования
    MyClass(const MyClass &other){
        
        this->Size = other.Size;
        
        // Выделяем новое место в памяти под массив
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++)
        {
            /* Присваиваем значения из другого (старого) объекта*/
            this->data[i] = other.data[i];
        }
        
        std::cout << "The 'COPY' constructor has been called. " << this << std::endl;
    }
    
    ~MyClass(){
        std:: cout << "The destructor has been called. " << this << std::endl;
        delete[] data;
    };
    
private:
    int Size;
    
};


// Передача параметра по значению
void foo(MyClass value){
    std::cout << "The function FOO has been called." << std::endl;
}

MyClass foo2(){
    
    std::cout << "The function FOO-2 has been called." << std::endl;
    MyClass temp(2);
    
    return temp;
}

int main(){
    
    
    MyClass a(10);
    MyClass b(a);
    
    
    std::cout << "hello" << std::endl;
    return 0;
}
    
