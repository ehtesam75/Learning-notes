/*
POINTER TO POINTER:     a variable that stores the memory address of another pointer
HYPOTHETICAL REPRESENTION OF MEMORY: 

variable name       :   age         pptr             ptr 
value at variable   :   22          2013             2010
address of varibale :   2010        2012             2013 


syntex:
int **pptr;
char **pptr;

*/

#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
    return 0;
}