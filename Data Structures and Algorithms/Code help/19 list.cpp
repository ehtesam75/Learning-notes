#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int>l;

    list<int>new(l);    //'l' wil be copied to list 'new' 
    list<int>n(5, 100);     //size 5, intialize all elements with 100

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());

    cout<<"After Erase: ";
    for(int i:l){
    cout<<i<<" ";
    }cout<<endl;   

    cout<<"Size of list: "<<l.size()<<endl;

    return 0;
}


/*
Difference between list, vector, deque:

Data Structure:

std::list: A doubly-linked list where each element is stored in a separate node, and each node contains pointers to the previous and next nodes.
std::vector: A dynamic array where elements are stored in contiguous memory locations.
std::deque: A double-ended queue, which is implemented as a dynamic array of fixed-size chunks.

Insertion and Deletion:

std::list: Efficient for insertions and deletions anywhere in the list, including the beginning and middle. These operations are constant time (O(1)).
std::vector: Efficient for push_back and pop_back operations (amortized constant time), but less efficient for insertions and deletions in the middle or at the front (linear time, O(n)).
std::deque: Efficient for push_back and pop_back at both ends (amortized constant time), as well as efficient insertions and deletions at the front (constant time). However, insertions and deletions in the middle are less efficient (linear time, O(n)).

Random Access:

std::list: Inefficient for random access. Accessing elements by index takes linear time (O(n)).
std::vector: Efficient for random access. Accessing elements by index takes constant time (O(1)).
std::deque: Efficient for random access. Accessing elements by index takes constant time (O(1)).

Memory Overhead:

std::list: Typically has a higher memory overhead because each element is stored in a separate node, which includes pointers to the previous and next nodes.
std::vector: Minimal memory overhead; it stores elements in a contiguous block of memory.
std::deque: Moderate memory overhead due to its segmented structure.

Usage:

Use std::list when you need efficient insertions and deletions at arbitrary positions in the container, and you don't require fast random access.
Use std::vector when you need fast random access and dynamic resizing of the container is infrequent.
Use std::deque when you need fast insertions and deletions at both ends of the container and reasonable random access.




ARRAY:

Data Structure: Contiguous block of memory.
Dynamic Sizing: No, the size is fixed at compile-time.
Random Access: Efficient, as elements are stored in contiguous memory locations.
Insertion/Deletion: Inefficient for insertions/removals in the middle because it may require shifting elements.
Memory Overhead: Minimal, as it only stores the elements themselves.
Use Cases: Use when the size of the collection is known in advance and doesn't need to change during runtime. Arrays are also suitable for cases where you need maximum performance and memory efficiency.
*/