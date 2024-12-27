#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "some of the best players itw";
    char s2[] = "the";
    char *match = strstr(s, s2);      //strstr returns a pointer
    printf("%s\n", match);

    char s3[] = "lot";
    char *fail = strstr(s, s3);
    if(fail == NULL)
        printf("Could not find s3 string");
    return 0;
}