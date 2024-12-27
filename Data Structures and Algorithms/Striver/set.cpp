//sorted
//uniqe

#include <iostream>
#include <set>

using namespace std;

int main(){
    
    set<int>st;
    st.insert(21);
    st.emplace(2);
    st.insert(9);
    st.insert(2);
    st.insert(7);
    st.insert(27);

    //2 7 9 21

    auto it = st.find(9); // find returns an iterator which points to 9 (address)
    auto it1 = st.find(17); //if the element (in this case , 17) isn't on the set, then find returns an iterator which points to after the last element (st.end())

    st.erase(7); //erase 7 // takes logarithmic time

    for(auto i:st){
        cout<<i<<" ";
    }cout<<endl;

    int cnt = st.count(1);  //if 1 is on the set then it will return 1..in set one element can be one time ..so..

    //2 9 21 27
    auto it3 = st.find(27);
    st.erase(it, it3);    //erase 9, 21..not 27

    for(auto i:st){
        cout<<i<<" ";
    }cout<<endl;

    //lower bound and upper bound
    set<int>s = {3, 5, 1, 2, 3};
    //1 2 3 5 
    auto it4 = s.lower_bound(2);    //returns a iterator poiting towards index 1
    auto it5 = s.upper_bound(3);   //returns a iterator poiting towards index 3 (next element of 3)

    cout<<*(it5)<<endl;

    //in set, everything happen in logarithmic time complexity
    
    return 0;
}