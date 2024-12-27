#include <stdio.h>
#include <string.h>

int main() {
    char buffer[200];
    printf("Enter: ");
    scanf("%[^\n]%*c", buffer);
    printf("buffer: %s\n", buffer);

    //method 2
    char c;
    int i =0;
    while((c = getchar()) != '\n')
        buffer[i++] = c;     //understand this part?? first it will work like buffer[i]..then the value of 'i' will be incremented by 1

    buffer[i] = '\0';

    printf("%s\n", buffer);
    return 0;
}

/*
explaination:
%[^\n] is a format specifier used with scanf to read a string of characters until it encounters a newline character (\n). The brackets [] indicate a character set, and the ^ inside the brackets means to match any character except for the newline character. So %[^\n] matches all characters up to the first newline encountered.

%*c is another format specifier used with scanf to read a single character from the input stream and then discard it without storing it in a variable. The * means that the character is read but not stored anywhere. "%*c" format specifier reads the newline character and discards it without storing it in the buffer array. This is done to prevent the newline character from being read as part of the input string
*/