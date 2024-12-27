/*
strpbrk returns a pointer to the first occurrence in str1 of any of the characters in str2, or a null pointer if no such character is found.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ajlefjld344545";
    char num[] = "1246";

    char *match = strpbrk(s, num);    //strpbrk returns a pointer
    printf("%s\n", match);

    char num2[] = "98789";
    char *fail = strpbrk(s, num2);

    if(fail == NULL)
        printf("could not find");
    return 0;
}