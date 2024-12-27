/*
                                1
                        1       2
                1       2       3
        1       2       3       4
1       2       3       4       5
*/

#include <stdio.h>

int main() {
    int n = 5;
    int row, col;
    for(row = 1; row<=n; row++){  
        for(col = 1; col <= n - row; col++){   //(n - row = space)
            printf("\t");
        }
        for(col = 1; col<= row; col++){
            printf("%d\t", col);
        }
        printf("\n");
    }
}

