#include <iostream>

using namespace std;

// Abstract base class
class Figure {
public:
    // Pure virtual function
    virtual double calculateArea() = 0;

    // Pure virtual display function
    virtual void show() = 0;

    // Virtual destructor
    virtual ~Figure() {}
};

// Derived class: Square
class Square : public Figure {
    double side;

public:
    Square(double s) {
        side = s;
    }

    double calculateArea() override {
        return side * side;
    }

    void show() override {
        cout << "Square Area: " << calculateArea() << endl;
    }
};

// Derived class: Triangle
class Triangle : public Figure {
    double base;
    double height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double calculateArea() override {
        return 0.5 * base * height;
    }

    void show() override {
        cout << "Triangle Area: " << calculateArea() << endl;
    }
};

int main() {
    Figure* f1 = new Square(6);
    Figure* f2 = new Triangle(8, 5);

    f1->show();
    f2->show();

    delete f1;
    delete f2;

    return 0;
}

