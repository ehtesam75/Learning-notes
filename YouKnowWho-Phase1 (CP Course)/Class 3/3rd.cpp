#include <iostream>
#include <math.h>
#include <algorithm> //for stoi, stoll, gcd
#include <chrono> //for time
using namespace std;

int main(){
//function
    //know abt function overloading?
    //https://www.programiz.com/cpp-programming/function-overloading

//sort
    // sort()
    //it has TC of O(nlogn)

//ceil and floor
    int a, b = 5;
    a = b = 2;
    int x = 5, y = 2;
    cout << a << " " << b << endl; //ans is NOT a = 5, b = 2!! (cuz assignemnet operator has a associativity of right to left)
    cout << "ceil: " << ceil((double)x/y) << endl;
    cout << "floor: " << x/y << endl;   //this process is safer
    cout << "ceil: " << (x-1)/y + 1 << endl;
    cout << "ceil: " << (x+y-1)/y << endl;


    /*
    floor and ceil
    ceil(x/y) = floor(x-1/y) + 1; (x, y integer)
    */

//log

    cout << log2(32) << endl;
    cout << log10(1000) << endl;
    cout << log(2.71828) << endl; //natural log, e based; e = 2.71828

    //lets say i want to calculate log3(32)
    cout << log2(32)/log2(3) << endl; //logb(a) = logc(a)/logc(b);

    //how many digits using log
    int num = 1036;
    int digits = floor(log10(num)) + 1;
    cout << digits << endl;


//mod
    // 2 ≡ 14 (mod 12)    ≡ means that they are in the same congruence class..mod 12 means there are 12 congruence class
    int d = 1e9, e = 1e9, m = 27;
    cout << (d + e) % m << endl;
    cout << (d % m + e % m) % m << endl;

    int f = 1e9+1; //+1 to prevent the output being 0
    cout << (d-f) % m << endl;
    cout << (d % m - f % m) % m << endl;
    //ans is -1 so...we will add m
    cout << ((d-f) % m +m )%m << endl;
    cout << ((d % m - f % m) % m + m ) % m << endl;
    //so we will add 'm' after opearation and then mod again..to prevent output being less than 0

    cout << (1ll * d * f) % m << endl;
    cout << (d % m * (f % m)) % m << endl;


    //compute ( a*b*c*d)mod m, where 1<a,b,c,d,m <1e9
    int q, r, s, t, mod;
    q = 1e9, r = 4247895, s = 2345697, t = 1487925, mod = 1e9+7;
    cout << 1ll * q * r % mod * s % mod * t % mod << endl;

    //compute (a-3b)mod m where 1<a,b,m<1e9
    int z = 1e6, p = 2458479;
    cout << (z - (3 * p % mod) + mod) % mod  << endl;

    cout << (-5ll * q + mod) % mod << endl; //not the correct way
    cout << ((5ll * q % mod) + mod) % mod << endl;    //correct


    //compute n! mod m where 1<n<1e6, 1<m<1e9
    int n = 1e2, fact = 1;
    for(int i = 1; i <= n; i++){
        fact = 1ll * fact * i % mod;    //will have to add mod here too to avoid overflow
    }

    cout << fact << endl;


    //compute a^b mod m where 1 <a,m<1e9, 0<b<1e6
    int number = 1e5, pow = 1e5, ans = 1;
    for(int i = 1; i <= pow; i++){
        ans = 1ll * ans * number % mod;
    }
    cout << ans << endl;


    //compute (n!)^k mod m where 1<n<1e6, 1<k1e6
    long long factor = 1;
    for(int i = 1; i <= number; i++){
        factor = 1ll * factor* i % mod;
    }
    cout << factor << endl;

    long long result = 1;
    for(int i = 1; i <= pow; i++){
        result = 1LL * result * factor % mod;
    }

    cout << result << endl;


//gcd
    int gcd = __gcd(12, 18);    //time complexity: log(min(a, b));
    cout << gcd << endl;

    int gcd_2 = __gcd(1, __gcd(2, 3));  //for 3 numbers
    cout << gcd_2 << endl;

    int arr[5] = {12, 24, 18, 42, 36};
    int answer = 0;
    for(int i = 0; i < 5; i++){
        answer = __gcd(answer, arr[i]);     //gcd(0, x) = x; cuz 0 is divisable by x
    } //time complx: nlog(n)

    cout << answer << endl;


//lcm
    //a * b = gcd(a,b) * lcm(a,b)
    //so lcm(a,b) = a*b/gcd(a,b)

    int x1 = 323232, x2 = 232343;
    int lcm = (1ll * x1 * x2) /__gcd(x1, x2);
    cout << lcm << endl;


//string to int
    string str = "24987";
    int integer = stoi(str);
    cout << integer << endl;

    string str2 = "5487984663";
    long long ll = stoll(str2);
    cout << ll << endl;


//printing in error stream
    //2 types of stream, standard stream and error stream
    //cout print in standard stream
    //cerr print in error stream
    cerr << "errrorrrr.." << endl;
    //don't remember the use of it? watch the video


//random number generate
    srand(time(0));
    cout << rand() << endl;


//sort 

    cout << is_sorted(arr, arr+5) << endl;

    sort(arr, arr+5); //TC: nlog(n)
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";  
    } cout << endl;

    //from larger to smaller
    reverse(arr, arr+5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " "; 
    } cout << endl;


