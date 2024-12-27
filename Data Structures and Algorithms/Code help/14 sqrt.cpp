#include <iostream>
using namespace std;

int sqrt(int x){
  int s = 0;
  int e = x;
  long long mid = s + (e-s)/2;
  long long ans = 0;
  
  while(s <= e){
    long long square = mid * mid;
    if(square == x){
      ans = mid;
      return ans;
    }
    if(square > x)
      e = mid -1;
    else{
      ans = mid;
      s = mid + 1;
    }

    mid = s + (e-s)/2;
  }

  return ans;
}

double addPrecision(int n, int precision, int tempSol){
  double factor = 1;
  double ans = tempSol;

  for(int i=0; i<precision; i++){
    factor = factor /10;
    for(double j = ans; j*j <n; j= j + factor){
      ans = j;
    }
  } 
  return ans;
}

int main() {
  int x = 8;
  int tempSol = sqrt(x);
  double finalAns = addPrecision(x, 3, tempSol);
  cout<<finalAns<<endl;
}