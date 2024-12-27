#include <iostream>
#define ll long long
using namespace std;

//polymorphism
//existing in many forms
//can be of 2 types: compile time and runtime polymorphism


//compile time polymorphism 
//it is also known as static polymorhtism
//it deals with function overloading, operators overloading


//function overloaidng seems clear to me!

//oparator overloading:
//operators overloading in unary operators (operators that deals with one variable)

class idea{
private:
	int value;
public:
	//constructor to initailize value with 99
	idea() : value(99){}

	//overload ++ when used as prefix
	void operator ++ (){
		//++value;
		cout << ++value << endl;;
	}

	// Notice: When we overload operators, we can use it to work in any way we like. 
	//For example, we could have used ++ to increase value by 200.

	//overload ++ when used as postfix
	void operator ++ (int){		//the int inside the parentheses. It's the syntax used for using unary operators as postfix; it's not a function parameter.
		//value++;
		cout << value++ << endl;;
	}

	// void print(){
	// 	cout << value << endl;
	// }
};


//operators overloading in binary operators (oparators that reqires 2 oparends)

class overloading{
public:
	int a, b;
	void operator+ (overloading &obj){	//we're passing the second object (right side of the operator) into the function 
		int value1 = this->a;	//by using this keyword we're accessing the first object (the one who is in the left side)
		int value2 = obj.a;	
		cout << "operator overloading: " << value2 - value1 << endl;
	}
};


//now we will overloading () oparator
class over{
public:
	int c;
	void operator() (){
		cout << "I'm bracket operator and called by a object which 'c' is : " << this->c << endl;
	}
};


int main(){
	idea o1;
	o1++;	//notice ++ is used with a object; while it is typically used with integer data type
	// o1.print();

	++o1;
	//o1.print();

	//if we used print function then in output 100 and 101 would be printed respectively



	//binary oparator overloading
	overloading obj1, obj2;
	obj1.a = 10;
	obj2.a = 29;
	obj1 + obj2;

	over object1;
	object1.c = 78;
	object1();

}