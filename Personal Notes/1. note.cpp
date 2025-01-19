#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int32_t main(){
    FASTER;

//Explicitly access global variable
    //use :: (scope resulation operator) before the variable
    
//count set bit
    int r = 13; 
    cout << __builtin_popcount(r) << endl;

    //or
    bitset<32> bits(r);
    cout << bits.count() << endl; 	//3; number of set bit
    cout << bits.size() << endl; 	//32 ; total bits width

    //__builtin_popcountll(); //for 64bits


//count leading zeroes
    //how many leading zeroes in the binary of z
    int z = 5; 
    cout << "count leading zero (clz) : " << __builtin_clz(z) << endl;
    //use __builtin_clzll(z) if z is in ll

//count trailing zeroes
    z = 16;
    cout << "ctz : " << __builtin_ctz(z) << endl;
    //__builtin_ctzll(z) for ll

//index of the highest set bit (most significant bit/leftmost bit)
//getting the index of MSB
    
    z = 15;
    cout << 31 - __builtin_clz(z) << endl; //output 32 ; used '31 -' because of 0 indexing
    //cout << 63 - __builtin_clz(z); //for ll 
    //I can also use __lg(z) for this purpose 

//power of two
    //if (n & (n-1)) == 0 then its power of two; otherwise it isn't

    int n; int pw[n+1], mod =1e9 + 7;
    pw[0] = 1;
    for(int i = 1; i <= n; i++){
        pw[i] = 1ll * pw[i-1] * 2 % mod;
    }
    //pow of 2 of 1 to n is in a array. now we can just get the pow2 of something from here
    //as the ans can be huge, it is under mod

//how to store number than can't be stored in ll?
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


/*complexity : set lower bound
    lower_bound(se.begin(), se.end(), i); // this will work as o(n); for vector : this syntex will work as o(logn) tho
    se.lower_bound(i)   //o(logn)

    s = s + 'a' //o(len of s)   //string s;
    s += 'a'    //o(1)
*/


//all_of function under algorithm
    // Check if all elements are positive
    /*if (all_of(v.begin(), v.end(), [](int x) { return x > 0; })) {
        cout << "All elements are positive." << endl;
    } else {
        cout << "Not all elements are positive." << endl;
    }
    */

//know the data type of vairable
    int d;
    cout << typeid(d).name() << endl;

//short 2 byte data type; integer type

//common mistake (from sohag vai blog)
    ll o = 1e12;
    vector<ll> v({o, o, o});
    cout << accumulate(v.begin(), v.end(), 0ll) << endl;    //correct ;make sure to use 0ll for ll


//best way to get sqrt of a number
    /*
    int a = 81;
    int ans = sqrt(a);

    while(ans * ans < a) ans++;
    while(ans * ans > a) ans--;
    cout << ans << endl;
    */

//best way of getting the floor of log2 of an integer
    cout << __lg(16);

//constant optimization in code
    //modulo is slower than arithmatic operation
    //(a + b) % m
    //a += b; if(a >= m) a -= m;  //doing the same thing as above line; but this will be faster


//stl array
    //vector<tuple<int, int, int, int>> v;
    //vector<array<int, 4>> v   //same as above. then benifit?
    //printing while using tuple can be confusing (for syntex) ; for(auto x : v) cout << get<3>(x) << ' '...
    //but using stl array in vector, we can write ; for(auto x : v) cout << x[3] << ' '....
    //so printing becomes mush easier

//uniqe function of vector!
    //I could have used a set instead of this mess written below
    //added this just for the sack of learning 
    /*
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v[i] = a[i];
    }

    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    for(auto x : v) {
        cout << x << ' ';
    } cout << endl;
    */


//getting min or max of more than 2 element
    cout << min({4, 8, 2, 9}) << endl;  //notice : i used a curly braces here


//TERNARY OPARATOR TRICKS
    int w = 5;
    cout << "ab"[w == 5] << endl;;
    //a is 0th element(printed if the condition is false/0)
    //'b' is the 1st element (printed if the con is true/1)
    //this can be used in whether a sapce or new line (for last element) is to be printed 
    //" \n"[i == vector.size()-1]


}