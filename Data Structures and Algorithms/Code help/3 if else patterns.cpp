#include<iostream>
using namespace std;

int main(){
    int a, b;
    // cin>>a>>b;   in this process cin won't show any difference if tab/enter is pressed
    a = cin.get();     //but this will! try use space/enter/tab/1/2... as input, output will show their corrosponding ascii value 
    cout<<"value of a is: "<<a<<endl;

    int i=2, j = i+1;
    if((i=3)==j){
        cout<<i<<endl;      //now i is 3
    }else{
        cout<<"else"<<endl;
    }
    return 0;
}