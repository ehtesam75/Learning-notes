#include<iostream>
using namespace std;

int main(){
    int a=4, b=6;   //4=0000...0000100, 6=000...000110 (integer 32 bit, tai samne etogula 0)
    cout<<(a&b)<<endl;  //bitwise and (1+1=1, otherwise 0)
    cout<<~a<<endl;     //bitwise not (~4 = 4 er ulta)...so, ~4(0...00100) = 1...11011; which is -5 (we need to do 2's compliment of 1..1111011 to see it in decimal)
    cout<<(a|b)<<endl;   //bitwise  or (0+0=0, otherwise 1)
    cout<<(a^b)<<endl;    //bitwise exor (1+1=0, 0+0=0, otherwise 1)
 
    cout<<(a<<2)<<endl;     //left shift,  output: 16(10000) (shifted 2 point in left)...in small number, this operation mostly multiply by 2...for example: 4(a)*2 = 8, 8*2=16(output)....in short, 4<<1 = 4*2=8, 4<<2 = 8*2=16;  this short techniq might not work in case of long binary num
    cout<<(a>>2)<<endl;     //right shift, output: 1 (1); last 2 digit is shifted to right, gone. short cut: 4>>1 = 4/2=2, 4>>2 = 2/2=1;
    //in right and left shift, we usually use postive number. its padding with 0 means in RS/LS we add 0 in ending /starting respectively
    //but when it we use negetive in RS/LS, padding is complier depandant...means its upto compliers that which one (0/1) it adds


//some basic task:

    int i, j =3;    //valid in cpp, not in c...
	i=1;
	if(--i) cout<<j<<endl;	//checks whether i is non zero, which is not true in this case (a=0)
	else cout<<++j<<endl;

//another one
    int k =1;
    int l = 2;

    if(k-->0 && ++l>2) cout<<"stage1-inside if\n";  //'&&' means both condition must have to be true for entire condition to be true
    else cout<<"stage2-inside else"<<endl;
    cout<<k<<" "<<l<<endl;


//another one
    for(int i=0; i<=15; i++){
		if(i&1){		//if (i & 1) checks whether the bitwise AND operation between the variable i and 1 results in a non-zero value. If it does, then the LSB of i is 1, indicating that the number is odd. If the result is 0, the LSB of i is 0, indicating that the number is even...for example 7(0111) & 1(0001) = 0001; 8(1000)&1 = 0000; (LSD is 1 means odd)...so i&1 will only be 1(true) when i is odd
			continue;
		}
		cout<<i<<" ";
	}

//another one
    int u = 3;
    if(true) cout<<endl<<u<<endl;  //or i could say 1 in palce of 1    

//another one
    int i=0;
    for( ; i<3; i++)    //valid
        cout<<i<<endl;

}