#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    memset(buffer, 'a', sizeof(char) * 8);   //here, buffer decays to pointer, is working like a memory address... if i use buffer[say 3], then it would mean array..but for now its working as a pointer

    memset(buffer+4, 'd', sizeof(char) *4);
    buffer[8] = '\0';

    printf("%s\n", buffer);
    return 0;
}