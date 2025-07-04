/* pattern 1: 
1
1   2
1   2   3
*/

/* pattern 2: 
1
2   2
3   3   3
*/

#include <stdio.h>

int main() {
    for(int i = 1; i<=3; i++){
        for(int j = 1; j <= i; j++){
            printf("%d\t", j);   //if we change j to i, we'll get the output of second pattern
        }
        printf("\n");
    }
    return 0;
}

/*hw: 
A
B       B
C       C       C
(hint : it can be solved in many methods..two noteable ways are...1. using ascii value 2. using char value directly in loop)
*/