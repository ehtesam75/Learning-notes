#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");

    if(file == NULL){
        printf("error opening file\n");
        return 1;
    }

    fprintf(file, "0123456789\n");
    fprintf(file, "abcdefgh\n");

    fseek(file, 4, SEEK_SET);       //SEEK_SET means point from the begaining and 4 is here is called offset..so it'll move the cursore to 4 digit from the begaining
    fprintf(file, "ABC");

    fseek(file, 1, SEEK_CUR);       //file pointer will be 1 offset from the current file pointer (which is after 'ABC')
    fprintf(file, "DJ");

    fseek(file, -4, SEEK_END);      //4 characters back from the end of the file
    fprintf(file, "*");

    //when fseek fails, it'll retrun null
    if(fseek(file, 10, SEEK_END) == 0){
        printf("Seek failed\n");
        return 1;
    }

    fclose(file);
    return 0;
}
