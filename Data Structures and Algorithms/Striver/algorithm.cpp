#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if it comes it here means, both are equal

    if(p1.first> p2.first) return true;
    return false;
}

int main(){
    int a[4] = {1, 3, 5, 2};
    //sort in decending order

    sort(a, a+4, greater<int>());  //grater is a inbuild comparator; which automatically sort it in a decending order
    //if i use less in place of greater, then it will sort in acending order, default order
    for(auto i: a){
        cout<<i<<" ";
    }cout<<endl;

    //what if i want to sort an arr or vec in my way?

    pair<int, int>p[] = {{1, 2}, {2, 1}, {4, 1}};
    //sort it according to second element in acsending order
    //if second element is same, then sort it according to first element, but in decending 

    sort(p, p+sizeof(p)/sizeof(p[0]), comp); //'comp' is a self written comparator
    //{4, 1}, {2, 1}, {1, 2}
    //go to the tutorial (1h 3 min) for explanation

    for(auto it: p){
        cout<<it.first<<" "<<it.second<<endl;
    }


    //count set bit (1)
    int num = 7; //111
    int count = __builtin_popcount(num);    //double underscore in first
    cout<<"number of set bit in 7: "<<count<<endl;

    long long number = 318948118394;    
    int cnt = __builtin_popcountll(number);    ///add a'll' at the end in case of long long
    cout<<cnt<<endl;    //24 set bits in its bimary form

    //permutarion; watch this part in video..very last part
    string s = "123";

    do{
        cout<< s <<endl;
    } while(next_permutation(s.begin(), s.end()));


    //max element
    int arr[] {3, 9, 33, 23,3};
    int maxi = *max_element(arr, arr+5);
    cout<<"maximum: "<<maxi<<endl;
    return 0;
}