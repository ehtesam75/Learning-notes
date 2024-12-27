#include <bits/stdc++.h>
using namespace std;

int main(){
    //pair lies in utility library
    pair<int, int>p = {2, 5};
    cout<<p.first<<" "<<p.second<<endl;

    //if i want to store 3 variable in pair then i will have to use nested pair
    pair<int, pair<int, int>> p2= {1, {3, 4}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //pair type arr (int arr is replaced with pair arr)
    pair<int, int>arr[] = {{1, 2}, {3, 4}, {5, 6}}; //here index of {1, 2} is 0...and index of {5, 6} is 2
    cout<<arr[1].second<<endl;
    return 0;
}

/*
C++ stl has divided into 4 parts:
1. algorithm
2. containers
3. function //no need learn this, omit it
4. iterators
*/