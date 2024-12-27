#include <iostream>
using namespace std;

int main(){
    int arr[3] = {3, 5, 7};
    cout<<"address of 3: "<<arr<<endl;

    cout<< *arr <<endl;
    cout<< *(arr+1) <<endl;

    cout<< arr[2]<<endl; 
    cout<< *(arr+2)<<endl; //same as above
    //how does it work?
    // arr[2]
    // *(arr + 2)
    // *(710 + 2)   //lets say memory addr of 1st element is 710..arr will move 2 place
    // *(718)   //mem add of 3rd elemnet is 718 (say)
    //7

    cout<< 2[arr] <<endl;   //this is CORRECT!!!!!
    //WHY? bcoz, 
    //arr[i] = *(arr+i)
    //then, i[arr] = *(i+arr)   //will produce the same result

    int *ptr = arr+1;   //will point to 2nd element
    cout<<*ptr<<endl;

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;   //size of 1st element
    cout<<sizeof(&arr)<<endl<<endl;   //??

    cout<<sizeof(ptr)<<endl;    //should be 8
    cout<<sizeof(*ptr)<<endl;   //4
    cout<<sizeof(&ptr)<<endl;   //should be 8


    int a[3] = {34, 9, 7};
    //arr = arr+1   ERROR
    int *x = a;
    x = x + 1;      //corrct
    cout<<*x<<endl;     

    return 0;
}