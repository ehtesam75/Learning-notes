#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int>v = {3, 5, 7, 9, 9};
    int ind = lower_bound(v.begin(), v.end(), 5) - v.begin();   //lower bound will return an iterator of 5...substracting v.begin() to it will give the index of 5
    int ind1 = lower_bound(v.begin(), v.end(), 8) - v.begin();   //as 6 is not present, lower bound will return an iterator point to the imediate grater number of 6..which in this case in 8
    int ind2 = lower_bound(v.begin(), v.end(), 10) - v.begin();   //there is no 10..so will point to the end of the vector (after the last nine)

    cout<<ind<<" "<<ind1<<" "<<ind2<<endl;

    //upper bound
    vector<int>vec = {8, 9, 12, 18, 20};
    int first = upper_bound(vec.begin(), vec.end(), 9) - vec.begin();   //will return a iterator to next element; pointing to 12....substracting v.begin will get the index of 12 
    int second = upper_bound(vec.begin(), vec.end(), 16) - vec.begin();  //same as lowr bound; line 10 comment
    int third = upper_bound(vec.begin(), vec.end(), 25) - vec.begin();    //same as line 11 comment

    cout<<first<<" "<<second<<" "<<third << endl;

    //these function runs at log(n)..same complexity as binary search..so we can use these 

    //find the first occurence of 7 in a sorted array. If it does not exits, print -1
    int b[6] = {4, 7, 7, 7, 7, 8};
    int ans = lower_bound(b, b+6, 7) - b;
    if(ans !=6 && b[ans] == 7)
        cout<<"first occa :"<<ans<<endl;
    else   
        cout<<-1<<endl;


    //find the last occurence of 7 in a sorted array. If it does not exits, print -1
    int a[6] = {4, 7, 7, 7, 7, 8};

    int res = upper_bound(a, a+6, 7)-a;
    if(res >=0 && a[res-1] == 7)
        cout<<"last occa "<<res-1<<endl;
    else
        cout<<-1;


    //find the largest number smaller than 4 in a sorted array
    //use lower bound..
    //int ans = lower_bound()..
    //ans--;

    //first the samlller number grater than x in a sorted array.
    //same as before
    return 0;
}