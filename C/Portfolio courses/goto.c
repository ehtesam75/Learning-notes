#include <stdio.h>

int main() {
    printf("statement 1\n");
    goto end;           //not recomented to use goto statement in general
    printf("statement 2\n");
    end: 
    printf("statement 3\n");
    return 0;
}