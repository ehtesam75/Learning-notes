#include <stdio.h>

int main() {
    int num1 = 10, num2 =7;
    num1 = num1 -num2;
    num2 = num1 + num2;
    num1 = num2 - num1; 

    printf("num1 is %d ", num1);
    printf("num2 is %d", num2);   
    return 0;
}