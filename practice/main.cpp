#include <iostream>
#include <string>
#include <algorithm>

//Anagram

bool isAnagramm(std::string text1, std::string text2) {
    std::transform(text1.begin(), text1.end(), text1.begin(), tolower);
    std::transform(text2.begin(), text2.end(), text2.begin(), tolower);

    if (text1.size() != text2.size())
        return false;

    for (int i = 0; i < text2.size(); i++)
    {
        if (text1.find(text2.at(i)) == std::string::npos)
            return false;
        text1.erase(text1.find(text2.at(i)), 1);
    }
    return true;
}

int main() {

    std::string word = "aacc";
    std::string word2 = "ccac";

    //std::cout << word.size() << std::endl; // - word.size() - 5
    std::cout << isAnagramm(word, word2) << std::endl;
    return 0;
}
