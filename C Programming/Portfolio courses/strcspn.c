#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcd1234";
    char num[] = "432";
    int count = strcspn(s, num);   //return an integer
    printf("%d\n", count);

    char *numcode = s + count;
    printf("%s\n", numcode);
    return 0;
}