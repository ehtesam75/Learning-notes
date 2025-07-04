#include <stdio.h>

int main() {
    //%[flags][width][.percision]format specifier

    printf("||%10d||\n", 5);  //here 10 is denoting width...its right aligned
    printf("||%-10d||\n", 5);  //here - before 10 denoting flags...it makes it to be right aligned
    printf("||%.2f||\n", 5.0);  //here .2 is percision

    printf("||%6.2f||\n", 5.0);  //here .2 is percision and 6 is width (right aligned) and adding a '-' before 6 will make it left aligned
    return 0;
}