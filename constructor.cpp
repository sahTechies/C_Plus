// constructor types in C++


#include <iostream>
using namespace std;

// syntax for default constructor
class DefaultConstructor {
public:
    DefaultConstructor() {
        cout << "Default Constructor called!" << endl;
    }
};
// syntax for parameterized constructor
class ParameterizedConstructor {
    int x;
public:
    ParameterizedConstructor(int val) : x(val) {
        cout << "Parameterized Constructor called with value: " << x << endl;
    }
};
// syntax for copy constructor
class CopyConstructor {
    int y;  
public:
    CopyConstructor(int val) : y(val) {
        cout << "Regular Constructor called with value: " << y << endl;
    }
    CopyConstructor(const CopyConstructor &obj) {
        y = obj.y;
        cout << "Copy Constructor called with value: " << y << endl;
    }
};
int main() {
    // Default Constructor
    DefaultConstructor defObj;

    // Parameterized Constructor
    ParameterizedConstructor paramObj(42);

    // Copy Constructor
    CopyConstructor originalObj(100);
    CopyConstructor copyObj = originalObj; // invokes copy constructor

    return 0;
}
// This program demonstrates different types of constructors in C++:
// 1. Default Constructor: Initializes an object without any parameters.
// 2. Parameterized Constructor: Initializes an object with given parameters.
// 3. Copy Constructor: Initializes an object by copying another object.
