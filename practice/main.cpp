#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

// Das Mathegenie

int parseComputation(const std::string & input) {

    std::string expression = input;                            // 4 + 20+1 +3
    std::vector<std::string> numbers;

    while (expression.find(" ") != std::string::npos){ // '.find()' returns posistion of " " if he finds, otherwise
                                                        // he returns std::string::npos -> it means he didnt find anything
        expression.erase(expression.find(" "), 1); // Delete "space", 1 -> means how many symbols to delete.
                                                  // So it s just " "
    }

    size_t start = 0;
    size_t end = expression.find("+");

    while (end != std::string::npos)
    {
        numbers.push_back(expression.substr(start, end - start));    // 4+20+1+3
                                                                    // 01234567
        start = end + 1;   // start = 2 because end = 1 and + 1 equals to 2
        end = expression.find("+", start); // .find(we are searching for next "+", from start) so 'end' is next position of "+", if "+" not exist anymor
                                            // then we gonna exit while - loop
    }
    numbers.push_back(expression.substr(start, end)); // if didn't find that we looked for
                                                        // numbers is now = {"4", "2", "1"}
                                                        // we need to now transform strnumbers into real numbers (int) to get sum of this numbers
    int result = 0;
    for (int i = 0; i < numbers.size(); i++)
        result += std::stoi(numbers.at(i));

    return result;
}

int main() {
    
    std::string word = "4 + 20+1 +3+2+10+4";
    std::cout <<word << " = " << parseComputation(word) << std::endl;
    
    //std::cout << word.size() << std::endl; // - word.size() - 5
    
    return 0;
}
