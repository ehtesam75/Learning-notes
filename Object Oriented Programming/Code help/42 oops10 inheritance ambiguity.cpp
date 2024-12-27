#include <iostream>
#define ll long long
using namespace std;

class a{
public:
	void func(){
		cout << "inside a" << endl;
	}
};

class b{
public:
	void func(){
		cout << "inside b" << endl;
	}
};

class c : public a, public b{

};

int main(){
    c obj1;
    //obj1.func();	//func is ambiguous
    obj1.a::func();
    obj1.b::func();
}