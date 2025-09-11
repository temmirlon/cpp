#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

std::string reverse(const std::string& text) {
    if (text.size() == 0)
        return "";
    return reverse(text.substr(1)) + text.at(0);
}

bool isPalindrom(std::string& text){
    std::transform(text.begin(), text.end(), text.begin(), tolower);
    if (text.size() == 1 || text == reverse(text))
        return true;
    return false;
}

int main() {
    std::string word = "Lagerregal";
    std::cout << isPalindrom(word) << std::endl;
    return 0;
}
