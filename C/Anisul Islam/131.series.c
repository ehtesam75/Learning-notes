//1 + 1/2 + 1/3 + ......1/n
#include <stdio.h>

int main() {
    int start =1;
    int n = 5; 
    float sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + (1/(float)i); //converted int i to float i
    }
    printf("1 + 1/2 + 1/3 + ......1/%d = %.2f", n, sum);
    return 0;
}