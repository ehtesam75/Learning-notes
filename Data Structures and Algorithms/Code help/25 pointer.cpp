#include <iostream>
using namespace std;

int main(){
    //pointer takes 8 bytes in 64 bit memory
    int a = 5;
    int *ptr = &a;
    (*ptr)++;
    cout<<*ptr<<endl;
    cout<<a<<endl;

    //coping pointer
    cout<< ptr<<" "<<*ptr<<endl;
    int *q = ptr;
    cout<< q<<" "<<*q<<endl;

    //ptr = ptr + 1??
    cout<<"before: "<<ptr<<endl;

    ptr = ptr + 1;
    cout<<"after: "<<ptr<<endl; //memory address will increament by 4, pointing to the next integer


    //null pointer
    int *p = NULL;
    int *r = 0  //same as above
    return 0;
}