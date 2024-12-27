#include<iostream>
using namespace std;

int main(){
    char isWide = 'Y';
    int howManyWide = 5;
    switch(isWide){
        case 'Y': switch(howManyWide){
            case 1: cout<<"1 Wide"<<endl;
            break;

            case 2: cout<<"2 Wide"<<endl;
            break;

            case 3: cout<<"3 Wide"<<endl;
            break;

            default: cout<<"Not more than 3 wide"<<endl;
        }
        break;

        case 'N': cout<<"No wide"<<endl;
        break;

        default: cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;
}