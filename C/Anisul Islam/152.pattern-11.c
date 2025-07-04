/*
1
2 4
3 6 9
4 8 16 20
*/

#include <stdio.h>

int main() {
    int n=4; 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", j*i);
        }
        printf("\n");
    }
    return 0;
}