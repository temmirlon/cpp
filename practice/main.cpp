#include <iostream>
#include <string>
#include <vector>



int main(){
    
    std::vector<int> nums = {1,4,3,2,5,6,4};
    
    for (size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums.at(i) << std::endl;
    };
    
    return 0;
}
