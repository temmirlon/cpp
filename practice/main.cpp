#include <iostream>
#include <string>
#include <map>
#include <vector>
// leetcode

std::vector<int> topKFrequent(std::vector<int>& nums, int k){
    std::map<int,int> freq;

    // Считаем количество вхождений каждого числа
    for (int num : nums) {
        freq[num]++;
    }
    // Копируем пары в вектор для сортировки
    std::vector<std::pair<int,int>> vec(freq.begin(), freq.end());
    
    // Сортируем по значению по убыванию
    std::sort(vec.begin(), vec.end(),
                [](const std::pair<int,int>& a, const std::pair<int,int>& b){
                    return a.second > b.second;
                });
    // Берём первые k элементов
    
    std::vector<int> result;
    for (int i = 0; i < k && i < vec.size(); i++) {
        result.push_back(vec[i].first);  // добавляем сам элемент, а не частоту
    }
    
    return result;
}

int main(){
    
    std::vector<int> nums = {1,1,1,3,7,7,1,7,2,2,3};
    
    
    return 0;
}
