/*
Function overloading in C++ is a feature that allows you to define multiple functions with the same name within the same scope but with different parameter lists. This means that you can have several functions with the same name, but they must have different types or a different number of parameters. The compiler will determine which version of the function to call based on the arguments provided during the function call.
*/

#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int main(){
    int x = 5, y = 10;
    double m = 2.5, n= 3.7;

    cout<<"addition of x and y is "<<add(x, y)<<endl; 
    cout<<"addition of m and n is "<<add(m, n)<<endl; 

//In the example above, we have two add functions, one for integers and one for doubles. The compiler will select the appropriate version of the function based on the data types of the arguments passed during the function call.

    return 0;
    
}

