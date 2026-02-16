// A virtual function allows runtime polymorphism.
// Has a body (implementation) in base class.
// Derived class may override it (optional).
// If not overridden → base version runs.
// Base class can be instantiated.


// A pure virtual function forces derived classes to implement it.
// No implementation in base class.


// Feature	             Virtual Function	Pure Virtual Function
// Has body in base class     	Yes	      No
// Override required	            No  	Yes
// Base class object allowed	  Yes	    No
// Makes class abstract	          No	   Yes
// Purpose	        `Provide default behavior     	Force implementation

#include <iostream>
using namespace std;

// Normal Virtual Function
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

// Pure Virtual Function
class Shape {
public:
    virtual void draw() =0;   // pure virtual
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle drawn\n";
    }
};

int main() {
    // Normal virtual function
    Animal a;
    a.sound(); 

    Animal* ptr = new Dog();
    ptr->sound();       // Derived version (runtime polymorphism)

    // Pure virtual function
    // Shape s;         //Not allowed (abstract class)

    Shape* sp = new Circle();
    sp->draw(); 
    
    delete ptr;
    delete sp;

    return 0;
}


