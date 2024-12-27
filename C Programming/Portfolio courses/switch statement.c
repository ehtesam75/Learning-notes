#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "AdjldaaKHILdusdi";
    int length = strlen(str);
    int a = 0; 
    int vowel = 0;

    for(int i = 0; i<length; i++){
        switch(toupper(str[i])){    //converting every single word to upper case
            case 'A':
                a++;
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
        }
    }

    printf("number of a: %d ; vowel: %d", a, vowel);
    return 0;
}