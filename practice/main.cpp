#include <iostream>
#include <string>
#include <thread>
#include <chrono> // для работы со временем

// Многопоточное программирование
// Multithreaded programming

void doWork(){
    
    for (size_t i = 0; i < 10; i++) {
        
        std::cout << std::this_thread::get_id() << "\tdoWork\t" << i << std::endl; // поток doWork и main один и тот же
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // задержка
        
    }
    
}

int main(){
    
    std::thread th(doWork); // запуск задачи в нашем потоке параллельно (запуск программы в двух потоках)
    //th.detach(); // Separates the thread of execution from the thread object, allowing execution to continue independently.
    
    for (size_t i = 0; i < 10; i++) {
        
        std::cout << std::this_thread::get_id() << "\tmain\t" << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        
    }
    
    
    th.join(); // Blocks the current thread until the thread identified by *this finishes its execution.
    return 0;
}
