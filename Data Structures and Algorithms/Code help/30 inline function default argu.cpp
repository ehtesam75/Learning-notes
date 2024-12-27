#include <iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return (a>b) ? a:b;
}

void print(int arr[], int size, int start = 0){    //here start is a default argument, its upto user whether they will pass start or not; if they don't then it will consider 0 as start and print the whole array
    //default argument has to be the rightmost peramiter, then can come to left (if there are multiple default argu)
    for(int i=start; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//how funtion work in memory?
//if a function is called it will go to stack, if varible is used then will take storage too..these operation take time though its very minimal
//what is inline funcion?
//if a function ends in one line and we write inline before it, then it will be treated as inline function, but if a function goes beyond 1 line and we wrtie inline before the function, then its upto compiler whether it'll consider it as a inline function or not
//how does it work?
//just right before the compilation, "getMax(a, b)" will be replaced with "(a>b) ? a:b"..so it doesn't need to go to stack
//benifit?
//no extra memory usage, no extra function call;  more efficient and more readble (as we can use getMax(a, b), which is more readable; on top of that, its faster and efficient)

int main(){

//inline
    int a = 5, b = 2;
    int ans = getMax(a, b);
    cout << ans << endl;


//default args
    int arr[5] = {3, 6, 8 , 6, 1};

    print(arr, 5, 2);
    print(arr, 5);  //didn't pass start here, it it will 0 by default
    return 0;
}