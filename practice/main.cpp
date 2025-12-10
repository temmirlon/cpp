#include <iostream>
#include <math.h>
#include <string>
#include <vector>

// Конструкторы

// Имя конструктора должно совпадать с именем типа данных
// ... никогда не возвращает никаких значений, поэтому возвращаемый тип не прописывается
// ... может иметь произвольное (любое) число параметров
// ... всегда вызывается при создании каждого нового объекта

class Point2D {

    const unsigned max_coord{100};
    int x{0}, y{0};

public:
    Point2D() : x(0), y(0) {} // constructor overloading
    
    Point2D(int a, int b) : x(a), y(b)
            {
            std::cout << "CONSTRUCTOR" << std::endl;
        } // Тело конструктора
    
    void set_coords(int a, int b) {
        x = a;
        y = b;
    }
    void get_coords(int& a, int& b) {
        a = x;
        b = y;
    }
    
};

int main(){
    
    
    Point2D pt; // first contructor

    Point2D* ptr_pt = new Point2D(1,2); // second constructor
    
    int x, y;
    
    pt.get_coords(x, y);
    std::cout << x << " " << y <<std::endl;
    
    ptr_pt->get_coords(x, y);
    std::cout << x << " " << y <<std::endl;
    
    delete ptr_pt;
    
    return 0;
};
