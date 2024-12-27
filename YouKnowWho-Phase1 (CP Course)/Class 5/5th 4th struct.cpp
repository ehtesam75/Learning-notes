#include <iostream>
#include <sstream>		//for stringstream
#include <vector>
#define ll long long
using namespace std;

struct Person{
	int age;
	string name;
	string address;

	Person(int _age, string _name, string _address){	//a peramiterized constructor
		age = _age;
		name = _name;
		address = _address;
	}

	Person(){
		name = "N/A";
		age = 0;
		address = "N/A";
	}

	void print(){
		cout << age << " " << name << " " << address << endl;
	}
};


struct address{
	int house_no;
	int zip_code;
	string city;
};

struct student{
	string name;
	int roll;
	vector <int>marks;
	address add;
} a[2];

int main(){
    Person p1 (79, "Hasan", "Kamalpur");
    p1.print();

    Person p2;
    p2.print();


    student s1;
    s1.name = "aleen";
    s1.roll = 8;
    s1.marks = {12, 87, 99};
    s1.add.house_no = 889;
    s1.add.zip_code = 12;
    s1.add.city = "Dhaka";

    cout << s1.name << " " << s1.roll << endl;
    for(int i : s1.marks){
    	cout << i << ' ';
    }cout << endl;

    cout << s1.add.house_no << " " << s1.add.zip_code << ' ' << s1.add.city << endl;



    a[0] = s1;
    cout << a[0].add.house_no << endl;

    a[1] = {"jamal", 79, {90, 100, 30}, {10, 88, "sylhet"}};
    cout << a[1].name << ' ' << a[1].add.house_no << ' ' << a[1].add.city << endl;;
    for(int i : a[1].marks){
    	cout << i << ' ';
    }cout << endl;




    //custom input stream
    string random = "12 33 88 99";

    stringstream custom(random);
    cout << custom.str() << endl;	//will print the custom input stream

    int a, b, c, d;
    custom >> a >> b >> c >> d; cout << a << ' ' << b << ' ' << c << ' ' << d << endl;


    //if there are too many space
    string ran = "22    99   23   12";
    stringstream ss(ran);

    int n;
    while(ss >> n){
    	cout << n << ' '; 
    }cout << endl;


    //string s; getline(cin, s);

    string raw = "new string check now";

    stringstream ss1(raw);
    string cus;

    while(ss1 >> cus){
    	cout << cus << ' ';
    }cout << endl;


    //passing container(arr, vec) as function
    //watch 6:54:00...note is avail.too
    //try to use pass by reference..cuz in pass by value, it needed to copy the entire container every time, causing too much time for larger arr/vec
}