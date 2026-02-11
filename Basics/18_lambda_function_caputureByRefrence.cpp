#include <iostream>
int main() {
    int sugar = 5;
    auto makeTea = [&]() {
        sugar++;
        std::cout << "Inside lambda sugar: " << sugar << "\n";
    };
    makeTea();
    std::cout << "Outside sugar: " << sugar << "\n";
}
