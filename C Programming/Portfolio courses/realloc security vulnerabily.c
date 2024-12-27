#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *password1;
    char *password2;
    
    password1 = malloc(7 * sizeof(char));   //6 characters password (1 contains null charac.)
    password2 = malloc(7 * sizeof(char));
    strcpy(password1, "abc123");
    strcpy(password2, "xyz123");

    for(int i = 0; i<20; i++)
        printf("%c\n", password1[i]);


    //did not complete this...cuz already wrote this in "realloc basics" file..
    return 0;
}