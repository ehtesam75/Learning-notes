#include <stdio.h>

int main() {
    int num1 = 60, num2 = 24, n1, n2, gcd, lcm;
    n1 = num1;
    n2 = num2;
    while(n2 != 0){
        int reminder;
        reminder = n2;
        n2 = n1%n2;
        n1 = reminder;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("gcd of %d and %d is %d\n",num1, num2, gcd);
    printf("lcm of %d and %d is %d",num1, num2, lcm);
    return 0;
}