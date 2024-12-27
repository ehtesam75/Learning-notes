#include<iostream>
using namespace std;

class value2; //forward declaraion

class value1{
    int data1;
    public:
        void setValue(int value){
            data1 = value;
        }
    friend void swap(value1 & o1, value2 & o2);
    friend void display(value1 & o1, value2 & o2);
};

class value2{
    int data2;
    public:
        void setValue(int value){
            data2 = value;
        }
    friend void swap(value1 & o1, value2 & o2);
    friend void display(value1 & o1, value2 & o2);
};

void swap(value1 & o1, value2 & o2){
    int temp;
    temp = o1.data1;
    o1.data1 = o2.data2;
    o2.data2 = temp;

    // cout<<"o1's data is: "<<o1.data1<<endl;
    // cout<<"o2's data is: "<<o2.data2<<endl;
    //alternate way: commented out. in this process we don't use call by reference. so the display function is not needed
}

void display(value1 & o1, value2 & o2){
    cout<<"o1 is "<<o1.data1<<endl;
    cout<<"o2 is "<<o2.data2<<endl;
}



int main(){
    value1 a1;
    a1.setValue(26);

    value2 b1;
    b1.setValue(14);

    swap(a1, b1);
    
    display(a1, b1);
    return 0;
}