#include <iostream>
#include <vector>
using namespace std;

int main(){
    //v.begin() is pointing towards the memory loc of 1st element
    //v.end() points to a memory location that is right after the end of vector...in case of below's vector...v.end() is pointing to right after the element 8
    vector<int>v = {1, 4, 5, 7, 8};

    vector<int>::iterator it = v.begin();   //itrator, 'it' is pointing toward the mem loc of 1
    it++; //moves to the next element's loc
    
    cout<<*(it)<<" ";

    it = it + 2;
    cout<<*(it)<<endl;

    vector<int>vec = {1, 3, 6, 7};
    vector<int>::iterator it2 = vec.end();
    it2--;
    cout<<*(it2)<<endl;

    vector<int>v3 = {33, 55, 77, 23};
    //23 77 55 33 ; reverse order

    vector<int>::reverse_iterator it3 = v3.rend();   //reverse end
    it3--;
    cout<<*(it3)<<endl;

    vector<int>::reverse_iterator it4 = v3.rbegin();    //reverse begin, pointing to 23
    it4++;  //moves to 77
    cout<<*(it4)<<endl;

    
    //printing vector with iterator
    cout<<"Printing with iterator: ";
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){ 
        cout<<*(it)<<" ";
    }cout<<endl;

    //or i could use "auto" instead of "vector<int>::iterator"
    cout<<"using iterator; auto: ";
    for(auto it = v3.begin(); it != v3.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    //normal way
    cout<<"Normal way: ";
    for(auto i:v3){     //here 'i' is an integer
        cout<<i<<" ";
    }

    return 0;
}