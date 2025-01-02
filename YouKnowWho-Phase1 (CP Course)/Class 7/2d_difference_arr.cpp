#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 1e3 + 7;
ll a[N][N], d[N][N];

int32_t main(){
    FASTER;
    
    int n, m, q; cin >> n >> m >> q;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    while(q--){
        int x1, y1, x2, y2, p; cin >> x1 >> y1 >> x2 >> y2 >> p;
        d[x1][y1] += p;
        d[x1][y2+1] -= p;
        d[x2+1][y1] -= p;
        d[x2+1][y2+1] += p;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            d[i][j] = d[i-1][j] + d[i][j-1] - d[i-1][j-1] + d[i][j];
            a[i][j] += d[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}