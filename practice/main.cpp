#include <iostream>
#include <string>


/* Пространство имен - namespace */

namespace firstns {
    void func() {
        std::cout << "func first" << std::endl;
    }

    int a;
    
    class Point{
        
    };

}

namespace secondns {
    void func() {
        std::cout << "func second" << std::endl;
    }

    int b;

    class Point{
        
    };

}

namespace thirdns {
    namespace secondns {
        void func() {
            std::cout << "func third" << std::endl;
        }
    }
}

using namespace firstns;

int main(){
    
    func(); // output func first
    
    firstns::func();
    secondns::func();
    thirdns::secondns::func();
    
    firstns::Point pointt;
    
    return 0;
}
