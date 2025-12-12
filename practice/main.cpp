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
    
    CoffeeGrinder a;
    a.Start();

    return 0;
}
