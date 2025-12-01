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
};

int main(){
    
    Point pt;
    Point* ptr_pt = new Point;
    
    pt.x = 10;
    
    
    Point2D pt2d;
    Point2D *ptr_pt2 = new Point2D;
    
    pt2d.x = 10; // ловим ошибку "x" is a 'PRIVATE' member of 'Point2D'
    
    return 0;
}
