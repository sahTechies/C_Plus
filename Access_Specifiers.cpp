#include<iostream>
using namespace std;

// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  int salary;
  cout << "Enter salary: ";
  cin >> salary;
  myObj.setSalary(salary);
  myObj.bonus = 5000; // Assigning bonus directly
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}