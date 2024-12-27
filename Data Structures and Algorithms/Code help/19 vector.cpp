#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;      //vector is a dynamic array
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl; //when there isn't enough space in the vector, and someone try to add a element to it, the capacity of the vector will be double each time

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl; //capacity means how many memory assigned to the vector
    cout<<"Size : "<<v.size()<<endl;    //size means how many elements are on the vector

    cout<<"Element at index 2 : "<<v.at(2)<<endl;
    
    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){       //This is the syntax for a range-based for loop in C++. It is used to iterate over the elements of a container, in this case, v. - This declares a variable i of type int, which will be used to store each element of the container v during each iteration of the loop.
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();      //will remove the last elements

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;    //size will be cleared
    cout<<"After clear capacity: "<<v.capacity()<<endl;     //capacity will remains the same


    vector<int> a(5, 1);   //size 5, initialize all the elements with 1
    cout<<"Print a:"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int>last(a);    //last is vector and all the elements of a will copoied in a
    cout<<"Print last:"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;  
      
    return 0;
}