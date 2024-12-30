#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int32_t main(){
    FASTER;
    
//count set bit
    int r = 13; 
    cout << __builtin_popcount(r) << endl;

    //or
    bitset<32> bits(r);
    cout << bits.count() << endl; 	//3; number of set bit
    cout << bits.size() << endl; 	//32 ; total bits width

    //__builtin_popcountll(); //for 64bits

//power of two
    //if (n & (n-1)) == 0 then its power of two; otherwise it isn't


//save more digit than it can in long long
    ll x = 1000000000000;
    ll y = 1000000000000000;
    __int128 a = (__int128) x * y;	//can save upto 128 bits
    //but you can't cout it


//count the no of bits
    cout << (int)log2(r) + 1 << endl; //4

//count the number of digits
    cout << (int)log10(r) + 1 << endl;	//2


//lower and upper bound
    //lower bound in vector
    //lower_bound(v.begin(), v.end(), x);   //returns a iterator

    //lower bound in array
    //lower_bound(a, a+n, x);   //returns a pointer
    //use built in funciton; this also follow olog(n) complexity
    //if lb and ub func doesn't find lb and ub then it will return v.end()


    //if the array is reversely sorted
    //3 2 1 -1 -1 -1
    //int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }

    // cout << (a+n) - lower_bound(a, a+n, -1, greater<int>()); //3 output
    //or we could reverse the array first then perform BS


//all_of function under algorithm
    // Check if all elements are positive
    if (all_of(v.begin(), v.end(), [](int x) { return x > 0; })) {
        cout << "All elements are positive." << endl;
    } else {
        cout << "Not all elements are positive." << endl;
    }

    return 0;
}