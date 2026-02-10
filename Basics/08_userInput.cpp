#include <iostream>
#include <string>
#include <limits>

int main() {
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter name: ";
    std::getline(std::cin, name);

    std::cout << "Age: " << age << "\n";
    std::cout << "Name: " << name << "\n";

    return 0;
}

// When you type input value It does NOT instantly go into your variable. It first goes into an input buffer attached to std::cin
