//Example
#include <iostream>
using namespace std;

class AB{
    int a;
    int b;
public:
AB(){
    a=0;
    b=0;
    cout<<"Default Constructor called"<<endl;
}
AB(int x, int y){
    a=x;
    b=y;
    cout<<"Parameterized Constructor called"<<endl;    
}