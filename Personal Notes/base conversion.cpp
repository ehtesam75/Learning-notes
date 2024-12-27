#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int32_t main(){
    FASTER;
    
    //binary to decimal
    string s = "110010101";

    cout << "binary to decimal : " << stoi(s, nullptr, 2) << endl;

 	//decimal to binary
    int deci = 34;

    cout << "deci to binary : " << bitset<8> (deci) << endl;

    //or 
    bitset<8> bin(deci);
    cout << "deci to binary : " << bin << endl;

    //decimal to octal
    cout << "deci to oct : " << oct << deci << endl;
    cout << dec; //reset to decimal

    //oct to decimal
    s = "6246";
    cout << "oct to deci : " << stoi(s, nullptr, 8) << endl;

    //deci to hex
    cout << "deci to hex : " << hex << deci << endl;
    cout << dec;	//doing reset is important

    //hex to deci
   	string hexadecem = "3a839b";
    int decem = stoi(hexadecem, nullptr, 16);
    cout << "hex to deci :" << decem << endl;

    //binary to hexa
    s = "11010110";
    int decimal = stoi(s, nullptr, 2);
    cout << "binary to hexa : " << hex << decimal << endl;
    cout << dec;

    //hexa to binary 
    s = "ff";
    decimal = stoi(s, nullptr, 16);
    cout << "hexa to binary : " << bitset<8> (decimal) << endl;

    return 0;
}