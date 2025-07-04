#include <stdio.h>

int main() {
    int year = 2016;
    if(year % 400 == 0)
        printf("Leap Year\n");
    else if(year % 4 ==0 && year % 100 != 0)
        printf("Leap year\n");
    else
        printf("Not leap year\n");
    getchar(); //wait for enter key press
    return 0;
}