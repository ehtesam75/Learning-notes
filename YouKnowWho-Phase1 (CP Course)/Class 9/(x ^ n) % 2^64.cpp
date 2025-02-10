/*
123245 % 10 = last 1 digit = 5
123245 % 10^2 = last 2 digit = 45
123245 % 10^5 = last 5 digit = 23245

same goes with binary
1010101101 % 2^6 = last 6 digit = 101101

so if the question is x % 2^64
it means we will always have to deal with last 64 digits
2^64-1 can't be stored in ll. we will have to use unsigned ll, which can store 2^64-1 (%2^64 means 0 to 2^64-1)
we will let the overflow happen, cuz it wil always work with the last 64 bits in ull overflow
*/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

ull power(ull x, ull n){
    ull ans = 1;
    while(n){
        if(n & 1){
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }
    return ans;
}

int32_t main(){
    FASTER;
    
    //question is : (x ^ n) % 2^64
    ull x = 1e15+7, n = 1e17;   //**check below
    cout << power(x, n) << endl;
    //notice that we didn't use mod, this will lead to overflow and will work with only the last 
    //64 bits and that's what we want!


    //what if we needed to mod with 2^32?
    //then we would need to store all the variable to unsigned int (store till 2^32-1)


    //**
    //if i say x = 1e15 then the output is 0
    /*
    reason:
    answer 0 dekhe 0
    ull e toh 2^64 diye mod hoy
    so tomar je number oitay 2 er power onek beshi
    because x 2 diye bhaag jaay
    so x^n e at least n ta 2 ache
    so 2^64 diye mod korle bhaag jabe oi number ta as n > 64
    so modulo 0 ashbe
    */
    return 0;
}