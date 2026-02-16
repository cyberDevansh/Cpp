#include <iostream>
#include <string>
using namespace std;

class Dev {

public:
    string Name;
    string* Name2;
    int Age;

    // constructor
    Dev(string name, string name2, int age) {
        cout << "Constructor called..." << endl;

        Name = name; 
        Name2 = new string(name2);
        Age = age;
    }

    // destructor
    ~Dev() {
        cout << "Destructor called..." << endl;
        delete Name2;
    }
};

int main() {

    Dev guppe("Devansh", "Gopalji", 22);

    return 0;
}
