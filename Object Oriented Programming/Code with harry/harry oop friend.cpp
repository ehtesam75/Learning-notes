#include <iostream>
#define ll long long
using namespace std;

class complex{
	int a, b;
public:
	void setdata(int x, int y){
		a = x;
		b = y;
	}

	//this is from code with harry
	// complex setdata(complex& o1, complex& o2){	//we will return a complex type object
	// 	complex o3;
	// 	o3.setdata(o1.a + o2.a, o1.b + o2.b);
	// 	return o3;
	// }

	//from chat gpt
	complex operator+(const complex& o2) const{  //why did i use two const keyword?
		//const before the parameter declaration (const complex& o2) indicates that the parameter o2 is a reference to a const object. This means that within the function, you cannot modify the object o2. so i cannot write o2.a = 3;
		// const after the function declaration (operator+) indicates that this function is a member function that does not modify the state of the object it is called on(o1 object). It is a promise that the function will not modify the member variables of the object. so i can't write this->a = 3;
		complex o3;
		o3.a = this->a + o2.a;
		o3.b = this->b + o3.b;
		return o3;
	}	

	friend void print(const complex& o1);	//by making print to a friend to complex class means print func can access the private member of complex

	//more properties of friend function:
	//usally use object as argument
	//can be decalred as public or private (doesn't matter)
	//it (print func) can't access class's data member directly. need to wrtie object.dataMember   //u know the reason
	//it is not a part of complex class..so i can't called it with a object from the main function (o1.print() would be invalid)

};

void print(const complex& o){
	cout << o.a << " +" << o.b << 'i' << endl;	//i = iota
}


int main(){
   	complex o1, o2, sum;
   	o1.setdata(4, 9);
   	print(o1);	//remember print function isn't included in the complex class (not part of complex calss)..so i can't write o1.print()

   	o2.setdata(8, 7);
   	print(o2);
   	
   	//sum = sum.setdata(o1, o2);	// chagpt: the usage of this function for assigning to sum seems a bit unusual.
   	//so we will try to solve this using diff method: + operator overloading
   	sum = o1 + o2;	//o2 is passed as function parameter and o1 is passed as current object
   	print(sum);
}