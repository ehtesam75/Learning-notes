#include <iostream>
using namespace std;

#define PI 3.1416   //this is macro;  this is not a varibale, so it won't take any space; memory efficient; if we used double pi = 3.1416, then we would have used memory
//before the complilation start, all the PI in the main function will be replaced by 3.1416

int main(){
    int r = 3;
    double area = PI * r * r;
    cout << area << endl;
    return 0;
} 