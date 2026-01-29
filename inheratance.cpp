#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout<<"Animal is eating"<<endl;
    }
};

class Dog: public Animal { // Derived class
public:
    void bark() {
        cout<<"Dog is barking"<<endl;
    }
};

int main(){
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.bark(); // From Dog class
    return 0;
}