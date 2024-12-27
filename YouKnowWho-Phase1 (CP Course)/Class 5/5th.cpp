#include <iostream>
#define ll long long
using namespace std;

class one{
protected:
    int id;
};

class two : public one{
public:
    void setdata(int x){
        id = x;
    }

    void display(){
        cout << id << endl;
    }
};


int main(){
    two x;
    x.setdata(9);
    x.display();
}