#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int32_t main(){
    FASTER;
    
    int i = 111011;

    string s = to_string(i);
    ll decimal = 0, two = 1;;
    for(int i = s.size() -1 ; i >=0; i--, two *= 2){
        if(s[i] == '1') decimal += two;
    }

    cout << decimal << endl;;

    string binary = "";
    while(decimal > 0){
        binary += (decimal % 2 == 0) ? '0' : '1';
        decimal /= 2;
    }

    reverse(binary.begin(), binary.end());

    cout << binary << endl;

    return 0;
}