/*
types of inheritence
1. single
2. multi-level
3. multiple
4. hybrid
5. hierarchical
*/


#include <iostream>
#define ll long long
using namespace std;

class human{
public:
	int age;
	void speak(){
		cout << "speaking" << endl;
	}
};

class animal{
public:
	int teeth;
	void bark(){
		cout << "barking" << endl;
	}
};

class a{

};

class d{

};


//single inheritence
class four_legged_animal : public animal{
public:
	void leg(){
		cout << "four legged" << endl;
	}
};

//multi-level inheritence
public:
	void paw(){
		cout << "lion has paw" << endl;
	}
class lion : public four_legged_animal{
};

//multiple inheritence
class multiple : public animal, public human{

};


//hierarchical inheritence
//one class serve as a parent class for more than one class
class tiger : public four_legged_animal{
	//here four_legged_animal class is serving as a parent class for both tiger and lion; thus hierarchical inheri.
};


//hybrid inheritence
//is a combination of more than one inheritence
class b : public a{

};

class c : public a, public d{

};
//this example of hybrid inheritence is a combinaiton of hyrarchical and multiple inheritence


int main(){
	//single
	four_legged_animal zebra;
	zebra.leg();
	zebra.bark();
	cout << zebra.teeth << endl << endl;

	//multi level
	lion lion1;
	lion1.paw();
	lion1.leg();
	lion1.bark();
	cout << lion1.teeth << endl << endl;

	//multiple
    multiple ishwospeed;
    ishwospeed.speak();
    ishwospeed.bark();
}