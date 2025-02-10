#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int mod = 1000003, N = 1e6 + 2;
//notice we have taken N's value less than mod
//cuz mod! % mod = 0, so in precalculation fact[1000003] becomes 0, so all the next fact will also be zero
//for this result inverse[N-1] will also be 0..leading to incorrect output
int fact[N], inverse[N];

int inverse_calculate(int x){
    int n = mod - 2;
    int ans = 1 % mod;
    while(n){
        if(n & 1){
            ans = 1ll * x * ans % mod;
        }
        x = 1ll * x * x % mod;
        n >>= 1;
    }
    return ans;
}

void pre_calculate(){
    fact[0] = 1;
    for(int i = 1; i < N; i++){
        fact[i] = 1ll * fact[i-1] * i % mod;
    }

    // for(int i = 1; i < N; i++){
    //     inverse[i] = inverse_calculate(fact[i]);
    // }

    inverse[N-1] = inverse_calculate(fact[N-1]);
    for(int i = N-2; i >= 0; i--){
        inverse[i] = 1ll * inverse[i+1] * (i+1) % mod;
    }
}

int nCr(int n, int r){
    if(n < r) return 0;
    return 1ll * fact[n] * inverse[r] % mod * inverse[n-r] % mod;
}

int nPr(int n, int r){
    if(n < r) return 0;
    return 1ll * fact[n] * inverse[n-r] % mod;
}

void solve(int test){
    int n, k; cin >> n >> k;
    cout << "Case " << test << ": " << nCr(n, k) << endl;  
}

int32_t main(){
    FASTER;
    int tc, test = 0; cin >> tc;

    pre_calculate();

    while(tc--){
        test++;
        solve(test);
    }
    return 0;
}