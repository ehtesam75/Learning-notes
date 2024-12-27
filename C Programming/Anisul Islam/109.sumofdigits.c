#include <stdio.h>
#include <string.h>

int main() {
    int num = 123456;
    int temp = num, sum = 0, remainder;

    //counting the length of num
    char str[20];
    sprintf(str, "%d", num);
    int count = strlen(str);

    //using the for loop to get the result
    for(int i = 1; i<=count; i++){
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }
    //or i could use while(temp != 0) condition instead of for loop..in that case, there would be no need of evaluating the lenght of 'num' 

    printf("%d\n", sum);
    return 0;
}