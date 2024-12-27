#include <iostream>
using namespace std;

//recurssion has 2 components
//mandatory comp (base case, rc)
//optional comp (processing)


//tail and head recurssion:

//tail recurssion
/*
func(){
    base case
    processing
    recurssive call/relation
}
*/


//head recurrsion
/*
func(){
    base case
    recurssive call/relation
    processing
}
*/

int power(int n, int m){
    if(m==1) return 2;  //if we don't use base case then stack will overflow that causes segmentation fault
    else return n * power(n, m-1);  //tail recurssion
}
 
int fact(int n){
    if(n==1) return 1;
    return n * fact(n-1);   //recurssive call
}

void print(int n){
    //head recurssion
    if(n==0) return;
    print(n-1);     //RC/RR
    cout << n << endl;  //processing
}

int fibo(int n){
    //nth term of fibo series
    if(n==0) return 0;
    else if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}

void sayDigit(int n, string arr[]){
    //base case
    if(n == 0) return;
    //processing
    int digit = n%10;
    n /= 10;
    sayDigit(n, arr);   //if we move this RC to the end then last digit will be printed first
    cout << arr[digit] << " ";
}


int main(){
    int n = 2;
    int m = 5;

    int res = power(2, 5);
    cout << res << endl;

    cout << fact(5) << endl;

    print(5);

    cout << fibo(8) << " ";
    cout << endl;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(432, arr);
    return 0;
}