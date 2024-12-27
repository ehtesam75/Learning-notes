#include <iostream>
#include <list>

using namespace std;

int main(){
    //similar to vector, but you can add value in front and back both
    list<int>ls;

    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(5);
    ls.emplace_front(7);

    for(auto i:ls){
        cout<<i<<" ";
    }

    //rest fucntion same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}

//comparing to vector:
/*
 if your application involves a lot of insertions and deletions in the middle of the container, and you don't require frequent random access, a list might be a better choice. However, for most general-purpose scenarios, where you need efficient random access and don't perform frequent insertions/deletions, a vector is often preferred due to its better cache locality and lower memory overhead.
*/