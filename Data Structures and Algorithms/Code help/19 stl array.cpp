//Standard Template Library (STL)

#include<iostream>
#include<array>

using namespace std;

int main(){
    int a[3] = {1, 2, 3};   //static

    array<int, 3>arr = {1, 2, 3};   //static
    int size = arr.size();

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Element at index 2: "<<arr.at(2)<<endl;
    cout<<"Empty or not : "<<arr.empty()<<endl;

    cout<<"First Element: "<<arr.front()<<endl;
    cout<<"Last Element: "<<arr.last()<<endl;
    
    return 0;
}