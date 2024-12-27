#include <stdio.h>
#include <string.h>

int main() {

    //strcat
    char s1[20] = "ehtesam ";
    char s2[] = "aleen";

    char *ptr = strcat(s1, s2);     //does return a pointer
    printf("%s\n", ptr);

    printf("%s\n", s1);     //different method

    printf("ptr: %p\n", ptr);
    printf("s1: %p\n", s1);   //output same...means both r same

    //strncat
    char new[29] = "this and ";
    char add[] = "that";

    strncat(new, add, 3);
    printf("%s\n", new);

    return 0;
}