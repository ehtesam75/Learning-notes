#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "some, data, in, commas";
    char *match = strrchr(s, ',');      //strrchr returns a pointer
    printf("%s\n", match);

    char *fail = strrchr(s, '#');
    if(fail == NULL)
        printf("Could not find");
    return 0;
}