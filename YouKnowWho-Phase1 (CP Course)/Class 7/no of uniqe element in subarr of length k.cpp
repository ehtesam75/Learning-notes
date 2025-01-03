#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

// void print(map<int, int> mp){
//     for(auto x : mp) {
//         cout << x.first << ' ' << x.second << endl;
//     } cout << endl;
// }

int32_t main(){
    FASTER;
    
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    map<int, int> mp;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        mp[a[i]]++;
        if(i >= k){
            cout << mp.size() << ' ';
            // cout << endl;
            // print(mp);
            mp[a[i-k+1]]--;
            if(mp[a[i-k+1]] == 0){
                mp.erase(a[i-k+1]);
            }
        }
    }

    return 0;
}