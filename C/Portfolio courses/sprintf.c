#include <stdio.h>

int main() {
    char string[100];
    sprintf(string, "Hello %d %f", 3, 3.2);
    printf("%s\n", string);
    return 0;
}