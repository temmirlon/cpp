#include <iostream>
#include <string>
#include <vector>


void divide(double a, int b){
    if (b == 0) throw 404;
    else std::cout<< a/b << std::endl;
}

int main(){
    
    try {
        divide(5.0f, 0);
    } catch (int err){
        if (err == 404) std::cout<< "Dividing error!"<<std::endl;
    }
    
    return 0;
}
