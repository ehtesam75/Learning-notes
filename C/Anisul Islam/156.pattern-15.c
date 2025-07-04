/*

         *  
      *     *
   *     *     *
*     *     *     *

*/
#include <stdio.h>

int main() {
    int row =4;
    for(int i =1; i<=row; i++){
        for(int j =1; j<=row-i; j++){
            printf(" ");
        }
        for(int j =1; j<=i*2-1; j++){
            if(j%2 == 1){           
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}