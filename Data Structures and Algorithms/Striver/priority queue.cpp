#include <iostream>
#include <queue>

using namespace std;

int main(){
    //in PQ main functions are push, top, pop
    //in PQ, dy default maximum element is at the top
    priority_queue<int>pq;

    //(max heap):
    pq.push(8);
    pq.push(6);
    pq.push(10);
    pq.emplace(1);

    cout<<pq.top()<<endl;

    pq.pop();   //will delete the top one,  10
    cout<<pq.top()<<endl;

    //size swap empty same as others

    //min heap ( minimum element on the top):
    priority_queue<int, vector<int>, greater<int>>pq2;

    pq2.push(4);
    pq2.push(8);
    pq2.push(3);

    cout<<pq2.top()<<endl;   //3


    /*
    In PQ:
    push: log(n)
    top: O(1)
    pop: log(n)
    */
     
    return 0;
}