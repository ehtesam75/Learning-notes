#include <stdio.h>
#include <string.h>

int main() {

    //strcpy
    char src[10] = "123456789";
    char des[50];

    strcpy(des, src);
    printf("%s\n", des);


    //strncpy
    
    char dest2[50];
    strncpy(dest2, src, 10);     //9 char. and 1 null terminator will be copied
    printf("%s\n", dest2);

    char dest4[50];
    strncpy(dest4, src, 7);     //7 char. and 0 null terminator will be copied..so we have to add a null terminator manually
    dest4[7] = '\0';
    printf("%s\n", dest4);


    char dest3[50];
    strncpy(dest3, src, 40);        //will work just fine....excessive part will be fillted with null char.
    printf("%s\n", dest3);
    return 0;
}