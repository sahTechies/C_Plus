#include<iostream>
using namespace std;

class Base1 {
 public:
    void showBase1() {
        cout << "This is Base1 class." << endl;
    }
};

class Base2 {
 public:
    void showBase2() {
        cout << "This is Base2 class." << endl;
    }
};

class Derived : public Base1, public Base2 {
 public:
    void showDerived() {
        cout << "This is Derived class." << endl;
    }
};



int main() {
    Derived d;
    d.showBase1();    // Inherited from Base1
    d.showBase2();    // Inherited from Base2
    d.showDerived();  // From Derived class
    return 0;
}