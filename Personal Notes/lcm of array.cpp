#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

ll get_lcm(int a, int b){
	return (1ll * a / gcd(a, b)) * b;
}

int32_t main(){
    FASTER;
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll res = a[0];
    for(int i = 1; i < n; i++){
        res = get_lcm(res, a[i]);
    }

    cout << res << endl;

    return 0;
}