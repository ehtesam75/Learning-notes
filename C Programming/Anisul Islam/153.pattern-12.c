/*
    1
   222
  33333
 4444444
*/

#include <stdio.h>

int main() {
    int n =5;
    for(int i = 1; i<=n; i++){
        for(int j =1; j <= n-i; j++){
            printf(" ");
        }
        for(int j =1 ; j<=(i*2)-1; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}