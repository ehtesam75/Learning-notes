//contains key and element; key is always uniqe and is used to identify value (which can be duplicate)
//{key, value}
//key can be of any data type
//so map stores uniqe key in a sorted order

#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int>m; //both key and value is int
    map<int, pair<int, int>>m1; //key is int, value is pair of 2 int
    map<pair<int, int>, int>m2; //key is pair, value is int

//<int, int>
    m[1] = 2; //it means on the key 1, store 2
    m.emplace(3, 1);    //key 3, store 1
    m.insert({2, 4});     //key 2 ; store 4

    //m1[{2, 3}] = 10;    //key is 2, 3 and value is 10 ; isn't working

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<m[1]<<endl;   //value at key 1
    cout<<m[5]<<endl; //0 or null

    //print value with an iterator

    auto it = m.find(3);    //search 3 key
    auto it2 = m.find(5); //key 5 not present; so will return a iterator at m.end() [m.end() means right after the map] 
    cout<<it->first<<" "<<it->second<<endl;

    /*
    1 2
    2 4
    3 1
    */

    auto it3 = m.lower_bound(2);    //2 is key..
    auto it4 = m.upper_bound(2);    //2 is key here..this will point towards (3, 1)

    cout<<it3->second<<endl;
    cout<<it4->second<<endl;

    //erase, swap, size, empty are same as above

    return 0;
}