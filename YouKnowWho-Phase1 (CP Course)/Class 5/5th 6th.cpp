#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(vector<int> a, vector<int> b){	//a > b
	int n = a.size(), m = b.size();
	for(int i = 0; i < min(n, m); i++){
		if(a[i] > b[i])
			return true;
		else if(a[i] < b[i])
			return false;
	}
	return n > m;
}

int main(){
    //boolalpha

    bool a = true, b = false;
    cout << boolalpha << a << ' ' << b << endl;	
    cout << (a ? "true" : "false") << ' ' << (b ? "true" : "false") << endl;	//using ternary operator


    //story of size()
    vector <int> v;
    size_t x = v.size();	//size() actually returns a size_t type data (size_t is data type, specially created for storing size, it is an unsigned int, means only positive and 0)
    cout << x << endl;
    cout << v.size() - 1 << endl;	//output : binary of 111111111....(64s 1) or 2^64 - 1 // why?? as -1 doesn't exist in size()..so before 0, the longest size possible exist (think it as a circular)

    //before using v.size(), we need to type cast it to int to avoid error
    cout << (int) v.size() - 1 << endl;


    vector<int> a1 = {20, 50, 40};
    vector<int> b1 = {20, 40, 50};
    cout << compare(a1, b1) << endl;	//is a1 larger?
    cout << (a1 > b1) << endl;
}