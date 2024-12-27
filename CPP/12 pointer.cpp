#include<iostream>
using namespace std;

int main(){
    int a  = 34;
    int *ptr = &a;  //here '*' is called dereference oparator, & = address operator
    cout<<"value at *ptr :"<<*ptr<<endl;
    cout<<"adress of a :"<<&a<<endl;
    cout<<"value holds at ptr: "<<ptr<<endl;


    //pointer to pointer
    int **c = &ptr;
    cout<<"value at **c: "<<**c<<endl;
    cout<<"value at *c: "<<*c<<endl;        //this will contain address of a
    cout<<"value holds at c: "<<c<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    return 0;
}