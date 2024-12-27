#include <iostream>
#include <queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int>maxi;

    //min heap
    priority_queue<int, vector<int> , greater<int> >mini; //this is how to declaare a min heap, didn't understand

    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    maxi.push(3);

    int size = maxi.size();
    for(int i =0; i<size; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    mini.push(3);
    mini.push(1);
    mini.push(4);
    mini.push(2);

    int size2 = mini.size();
    for(int i =0; i<size2; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    

    cout<<"Empty? :" <<mini.empty()<<endl; //yes..cuz all elements r discarded
    return 0;
}


/*
DIFFERENCE BETWEEN STACK, QUEUE, PRIORITY QUEUE:

Stack:

Data Structure: Stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle, meaning that the last element added to the stack is the first one to be removed.
Usage: It is used for tasks where elements need to be processed in reverse order, such as reversing a string, implementing function calls and recursion, and maintaining undo functionality in applications.
Operations: The primary operations on a stack are push (to add an element to the top) and pop (to remove the top element).

Queue:

Data Structure: Queue is a linear data structure that follows the First-In-First-Out (FIFO) principle, meaning that the first element added to the queue is the first one to be removed.
Usage: It is used when elements need to be processed in the order they were added. Common applications include task scheduling, managing print jobs in a printer queue, and implementing breadth-first search (BFS) algorithms.
Operations: The primary operations on a queue are enqueue (to add an element to the back) and dequeue (to remove an element from the front).

Priority Queue:

Data Structure: Priority Queue is a data structure that maintains elements with associated priorities. Elements are removed from the queue based on their priorities.
Usage: It is used when you need to process elements in order of priority, not in the order they were added. Common applications include scheduling tasks in operating systems, implementing algorithms like Dijkstra's shortest path, and Huffman coding in data compression.
Operations: In addition to push and pop, a priority queue provides a way to assign priorities to elements and ensures that elements with higher priority are dequeued first.

In summary:

Stack is used for LIFO processing, where the last element added is the first to be processed.
Queue is used for FIFO processing, where elements are processed in the order they were added.
Priority Queue is used for processing elements based on priority.
*/