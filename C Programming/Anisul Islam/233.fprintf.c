#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("test.txt", "w");
    int salary = 6000;
    fprintf(file, "salary: %d", salary);
    fclose(file);
    return 0;
}