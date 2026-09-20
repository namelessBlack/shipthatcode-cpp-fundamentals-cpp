#include <iostream>

class Rectangle{
    private:
        int hight;
        int weight;
    public:

        Rectangle(int h , int w) : hight{h}, weight {w}{
            hight = h;
            weight = w;
        }

        void GetData() {
            std::cin >> hight;
            std::cin >> weight;
        }

        int perimeter () const {
            return 2 * (hight + weight);
        }

        int area () const {
            return hight * weight;
        }
};


int main() {
    
    Rectangle rect (0,0);
    rect.GetData();

    std::cout << "area: " << rect.area() << std::endl;
    std::cout << "perimeter: " << rect.perimeter() << std::endl;

    return 0;
}