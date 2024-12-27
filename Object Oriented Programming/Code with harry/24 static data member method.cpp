#include<iostream>
using namespace std;

class employee{
    int id;
    int static count;     // Only declare the static member variable here, don't initialize (why tho?)
    public:
        void setData(void){
            cout<<"Enter id: "<<endl;
            cin>>id;
        }
        void getData(void){
            cout<<"id of person "<<count+1<<" is : "<<id<<endl;
            count++;
        }

        static void getCount(void){     //static member function
            // cout<<id; (throws an error; in static member function only static variable/function can be inputed)
            cout<<"The value of count is "<<count<<endl;
        }
};

// count is the static data member of class employee
int employee::count=0;       //When declaring a static member variable in the class, you need to define it outside the class
          //tho i don't need to initialize it to 0. cuz for static value, its default is alrady set to 0

int main(){
    employee aleen, rohan, lara;
    // aleen.id = 2;  (won't work, cuz id is private)
    aleen.setData();
    aleen.getData();
    employee::getCount();

    rohan.setData();
    rohan.getData();
    employee::getCount();

    return 0;
}