#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double cgpa;

public:
    // Primary constructor
    Student(const std::string& n, int a, double c)
        : name(n), age(a), cgpa(c)
    {
        std::cout << "Primary constructor called\n";
    }

    // Delegating constructor (only name provided)
    Student(const std::string& n)
        : Student(n, 18, 0.0)   // Delegates to primary constructor
    {
        std::cout << "Delegating constructor called\n";
    }

    void display() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "CGPA: " << cgpa << "\n";
    }
};

int main() {

    Student s1("Devansh", 20, 8.5);
    s1.display();

    std::cout << "\n";

    Student s2("Guppe");  // Uses delegating constructor
    s2.display();

    return 0;
}
