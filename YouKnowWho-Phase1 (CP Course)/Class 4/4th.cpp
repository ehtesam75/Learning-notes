#include <iostream>
#include <algorithm>	//for permutation
#include <math.h>
#include <iomanip>	//for setprecision
#include <cstring>	//memset
#include <cassert>	//assert
#include <bitset>
#include <climits>
#define ll long long
using namespace std;

int main(){
	clock_t st = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//xor trick
	//x ^ 0 = x; x stays the same
	//x ^ 1 = ~x; x changes
	//x ^ x = 0; so if a ^ b == 0, then a = b;
	//even times x ^ x = 0, odd times x ^ x = x
	//a ^ b = c; so, a = c ^ b;
	//a ^ b = 0; a = b;

	//duplicate num
	int a[6] = {1, 2, 3, 4, 4, 5};
	int one2five = 1 ^ 2 ^ 3 ^ 4 ^ 5;
	for(int i = 0; i < 6; i++){
		one2five = one2five ^ a[i];
	}
	cout << "duplicate " << one2five << endl;

	//mising number
	//same as before

	//multiple number xor
	//1101101
	//0101010
	//0110101
	//1101010
	//0011000 = ans
	//odd times 1 is 1 and even times 1 is 0


//and
	//for example: 1011001 = n, 
	//			   1101101 = x; 
	//n & x <= n; why?
	//cuz u can't come up with set bit(1) in the answer when n has unset bit (0) [cuz ur doing and operation] 
	//so the answer (n&x) will be lower or equal to n

	//minimum subarray of all subarray of a[5] = {1, 2, 3, 4, 5} when we do and opeartion ?
	//ans = subarray with all the array elements = {1, 2, 3, 4, 5}
	//cuz the more we add element while doing and operation..the more it go down or stay equal (as we seen just above)


	//maximum subarray of all subarray of a[5] = {1, 2, 3, 4, 5} when we do and opeartion ?
	//ans = maximum element of the array (subarray with 1 element which is largest in the array)
	//why? same logic but in reverse


//or
	//n | x >= n; why? cuz i can't change the set bit of n doing or..but i can change the unset bit of n by doing or operation
	//minimum subarray of all subarray of a[5] = {1, 2, 3, 4, 5} when we do or opeartion ?
	//ans = minimum element of the array

	//maximum subarray of all subarray of a[5] = {1, 2, 3, 4, 5} when we do or opeartion ?
	//ans = subarray with all the array elements = {1, 2, 3, 4, 5}


//permutation
	cout << "permutation: " << endl; int arr[3] = {3, 2, 1};
    do{
        for(int i = 0; i < 3; i++){
            cout << arr[i] << ' ';
        }cout << endl;
    } while(prev_permutation(arr, arr+3));


 //precsion
 	//log
 	int ans = __lg(25); //4.64..but will output 4..floor
 	//this is a better approch to get log2..cuz log2() func returns value in double, which can lead to precision issue
 	cout << "log2(25): " << ans << endl; //tc: O(1 )


//sqrt
	int o = 36;
	ll resul = sqrt(o); //or i could use sqrtl(o) //long long
	//for avoiding precision issue:
	while(resul * resul <= o) ++resul;
	while(resul * resul > o) --resul; 	
	cout << resul << endl;

	cout << floor((double)sqrt(o)) << endl;
	//or get floor(sqrt(o));


//precision issue with double
	double d = 32456833.384302383;
	double e = 32456833.384302383;
	cout << ((d == e) ? "Equal":"Not equal");
	cout << endl;
	//output looks ok but sometimes using double can cause me precision issue 
	//solv: we can use if(abs(d-e) > 1e-9) then they're equal (it means if first 9 digits is ok then its ok)


//setprecision
	double test = 3424.24319;
	cout << test << endl; //did'nt print the whole
	cout << setprecision(8) << test << endl;   //will take 8 digits from the very begenning..if we use "fixed" then the counting will start from deciaml point


//memset
    char s[10];
    memset(s, 'a', 9);	//first 9 bytes from begaining (s) will have 'a'
    //if it was int array, then: memset(s, 0, 10*4) first 40 bytes will have 0
    //more handy: memset(s, 0, sizeof(s));
    //can't use anything other than 0 or -1..why? watch video
    //this memset is works for even two and three dimentional array
    s[9] = '\0';
    cout << s << '\n';


//fill
    //in here we can initailize with any nuber
    int arrayy[10];
    fill(arrayy, arrayy + 10, 7);
    for(int i = 0; i < 10 ; i++){
    	cout << arrayy[i] << ' ';
    } cout << endl;

    //but memset is faster


//assert
    //for debugging
    assert(true); //if false then will give runtime error

	clock_t en = clock();
    cerr << fixed << setprecision(9) << 1.0 * (en - st)/CLOCKS_PER_SEC << "s\n";


//FROM PROBLEM SET
    cout << (bitset<32>(-1)) << endl;
    cout << (bitset<32>(INT_MAX)) << endl;	//int_max = 2^31-1; 2^31 has thirty one 0 and if we substract 1, then there will be 31 one..(first bit is always 0: used as sign bit)
    //don't get it? watch from 45 minite on practise section of 4th video


//how many even or odd from 1 to n
    //even = floor(n/2);
    //odd = ceil(n/2)

}