#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> words;
    std::string seen;
    while (std::cin>>seen){
        words.insert(seen);
    }
    std::cout << words.size() << "\n";
    
}