#include<iostream>
using namespace std;

//destructor syntax in C++
class DestructorExample {
public:
    DestructorExample() {
        cout << "Constructor called!" << endl;
    }
    ~DestructorExample() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    DestructorExample obj; // Constructor is called here

    // Destructor will be called automatically when obj goes out of scope
    return 0;
}