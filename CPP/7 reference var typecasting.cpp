//32.3; c++ will identify it as a double, if we put a f at the end (32.3f) it will act as float and by adding 'l' at the end (32.3l), it will act as long double

#include<iostream>
using namespace std;
int main(){
    cout<<"32.3: "<<sizeof(32.3)<<endl;     //hover over 32.3...
    cout<<"32.3f: "<<sizeof(32.3f)<<endl;   //f or F means the same
    cout<<"32.3F: "<<sizeof(32.3F)<<endl;
    cout<<"32.3l: "<<sizeof(32.3l)<<endl;
    cout<<"32.3L: "<<sizeof(32.3L)<<endl;

    //reference variable

    float x = 23;
    float & y = x;
    y = 7;      //x will also be 7, cuz as we used reference variable (&), now both x and y are pointing the same thing

    cout<<x<<endl;
    cout<<y<<endl;


    //type casting
    float a = 34.2253;
    cout<<"the value of a is: "<<(int)a<<endl;
    cout<<"the value of a is: "<<int(a)<<endl;  // same as previous line

    float c = (int)a;
    cout<<"the value of is : "<<c<<endl;

    return 0;
}