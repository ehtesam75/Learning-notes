#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string>m;

    m[1] = "babber";
    m[13] = "kumer";
    m[2] = "love";

    //another method 
    m.insert( {5, "bheme"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;     //first = key, second = value
    }

    cout<<"find 13: "<<m.count(13)<<endl;

    //erase
    m.erase(13);
    cout<<"after erase: ";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(2);
    for(auto i = it; i != m.end(); i++){
        cout<<(*i).first<<" ";
    }

 
    //insert, find , count, erase in case of map, TC is O(log(n))

    return 0;
}