#include<iostream>
using namespace std;


//inline function
inline int sum(int a, int b){
    return a + b;
}


//static variable
int staticExam(int a, int b){
    static int c = 0;   //this executes only once, in 2nd function call this will not be read
    c = c + 1;      //next time this function run, the value of c will be retained; cuz as we used static variable earliar, function doesn't forget about static varible unlike other regular var.
    //do not use static variable with inline function
    return a * b * c;
}


//default argument
float moneyReceived(int current_money, float factor = 1.05){        //this 1.05 is default value. if i don't pass any peramiter in function call, this 1.05 value will be used. if we insert any default value, make to use it at last.
    return current_money*factor;
}

//constant argument
void printvalue(const int x){
    // x = 10; // This line would result in a compilation error.
    cout<<"The value of x is : "<<x<<endl;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"sum is : "<<sum(a, b)<<endl;

    cout<<staticExam(a, b)<<endl;
    cout<<staticExam(a, b)<<endl;
    cout<<staticExam(a, b)<<endl;

    int money = 1500;
    cout<<"If you have "<<money<< " you will receive "<<moneyReceived(money)<< "taka in return"<<endl;
    
    int x = 23;
    printvalue(x);

    return 0;
}