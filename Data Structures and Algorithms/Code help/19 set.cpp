#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>s;

    s.insert(2);
    s.insert(8);
    s.insert(2);
    s.insert(9);
    s.insert(4);
    s.insert(8);
    s.insert(2);
    //time complexity O(log(n))

    for(auto i: s){     //The auto keyword in C++ is used for type inference, allowing the compiler to automatically deduce the data type of a variable based on its initializer. I
        cout<<i<<endl;
    }cout<<endl;

    //erase

    s.erase(s.begin()); //will delete 2

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();  //begin is now 4
    it++;   //8
    s.erase(it);    //delete 8

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    //count
    cout<<"is 5 present or not : "<<s.count(5)<<endl;

    //find
    auto elementToFind = 4;
    set<int>::iterator itr = s.find(elementToFind); //find(element to fint; try 9)
    //cout<<"Value presesnt at itr: "<<*itr<<endl;  //will print the value if it presents

    if(itr != s.end()){     // itr points to the location of the element in the set if it is found, or it points to the end of the set (i.e., mySet.end()) if the element is not found.
                            //s.end(): This represents the position just beyond the last element in the set. In C++, it's common to use the end iterator to indicate the end of a container. It does not point to any valid element; it's simply a marker to indicate the end of the sequence.
        cout<<"value "<<elementToFind<<" is present at the set"<<endl;
    }else{
        cout<<"value "<<elementToFind<<" is not present at the set"<<endl;
    }


    for(auto i = itr; i != s.end(); i++){
        cout<<*i<<" ";
    }
    return 0;

    //NOTE:
    //insert, count, erase, find: all of these TC is : 0(log(n))
    //size, begin, empty is O(1)
}

/*
In C++, a std::set is a container provided by the Standard Template Library (STL) that implements a sorted associative container. It is often used to store a collection of unique elements in a sorted order. Here's what you need to know about the characteristics and features of a std::set:

Sorted Container:

A std::set maintains its elements in sorted order based on a specified comparison function (by default, it uses operator < for sorting).
Elements are sorted in ascending order by default, but you can specify a custom comparison function to change the sorting order.
Uniqueness:

A std::set only stores unique elements. If you try to insert an element that already exists in the set, it will not be added again.
Balanced Binary Search Tree:

Typically, std::set is implemented as a balanced binary search tree (usually a red-black tree). This ensures efficient insertion, deletion, and search operations.
Iterators:

std::set provides bidirectional iterators (begin() and end()) that allow you to traverse the elements in ascending order.
Operations:

Common operations on a std::set include insertion, removal, and searching for elements.
insert(value): Adds an element to the set if it doesn't already exist.
erase(value): Removes an element from the set if it exists.
find(value): Searches for an element and returns an iterator to it (or end() if not found).
size(): Returns the number of elements in the set.
empty(): Checks if the set is empty.
clear(): Removes all elements from the set.
*/