#include<iostream>
using namespace std;

int global = 54;

void user(){
    std:: cout<<global;     //this (<<) operator is called insertion operator
}

int main(){
    std:: cout<< "Hello World\n";

    int sum = 5;
    std:: cout<<"digit: "<<sum<<"\n";

    char newChar = 'c';
    std:: cout<<"new charcater is: "<<newChar<<"\n";

    int global = 32;

    std:: cout<<global<<"\n";     //loacl variable will get precedence

    std:: cout<<"newline"<<endl;    

    bool is_true = true;
    cout<<"bool: "<<is_true<<"\n";
    
    user();

    return 0;
}