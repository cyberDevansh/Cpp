#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai {
public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    // Parameter Constructor
    Chai(string name, int serve, vector<string> ingr) {
        teaName = new string(name);
        servings = serve;
        ingredients = ingr;
        cout << "Parameter Constructor called" << endl;
    }
 
     // 1. COPY CONSTRUCTOR (Deep Copy)
    Chai(const Chai& other) {
        teaName = new string(*other.teaName); // Allocate new memory
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy Constructor called (Deep Copy)" << endl;
    }

    // Destructor
    ~Chai() {
        delete teaName;
        cout << "Destructor Called...." << endl;
    }

    void displayChaiDetails() {
    
        cout << "Tea Name: " << *teaName << " (Address: " << teaName << ")" << endl;
        cout << "Servings: " <<servings << endl;
        cout << "Ingredients: ";
        for (const string& ingreed : ingredients) {
            cout << ingreed << " ";
        }
        cout << "\n" << endl;
    }
};

int main() {
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});
    
    // This now calls Copy Constructor
    Chai copiedChai = lemonTea; 

    // Correctly modifying the pointer value
    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "--- After Modification ---" << endl;
    lemonTea.displayChaiDetails();
    copiedChai.displayChaiDetails();

    return 0;
}