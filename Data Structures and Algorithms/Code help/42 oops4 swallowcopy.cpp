//copied from 42_oops_3 and then modified

#include <iostream>
#include <string.h>
using namespace std;

class hero{
    private:
    public:
    char level;
    int health;
    char *name;

    void setHealthLevel(int health, char level){
        this->health = health;
        this->level = level;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    
    hero(){
        name = new char[100];
    }   //this needed to be created bcoz we've already created a parameterized constructor

    ~hero(){
        delete[] name;
    } // a destructor to release that memory when the object is destroyed. This can prevent a memory leak.

    void setName(char *name){
        strcpy(this->name, name);
    }

    hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << health << " ";
        cout << level << " ";
        cout << name << endl;
    }

};

int main(){
    //swallow copy
    hero ironMan;
    ironMan.setHealthLevel(99, 'I');
    char name[10] = "robert";
    ironMan.setName(name);
    ironMan.print();
    

    //use default copy constructor (at this time, make sure to comment out any constructor u created)
    //default constructor do swallow copy
    hero thor = ironMan;    //copy memory address to thor
    //hero thor(ironMan); (same as above)
    thor.print();

    ironMan.name[0] = 'X';
    ironMan.print();

    thor.print();   //it is also changed just like ironman...cuz accessing the same memory..this is swallow copy 



    //copy assingment opearator
    //The copy assignment operator (operator=) is used for assigning values to an already existing object
    // hero h1, h2;
    // h1.level = 'a';
    // h2 = h1;    // This invokes the copy assignment operator
}