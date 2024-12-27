#include <iostream>
#define ll long long
using namespace std;

//just another example of friend function

class second; //forward declaration

class first{
	int value1;
public:
	void setdata(int a){
		value1 = a;
	}
	friend void add(first, second);
};


class second{
	int value2;
public:
	void setdata(int a){
		value2 = a;
	}
	friend void add(first, second);
};


void add(first o1, second o2){
	cout << "Sum : " << o1.value1 + o2.value2 << endl;
}


//another example

class fourth; //forward declaration

class third{
	int num;
public:
	void setdata(int a){
		this-> num = a;
	}

	void print(){
		cout << num << endl;
	}

	friend void exchange(third&, fourth&);		//have to use call by reference
};


class fourth{
	int num_prime;
public:
	void setdata(int a){
		this-> num_prime = a;
	}

	void print(){
		cout << num_prime << endl;
	}

	friend void exchange(third&, fourth&);		//have to use call by reference
};

void exchange(third& a, fourth& b){			//have to use call by reference	
	int temp = a.num;
	a.num = b.num_prime;
	b.num_prime = temp;
}

int main(){
    first o1; second o2;
    o1.setdata(7);
    o2.setdata(34);
    add(o1, o2);


    //swap two class's private data member
    third object1; fourth object2;
    object1.setdata(89);
    object2.setdata(12);
    exchange(object1, object2);
    object1.print();
    object2.print();
}