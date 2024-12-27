#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int , int);
        void display(void){
        cout<<"the complex num is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y){       //this is parameterized constuctor as it accepts 2 parameters
    a =x;
    b =y;
}

int main(){
    //implicit call
    complex a(4, 6);
    a.display();

    //explicit call
    complex b = complex(8, 2);
    b.display();
    return 0;
}