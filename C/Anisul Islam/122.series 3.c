//1*2 + 2*3 + 3*4.......n*n+1
#include <stdio.h>

int main() {
    int start_i = 1, start_j =2;
    int n = 4, sum = 0;
    for(int i = start_i, j = start_j; i<=n, j<=(n+1); i++, j++){
        sum = sum + (i*j);
    }
    printf("1*2 + 2*3 + 3*4.......+ %d*%d = %d\n", n, n+1, sum);
    return 0;
}

//now do for  1*3 + 2*5 + 3*7.......n1*n2  (n1, n2 will be given by user)