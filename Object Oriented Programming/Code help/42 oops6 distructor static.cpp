/*
destrutor:
a destructor is a special member function that is used to clean up or release resources held by an object when it is no longer in scope or when it's explicitly deleted
name same as class name
no return type
no input parameter

Destructors are automatically called when an object goes out of scope, such as when it reaches the end of a function or block. They are also called when you explicitly delete an object using the delete operator.
*/

#include <iostream>
using namespace std;

class hero{
    private:
    int data;
    int a, b;

    public:
    int value = 3;
    int health;
    hero(){
        cout << "simple constructor called" << endl;
    }

    ~hero(){    //tinda sign ~
        cout << "distructor called" << endl;
    }
    //for static allocation we don't need to write this, a distructor is automatically called to free up space


    //const keyword
    int getValue() const{
         // This function promises not to modify any data members of hero
        // value += 3;  //can't modify data member
        return value;
    } //const object is written in the main func


    //initialization list
    //an initialization list is a special syntax used in the constructor definition of a class to initialize member variables before the constructor body executes. 
    //It allows you to specify initial values for member variables directly when the object is constructed.
    hero(int i, int j): a(i), b(j*2){
        cout << "constructor executed" << endl;
        cout << a << endl;
        cout << b << endl;
    }


    //static keyword (static member)
    //static keyword is discussed more in a separate file
    //static keyword doesn't belong to any object, rather it belongs to the class
    static int time_to_complete;  // i don't need to create any object to access this variable
    //can't initialize static variable here


    //static function
    //no need to create object, doesn't have 'this' keyword (why? cuz this point to the current object)
    //static funciton can only access the static members

    static int func(){
        return time_to_complete;    //can't use health or level
    }

    void setHealth(int n){
        health = n;
    }

};

//for static variable i need to declare it also outside the class
int hero::time_to_complete = 5; //initialize the static variable       //static variable by default initialize with 0


int main(){
    //for static allocation a distructor is called automatically by compliler
    //but in the case of dynamic allocation, distructor needs to be menually called
    hero roy;
    hero *b = new hero();
    delete b;   //try commneting it and then  run agian..its dyanmicaly allocated to we need to use delete to manually delete the allocated space

    hero a(3, 2);
    hero *c = new hero(2, 3); // it means hero c(2, 3) in static allocation
    delete c;

    //static keyword
    cout << endl;
    cout << hero::time_to_complete << endl; //see?? got printed without creating any object

    hero obj;
    cout << obj.time_to_complete << endl;   //this will run too..but not recommended, cuz time_to_complete belongs to the class, not object


    hero obj2;
    obj2.time_to_complete = 10; //value of timetocomplete is changed
    cout << obj2.time_to_complete << endl; //10
    cout << obj.time_to_complete << endl;   //10

    cout << hero::func() << endl;   //calling static function       //10



    //const object;
    const hero h;
    h.getValue();   // Allowed because getValue() is a const member function
    //h.setHealth(39);  // Error: setValue() cannot be called on a const object
    //When an object is declared as const, it means that member functions cannot modify the object's state. 
    //Since setHealth() modifies the health member variable, 
    //attempting to call it on a const object violates the const-correctness principle and will result in a compilation error.


    return 0;
}