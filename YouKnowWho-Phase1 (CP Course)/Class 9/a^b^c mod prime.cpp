#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int p = 1e9 + 7;

int x_power_n(int x, int n, int mod){
    int ans = 1 % mod;
    while(n){
        if(n & 1){
            ans = 1ll * ans * x % mod;
        }
        x = 1ll * x * x % mod;
        n >>= 1;
    }
    return ans;
}

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int sub_res = x_power_n(b, c, p-1); //using fermats theorem
    int res = x_power_n(a, sub_res, p);
    cout << res << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}