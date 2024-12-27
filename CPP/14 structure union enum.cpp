#include<iostream>
using namespace std;

typedef struct employee
{
    int eld;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pound;
};


int main(){
    ep aleen;
    // struct employee aleen;
    aleen.salary = 23000;
    cout<<aleen.salary<<endl;

    union money m1;
    m1.rice = 321;
    m1.car = 'c';
    cout<<m1.rice<<endl;    //will have grabage value; cuz this memory is overwritten by char
    cout<<m1.car<<endl;


    enum day{sunday, monday, tuesday, wednesday};
    day x1 = wednesday;
    cout<<(x1 == 3)<<endl;  //it will print 1, cuz its true

    
    return 0;
}