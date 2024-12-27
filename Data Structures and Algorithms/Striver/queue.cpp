//FIFO: first in, first out; first guy to come will get ticket first

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    queue<int>q;
    q.push(2);
    q.push(8);
    q.push(11);

    q.back() += 5;

    cout<<q.back()<<endl;   //will get the last element


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();    //will delete the first one 
    }

    //size swap empty same as stack
    //all the operation are in O(1)

    return 0;
}