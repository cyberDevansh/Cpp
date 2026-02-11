#include <iostream>
#include <vector>

class Student {
public:
    using MarksList = std::vector<int>;

    MarksList marks;
};

int main() {
    Student s;
    s.marks = {90, 85, 88};

    for (int mark : s.marks) {
        std::cout << mark << " ";
    }

    return 0;
}
