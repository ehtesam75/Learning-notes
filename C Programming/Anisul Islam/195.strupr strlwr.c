#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Aleen";
    char str_1[] = "ALEEN";

    strupr(str);
    strlwr(str_1);
    printf("%s\n", str);
    printf("%s\n", str_1);
    return 0;
}