#include <iostream>
#define ll long long
using namespace std;

class complex{
	int real, comp;
public:
	complex(int a, int b = 0){	//constructor with default arguments
		real = a;
		comp = b;
	}

	
	void print(){
		cout << real << " + " << comp << "i" << endl;
	}
	//constructor overloading is also possible..try it
};

int main(){
    //implicite call
    complex o1(4, 5);
    o1.print();

    //explicit call
    complex o2 = complex(8, 32);
    o2.print();

    complex o3 = complex(3);
    o3.print();
}