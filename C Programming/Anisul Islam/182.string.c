/*
stirng: In C, a string is a null-terminated array of characters

why we use null character in the end of character array (string) but not in number array???

=The null character ('\0') is used in C to indicate the end of a character string. This is because a character string is simply an array of characters terminated by the null character. The null character is not used in number arrays because they don't represent strings of characters.

When a character string is stored in memory as an array, it doesn't have a fixed length. Instead, the length of the string is determined by the position of the null character. When you print a character string using the printf function, it automatically stops at the null character. This is why it's important to include a null character at the end of every character string in C.

On the other hand, number arrays have a fixed length that is determined by the size of the array. They don't need a null character to indicate the end of the array, because the size of the array is already known.

In summary, null characters are used in character arrays to indicate the end of a string, but not in number arrays because they don't represent strings of characters.
*/
#include <stdio.h>
int main() {
    char a[] = {'a', 'b', 'c', 'd', '\0'};
    //char a[] = {'a', 'b', 'c', 'd'};        [NOT right]
//    char b[4] = {'a', 'b', 'c', 'd', '\0'};   [NOT right]
//    char b[4] = {'a', 'b', 'c', 'd'};        [NOT right] 
    char c[5] = {'a', 'b', 'c', 'd', '\0'};
    char d[10] = {'a', 'b', 'c', 'd', '\0'};

    char name[51] = "aleen";
    char name1[22] = "aleen "          
                    "hosen"; //its also accurate...his way, the compiler will concatenate the two strings into a single string literal. 

//without a null terminator, C will not treat a character array as a string. This can lead to undefined behavior if the array is treated as a string in certain operations such as printf(), strlen(), and other string handling functions.

    for(int i = 0; c[i]!='\0'; i++){
        printf("%c, ", c[i]);
    }
    printf("\n%s", name1);

    return 0;
}