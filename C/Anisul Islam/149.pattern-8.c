/*
CCC
 BB
  A
*/
#include <stdio.h>

int main() {
    int n = 3;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i-1; j++){
            printf("\t");
        }
        for(int j = 1; j<=n-i+1; j++){
            printf("%c\t", n-i+1+64);
        }
        printf("\n");
    }
    return 0;
}