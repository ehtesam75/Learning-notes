#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i= 1; i<=n; i++){
		fact = fact * i;
	}
	return fact;
}

int nCr(int n, int r){
	int num = factorial(n);
	int denom = factorial(r) * factorial(n-r);
	
	return num/denom;
}

bool isPrime(int n){
	if(n%2 == 0) return 1;
	else return 0;
}

int update(int a){
    a = a * a;
    return a;
}

	int main(){
		//nCr
		int n, r;
		cin >> n >> r;
		int res = nCr(n, r);
		cout<< res <<endl;

		//prime number
		if(isPrime(n)) 
			cout<< n << " is a prime number" << endl;
		else 
			cout<< n << " is not a prime number" << endl;


    //short ques
        int x = 8;
        x = update(x);
        cout<< x << endl;       //think simply
	}
	
