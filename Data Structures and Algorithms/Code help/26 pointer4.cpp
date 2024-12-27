#include <iostream>
using namespace std;

void update(int *p){   //if i would write like int* &p then it would be pass by reference
    *p = *p+1;
    cout<< "inside: " << *p <<endl;
}

int getsum(int arr[], int size){   //int arr[] = int *arr...mainly a pointer pointing to the first loc of the arr is passed, not the whole arr 
    cout<< "size : "<< sizeof(arr) <<endl;  //that's why its showing a size of pointer, 8 (mine is showing 4 for some reasons)

    int sum = 0;
    for(int i=0; i<2; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int value = 3;
    int *ptr = &value;

    cout<<"before : "<< *ptr <<endl;
    update(ptr);    //pass by value
    cout<< "after: "<< *ptr <<endl;


    int arr[3] = {3, 3, 8};
    cout<< "sum is: " << getsum(arr+1, 2) <<endl;   //passing from 1th position..3, 8

}