/*
3 type of selection structure:
1. sequence structure
2. selection structure
3. loop structure
*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age >=18)
        cout<<"You can join the party"<<endl;       //this is a example of selection structure
    else
        cout<<"sorry! you can't"<<endl;


    // swicth case
    int age1 = 21;
    switch(age1){
        case 18:
            cout<<"You are 18"<<endl;
            break;
        case 2: 
            cout<<"You are 2"<<endl;
            break;
        default:
            cout<<"No special cases"<<endl;
            break;
    }

    //loop structure

    int i =1;
    while(i<5){
        cout<<i<<endl;
        i++;
    }

    
    


    return 0;
}