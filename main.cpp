#include <iostream>
#include <iomanip>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Square : public Shape {
    double side;
public:
    Square(double s) : side{s} {}
    double area() const override { return side * side; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double r_) : r{r_} {}
    double area() const override { return 3.14159 * r * r; }
};

int main() {
    double side, radius;
    std::cin >> side >> radius;
    std::cout << std::fixed << std::setprecision(2);

    Shape* sq = new Square(side);
    Shape* c = new Circle(radius);

    std::cout << sq->area() << "\n";
    std::cout << c->area() << "\n";

    delete sq;
    delete c;

    return 0;
}