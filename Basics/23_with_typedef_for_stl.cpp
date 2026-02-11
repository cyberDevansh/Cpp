#include <iostream>
#include <vector>

typedef std::vector<int> vi;

int main() {
    vi numbers = {10, 20, 30};

    for (int num : numbers) {  //also correct: for (const int &num : numbers)
        std::cout << num << " ";
    }
    return 0;
}
