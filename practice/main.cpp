#include <iostream>
#include <string>
#include <set>
#include <map>


int main(){
    
    // set
    
//    std::set<int> mySet = {1,5,3,12,-4,9};
    
//    int value;
//    
//    std::cin >> value;
//    
//    if (mySet.find(value) != mySet.end()) {
//        std::cout<< "Number " << value << " is found!" << std::endl;
//    } else {
//        std::cout<< "Number " << value << " is not found!" << std::endl;
//    }
    
//    mySet.erase(5); // delete element in set
//    mySet.insert(64); // add element in set
    
    
//    auto result = mySet.insert(1); // .insert() returns pair<int, bool> first, second
//    
//    for (auto &item : mySet) {
//        std::cout << item << std::endl;
//    }
    
    
    // multi set // can have same elemenets
    
    
    std::multiset<int> mymultiSet = {12,1,1,6,4,-5};
    
//    mymultiSet.insert(4);
//    mymultiSet.insert(4);
//    mymultiSet.insert(4);

    
//    auto it1 = mymultiSet.lower_bound(1);
//    
//    auto it2 = mymultiSet.upper_bound(1); // return 4, because after first 1 comes 4 than 6 etc.
    
    auto a = mymultiSet.equal_range(1); // return range of it1(lower_bound) and it2(upper_bound)
    
    for (auto &item : mymultiSet) {
        std::cout << item << std::endl;
    }
    
    
    return 0;
}
