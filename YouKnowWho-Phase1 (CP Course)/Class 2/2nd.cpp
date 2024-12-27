/*
CLASS 1:
int -- 2^31 -1 
long long -- 2^63 -1

*/


/*
CLASS 2:
from start to 3h 24m

1.
int main(){

}
this will run..but without main it won't


#include <iostream>
here '#include' is a directive
*/

//macros
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#define add(a,b) a+b    //macros, '#define' is a directive
#define square(a) a*a
#define square2(a) (a)*(a)
#define int long long 
using namespace std;

bool checkPowerOf2(int num){
    int setBit = 0;
    for(int i=0; i<32; i++){
        if((num >> i) & 1) setBit++;
    }
    return setBit == 1; //every 2^k has only 1 set bit
}


int32_t main(){     //same as int..we used it cuz we replaced all int with long long
    int x = 3, y=4;
    int z = 10e12;
    cout << z << endl;
    cout << add(x, y) << endl;
    cout << square(1+2) << endl;   
    cout << square2(1+2) << endl;
    //before compilation add(x, y) will be replaced with x+y


//shift
/*
right shift >> (x>>k) = x/(2^k)
left shift << (x<<k) = x * (2^k) every time doubling than previous 2 * 2 * 2....


//bit check; on or off
last bit check : x & 1
kth bit check : (x>>k) & 1
*/

    long long p = (1 << 40);
    //output is 0 cuz 1 is a integer which has at most 32 bits..doing right shift 40 times means 40 times zero will replaced..which will remove the last one and there will be 32 zero
    cout << p << endl;

    long long q = (long long)1 << 40;
    long long q2 = 1LL << 40;   //LL means converted to long long
    cout << q << endl;
    cout << q2 << endl;

    //bit check
    //3rd bit of 8 (1000) is 1 (on/set bit)
    cout << ((8 >> 3) & 1) << endl; //when trying bit operation in cout make sure to use bracets

    //bits of 11 which are on; we'll use a loop to find these
    int num = 11;
    int i=0;    //i th bit
    while(num != 0){
        if(num & 1) cout << i << "th ";
        num = num >> 1;
        i++;       
    } cout << endl;


    //bits of 11 which are off; we'll use a loop to find these
    int num2 = 11, countOffBits = 0; 
    for(int i=0; i<32; i++){
        int checkBit = (num2 >> i) & 1;
        if(!checkBit){
             cout << i << "th ";
             countOffBits++;
        }          
    } cout << endl;
    cout << "number of off bits: " << countOffBits << endl;

    //turn on k th bit 
    int targetBit = 2;
    /*
    11 = 1011
    (or) 0100   (1 << 2)
         1111 (15) //turned on the 2nd bit

    so, 11 | (1 << 2)... turning on 2nd bit of 11 
    so, x | (1 << k)...turning on k th bit of x 
    */
   
   int ans = 11 | (1 << 2);
   cout << "turn on : " << ans << endl;

   //turn off (unset) k th bit
   /*
   15 = 1111
    and 1011  ~(1 << 2)
        1011 (11) //turned off the 2nd bit
    
    so 15 & ~(1 << 2)
    so x & ~(1 << k)..turning of k th bit of x
   */
   int turnOff = 15 & ~(1 << 2);
   cout << "turn off : " << turnOff << endl;


   //toggle k th bit
   int toggle = num2 ^ (1 << 1);
   cout << "toggle :" <<  toggle << endl;
   /*
   11 = 1011
(xor)   0010
        1001 (9)
    so x ^ (1 << k)
    */

    //power of 2
    cout << "2^5: " << (1 << 5) << endl; //2^5


    //check power of 2
    if(checkPowerOf2(32)){
        cout << "yes 32 is power of 2!" << endl;
    }  


//array
    //array reversing, swaping is better method
    int j =0, col = 5;
    int arr[] = {3, 5, 8, 9, 2}, arr2[col];
    for(int i=col-1; i>=0; i--){
        arr2[j] = arr[i];
        j++;
    } cout << endl;

    for(int i=0; i<col ; i++){
        arr[i] = arr2[i];
        cout << arr[i] << " ";
    } cout << endl;


//string
    char s[105];
    cin.getline(s, 105);    //105 words max
    cout << s << endl;

    //reverse - built in func
    cout << strrev(s) << endl;


//input test analysis
    //integer
    int n, m;
    cin >> n;   
    //try inputing "  33g55" //output: 33/n0    //cuz it will consider 33 as first input and then it will find g..which is non digit, so will print 0
    //try inputing "  33 55" //output: 33/n55 
    //in case of integer cin first try to find digit, after it get a digit, it stops when it finds a non digit
    cout << n << endl;

    cin  >> m;
    cout << m << endl;
    

    //string
    //char c[100];
    //cin >> c;  //at first this will ingore whitespace char and try to find char..then it will print only one word  
    //cout << c;

    char ch[100];
    cin.getline(ch, 100); //it will print the entire thing i write on the terminal..including whitespace and multiple words..but only one line.. 
    cout << ch << endl; //if it doesn't work here try running on another place

}


/*
a classic question:

CODE:
int n; cin >> n;
char ch[n];
for(int i=0; i<n; i++){
    cin.getline(ch, 100);
    cout << ch << endl;
}


LET'S SAY INPUT IS:
3
    hello world
  yoo yoo
dsad djfls


interestingly output is:
                    (first line is blank)
    hello world
  yoo yoo


why does this happen? its bcuz while taking integer '3' input, mouse cursor is right after '3'..then for loop first (i=0) take 1 new line (which is blank) (from cin.getline)..thus mouse cursor moves to the 2nd line..take hello world as input, then in the 3rd loop it takes yoo yoo and come out of loop as the limit, i = 3<3 has reached

then how to print the last line too?
use char ch = getchar()
getchar() will cosumne/take input any character (even whitespace char), found in its way..so placeing getchar() right after cin>>n, will cosume/take input the new line char after 3 and the cursor will be move to the 2nd line..then will take the next 3 line input perfectly this time


now CODE:
int n; cin >> n;
char ch = getchar();    //will take input the newline char and move the next line
    //ONLY getchar() will also do the job (ignoring char ch =)
    //cin.ignore(); //same process as before ; it will ignore the new line char and move to the next line
char ch[n];
for(int i=0; i<n; i++){
    cin.getline(ch, 100);
    cout << ch << endl;
}


now the output is (for the same input as before)
    hello world
  yoo yoo
dsad djfls


THE PROBLEM IS SOLVED!
*/


/*
char c; cin >>c;
cout << c;

input:
        abcd

output will be:
a

explaination: cin for char will try to find a non whitespace char 

*/


/*
char c = getchar();
cout << c;

input:
        abcd

output will be:
        (just one space)

explaination: getchar() will take the 1st character(can be a whitespace char) it encounters
*/



