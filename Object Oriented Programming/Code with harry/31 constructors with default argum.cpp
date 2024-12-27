#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int x, int y){
            a = x;
            b = y;
        }

        complex(int x){
            a = x;
            b = 0;
        }

        complex(){  //a default constraction
            a = 0;
            b = 0;
        }

        void print(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex a(3, 5);
    a.print();

    complex b(2);
    b.print();

    complex c;
    c.print();

    //its like constraction overloading...multiple constraction in a single class...if the number of parameter match, it will follow that constraction...just like function overloading
    return 0;
}