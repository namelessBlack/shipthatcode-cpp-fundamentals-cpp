#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>


int main() {
    std::vector<int> nums;
    int x;

    while (std::cin>>x) {
        nums.push_back(x);
    }
    
    std::vector<int> sorted_nums;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0) {
            sorted_nums.push_back(nums[i]*nums[i]);
        }
    }

    int sum = std::accumulate(sorted_nums.begin(), sorted_nums.end(), 0);
    std::cout << sum;
    return 0;
}