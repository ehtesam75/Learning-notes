/*
1010
 101
  10
   1
*/
#include <stdio.h>

int main() {
    int n = 4;
    for(int i =n; i>=1; i--){
        for(int j =1; j<=n-i; j++){
            printf(" ");
        }
        for( int j =1; j<=i; j++){
            printf("%d", j%2);
        }
        printf("\n");
    }
    return 0;
}