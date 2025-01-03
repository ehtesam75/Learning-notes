//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
///change it to difference between the maximum and minimum elements on this segment is at least k
// (max -min >= k)

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
ll a[N];

class custom{
public:
    custom() {}
    multiset<ll> se;

    void insert(ll x){
        se.insert(x);
    }

    void erase(ll x){
        se.erase(se.find(x));
    }

    ll get_max(){
        return *(--se.end());
    }

    ll get_min(){
        return *se.begin();
    }

    ll get(){
        return get_max() - get_min();
    }
    void print(){
        for(auto x : se) {
            cout << x << ' ';
        } cout << endl;
    }
}ds;

int32_t main(){
    FASTER;
    
    int n; ll k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll ans = 0;
    int r = 1;
    for(int l = 1; l <= n; l++){
        while(r <= n){
            ds.insert(a[r]);
            if(ds.get() >= k){
                ds.erase(a[r]);
                break;
            }
            r++;
        }
        // ds.print();
        // cout << n - r + 1 << endl;
        ans += n - r + 1 ;
        ds.erase(a[l]);
    }

    cout << ans << endl;

    return 0;
}