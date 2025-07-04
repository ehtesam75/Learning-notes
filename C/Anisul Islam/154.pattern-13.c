/*
CCCCC
 BBB
  A
*/
#include <stdio.h>

int main() {
    int n =3;
    for(int i =n; i>=1; i--){
        for(int j =1; j<= n-i; j++){
            printf(" ");
        }
        for(int j =1; j<=i*2-1; j++){
            printf("%c", i+64);
        }
        printf("\n");
    }
    return 0;
}