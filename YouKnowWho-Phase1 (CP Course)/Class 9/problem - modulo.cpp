#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e5 + 9;
ll a[N];

void solve(int test){
    int n; cin >> n;
    priority_queue<pair<ll, int>> pq;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pq.push({a[i], i});
    }

    int q; cin >> q;
    //o(q * log(max_val) * log(n))
    while(q--){
        ll m; cin >> m;
        // for(int i = 0; i < n; i++){
        //     a[i] %= m;
        // }

        while(!pq.empty()){
            auto [x, i] = pq.top();
            if(x < m) break;
            pq.pop();
            pq.push({x % m, i});
        }
    }

    while(!pq.empty()){
        auto [x, i] = pq.top();
        pq.pop();
        a[i] = x;
    }

    cout << "Case " << test << ":" << endl;
    for(int i = 1; i <= n; i++){
        cout << a[i] << (i < n ? ' ' : '\n');
    }
}

int32_t main(){
    FASTER;
    int tc, test = 0; cin >> tc;
    // return 0;

    while(tc--){
        test++;
        solve(test);
    }
    return 0;
}

//https://vjudge.net/problem/Toph-modulo

/*
tc : o(q * log(max_val) * log(n))
=> : o(1e5 * 60 * log(n))

time complexity analysis:
lets look at the while(q--) loop from a birds eye
we know x % m <= (x/2); means x will be at least 2 times lesser than previous (this is a property of mod)
so it will take a value at max log(value) time to reach 0 if we continiously mod it.

now think about each value separataly, for each value it will take at max log(val) time to reach 0
another log(n) will cost for accessing pq's top value through pq.top()
so tc : O(q * log(value) * log(n))
*/