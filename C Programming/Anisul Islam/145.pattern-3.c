/*
1
1       2
1       2       3
1       2       3       4
1       2       3
1       2
1
*/

//follow anisul sir's turorial to have a differecnt method (in fact a new question)
#include <stdio.h>

int main() {
    int i, j;
    int how_many_rows = 6;
    int upper_part = (how_many_rows /2 ) + 1; 
    for(i = 1; i<=upper_part; i++){
        for(j =1; j<=i; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
    for(i =upper_part -1; i>=1; i--){  //why did i initialize 'i' to that value?? at first i did the code for a specific num (say 3), then i found out that here 'i' needed that value (upper_part -1) for applying this for any user given input
        for(j = 1; j<=i; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}

