#include<iostream>
#include<math.h>
using namespace std;

	int main(){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}

		int ans =0, i=0;
		while(i != n){
			ans = ans + pow(10, n-i-1) * arr[i];
			i++;
		}

		cout<<ans<<endl;  //pow func has sometimes presicion error. if that happend try another compiler
	

//another method (babber bro)

        int numberOfDigits =3;
        int digit, l =0, sum =0;
        while(l != 3){
            cin>>digit;
            sum = sum * 10 + digit;
            l++;
        }
        
        cout<<sum <<endl;
	}
	
