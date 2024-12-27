/*
333
 22
  1
*/
#include <stdio.h>

int main() {
    int i,j, n=5;
    for(i = 1; i<=n; i++){
        for(j =1; j<=i-1; j++){
            printf("\t");
        }
        for(j =1; j<=n-i+1; j++){  
            printf("%d\t", n-i+1);
        }
            printf("\n");
    }
    return 0;
}