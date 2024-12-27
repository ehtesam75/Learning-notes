#include <iostream>
#include <string.h>
using namespace std;

class hero{
    private:
    public:
    char level;
    int health;

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
    }   //this needed to be created bcoz we've already created a parameterized constructor

    hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << health << " ";
        cout << level << " ";
    }

    //copy constructor created for my own
    hero(hero& temp){   //pass by reference? watch video for details, if we use pass by value here, we'll stuck in a infinite loop
        cout << "copy constructor called" << endl;
        health = temp.health;
        level = temp.level;
    }
    //if i write a copy constuctor on my own, then previously default copy constructor will vanish

};

int main(){
    hero suresh;
    suresh.setHealthLevel(70, 'A');
    cout << suresh.getHealth() << " ";
    cout << suresh.getLevel() << endl;

    //another method for printing
    hero kamal(80, 'B');
    kamal.print();


    //copy constructor
    hero jamal(suresh); //a copy constructor is automatically created
    jamal.print();

    //anothr way to write
    hero aleen = kamal; //copy constructor is called here   //note: this is not copy assignment operator
    cout << aleen.health << " " << aleen.level << endl;

    return 0;
}