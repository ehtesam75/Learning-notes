#include <stdio.h>

int main() {
    FILE *ptr = fopen("newtext.txt", "r");
    char c;
    while((c = fgetc(ptr)) != EOF)
        printf("%c", c);

    printf("\n");

    rewind(ptr);        //by using rewind we can re-read file from the very beganing...without this function, we have to close the file and then re-open it inorder to re-reading file from start

    while((c = fgetc(ptr)) != EOF)      //now it'll re-read from the start again, it won't face EOF at first
        printf("%c", c);

    printf("\n");
    fclose(ptr);

    return 0;
}