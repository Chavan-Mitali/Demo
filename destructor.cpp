#include<iostream>
using namespace std;

class A{
 public:
    A(){
        cout<<"constructor called"<<endl;
    }
    ~A(){
        cout<<"destuctor called"<<endl;
    }
    
};
int main(){
    A obj, a, b, c;
    obj.~A();
}
