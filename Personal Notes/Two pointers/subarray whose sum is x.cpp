#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

int32_t main(){
    FASTER;
    
    int n, s; cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int  r = 0;
    ll sum = 0;
    for(int l = 0; l < n; l++){
        while(r < n and sum + a[r] < s){
            sum += a[r];
            r++;
        }
        if(r < n and sum + a[r] == s){
            cout << l+1 << ' ' << r+1 << endl;
            return 0;
        }
        sum -= a[l];
    }

    cout << -1 << endl;

    return 0;
}

//https://cses.fi/problemset/task/1660/