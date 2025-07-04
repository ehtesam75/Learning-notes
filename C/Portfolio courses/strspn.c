#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "343272678abceieid";
    char num[] = "123456";

    int position = strspn(s, num);
    printf("%d\n", position);

    char *remaining = s + position;
    printf("%s\n", remaining);
    return 0;
}