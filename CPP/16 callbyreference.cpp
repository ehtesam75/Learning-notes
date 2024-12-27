#include<iostream>
using namespace std;

// call by reference using c++ reference varibale
void swapReferenceVar(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}


//eturn by reference

int & random(int &a, int &b){
    return a; //(return by reference)
}

int main(){
    int x = 10, y = 5;
    swapReferenceVar(x, y);
    cout<<"value of x: "<<x<<", value of y: "<<y<<endl;

    random(x, y) = 200;     //x will be overwritten by/equal to 200...as random returns a reference to a/x
    cout<<"value of x: "<<x<<", value of y: "<<y<<endl;
    return 0;
}