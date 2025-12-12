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
    
    Point(int valueX, int valueY){
        x = valueX;
        y = valueY;
    }
    
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

int main(){
    
    Point a(3, 4);

    return 0;
}
