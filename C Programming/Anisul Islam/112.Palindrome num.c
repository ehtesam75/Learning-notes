#include <stdio.h>

int main() {
    int num = 153;
    int temp = num;
    int sum = 0;

        while(temp != 0){
        int remainder = temp%10;
        sum = sum*10 + remainder;
        temp = temp /10;
    }
    printf("%d\n", sum);
    if(sum==num){
        printf("%d is a palindrome number\n", num);
    }else{
        printf("%d is not a palindrome number\n", num);
    }
    return 0;
}