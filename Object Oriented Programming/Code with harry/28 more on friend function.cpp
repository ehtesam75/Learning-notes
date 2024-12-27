#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X o1, Y o2);
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X o1, Y o2);
};

void add(X o1, Y o2){
    cout<<"The sum is: "<<o1.data + o2.num<<endl;
}

int main(){
    X a1;
    a1.setValue(2);

    Y b1;
    b1.setValue(72);

    add(a1, b1);
    return 0;
}