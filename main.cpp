#include <iostream>
#include <algorithm>

int main() {
    std::string name;
    int age;
    std::getline(std::cin, name);
    std::cin>>age;
    std::cout << "Hi, " << name << "! " << "You are " << age << " years old.";
    return 0; 
}
