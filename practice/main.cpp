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
    // лучше всего сразу инициализировать значение
    const unsigned max_coord{100};
    int x{0}, y{0};

public:
    // Вариант 1: Конструктор по умолчанию которую можно вызывать без передачи каких либо аргументов
    Point2D() : x(0), y(0)
        { } // Тело конструктора
    
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
    
    
    Point2D pt;
    Point2D* ptr_pt = new Point2D;
    
    int x, y;
    
    pt.get_coords(x, y);
    std::cout << x << " " << y <<std::endl;
    
    ptr_pt->get_coords(x, y);
    std::cout << x << " " << y <<std::endl;
    
    delete ptr_pt;
    
    return 0;
};
