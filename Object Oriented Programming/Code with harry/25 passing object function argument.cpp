#include<iostream>
using namespace std;

class imaginary{
    int a, b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataSum(imaginary o1, imaginary o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printData(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    imaginary i1, i2, i3;
    i1.setData(1,6);
    i1.printData();

    i2.setData(2,3);
    i2.printData();

    i3.setDataSum(i1, i2);
    i3.printData();

    return 0;
}