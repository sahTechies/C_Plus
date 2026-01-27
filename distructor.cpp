#include<iostream>
using namespace std;

//destructor syntax in C++
class DestructorExample {
public:
    DestructorExample() {   // this is a  constructor or not - yes it is
        cout << "Constructor called!" << endl;
    }
    ~DestructorExample() {  // this is used to delete the constructor - yes it i
        cout << "Destructor called!" << endl;
    }
};

int main() {
    DestructorExample obj; // Constructor is called here

    // Destructor will be called automatically when obj goes out of scope
    return 0;
}