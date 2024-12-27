#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        void setNumber(int v1, int v2){
            a = v1; 
            b = v2;
        }

        void printNumber(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }

        //below line means that non member sumComplex function is allowed to do anything with my private data
        friend complex sumComplex(complex o1, complex o2);

};

complex sumComplex(complex o1, complex o2){     //this function has nothing to do with complex class. so we have add this funcion as a freind in complex class. but this doesn't make sumComplex function be a member of complex class, it just give sumComplex permission to access that class's private data
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
     complex c1, c2, sum;
     c1.setNumber(2, 5);
     c1.printNumber();

     c2.setNumber(3, 5);
     c2.printNumber();

     sum = sumComplex(c1, c2);
     sum.printNumber();
    return 0;
}

 
/*
Properties of friend function:
1. not in the scope of class
2. since it's not in the scope of class , it can't be called from the oject of that class. c1.sumComplex() = Invalid
3. Can be invoked without the help of any object
4. usaually contains the objects as arguments
5. can be declared inside public or private section of calss
6. it cannot access the members directly by their names and need object_name.member_name to access any member

*/