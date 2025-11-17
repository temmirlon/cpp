#include <iostream>
#include <string>
#include <map>

// map

int main(){
    
    // PAIR
    
    //std::pair<int, std::string> p(1, "iphone");
    
    std::map<int, std::string> my_map; // Contains only uniq values(key). binary tree through first element (in this case is int)
    
    my_map.emplace(3,"ipad"); // creates element directly in map
    
    my_map.insert(std::make_pair(1, "iphone")); // creates elements and than copies or moves to our map
    
    my_map.insert(std::pair<int, std::string>(2,"macbook"));
    
    my_map.emplace(22, "keyboard");
    
    
    auto it = my_map.find(10); // returns ITERATOR that points to pair that we looking for. if doesn't exist returns .end()
    
    if (it != my_map.end()) {
        std::cout << it->second << std::endl;
    } else {
        std::cout << "Element is not found!" << std::endl;
    }
    
    
    auto res = my_map.emplace(3, "powerbank"); // trying to add a value. returns PAIR (value of map, bool (exist or not))
    std::cout<< res.second << std::endl; // returns 0 -> FALSE
    std::cout << my_map[1] << std::endl; // get value through key
    
    
    
    std::map<std::string, int> myMap; // the key is STRING
    
    myMap.emplace("Timo", 5125);
    myMap.emplace("Emka", 4850);
    myMap.emplace("Zema", 5750);
    
    std::cout << myMap["Timo"] << std::endl;
    
    for (auto &[key, val] : myMap) {
        std::cout << "Key: " << key << ", Value: " << val << std::endl;
    }
    
    std::cout << "Delete Timo from map... and print out.." << std::endl;
    myMap.erase("Timo"); //
    
    for (auto &[key, val] : myMap) {
        std::cout << "Key: " << key << ", Value: " << val << std::endl;
    }
    
    return 0;
}