//round
    double rr = round(3.22);    //returns double
    long long yy = llround(3232.33);    //returns long long
    cout << rr << " " << yy << endl;

//cbrt
    double nn = cbrt(64);
    cout << nn << endl;

//harmony series
    //must check this out from video
    //upper bound : 1 + log2(n)

    /*
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){

        }
    }
    i = 1, loop will run n/1 times
    i = 2, ... n/2 times
    ...
    total run = n/1 + n/2 + n/3 + ...n/n tiems
              = n (1 + 1/2 + 1/3 +...1/n) times
              = n * log2(n) times;
    as this is harmonic series
    so this code TC is O(nlogn)

    */

    /*
    for(int i = 1; i <= n; i++){
        for(int j = i; i * j <= n; j += i){
            
        }
    }

    //condition : i * j <= n;
                  j <= n/i;
    so if i = 1, loop will run n/1
    i = 2, n/2
    i = n, n/n
    same as before
    TC: O(nlogn)
    */



    /*

    BASIC MATH:


    1 to n (n = 20)..find the sum of 1 to n number which is not divisable by k(k=3)?

    we know 1 to n (1k 2k 3k...nk) which is divisable by k = k * (n * (n +1))/2;
    
    number of element in 1 to 20 that is divisable by k = n/k ; 20/3 = 6
    sum of k divisable = 3 * (6*7)/2 = 63;
    sum of 1 to 20 = 20 * 21/2 = 210;

    the sum of 1 to n number which is not divisable by k(k=3) = 210 - 63 (ans)
    */


    /*

    sumation of (i (i+1)) [i = 1 to n];
                = i^2 + i;
                = sumation of(i^2) + sumation (i)
                = we know both eqation !

    sumaiton of (i-1). i . (i+1)
                = i^2- i . (i+1)
                = i^3 - i
                = solve!
    */


    /*
    
    geometric progression

    sum of first n number sum = a * (r^ n -1) / (r-1); for (r > 1)
    but if r == 1; then sum = a * n; (cuz each number ratio is 1, they are the same number)
    if(r > 0 and r < 1) then sum = a * (1 - r^ n) / (1-r) 

    */


    /*
    from geometric prograession sum equation, 
    
    sumation of(i=0 to n) 2^ i = (2^(n+1) - 1)/(2-1);   //1 + 2 + 2^2 + 2^3 + 2^4+...2^n = 2^(n+1) -1;

    similarly (i=0, to n) sumation of 5^i = (5^(n+1) -1)/(5-1)
    */


}