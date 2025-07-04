#include <stdio.h>

int main() {
    int initial = 1;
    int n = 5, sum_odd = 0, sum_even = 0;
    for(int i = initial; i<= n; i++){
        if(i%2 == 0){
            sum_even = sum_even + i;
        }
        else if (i%2 != 0){
            sum_odd = sum_odd +i;
        }
    }
    printf("Answer is : %d", sum_odd - sum_even);
    return 0;
}