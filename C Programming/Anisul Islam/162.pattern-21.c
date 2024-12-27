/*
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include <stdio.h>
int main() {
    int row =4;
    int col = row *2 -1;
    int left_side = col/2 +1;

    for(int i =1; i<=row; i++){
        for(int j =1; j<=row-i; j++){
            printf("  ");
        }
        for(int j =1; j<=i; j++){
            printf("%d ", j);
        }
        for(int j =i-1; j>=1; j--){
            printf("%d ", j);  
        }
        printf("\n");
    }
    return 0;
}