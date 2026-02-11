#include <iostream>

int main() {
    // Basic lambda syntax:
    // [capture](parameters){ body }

    // Declaration of lambda function
    auto preparedChai = [](int cups) {
        std::cout << "Preparing " << cups << " Cups of tea" << std::endl;
    };

    // Calling the lambda function
    preparedChai(5);

    return 0;
}
