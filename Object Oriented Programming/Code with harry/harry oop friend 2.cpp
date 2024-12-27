#include <iostream>
#define ll long long
using namespace std;

class complex;	//forward declaration

class calculator{
public:
	int sumrealpart(const complex&, const complex&);	//its a good practise to use const
	int sumcomplexpart(const complex&, const complex&);
};

class complex{
	int a, b;
public:
	void setdata(int x, int y){
		a = x;
		b = y;
	}

	void print(){
		cout << a << " + " << b << "i" << endl;
	}

	//friend int calculator :: sumrealpart(complex&, complex&);
	// friend int calculator :: sumcomplexpart(complex&, complex&);
	friend class calculator;	//or i could make the entire class friend istead of making friend function only
};

int calculator :: sumrealpart(const complex& o1, const complex& o2){
		return o1.a + o2.a;
}

int calculator :: sumcomplexpart(const complex& o1, const complex& o2){
		return o1.b + o2.b;
}


  
int main(){
    complex o1, o2, o3;
    o1.setdata(5, 9);
    o1.print();

    o2.setdata(13, 4);
    o2.print();
    
    calculator calc;
    cout << "Sum is : ";
    o3.setdata(calc.sumrealpart(o1, o2), calc.sumcomplexpart(o1, o2));
    o3.print();
}