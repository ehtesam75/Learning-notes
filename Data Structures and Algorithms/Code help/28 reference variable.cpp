#include <iostream>
using namespace std;

void update(int &n){    //or (int& n); reference variable..if we don't use ref variable here, then it'll be a pass by value...but with ref variable we, now give 'i' a new name 'n' while keeping the address same
    n++;
}

int& func(int a){
    int num = a;        //this process is a bad practise; cuz 'num' and 'ans' is local variable here..these have no existance outside of this function..so it's generally recommended to avoid returning references or pointers to local variables
    int& ans = num;
    return ans;
}

int* fun(int n){
    int* ptr = &n;  //same as above; bad practice; ptr is unacessable outside of this func
    return ptr;
}

//so avoid returning references or pointers to local variables

int main(){
    //a single memory location but multiple varibale name
    int i=3;
    int &j = i;
    j++;
    cout << i << " " << j << endl;

    cout << "before: " << i << endl;
    cout << "after: ";
    update(i);
    cout << i << endl;

    func(i);
    cout << i <<endl;

    fun(i);
    cout << i <<endl;
    return 0;
}