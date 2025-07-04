/*

  *
 ***
*****
 ***
  *

*/
#include <stdio.h>

int main() {
    int row = 7;
    int upper_part = row/2 + 1; 
    for(int i = 1; i<=upper_part; i++){
        for(int j=1; j<=upper_part-i; j++){
            printf(" ");
        }
        for(int j =1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = upper_part-1; i>=1; i--){
        for(int j=1; j<=upper_part-i; j++){
            printf(" ");
        }
        for(int j =1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}