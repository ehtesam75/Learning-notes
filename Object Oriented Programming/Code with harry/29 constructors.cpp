#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    //creating a constructor
    //constructor is a special member function with the same name as of the class
    //it is used to initialize the object of the class
    //it is automatically invoked whenever an object is created
    complex(void); //constructor declaration
    void display(void){
        cout<<"the complex num is: "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex:: complex(void){        //this is a default constructor; as it doesn't take any parameter
    a = 10;
    b = 5;
}

int main(){
    complex c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}

//characteristic of constructor:

/*
1. it should be declared in the publlic section of the class
2. they're automatically invoked whenever the object is created
3. they cannot return value and do not have any return types
4. it can have default arguments
5. we can not refer to their address

*/