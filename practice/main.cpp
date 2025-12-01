#include <iostream>
#include <math.h>
#include <string>
#include <vector>

// Ограничение доступа - это способ защититы программсита от возможного неправильного использования класса, а не от злоумышленников

// Ограничение доступа private и public работает на уровне классов, а не на уровне объектов
class Point2D {
    
private:
    int x,y; // все что находится в приватной зоне предназначено исключительно для внутреннего пользования
    
public:
    void set_coords(int a, int b) {
        x = a;
        y = b;
    }
    void get_coords(int& a, int& b) {
        a = x;
        b = y;
    }
    
    bool set_cord_range(int a, int b, int min_cord = 0, int max_cord = 100){
        
        if (a < min_cord || a > max_cord || b < min_cord || b > max_cord)
            return false;
        
        set_coords(a, b);
        return true;
    }
    
    double length_to(const Point2D& pt){
        return sqrt(((x-pt.x) * (x-pt.x) + (y-pt.y) * (y-pt.y)));
    }
};

int main(){
    
    Point2D pt, endp;
    pt.set_coords(1, 2);
    endp.set_coords(10, 20);
    
    double len = pt.length_to(endp);
    
    std::cout << len << std::endl;
    
    return 0;
};
