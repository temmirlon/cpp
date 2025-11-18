#include <iostream>
#include <string>
#include <thread>
#include <chrono> // для работы со временем

// Многопоточное программирование
// Multithreaded programming

int main(){
    
    std:: cout << "Start main: " << std::endl;
    
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // задерживает выполнение кода
    std:: cout << std::this_thread::get_id() << std::endl;
    
    std:: cout << "End main: " << std::endl;
    
    return 0;
}
