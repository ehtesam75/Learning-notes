#include <stdio.h>
#include<ctype.h>

int main() {
    char ch ='u';
    printf("in upper case %c\n", ch-32);

    char lower = 'a', upper;
    upper = toupper(lower); //toupper is under ctype.h header file
    printf("in upper case %c", upper);
    return 0;
}