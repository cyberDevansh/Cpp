#include <iostream>

int main() {
    int sugar = 5;

    auto makeTea = []() {
        // std::cout << sugar;  ERROR
        std::cout << "Making tea without sugar info\n";
    };

    makeTea();
}
