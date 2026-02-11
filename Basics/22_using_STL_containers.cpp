#include <iostream>
#include <vector>

using vi = std::vector<int>;
using vvi = std::vector<std::vector<int>>;

int main() {
    vi arr = {1, 2, 3};
    vvi matrix = {{1, 2}, {3, 4}};

    for (int x : arr)
        std::cout << x << " ";

    std::cout << std::endl;
}
