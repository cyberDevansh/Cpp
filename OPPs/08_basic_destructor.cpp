#include <iostream>
#include <string>
using namespace std;

class Dev{

    public:
    string Name;
    string* Name2;
    int Age;

    //  constructor
    Dev(string name,string name2,int age){

        Name=name;
        Name2=new string(name2);
        int Age=age;
        cout<<"COnstructor called..."<<endl;

    }

    // destructor
    ~Dev(){
        delete Name2;
        cout<<"Destructor called...."<<endl;
    }
};

int main(){
    
    Dev guppe("Devansh","Gopalji",22);
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// class Dev {
// public:
//     string Name;
//     string* Name2;
//     int Age;

//     Dev(string name, string name2, int age) 
//         : Name(name), Name2(new string(name2)), Age(age) { 
//         cout << "Constructor called..." << endl;
//     }

//     // MANDATORY: Copy Constructor to prevent the "Double Free" crash
//     Dev(const Dev& other) {
//         Name = other.Name;
//         Age = other.Age;
//         Name2 = new string(*other.Name2); // New memory for the new object
//         cout << "Deep Copy Constructor called..." << endl;
//     }

//     ~Dev() {
//         delete Name2;
//         cout << "Destructor called..." << endl;
//     }
// };

// int main() {
//     Dev guppe("Devansh", "Gopalji", 22);
//     // Now this won't crash your computer:
//     Dev clone = guppe; 
    
//     return 0;
// }