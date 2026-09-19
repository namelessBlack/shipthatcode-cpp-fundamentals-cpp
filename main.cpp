#include <iostream>
#include <algorithm>

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::reverse(str.begin(),str.end());
    std::cout<<str;
}
