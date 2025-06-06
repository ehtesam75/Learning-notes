#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

__int128 input_int128(){
	string s; cin >> s;
	__int128 ans = 0;
	for(int i = 0; i < s.size(); i++){
	    ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

string output_int128(__int128 x) {
    if (x == 0) return "0";

    string s = "";
    bool neg = 0;
    
    if (x < 0) {
        neg = 1;
        x = -x; 
    }

    while (x) {
        char last_digit = x % 10 + '0';
        s += last_digit;
        x = x / 10;
    }

    if (neg) s += '-';

    reverse(s.begin(), s.end());
    return s;
}

int32_t main(){
    FASTER;
    
    //__int128 can store 128 bits
    //but it can't be used for input or output directly
    //so we will use user defined func to take input or output
    __int128 x = input_int128();
    __int128 y = input_int128();
    __int128 z = x * y;
    string s = output_int128(z);
    cout << s << endl;

    return 0;
}