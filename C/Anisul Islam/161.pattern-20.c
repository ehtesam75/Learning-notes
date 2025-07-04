/*
Floyd's triangle:
1 
2 3
4 5 6
7 8 9 10 
*/
#include <stdio.h>

int main() {
    int row =4;
    int count =0;
    for(int i =1; i<=row; i++){
        for(int j =1; j<=i; j++){
           count ++;
           printf("%d ", count);
        }
        printf("\n");
    }    
    return 0;
    
} 