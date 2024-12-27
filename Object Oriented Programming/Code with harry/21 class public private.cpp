#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);      //declaration
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){   //:: is a scope resolution operator in C++. It is used to define a member function outside the class declaration and associate it with a specific class.
    a = a1;
    b = b1;
    c = c1;
}  

int main(){
    Employee harry;
    // harry.a = 3; (it's showing error, cuz a is in private part...only the function in the class can access private data)
    harry.d = 232;
    harry.e = 12;
    harry.setData(1, 2, 5);
    harry.getData();
    return 0;
}