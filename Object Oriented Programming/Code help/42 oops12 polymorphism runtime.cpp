#include <iostream>
#define ll long long
using namespace std;

//runtime polymorthism is also known as dynamic polymorphism	
//it inclues method overiding
//rules for method overriding
/*
1. the method of the parent class and child class must have the same name (function name same) (fucntion = method)
2. the method of the parent class and child class must have the same parameter (function parameter has to be the same)
3. it is only possible through inheritence (so the runtime polymorphism is depandent on the inheritence)
*/

//an example

class parent{
public:
	void show(){
		cout << "inside parent class" << endl;
	}
};

class subclass : public parent{
public:
	void show(){
		cout << "inside subclass" << endl;
	}
};

int main(){
    parent p1;
    p1.show();

    subclass p2;
    p2.show();
}