#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; 
    virtual void display() = 0;
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }

    void display() override {
        cout << "Rectangle Area: " << area() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }

    void display() override {
        cout << "Circle Area: " << area() << endl;
    }
};

int main() {

    Shape* s1 = new Rectangle(5, 4);
    Shape* s2 = new Circle(3);

    s1->display();
    s2->display();

    delete s1;
    delete s2;

    return 0;
}
