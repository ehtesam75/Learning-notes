#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    file = fopen("test.txt", "a");
    if(file == '\0')
        printf("File doesn't exist");

    char name[] = "aleen";
    int length = strlen(name);

    for(int i =0; i<length; i++){
        fputc(name[i], file);     
    }
    fclose(file);
    return 0;
}