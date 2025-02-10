/*
fermats little theorem says 
a^(p-1) congrants class to 1 (mod p) [p is prime here, a is not divisable by p]
a^(p-1) % p = 1

prove:
notice that 
a*1 a*2 a*3.....a*(p-1). means a * i for all i till p
here all the number are from 1 to p-1 and comes only once each
(try this by multipling i to cur for each i in the print func)
so a*1 a*2 a*3.....a*(p-1) = (p-1)!	
	=> a^(p-1) * (p-1)! = (p-1)!
	=> a^(p-1) = 1 (mod p)	//mod p cuz all are under p
*/


/*
IMPORTANT:

(a^n) % p = a^(n%(p-1)) % p  //p has to be prime
*/

#include<bits/stdc++.h>
using namespace std;

// print a^1, a^2, a^3, ..., a^p-1 mod p
void print(int p) {
  cout << p << " => ";
  int a = 2, cur = a % p;
  for (int i = 1; i < p; i++) {
    cout << cur << ' ';
    cur = 1LL * cur * a % p;
  }
  cout << '\n';
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int p = 3; p <= 15; p++) {
    print(p);
  }
  return 0;
}


/*
output:
3 => 2 1 
4 => 2 0 0 
5 => 2 4 3 1 
6 => 2 4 2 4 2 
7 => 2 4 1 2 4 1 
8 => 2 4 0 0 0 0 0 
9 => 2 4 8 7 5 1 2 4 
10 => 2 4 8 6 2 4 8 6 2 
11 => 2 4 8 5 10 9 7 3 6 1 
12 => 2 4 8 4 8 4 8 4 8 4 8 
13 => 2 4 8 3 6 12 11 9 5 10 7 1 
14 => 2 4 8 2 4 8 2 4 8 2 4 8 2 
15 => 2 4 8 1 2 4 8 1 2 4 8 1 2 4 

notice : all prime number has 1 in the end (at p-1 th)
*/