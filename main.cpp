#include <iostream>

int square(int n){
    return n*n;
}

int main() {
    int num;
    std::cin>>num;
    std::cout<<square(num);
    return 0;
}