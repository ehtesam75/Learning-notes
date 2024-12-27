#include<iostream>
using namespace std;

//forward declaration
class complex;
class calculator{
    public:
    int sumRealComplex(complex, complex);
    int sumImagComplex(complex, complex);
};

class complex{
    int a, b;
    //individually declaring function as friend
    // friend int calculator::sumRealComplex(complex, complex);
    // friend int calculator::sumImagComplex(complex, complex);

    //aliter: declaring the entire calculator class as friend
    friend class calculator;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
};

int calculator::sumRealComplex(complex o1, complex o2){
    return (o1.a + o2.a);
}

int calculator::sumImagComplex(complex o1, complex o2){
    return (o1.b + o2.b);
}


int main(){
    complex c1, c2;
    c1.setData(12, 8);
    c2.setData(3, 6);

    calculator calc_real, calc_imag;
    int result = calc_real.sumRealComplex(c1, c2);
    cout<<"The sum of real part of o1 and o2 is "<<result<<endl;

    result = calc_imag.sumImagComplex(c1, c2);
    cout<<"The sum of imaginary part of o1 and o2 is "<<result<<endl;
    return 0;
}