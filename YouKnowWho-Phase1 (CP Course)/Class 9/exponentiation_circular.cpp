#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int power(int x, int n, int mod){
    // if n <= 1e6
    int ans = 1;
    // for(int i = 0; i < n; i++){
    //     cout << ans << ' ';
    //     ans = 1ll * ans * x % mod;
    // }
    // return ans;

    //if n ~ 1e9
    vector<bool> visited(mod, false);
    vector<int> v; int start;
    v.push_back(1);

    while(true){
        ans = 1ll * ans * x % mod;
        if(visited[ans]){
            start = find(v.begin(), v.end(), ans) - v.begin();
            break;
        }
        visited[ans] = 1;
        v.push_back(ans);
    }

    int cycle_len = v.size() - start;
    if(n < start) return v[n];
    n -= start;
    return v[start + n % cycle_len];
}

int32_t main(){
    FASTER;
    
    int x = 2, n = 9, m = 40;
    int res = power(x, n, m);
    cout << res << endl;

    return 0;
}