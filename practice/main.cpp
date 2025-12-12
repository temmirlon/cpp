#include <iostream>
#include <string>


/*
 
 Инкапсуляция. Методы get и set

 */


class Point{
private:
    int x;
    int y;
    int z;
    

public:
    
    int GetY(){ return y; }
    void SetY(int valueY) { y = valueY; }
    
    int GetX(){ return x; }
    void SetX(int valueX) { x = valueX; }
    
    void Print(){
        std::cout << "X = " << x << "\t Y = " << y << std::endl;
    }
    
};


int main(){
    
    Point a;
    a.SetY(11);
    a.SetX(5);
    a.Print();
    
    int res = a.GetX();
    
    std::cout << res << std::endl;
    
    return 0;
}
