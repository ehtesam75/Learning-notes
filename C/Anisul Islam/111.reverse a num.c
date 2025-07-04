#include <stdio.h>

int main() {
    int num = 343477, temp, sum = 0;
    temp = num;

    while(temp != 0){
        int remainder = temp % 10;
        temp = temp /10;
        printf("%d", remainder);
    }
    return 0;
}