#include <stdio.h>

int main() {
    FILE *ptr, *file;
    ptr = fopen("test.txt", "r");
    char ch;
    char new;
    while(!ferror(ptr)){  //explanation in the end
        ch = fgetc(ptr);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);

    }
    fclose(ptr);
    file = fopen("test.txt", "r");
    
    printf("\n\n");
    while(!feof(file)){   //feof() function is used to check whether the end of a file has been reached for a stream associated with a FILE pointer
        new = fgetc(file);
        printf("%c", new);
    }
    fclose(file);

    return 0;
}

/*
 the ferror() function is used to check whether an error has occurred on a stream associated with a FILE pointer.

The ferror() function takes a FILE pointer as its argument and returns a non-zero value if an error has occurred, and zero otherwise.

In the provided code, the while loop continues to read characters from the file until ferror(ptr) returns a non-zero value, indicating that an error has occurred during the read operation.

The ! operator before ferror(ptr) negates the value returned by ferror(ptr). Therefore, the loop will continue to execute as long as ferror(ptr) returns zero, indicating that no error has occurred yet.
*/