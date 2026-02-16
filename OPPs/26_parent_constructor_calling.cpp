#include <iostream>
using namespace std;

class Parent {
protected:
    int x;

public:
    Parent(int a) : x(a) {
        cout << "Parent Constructor Called. x = " << x << endl;
    }
};

class Derived : public Parent {
private:
    int y;

public:
    Derived(int a, int b) : Parent(a), y(b) {
        cout << "Derived Constructor Called. y = " << y << endl;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Derived obj(10, 20);
    obj.display();
    return 0;
}
