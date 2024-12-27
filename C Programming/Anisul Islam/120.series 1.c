//1+3+5+......+n

#include <stdio.h>

int main() {
    int n = 9;  //n = last number of the series
    int sum = 0;
    for(int i = 1; i<=n; i+=2){  //i = i+2
        sum = sum + i;
    }
    printf("1+3+5+.....+%d = %d", n, sum);


//different method
    printf("\n\n");
    int x = 9;
    int a = 1, sum2 = 0; // a = starting num, it'll be incremented by 1 in every loop 
    while(a<=x){
        sum2 = sum2 + a;
        a = a + 2;
    }
    printf("1+3+5+.....+%d = %d", x, sum2);

        return 0;
}