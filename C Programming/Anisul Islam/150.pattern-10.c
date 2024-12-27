/*
  1
 12
123
 12
  1
*/
#include <stdio.h>

int main() {
    int row = 7;
    int special = (row/2)+1;
    for(int i = 1; i<= special; i++){
        for(int j = 1; j<= special-i; j++){
            printf(" ");
        }
        for(int j =1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

        for(int i = special-1; i>=1; i--){
            for(int j = 1; j<=special-i; j++){
                printf(" ");
            }
            for(int j = 1; j<=i; j++){
                printf("%d", j);
            }
            printf("\n");
        }
    return 0;
}