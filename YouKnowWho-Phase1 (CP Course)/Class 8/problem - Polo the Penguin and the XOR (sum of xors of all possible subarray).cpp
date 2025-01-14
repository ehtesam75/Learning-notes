/*
in this problem we have to find the total sum of xors of all possible subarray

xor of all elements of a subarray = prefix_xor[r] ^ prefix_xor[l-1]
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e5 + 7;
int a[N], pref_xor[N];
int cnt[30][2]; //cnt[bit][0/1]

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    memset(cnt, 0, sizeof cnt);

    for(int i = 1; i <= n; i++){
        pref_xor[i] = pref_xor[i-1] ^ a[i];
    }

    ll ans = 0;
    //update cnt array for pref_xor[0]
    //in case of we need to handle this case (u know the reason why!)
    for(int k = 0; k < 30; k++){
        int curr_bit = (pref_xor[0] >> k & 1);
        cnt[k][0]++;
    }

    for(int i = 1; i <= n; i++){
        //add ans array for pref_xor[i]

        // for(int j = 1; j < i; j++){
        //     sum += pref_xor[j-1] ^ pref_xor[i]; //xor of subarray [j...i] 
        // }

        //bit by bit approch ; more optimal
        for(int k = 0; k < 30; k++){
            int curr_bit = (pref_xor[i] >> k & 1);
            if(curr_bit == 0){
                ans += 1ll * cnt[k][1] * (1 << k);
            }
            else{
                ans += 1ll * cnt[k][0] * (1 << k);
            }
        }

        //update cnt array for pref_xor[i]
        for(int k = 0; k < 30; k++){
            int curr_bit = (pref_xor[i] >> k & 1);
            if(curr_bit == 0){
                cnt[k][0]++;
            }
            else{
                cnt[k][1]++;
            }
        }
    }

    cout << ans << endl;
}

int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

//https://www.codechef.com/problems/PPXOR