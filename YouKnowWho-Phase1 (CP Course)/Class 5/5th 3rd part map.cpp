#include <iostream>
#include <map>
#include <unordered_map>
#include <array>
#include <bitset>
#define ll long long
using namespace std;


void print(map<int, string> mp){    
	for(auto it = mp.begin(); it != mp.end(); it++){
		cout << (*it).first << ' ' << (*it).second << endl;
	}
	cout << endl;
}

void print_un(unordered_map<int, string> un_map){
    for(auto[x, y] : un_map){
        cout << x << " " << y << endl;
    }
}

// struct custom_hash {
//   static uint64_t splitmix64(uint64_t x) {
//       x += 0x9e3779b97f4a7c15;
//       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//       x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//       return x ^ (x >> 31);
//   }

//   size_t operator()(uint64_t x) const {
//       static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//       return splitmix64(x + FIXED_RANDOM);
//   }
// };
//if we use this we will always have o(1) as insertion on unordered map
//unordered_map<int, string, custom_hash> name;


int main(){
//map
    //key + value
    //is sorted by key; keys are uniqe
    map<int, string> mp; //can be <string, string>
    mp.insert({1, "alice"});
    mp[3] = "miles";
    mp[2] = "Bob";		//all insertion in map is log(n)
    mp[4] = "Gwen";
    print(mp);
    cout << mp[3] << endl;
    
    auto it = mp.find(3);
    // cout << (*it).first << ' ' << (*it).second << endl;

    mp.erase(it); //map.erase(4)
    print(mp);

    auto it2 = mp.upper_bound(2);  //lower bound = equal or greater than; upper bound = grater than/ log(n)
    cout << (*it2).first << ' ' << (*it2).second << endl;

    //if a element is present on map
    if(mp.find(2) != mp.end()){     //or check if mp[2] != 0
        cout << "yes; present" << endl;
    }


//unordered map

    unordered_map<int, string> un_map;
    un_map[2] = "dj";
    un_map[1] = "khalid";   //index accessing is o(1) on avarage in unordered map unlike map
    un_map[4] = "look";

    print_un(un_map);   //will print in a random order of key; doesn't sort key



//stl array
    array<int, 3> arr;  //int arr[3];

//bitset
    bitset <6> bs1;     //note this '6' here has to be a const variable; 
    //u can't say int n = 3 and bitset<n> bs..u can't do that
    //but const int n = 3 will do!
    bitset <8> bs(13);
    bitset <6> bs2("01001");
    cout << bs << endl;
    cout << bs1 << endl;    //six 0
    cout << bs2 << endl;

    cout << bs[0] << endl;  //0'th bit of 13

    // bs.set();   //all values will be 1
    //bs.reset();  //all 0
    bs.flip();  //all bits will be flipped
    cout << bs << endl;
    bs.reset(1); // 2nd bit will be 0
    cout << bs << endl;
    cout << bs.count() << endl; //how many bits are 1


    cout << bs2.to_ullong() << endl;    //bs2 will converted to unsinged long long; range for unsigned ll : 0 to 2^64-1

    string s = bs.to_string();
    cout << s << endl;

    cout << bs.any() << endl;   // any of the bit is 1?
    bs.reset();
    cout << bs.none() << endl;  //none of the bits are 1?
    bs.set();
    cout << bs.all() << endl;   //all 1?


    bitset <5> b1("10110"), b2("00110");
    auto x = b1 | b2;   //& , ^ , >> , << will also work    
    //tc: o(n/w) here w is bit of computer archi...64 bits for me
    //while if we used normal array to store bits, then doing or/and operation on those will cost us o(n) time...
    //so using bitset is faster 64 times (for me)

    //sc: o(n/w) 

    //why n/w??
    /*
    Accha ekta custom bitset banai
    Dhorlam amar 32 bit integer
    Ami 50 ta number ekta array nilam
    Ei array er each number er each bit ke i to amra use korte pari right?
    Taile total usable bit koita
    32*50
    So amar kache x size er bitset thakle
    array size koto hobe?
    Reverse work
    X / 32
    */

    cout << x << endl;

    // int n; cin >> n;
    // bitset<n> bs;   //won't work...need to fix the value of n before compile, but this type of approch works for array
}