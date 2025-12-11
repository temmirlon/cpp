#include <iostream>


/*
    Конструтор преобразования. Деструктор
 
 */


class Complex{
    double re;
    double im;
    
public:
    Complex() : re(0.0), im(0.0) {}
    
    Complex(double real) : re(real), im(0.0) {}
    
    Complex(double real, double imag) : re(real), im(imag) {}
    
    void get_data(double& re, double& im){
        re = this->re;
        im = this->im;
    }
};


int main(){
    
    return 0;
}
