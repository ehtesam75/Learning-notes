#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int32_t main(){
    FASTER;
    
    //binary search

    //binary_search(v.begin(), v.end(), x); //o(logn); if x is present in the vector or not

    //count the number of pairs in the array which are divisable by n

    //fix ai
    // (ai + aj) % n = 0;
    // ai % n + aj % n = 0;
    // aj % n = - ai % n;

    /*
    this question its more like this one
    //two elements sum must equal to x
    a[i] + a[j] = x;
    j = x - a[i]    //we fixed i
    we will try to find value of x-a[i] in the map and each time we will push a[i] in the map
    */
    int n = 5;
    vector<int> a = {2, 3, 8, 1,2};
    map<int, int> mp;
    ll cnt = 0;  //if n = 1e5; cnt can be n^2; so use long long, got it

    for(int i = 0; i < n; i++){
       int need = -a[i] % n;
       need = (need + n) % n;
       cnt += mp[need];

       int curr = a[i] % n;
       curr = (curr + n) % n;
       mp[curr]++;
    }
    
    cout << cnt << endl;


    //now lets do another one. try finding the number of subarrays where the sum of values is divisible by n
    //pi%n - pj-1 % n = 0;    //we will fix i
    //pj-1%n = pi%n;
    int prefix[n];

    for(int i = 0; i < n; i++){
        if(i == 0) prefix[i ] = a[i];
        else prefix[i] = prefix[i-1] + a[i];
    }

    map<int, int> m;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        int rem = prefix[i] % n;
        rem = (rem + n) % n;

        cnt += m[rem];

        if(rem == 0) cnt++;

        m[rem]++;
    }

    cout << cnt << endl;

    return 0;
}