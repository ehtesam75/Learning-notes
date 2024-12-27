/*Header are of two types:
1. system header file: It comes with the compiler
2. User defined header files

*/

#include<iostream>
using namespace std;

int sum = 553;

int main(){
    int num1, num2, sum;
    cout<<"Enter the value of num1: \n";
    cin>>num1;       //this (>>) is called extraction operator

    cout<<"Enter the value of num2: \n";
    cin>>num2;
    sum = num1 + num2;
    cout<<"The sum is : "<< sum <<endl;
    cout<<"The global sum is : "<< ::sum <<endl;    //here "::" will get the global veriable

    int num3 = 5, num4 = 10;
    cout<<"!(num3>num4): "<<(!(num3>num4))<<endl;
    return 0;
}