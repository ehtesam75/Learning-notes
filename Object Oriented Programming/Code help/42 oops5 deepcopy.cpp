//copied from 42_oops_3 and then modified
//deep copy

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

    //copy constructor created 
    hero(hero& temp){   //pass by reference? watch video for details, if we use pass by value here, we'll stuck in a infinite loop

        //added for deep copy
        char *ch = new char[strlen(temp.name) + 1];     //in deep copy we created a whole new different array then copied the name of paramiter object to ch..and then copied ch to new destination object.name..that's why changing to original one's name doesn't effect on the copied one
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor called" << endl;
        health = temp.health;
        level = temp.level;
    }
    //if i write a copy constuctor on my own, then previously default copy constructor will vanish

};

int main(){

    //deep copy
    hero ironMan;
    ironMan.setHealthLevel(99, 'I');
    char name[10] = "robert";
    ironMan.setName(name);
    ironMan.print();
    

    //we will not use default copy constructor, we created one on our own and modified that
    hero thor(ironMan);
    thor.print();

    ironMan.name[0] = 'X';
    ironMan.print();
    
    thor.print(); //didn't change this time

    //copy assignment operator
    hero spiderMan;
    spiderMan = thor; //copy assignment operator
    spiderMan.print();
}