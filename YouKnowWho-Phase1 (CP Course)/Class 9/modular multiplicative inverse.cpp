#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int inverse(int a, int mod){
	//o(n)
	for(int i = 1; i < mod; i++){	
		//i can't be 0. And won't be more than mod cuz in that can it will rounded under mod
	    if(1ll * a * i % mod == 1) return i;
	}
	return -1;
}

int inverse_using_fermats(int a, int n, int mod){
	//o(logn)
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

int32_t main(){
    FASTER;
    
    int a = 87, mod = 1e9+7;
    cout << inverse(a, mod) << endl;
    cout << inverse_using_fermats(a, mod-2, mod) << endl;	//note : here mod has to be prime

    return 0;
}


/*
fucntion : inverse
	a * (1/a) = 1
	=> a * b = 1 // b = 1/a
	b is basically 'i', here
*/


/*
function : inverse_using_fermats
making it efficient:

we know from fermats theorem:
=> a^(p-1) % p = 1 % p
=> a^(p-1)/a %p = 1/a % p (divided by a)
=> a^(p-2) % p = 1/a %p
=> a^(p-2) % p = modular multiplicative inverse


modular multiplicative inverse exists:
if mod is prime 
else gcd(a, mod) = 1 (for 1/a % mod)
*/