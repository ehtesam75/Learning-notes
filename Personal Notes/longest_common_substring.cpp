#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const int N = 2e5 + 7;
int a[N];

int32_t main(){
    FASTER;
    
    string a, b; cin >> a >> b;
    int x = a.size(), y = b.size();
    int longest_common = 0;

    for(int len = 1; len <= min(x, y); len++){
        for(int i = 0; i <= x-len; i++){
            for(int j = 0; j <= y-len; j++){
                if(a.substr(i, len) == b.substr(j, len)){
                    longest_common = max(longest_common, len);
                }
            }
        }
    }
    cout << longest_common << endl;

    return 0;
}