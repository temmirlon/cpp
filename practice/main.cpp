#include <iostream>
#include <string>


/*
 
 Ключевое слово this
 
 */

class Point{
private:
    int x;
    int y;
    
public:
    
    // Перегрузка 1
    Point(){
        x = 0;
        y = 0;
        
        std::cout << this << " contructor" << std::endl;
        
    };
    
    // Перегрузка 2
    Point(int valueX, int valueY){
        x = valueX;
        y = valueY;
        
        std::cout << this << " contructor" << std::endl;
    }
    
    
    int GetY(){
        return y;
    }
    
    void SetY(int y) {
        this->y = y;
    }
    
    int GetX(){
        return x;
    }
    
    void SetX(int valueX) {
        x = valueX;
    }
    
    void Print(){
        std::cout << "X = " << x << "\t Y = " << y << std::endl;
    }
    
};

int main(){
    
    Point a;
    a.SetY(5);
    a.Print();
    
    return 0;
}
    
