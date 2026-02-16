#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() final {
        cout << "Base show() - cannot be overridden\n";
    }
};

class Derived : public Base {
public:
    // void show() override { }   //Error: cannot override final function

    void display() {
        cout << "Derived display()\n";
    }
};

int main() {
    Derived obj;
    obj.show(); 
    obj.display();

    return 0;
}
