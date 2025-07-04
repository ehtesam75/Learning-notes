//         1
//     0   0
// 1   1   1

#include <stdio.h>

int main() {
    int i, j;
    int n =4;
    for(i = 1; i<=n; i++){
        for(j = 1; j<=n-i; j++){
            printf("");
        }
        for(j =1; j<=i; j++){
            if(j % 2 != 0){
                printf("%d\t", 1);
            }else{
                printf("%d\t", 0);
            }
        }
        printf("\n");
    }
    return 0;
}

/*
now code to print this output: 
1
1       0
1       0       1
1       0       1       0
*/