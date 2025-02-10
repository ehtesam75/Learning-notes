#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

ll mulmod(ll x, ll n, ll mod){
	ll ans = 0;
	while(n){
		if(n & 1){
			ans = (ans + x) % mod;
		}
		x = (x + x) % mod;
		n = n >> 1;
	}
	return ans;
}

ll mulmod_using_int128(ll x, ll n, ll mod){
	return (ll)((__int128) x * n % mod);
}

int32_t main(){
    FASTER;
    
    ll x = 1e18, y = 1e18, mod = (ll)1e18+7;	
    //x * y % mod
    cout << mulmod(x, y, mod) << endl;
    cout << mulmod_using_int128(x, y, mod) << endl;

    return 0;
}

/*
x * y
sum of x, y times
x * 13
=> x * (8+4+0+1)
=> 8x + 4x + 0x + 1x
*/
