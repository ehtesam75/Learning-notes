/*
OOP : Classes and object:

- c++ was initially called: c with classes by stroustrop
- class : extention of structure (in c)
- structure had limitation like : members are public, no method
- classes can have methods and properties
- structure in cpp are typedef
- object can be declared along wtih the class declaration
    class employee{
        //class defination
    } harry, rohan, kamal;
*/

#include<iostream>
#include<string.h>
using namespace std;

class binary{
    private:
        string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrct binary format"<<endl;
            exit(0);
        }
    }
    
}

void binary::ones(){
    chk_bin();      //only used to check nested function; u can skip this line; if u do, then un comment in main function
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '1'){
            s.at(i) = '0';
        }else if(s.at(i) == '0'){
            s.at(i) = '1';
        }
    }    
}

void binary::display(void){
    cout<<"Ones complement is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main(){
    binary b;

    b.read();
    // b.chk_bin();     (commented out for cheacking nested function)
    b.ones();
    b.display();

    return 0;
}