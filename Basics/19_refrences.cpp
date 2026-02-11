#include <iostream>
#include <string>

int main() {
    std::string a = "Tea";
    std::string& b = a;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}
