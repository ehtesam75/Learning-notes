#include <stdio.h>

int main() {
    //enter a number between 1 to 5
    int num = 4;

    switch(num){   //switch always deals with integer..so make sure to use an integer
        case 1: 
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5: 
            printf("five\n");
            break;
        default:    //default block can be placed anywhere
            printf("Not a valid digit\n");
    }

    printf("\n\n");

    char letter = 'j';
    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonent\n");
        
    }
    return 0;
}