#include<iostream>
#include<iomanip>       //for setprecision
#include<cmath>     //math.h also work
using namespace std;

class point{
    int a, b;
    
    public:
        void setValue(int x, int y){
            a = x;
            b = y;
        }

        friend void distance(point o1, point o2);  
};

void distance(point o1, point o2){
            float result = sqrt(pow((o1.a - o2.a), 2) + pow((o1.b - o2.b), 2));
            cout<<fixed<<setprecision(3)<<"Distance between two points: "<<result<<endl; //dicimal point = setprecision
        }

int main(){
    point a;
    a.setValue(9, 15);
    point b;
    b.setValue(5, 8);
    distance(a, b);
    
    
    return 0;
}