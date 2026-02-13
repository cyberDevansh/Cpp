#include <iostream>

int main() {

    int* ptr1 = new int;   // garbage value
    *ptr1 = 5;             // assign value manually
    std::cout << "ptr1 value: " << *ptr1 << std::endl;
    delete ptr1;


    int* ptr2 = new int(10);   // directly initialize with 10
    std::cout << "ptr2 value: " << *ptr2 << std::endl;
    delete ptr2;

    int* arr = new int[5];   // 5 integers (uninitialized)

    // Assign values
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Print values
    std::cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;

    return 0;
}
