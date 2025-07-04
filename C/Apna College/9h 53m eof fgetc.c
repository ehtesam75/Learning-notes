#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("text.txt", "r");
    char ch;
    ch = fgetc(ptr);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(ptr);
    }
    printf("\n");
    fclose(ptr);
    return 0;
}