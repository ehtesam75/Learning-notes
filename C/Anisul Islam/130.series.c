//1^2+ 2^2 + 3^2 + 4^2 + ..........+ n^2
#include <stdio.h>

int main() {
    int start =1;
    int n = 3;
    int i = 1, sum = 0;
    while (i<=n){
        sum = sum + i*i;
        i++;
    }
    printf("1^2+ 2^2+ ..........+ %d^2 = %d\n", n, sum);
    return 0;
}