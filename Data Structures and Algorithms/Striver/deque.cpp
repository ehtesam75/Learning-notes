#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int>de;
    
    de.push_back(7);
    de.push_back(88);
    de.emplace_front(9);
    de.pop_front();

    cout<<de.back()<<endl;
    cout<<de.front()<<endl;
    

    for(auto i:de){
        cout<<i<<" ";
    }

    //rest func same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}