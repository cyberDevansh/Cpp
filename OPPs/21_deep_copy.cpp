#include <iostream>
using namespace std;

int main()
{
    int *p1 = new int(10);
    int *p2 = new int(*p1); // deep copy

    cout << "Before:\np1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;

    *p2 = 20;

    cout << "After:\np1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;

    delete p1;
    delete p2;
}
// Separate memory blocks for both