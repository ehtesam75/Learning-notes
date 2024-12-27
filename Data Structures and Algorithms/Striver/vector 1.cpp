#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    //there are 2 method to insert something into a vector
    v.push_back(1);
    v.emplace_back(2);  //its faster than push_back

    //i can use pair in vector
    vector<pair<int, int>>vec;
    vec.push_back({1, 3});
    vec.emplace_back(2, 4); //if i use emplace back, then i don't need to use carly bracket 

    vector<int>v1(5, 100);   //its a container containing five 100....will i be able to use push_back to add a new value to it?? yes..then the vector will automatically increase its size to 6 and so on....
    vector<int>vect(5);    //a container with size 5

    vector<int> v2(v1);     //v2 will be similar to v1, but a copy of v1


    //accessing vector elements
    vector<int>ne = {1, 3, 5};
    cout<<ne[1]<<" ";

    cout<<ne.back()<<endl;     //will print the last element

    return 0;
}

/*
DIFFERENCE BETWEEN PUSH_BACK AND EMPLACE_BACK:

push_back is used to add a copy of the provided element to the end of the vector.
emplace_back is used to construct an element directly within the vector, in-place.
The key difference is that emplace_back avoids the overhead of creating a temporary copy of the element. It is particularly useful when dealing with complex or user-defined types where constructing the element in-place can be more efficient than creating a temporary copy.
In summary, push_back is used to add a copy of an element to the end of the vector, while emplace_back is used to construct an element in-place within the vector.
*/