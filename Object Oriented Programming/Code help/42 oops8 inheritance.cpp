#include <iostream>
#define ll long long
using namespace std;

//inheritence
//let's say we want to inherit the info of human to male and female class
//parent class/super class = human
//child class/sub class = male/female

class human{
private:
	double height;
protected:
	int weight;
public:
	int age;

	void setWeight(int n){
		this->weight = n;
	}

	int getweight(){
		return this->weight;
	}
};

//public, public
class male : public human{ //male class is inheriting human class in public mode
	//age is public
public:

	//and i can add more 
	string color;
	void sleep(){
		cout << "Male is sleeping" << endl;
	}
};

//what is protected mode?
//in this mode, data member is accessiable within the class itself (as usual) and only within it's direct child class/derive class

//public, protected
class female : protected human{
	//age is protected
public:
	int getAge(){
		return this->age;
	}
};

//public, private
class gay : private human{
	//age is private
public:
	int getAge(){
		return this->age;
	}
};

//protected, public & protected
class lesbian : protected human{
	//weight is protected
public: 
	int getweight(){
		return weight;
	}
};

//protected, private
class nonBinary : private human{
	//weight is private
public:
	int getweight(){
		return this->weight;
	}
}


//private, public & protected & private
class homosexual : private human{
public:

}


int main(){
    male aleen;
    //cout << aleen.height << endl;  
    //height is inaccessiable, cuz height is a private data member of human 
    //and private data member of super class can't be inherited
    cout << aleen.getweight() << endl;

    cout << aleen.color << endl;	


    female joyi;
    //cout << joyi.age << endl;		//age is protected
    cout << joyi.getAge() << endl;

    gay roy;
    cout << roy.getAge() << endl;	//age is private

    lesbian jesica;
    cout << jesica.getweight() << endl;	//weight is protected

    nonBinary lepard;
    cout << lepard.getweight() << endl;	//weight is private
}	

	

/*

super class 									sub class 				
access modifier 		mode of inheritence		access modifier of
of data members									data member in sub class
--------------- 		------------------- 	----------------------
public 					public			-->		public
public 					private			-->		private
public 					protected		-->		protected

protected 				public			-->		protected
protected 				private			-->		private
protected 				protected		-->		protected

private					public			--> 	Not accessiable
private					private			--> 	Not accessiable
private					protected		--> 	Not accessiable

so we can say that, private data member of super class can't be inherited
*/