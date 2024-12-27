#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int>d;    //spelling 'deck'.....deque = double-ended queue..deque is dynamic data structure
    // A deque is a container class that allows for efficient insertion and removal of elements at both ends (front and back) of the sequence. It dynamically allocates and manages memory to store its elements, so you can add or remove elements without needing to specify the size in advance, making it dynamic in nature.

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();   //'2' will be removed
    //if i used pop_front(), then 3 would be removed

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Element at 1st index: "<<d.at(0)<<endl;

    cout<<"Front: "<< d.front()<<endl;
    cout<<"Back: "<< d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl; //will return in bool

    cout<<"Before erase size: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);    //will delete the 1st element..which is '3'..only '1' will be left
    cout<<"After erase size: "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";       //only 1 will be printed
    }cout<<endl;

}