#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int binary_expo(int x, int n, int mod){
	//log(n)
	if(n == 0) return 1;
	// if(n % 2 == 0){
	// 	int prev = binary_expo(x, n/2, mod);
	// 	return 1ll * prev * prev % mod;
	// }
	// else{
	// 	int prev = binary_expo(x, n/2, mod);
	// 	return 1ll * prev * prev % mod * x % mod;
	// }

	int res = binary_expo(x, n/2, mod);
	if(n & 1){
		return 1ll * x * res % mod * res % mod;
	}
	else return 1ll * res * res % mod;
}

int iterative_binary_expo(int x, int n, int mod){
	//log(n)
	int temp = x;
	ll ans = 1;
	while(n){
		if(n & 1){
			ans = 1ll * ans * temp % mod;
		}
		temp = 1ll * temp * temp % mod;
		// n /= 2;
		n = n >> 1;
	}
	return ans;
}

int iterative_sohag(int x, ll n, int mod){
	// vector<int> pw2(61, 0);
	// pw2[0] = x % mod;
	// for(int i = 1; i <= 60; i++){
	// 	//x^(2^i) = x^(2^(i-1)) * x^(2^(i-1))	//try x = 2 and understand
	//     pw2[i] = 1ll * pw2[i-1] * pw2[i-1] % mod;
	// }

	// int ans = 1 % mod;
	// for(int i = 0; i <= 60; i++){
	//     if(n >> i & 1){
	//     	ans = 1ll * ans * pw2[i] % mod;
	//     }
	// }
	int cur = x % mod;	//we could use without curr	// x %= mod
	ll ans = 1 % mod;
	for(int i = 0; i <= 60; i++){
	    if(n >> i & 1){	//simplicied version of the commented one
	    	//cur = x^(2^k)
	    	ans = 1ll * ans * cur % mod;	//here curr is basically previous cur value
	    }
	    cur = 1ll * cur * cur % mod;
	}
	return ans;
}

int iterative_sohag_best(int x, ll n, int mod){
	x %= mod;
	int ans = 1 % mod;
	while(n){
		if(n & 1){
			ans = 1ll * ans * x % mod;
		}
		x = 1ll * x * x % mod;
		n = n >> 1;
	}
	return ans;
}

int32_t main(){
    FASTER;
    
    int x = 5, n = 5, m = 1e9 + 7;
    cout << iterative_sohag(x, n, m) << endl;
    cout << binary_expo(x, n, m) << endl;
    cout << iterative_binary_expo(x, n, m) << endl;
    cout << iterative_sohag_best(x, n, m) << endl;

    return 0;
}

/*
recursive :

2^16
2^16 = 2^4 * 2^4
2^4 = 2^2 * 2^2
2^2 = 2^1 * 2^1
...

2^13 = 13 * 2^12
2^12 = 2^6 * 2^6
...

*/


/*
iterative :

3^13 = 3 ^ (1101)	//13 is represented in binary
3^13 = 3 ^ (8+4+0+1)
	 = 3^8 * 3^4 * 3^0 * 3^1	//3^0 will not contibute
	 //so when the bit is set it will contribute
*/