#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;

protected:
    int pro = 2;

private:
    int pri = 3;

public:
    void show() {
        cout << "Base show()\n";
    }
};

// 1. Public Inheritance
class PublicDerived : public Base {
public:
    void display() {
        cout << "PublicDerived:\n";
        cout << "pub = " << pub << endl;   //public
        cout << "pro = " << pro << endl;   //protected
        // cout << pri; //not accessible
    }
};

//  2.Protected Inheritance 
class ProtectedDerived : protected Base {
public:
    void display() {
        cout << "ProtectedDerived:\n";
        cout << "pub = " << pub << endl;   // becomes protected
        cout << "pro = " << pro << endl;   // protected
    }
};

// 3. Private Inheritance
class PrivateDerived : private Base {
public:
    void display() {
        cout << "PrivateDerived:\n";
        cout << "pub = " << pub << endl;   // becomes private
        cout << "pro = " << pro << endl;   // becomes private
    }
};

// //4. Single Inheritance
class Single : public Base {};

//5. Multilevel Inheritance */
class Level1 {
public:
    void l1() { cout << "Level1\n"; }
};

class Level2 : public Level1 {
public:
    void l2() { cout << "Level2\n"; }
};

class Level3 : public Level2 {
public:
    void l3() { cout << "Level3\n"; }
};

//6. Multiple Inheritance
class A {
public:
    void showA() { cout << "Class A\n"; }
};

class B {
public:
    void showB() { cout << "Class B\n"; }
};

class Multiple : public A, public B {};

//7. Hierarchical Inheritance
class Parent {
public:
    void parentFunc() { cout << "Parent\n"; }
};

class Child1 : public Parent {};
class Child2 : public Parent {};

//8. Hybrid Inheritance
class VBase {
public:
    void showVBase() { cout << "Virtual Base\n"; }
};

class V1 : virtual public VBase {};
class V2 : virtual public VBase {};

class Hybrid : public V1, public V2 {};

int main() {

    PublicDerived pd;
    pd.display();
    pd.show();

    ProtectedDerived prd;
    prd.display();

    PrivateDerived pvd;
    pvd.display();

    Level3 obj;
    obj.l1();
    obj.l2();
    obj.l3();

    Multiple m;
    m.showA();
    m.showB();

    Child1 c1;
    Child2 c2;
    c1.parentFunc();
    c2.parentFunc();

    Hybrid h;
    h.showVBase();

    return 0;
}
