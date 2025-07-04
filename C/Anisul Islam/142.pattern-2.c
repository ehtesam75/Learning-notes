/* pattern 1: (n = 5)
1
1       0
1       0       1
1       0       1       0
*/

/* pattern 2: (n =4)
1
0       0
1       1       1
0       0       0       0
*/

#include <stdio.h>

int main() {
    for(int i = 1; i<=4; i++){
        for(int j =1 ; j<=i; j++){
            if(i%2 == 0){    // if we use j instead of i here, the output will be printed for pattern 1 then
                printf("0\t");
            }
            else{
                printf("1\t");
            }
        }
        printf("\n");
    }
    return 0;
}