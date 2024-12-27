#include <stdio.h>
#include <string.h>     //memchr included

int main() {
    char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char *pos = memchr(data, 'd', 6);   //The memchr() function searches the first 6 characters of the memory block pointed to by data for the first occurrence of the character 'd'
    printf("pos[0]: %c\n", pos[0]);
    printf("pos[1]: %c\n", pos[1]);


    //what if the character isn't found??its gonna return null char.
    char *positon = memchr(data, 'z', 6);
    if(positon == NULL)
        printf("charcater is not found\n");


    char str[] = "aleen@microsoft.com";
    char *domain = memchr(str, '@', strlen(str));
    domain++;       //will drop of the '@' symbol in the output
    printf("domain: %s\n", domain);
    return 0;
}

//memchr() is a function in C that searches a given memory block for a specified character and returns a pointer to the location of the character if found, or a NULL pointer if the character is not found