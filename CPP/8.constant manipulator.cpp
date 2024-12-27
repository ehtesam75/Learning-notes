/*
In C++, a manipulator is a special function that is used with the stream insertion (<<) and stream extraction (>>) operators to modify the behavior of input and output streams. Manipulators are used to format the data being sent to or received from a stream.
endl, setw is a manipulator in cpp
*/


#include<iostream>
#include<iomanip>   //is used for using setw

using namespace std;

int main(){
    int a = 23;
    cout<<a<<endl;
    a = 322;
    cout<<a<<endl;

    //constant in c
    const int b = 33;
    // b = 1;  that's not valid ; cuz b is constant

    //manupulators in cpp
    int x = 2, y = 23, z = 925;
    cout<<"value of x (without setw) :"<<x<<endl;
    cout<<"value of y (without setw) :"<<y<<endl;
    cout<<"value of z (without setw) :"<<z<<endl;

    cout<<"value of x :"<<setw(4)<<x<<endl;
    cout<<"value of y :"<<setw(4)<<y<<endl;
    cout<<"value of z :"<<setw(4)<<z<<endl;

    return 0;
}