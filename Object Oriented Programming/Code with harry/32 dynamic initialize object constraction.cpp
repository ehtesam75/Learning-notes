#include<iostream>
using namespace std;

class simple{
    int data1, data2;
    public:
        simple(int a, int b=9){ //default value 9
            data1 = a;
            data2 = b;
        }

        void print(void);
};

void simple:: print(void){
    cout<<"value: "<< data1 << " and "<< data2<<endl;
}
int main(){
    simple c(2, 4);
    c.print();

    simple d(3);
    d.print();
    return 0;
}