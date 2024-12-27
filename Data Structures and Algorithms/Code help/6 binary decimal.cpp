#include<iostream>
#include<math.h>
using namespace std;

int main(){
//decimal to binary
    int n=10;
    int arr[32];
        int i=0;
		while(n != 0){
		arr[i] = n&1;
        i++;
		n = n>>1;
        }
    
    for(int j = i-1; j>=0; j--){
        cout<<arr[j];
    }
    
    cout<<endl;


//decimal to binary..part 2
    int x = 6, ans =0, k=0;
    while(x != 0){
        int bit = x&1;
        ans = bit * pow(10, k) + ans;
        x = x>>1;
        k++;
    }

    cout<<ans<<endl;    //giving incorrect result bcz of floting point precision, try another complier 



//binary to decimal
    int binary = 1000, increase = 0;
    int sum = 0;
    while (binary != 0) {
    if (binary & 1)
        sum = sum + (1 << increase);      // Use bit shift to calculate the power of 2, try to ignore pow func, cuz sometimes there's some floating precision error
        increase++;
        binary = binary / 10;
    }

    cout << "number: " << sum << endl;


    return 0;
}