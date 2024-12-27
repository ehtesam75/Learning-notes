#include <stdio.h>
void lcm_finder(int a, int b);

int main() {
    int x = 4 , y = 6;
    lcm_finder(x, y);
    return 0;
}

void lcm_finder(int a, int b){
    int lcm = (a>b) ? a: b;
    while(1){
        if(lcm % a ==0 && lcm % b == 0){
            printf("lcm of %d and %d is %d\n", a, b, lcm);
            break;
        }
        lcm++;   // i could use '++lcm here...that would start testing from lcm+1 (7%6==0 && 7%4==0)....but now it starts testing from lcm (6%6==0 && 6%4==0) [inside the if statement]....both will give me the correct output
    }
}

/*
Explaination with an example:
Let's say we want to find the LCM of the numbers 4 and 6.

Multiples of 4 are: 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, ...

Multiples of 6 are: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, ...

The smallest positive integer that appears in both lists is 12, so 12 is the LCM of 4 and 6.

Note that 12 is a multiple of both 4 and 6 (12 = 4 * 3 = 6 * 2), and it is the smallest such multiple.

In general, to find the LCM of two numbers, we can list their multiples and find the smallest positive integer that appears in both lists.z
*/