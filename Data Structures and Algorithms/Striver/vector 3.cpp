#include <iostream>
#include <vector>

using namespace std;

int main(){
    //erase
    //one way to erase is delete a single element, then the remaining element will be re-arraged
    vector<int>v = {10, 12, 13, 8, 33, 90};
    v.erase(v.begin()+1);   //erase only 12

    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;

    //erase multiple value
    //10 13 8 33 90
    v.erase(v.begin()+2, v.begin()+4);  //erase(first ersed item's loc, last erased item loc+1)

    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;


    //insert function
    //insert a single element
    //10 13 90
    v.insert(v.begin()+2, 48);

    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;

    //insert multiple elements
    //10 13 48 90
    v.insert(v.begin(), 2, 5);  //two 5 will be inseted at the beganing 
    
    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;

    //insert a vector into a vector (NOT used much)
    vector<int>vec = {3, 8, 13, 99};

    //5 5 10 13 48 90
    v.insert(v.begin(), vec.begin()+2, vec.end());  //'vec' vector's 3rd position to last will be copied

    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;

    //13 99 5 5 10 13 48 90
    v.pop_back();   //delete the last element


    //swap
    vector<int>v5 ={10, 20};
    vector<int>v6 ={30, 40};

    v5.swap(v6);       //v6 will have value of v5 and vice versa
    for(auto i:v6){
        cout<<i<<" ";
    }cout<<endl;

    //clearing
    v5.clear();

    cout<<"is v5 is empty: "<<v5.empty();

    return 0;
}