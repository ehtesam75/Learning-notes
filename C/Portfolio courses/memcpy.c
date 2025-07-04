#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcdefgh";
    char d[9];
    memcpy(d, s, sizeof(char)*9);              //here 'd' , 's' are acting like pointer and pointer towards to the first element of the array (more like 'array decades to pointer' here)
    printf("d: %s\n", d);

    char e[6];
    memcpy(e, s+2, sizeof(char)*5);
    
    // Add null terminator to destination (e[last index])
    e[5] = '\0';  
    printf("e: %s\n", e);
    return 0;
}