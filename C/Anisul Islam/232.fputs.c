#include <stdio.h>

int main() {
    char name[20] = "zabib";
    FILE *ptr;
    ptr = fopen("test.txt", "w");
    fputs(name, ptr);
    fclose(ptr);
    return 0;
}