#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums;
    int x;
    while (std::cin>>x){
        nums.push_back(x);
    }
    std::cout << *std::max_element(nums.begin(),nums.end());
}