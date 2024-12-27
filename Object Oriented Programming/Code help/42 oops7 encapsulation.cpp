#include <iostream>
#define ll long long
using namespace std;

//encapsulation
//wraping up data member and function in one place
//all the data members are private


//advantage?
//data is hidden, more scurity
//if we want, we can mark class as "read only", so no one can use getter or setter to access private data member
//increase code reusibility (how? will learn upnext)
//helps in unit testing


//example of encapsualtion
class student{
private:
	int roll;
	char name[10];
	float cg;

public:
	int getroll(){
		return this->roll;
	}
};


int main(){
    student s1;	// This demonstrates the use of the student class, encapsulating its data and behavior within an object.
}