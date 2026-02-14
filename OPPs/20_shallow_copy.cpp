#include <iostream>
using namespace std;

int main() {
    int* p1 = new int(10);
    int* p2 = p1;   // shallow copy (copies address)

    *p2 = 20;

    cout << "p1: "<<*p1 << endl;
    cout << "p2: "<<*p2 << endl;
    
    delete p1;  // deleting once
}
// Both p1 and p2 point to the same memory so changing one will affect the other 