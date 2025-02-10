#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 5005, mod = 1e9 + 7;
int C[N][N], fact[N];

void pre_compute(){
    //ncr = n is taken + n is not taken
    //    = (n-1)C(r-1) + (n-1)Cr   //how many ways we can select from (n-1) item 
    //if the mod is prime, then we'll use this method to cal nCr, nPr

    for(int i = 0; i < N; i++){
        C[i][0] = 1;
    }
    for(int i = 1; i < N; i++){
        for(int j = 1; j <= i; j++){
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % mod;  //(n-1)C(r-1) + (n-1)Cr 
        }
    }

    fact[0] = 1;
    for(int i = 1; i < N; i++){
        fact[i] = 1ll * fact[i-1] * i % mod;
    }
}

int nCr(int n, int r) { 
  if (n < r) return 0;
  return C[n][r];
}

int nPr(int n, int r) { 
  if (n < r) return 0;    
  return 1LL * nCr(n, r) * fact[r] % mod;   //as we know : nPr = nCr * r!
}

int32_t main(){
    FASTER;
    pre_compute();
    cout << nCr(4, 2) << endl;   //4C2
    cout << nPr(4, 2) << endl;  //4P2

    return 0;
}