#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

const unsigned int MAX_VAL = (1u << 31);
// bool exits[MAX_VAL];  //1 byte per element   //MAX_VAL bytes ///this will cost 2048 MB memory
bitset<MAX_VAL> exists; //1 bit per element //(MAX_VAL/8) bytes //this will cost 250-300MB

int32_t main(){
    FASTER;
    
    int q;
    unsigned int s, a, b; 
    cin >> q >> s >> a >> b;

    // set<unsigned int> se;
    ll sum = 0;
    while(q--){
        if(s & 1){
            //s/2 < 2^31 at worst case
            // if(se.find(s/2) == se.end()) se.insert(s / 2);
            if(!exists[s/2]){
                exists[s/2] = 1;
                sum += s/2;
            }
        }
        else{
            // auto it = se.find(s/2);
            // if(it != se.end()){
            //     se.erase(s/2);
            // }
            if(exists[s/2]){
                exists[s/2] = 0;
                sum -= s/2;
            }
        }

        s = a * s + b;
        // cout << s << endl;
    }

    // for(auto x : se) {
    //     cout << x << ' ';
    // } cout << endl;

    // ll sum = 0;
    // for(unsigned int x : se) {
    //     sum += x;
    // } 

    // for(int i = 0; i < MAX_VAL; i++){
    //     if(exists[i]) sum += i;
    // }
    cout << sum << endl;

    return 0;
}

//https://www.codechef.com/problems/CHEFQUE