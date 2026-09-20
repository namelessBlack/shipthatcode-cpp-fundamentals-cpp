#include <iostream>
#include <iomanip>
template <typename T> T sumPair(T a, T b) {
    return a + b;
}

int main() {
    int a,b;
    double c,d;
    std::cin >> a >> b;
    std::cin >> c >> d;
    std::cout << sumPair(a,b) << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << sumPair(c,d);
    return 0;
}