/*
123
 12
  1
*/

#include <stdio.h>

int main() {
    int i,j, n=4;
    for(i = 1; i<=n; i++){
        for(j =1; j<=i-1; j++){
            printf("\t");
        }
        for(j =1; j<=n-i+1; j++){  
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}