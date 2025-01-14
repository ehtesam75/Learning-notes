#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e5 + 7, MAX_VAL = 4005;
bitset<MAX_VAL> a_prefix_mask[N], b_prefix_mask[N];
//per mask memory size : O(N * MAX_VAL / (8 * 10^6)) = ~50MB
//so total around 100MB

int a[N], b[N];

int32_t main(){
    FASTER;
    
    int n, m, q; cin >> n >> m >> q;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }

    for(int i = 1; i <= n; i++){
        a_prefix_mask[i] = a_prefix_mask[i-1];
        a_prefix_mask[i].flip(a[i]);
    }

    for(int i = 1; i <= m; i++){
        b_prefix_mask[i] = b_prefix_mask[i-1];
        b_prefix_mask[i].flip(b[i]);
    }

    while(q--){
        int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
        bitset<MAX_VAL> mask_a = a_prefix_mask[r1] ^ a_prefix_mask[l1-1];   
        //i could use auto here, that will auto determine the data type bitset<MAX_VAL>
        bitset<MAX_VAL> mask_b = b_prefix_mask[r2] ^ b_prefix_mask[l2-1]; //TIME COMPLEXITY here : O(MAX_VAL / 64)
        bitset<MAX_VAL> marged_mask = mask_a ^ mask_b;
        // cout << __builtin_popcount(marged_mask);
        cout << marged_mask.count() << endl; //TIME COMPLEXITY here : O(MAX_VAL / 64)
    }

    //toal TIME COMPLEXITY : o(4000/64 * 10^5)

    return 0;
}

//https://www.codechef.com/problems/ODTPIC?tab=statement