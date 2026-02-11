#include <iostream>

int main() {
    int sugar = 5;
    auto makeTea = [=]() {
        std::cout << "Sugar: " << sugar << "\n";
        // sugar++;  ERROR (read-only copy)
    };

    makeTea();
    std::cout << "Original sugar: " << sugar << "\n";
}
