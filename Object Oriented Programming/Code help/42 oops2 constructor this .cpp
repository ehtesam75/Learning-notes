/*
//static allocation
    hero h1;
    h1.level = 'A';
    h1.setHealth(70);

    cout << h1.level << endl;
    cout << h1.getHealth() << endl;


    //dynamic allocation
    hero *h2 = new hero;  //a hero type object named 'h2' is created dynamically
    h2->level = 'B';
    (*h2).setHealth(60);

    cout << h2->level << endl;
    cout << (*h2).getHealth() << endl;
*/



#include <iostream>
using namespace std;

class hero{
    private:
    int roll;

    public:
    int health;
    int value;
    char level;

    // Constructor to initialize value to 999
    hero() : value(999){ //default constractor   //the moment i created this constructor, the previosuly declared constructor (which is automatically created by compiler) vanishes
        cout << "constractor called" << endl;
    }
    /*
    If you do not provide any constructors in your class, the C++ compiler will automatically generate a default constructor for you.
    This default constructor initializes the class members to default values (e.g., zero for numeric types, or null for pointers) and doesn't take any parameters.
    So, if you do not provide any constructors explicitly in your class, you will still have a default constructor generated by the compiler, which can be used to create objects without providing any constructor arguments.
    try commenting this default constractor and then write 'hero object1' in main..this will be an error..why?
    becoz This is because, in C++, when you provide any constructors for a class (such as the parameterized constructor you've defined), the compiler will not automatically generate a default constructor for you. 
    When you explicitly define at least one constructor, the compiler assumes that you want to control object construction yourself, and it won't generate the default constructor.
    */

    // Parameterized constructor
    hero(char h){
        level = h;
    }

    void displaylevel(){
        cout << "level: " << level << endl;
    }

    //this keyword
    //this is a pointer that points to the currect object (in this code, 'h', 'b', 'x' is currect object, this keyword store the memory object of this)
    void setHealth(int health){
        this->health = health;
        cout << "value of this: " << this << endl;
    }

    int getHealth(){
        return health;
    }

    hero(int health, char level){
    //parameterized constructor with this keyword
        this->health = health;
        this->level = level;
    }
};


int main(){
    hero h; //static allocation
    h.health = 3;
    cout << h.health << endl;

    cout << h.value << endl;

    //dynamic allocation
    hero *b = new hero; 
    (*b).health = 43;   //*b means value in address b. here b is pointing to a memory in heap
    cout << (*b).health << endl;
    cout << b->health << endl;  //better method
    
    //constractor
    cout << "Hi" << endl;
    hero aleen;         //aleen.hero() is called
    hero *joyi = new hero; //dynamically allocated; joyi.hero() is called
    cout << "hello" << endl;

    hero *x = new hero;

    hero obj('K');
    obj.displaylevel();

    hero thor;
    thor.setHealth(98);
    cout << thor.getHealth() << endl;
    cout << "address of thor: " << &thor << endl;

    hero temp(33, 'b');
    temp.displaylevel();

}

/*
when we create an object, a constractor is getting called
what is constractor?
-Constructors have the same name as the class they belong to
-envoked when creating object
-no return type
-object.classname() is called, whenever we declare a object


default constractor:
A constructor with no input parameters is commonly known as a "default constructor" in C++. 
A default constructor is a special type of constructor that doesn't take any arguments. 
It is automatically called when an object of the class is created with no specific initialization values.
hero() {
        value = 0;
    }

Parameterized constructor:
A parameterized constructor, also known as a non-default constructor, is a type of constructor in C++ and 
many other object-oriented programming languages that takes one or more parameters or arguments. 
Unlike a default constructor, which has no parameters, a parameterized constructor allows you 
to provide specific values during the creation of an object.
hero(int v) {
        value = v;
    }

*/