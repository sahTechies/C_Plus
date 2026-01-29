#include<iostream>
using namespace std;

class parent {
public:
    void showParent() {
        cout << "This is the parent class." << endl;
    }
};

class child : public parent {
public:
    void showChild() {
        cout << "This is the child class." << endl;
    }
};

class grandChild : public child {
public:
    void showGrandChild() {
        cout << "This is the grandchild class." << endl;
    }
};

int main() {
    grandChild gc;
    gc.showParent();      // Inherited from parent class
    gc.showChild();       // Inherited from child class
    gc.showGrandChild();  // From grandChild class
    return 0;
}