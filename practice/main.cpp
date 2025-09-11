#include <iostream>
#include <string>
#include <vector>

//substring

std::vector<std::string> split(const std::string& str, char delimiter = ',') {
    std::vector<std::string> parts;
    size_t start = 0;
    size_t end = str.find(delimiter);
    
    //Wenn die Suche zu keinem Ergebnis fuhr, nimmt der Ruckgabewert den speziellen Wert npos an.

    while (end != std::string::npos)
    {
        parts.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }
    parts.push_back(str.substr(start, end));
    return parts;
}

int main() {
    
    std::vector<std::string> list = split("Hello, my name is Timo, Have a nice day, bye, bye");
    
    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i);
    }
    
    std::cout<<std::endl;
    return 0;
}
