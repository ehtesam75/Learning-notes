#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int power(int a, int n, int mod){
    int ans = 1 % mod;
    while(n){
        if(n & 1){
            ans = 1ll * ans * a % mod;
        }
        a = 1ll * a * a % mod;
        n >>= 1;
    }
    return ans;
}

int inverse(int a, int mod){
    return power(a, mod - 2, mod);
}

int32_t main(){
    FASTER;
    
    //given that n is prime
    int a, b, n; cin >> a >> b >> n;
    // if(__gcd(b, n) != 1){
    //     //they're not co prime
    //     cout << "modular inverse doesn't exist" << endl;
    //     return 0;
    // }

    // int b_inverse = inverse(b, n);
    int ans = 1ll * a * inverse(b, n) % n;
    cout << ans << endl;

    return 0;
}

//https://vjudge.net/problem/EOlymp-9606