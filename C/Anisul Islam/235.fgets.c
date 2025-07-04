#include <stdio.h>

int main() {

    //fgets
    FILE *file;
    file = fopen("test.txt", "r");
    char ch[40];
    fgets(ch, 40, file);
    printf("%s", ch);
    fclose(file);

    //fscanf
    file = fopen("test.txt", "r");
    char ah[49];
    fscanf(file, "%s", ah);
    printf("\n%s", ah);
    fclose(file);
    return 0;
}