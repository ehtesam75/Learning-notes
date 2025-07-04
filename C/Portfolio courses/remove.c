#include <stdio.h>
#include <stdlib.h>     //includes 'remove()'
#include <errno.h>      //it has a seperate file...

int main() {
    char filename[100];
    printf("File: ");
    scanf("%s", filename);

    if( remove(filename) != 0){     //if a function is successful, then it'll return 0, if not, it'll return -1.
        fprintf(stderr, "Errno (error number): %d\n", errno);
        perror("Error msg");
    } else
        printf("%s deleted.\n", filename);   
    return 0;
}
