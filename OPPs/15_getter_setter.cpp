#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double cgpa;

public:
    // Constructor
    Student(std::string n, int a, double c)
        : name(n), age(a), cgpa(c) {}

    //Getters
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getCGPA() const {
        return cgpa;
    }

    //Setters
    void setName(const std::string& newName) {
        if (!newName.empty()) {
            name = newName;
        }
    }

    void setAge(int newAge) {
        if (newAge > 0 && newAge < 120) {
            age = newAge;
        }
    }

    void setCGPA(double newCGPA) {
        if (newCGPA >= 0.0 && newCGPA <= 10.0) {
            cgpa = newCGPA;
        }
    }
};

int main() {

    Student s1("Devansh", 20, 8.5);

    std::cout << "Name: " << s1.getName() << std::endl;
    std::cout << "Age: " << s1.getAge() << std::endl;
    std::cout << "CGPA: " << s1.getCGPA() << std::endl;

    // Updating using setters
    s1.setAge(22);
    s1.setCGPA(9.1);

    std::cout << "\nAfter Update:\n";
    std::cout << "Age: " << s1.getAge() << std::endl;
    std::cout << "CGPA: " << s1.getCGPA() << std::endl;

    return 0;
}
