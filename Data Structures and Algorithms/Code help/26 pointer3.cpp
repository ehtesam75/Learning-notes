#include <iostream>
using namespace std;

void update(int *p){   //if i would write like int* &p then it would be pass by reference
    p = p+1;
    cout<< "inside: " << p <<endl;
}

int main(){
    int value = 3;
    int *ptr = &value;

    cout<<"before : "<< ptr <<endl;
    update(ptr);    //pass by value
    cout<< "after: "<< ptr <<endl;

}