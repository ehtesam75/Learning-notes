//run this code on .programiz.com

#include <stdio.h>
#include <string.h>     //contains memccpy

int main() {
    char source1[] = "kabirsingh.journalism@gmail.com";
    char destination1[25];

    char *position = memccpy(destination1, source1, '@', 25);      //will copy until @ or 20 characters..whichever comes first
    position[0] = '\0';     //this line will set the first character of the source1 string after the @ character to the null terminator \0. This is done to ensure that destination1 contains a null-terminated string.
    printf("destination 1: %s\n", destination1);


    char source2[] = "ehtesamzunnuryn@gmail.com";
    char destination2[20];

    char *pos = memccpy(destination2, source2, '9', 10);   
    printf("destination2: %s\n", destination2);
    return 0;
}

/*
EXPLANATION: 

In the statement char *position = memccpy(destination1, source1, '@', 20), memccpy() function is used to copy characters from the source buffer to the destination buffer until the character '@' is encountered or until 20 characters have been copied, whichever comes first.

The function returns a pointer to the first occurrence of the character '@' in the destination buffer after the characters have been copied, or a NULL pointer if the character was not found. This pointer is stored in the pos variable, which can be used later in the program.

Note that memccpy() is similar to memcpy(), but it has an additional parameter that specifies the character to stop copying at.
*/