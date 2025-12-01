#include <iostream>
#include <string>
#include <vector>

// Поля структуры доступны напрямую извне
struct Point{
    int x, y;
};


// Поля класса недоступны по умолчанию вне класса
class Point2D {
    int x,y;
    
public:
    void set_coords(int a, int b)
    { x = a; y = b; } // {this->x = a;, this->y = b} одно и то же
    void get_coords(int& a, int& b)
    { a = x; b = y; }
};

int main(){
    // ловим ошибку: потому что не связан ни с каким объектом
    // неявный указатель this не определен
    Point2D::set_coords(4, 3);
    
    
    Point2D pt1;
    Point2D *ptr_pt = new Point2D; // создается в куче (heap), нужно освобождать память в конце
    
    // сюда автоматичекски передаются указатель с именем this
    // this (указатель) ссылается на тот объект через который был вызван данный метод
    pt1.set_coords(1, 2);
    
    
    delete ptr_pt;
    
    return 0;
}
