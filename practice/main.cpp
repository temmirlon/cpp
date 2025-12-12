#include <iostream>


/*
    Конструтор преобразования. Деструктор
 
 */


class Complex{
    double re;
    double im;
    
public:
    Complex() : re(0.0), im(0.0) {}
    
    // Конструктор преобразования - Conversion constructor
    Complex(double real) : re(real), im(0.0) {}
    
    Complex(double real, double imag) : re(real), im(imag) {}
    
    void get_data(double& re, double& im){
        re = this->re;
        im = this->im;
    }
    
    const Complex& Add(Complex& other){
        this->re += other.re;
        this->im += other.im;
        
        return *this;
    }
    
    
};


int main(){
    
    Complex c1;
    Complex c2(0.5); // {0.5} or c2 = 0.5
    Complex c3{-5.4, 7.8};
    
    c2.Add(c3);
    
    double re, im;
    c2.get_data(re, im);
    
    std::cout << re << " " << im << std::endl;
    
    return 0;
}
