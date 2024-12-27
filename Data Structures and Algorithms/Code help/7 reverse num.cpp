#include<iostream>
#include<string.h>
#include<cmath>  //for round and math
using namespace std;

	int main(){
		int a = 1538984;
		string newA = to_string(a);
		int length = newA.length();
		cout<<length<<endl;

		int sum =0;
		int i=0;
		while(a>0){
			int rem = a%10;
			sum = sum + round(pow(10, length-i-1))* rem; //round is used for escaping floating point error
			// sum = sum *10 + rem;  (in short i could it also, then i don't need to convert int to string and other blah blah, follow this one)
			i++;
			a /= 10;
		}

		cout<<sum<<endl;
	}
	
