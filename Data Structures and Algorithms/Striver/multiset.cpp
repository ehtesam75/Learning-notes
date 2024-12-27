//sorted but can contains duplicate value

#include <iostream>
#include <set>


using namespace std;

int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);

    for(auto i:ms){
        cout<<i<<" ";
    }cout<<endl;

    //ms.erase(1); //it will erase all the one
    //then how we suppose to erase only the first one?

    ms.erase(ms.find(1));   //will find the iterator of the first 1 and erase it

    //1 1 1 2 3
    //erase more than one element
    auto it = ms.find(1);
    advance(it, 2);     //Now the iterator is one position ahead of where you want it to be. This is because in the erase() function it takes from the start till one element less than the end that we specified
    ms.erase(ms.find(1), it);   //two 1 got removed

    for(auto i:ms){
        cout<<i<<" ";
    }

    //rest of func same as set

    return 0;
}