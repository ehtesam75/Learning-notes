#include <stdio.h>
#include <stdlib.h>     //contains rename 
#include <errno.h>

int main() {
    char file[100];
    char new[100];

    printf("File: ");
    scanf("%s", file);

    printf("New: ");
    scanf("%s", new);

    if(rename(file, new) != 0)      //if this function works then its gonna return 0, if not then will return a non zero value
    {
        fprintf(stderr, "errno: %d\n", errno);
        perror("Error msg");
    }else{
        printf("%s -> %s\n", file, new);
    }

    return 0;
}