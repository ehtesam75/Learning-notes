#include <stdio.h>
void printString(char *arr);
int main() {
    char firstName[] = "ehtesam";
    char secondName[] = "aleen";

    printString(firstName);     //here 'firstName' is equivalent to '&firstName[0]'
    printString(secondName);
    return 0;
}

void printString(char *arr){
    for(int i =0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

/*

FORMAT SPECIFIER OF STRING
scanf("%s", name);  [we didn't use & here. cuz string itself a character array and array is always a pointer...so "name" itself a pointer..and a pointer is pointing to a memory address (here: "name[0]"), so don't need to use & here]
*/