#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerator = 10;
    int denominator = 3;
    int quotient = numerator / denominator;
    int remainder = numerator % denominator;

    printf("quot: %d\n", quotient);
    printf("rem: %d\n", remainder);

    //using div function
    div_t result = div(numerator, denominator);   //div function returns structure of type div_t. The div_t structure contains two members, quot and rem. div_t is basically a typedef synonim for the struct..and i created a variable of this struct named "result"
    //extra: if we use 'long' variable in num & den, then here we've to add 'l' before "div_t" struct & "div" function. and have to use "ld" as format specifiers in printf

    printf("quot: %d\n", result.quot);
    printf("rem: %d\n", result.rem);
    return 0;
}