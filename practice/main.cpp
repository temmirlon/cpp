#include <iostream>
#include <string>


/*
 
 Перегрузка конструкторов класса

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

int main(){
    
    Point a;
    a.Print();
    
    Point b(3, 5);
    b.Print();
    
    
    Point c(3, false); // if true y = 1, else -1
    c.Print();
    
    return 0;
}
