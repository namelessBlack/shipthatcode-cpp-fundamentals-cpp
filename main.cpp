#include <iostream>
#include <algorithm>

int main() {
    int num;
    std::cin>>num;
    if (num%15==0){
        std::cout<<"FizzBuzz";
    }
    else if (num%3==0){
        std::cout<<"Fizz";
    }
    else if (num%5==0){
        std::cout<<"Buzz";
    }
    else {
        std::cout<<num;
    }

}
