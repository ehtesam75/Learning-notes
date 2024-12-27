//dabangg pattern

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row =1;
	while(row<=n){
		int start=1;
		while(start<=(n-row+1)){
			cout<<start;
			start++;
		}
		
		int star = 1;
		while(star<row){
			cout<<"*";
			star++;
		}

		int star_again = row-1;
		while(star_again){
			cout<<"*";
			star_again--;
		}

		int digit =n-row+1;
		while(digit>=1){
			cout<<digit;
			digit--;
		}
		row++;
		cout<<endl;
	}
	
	}