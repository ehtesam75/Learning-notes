#include <stdio.h>

    int x = 6;      //try to avoid using global variable
    int y = 3;
void random();

int main() {
    int x = 8;     //local variable will have a higher percedence over global variable, if a same name is given to them
    printf("x: %d\n", x);
    y++;
    random();

    {
        int z = 3;
        printf("z: %d\n", z);     //block scope
    }   
    //A block is a section of code that is delimited by a set of curly braces {}. Variables declared inside a block have block scope, which means they can only be accessed from within that block or any nested blocks inside it.
    return 0;
}

void random(){
    y++;
    printf("y : %d\n", y);
}

/*
Variable scope refers to the area of a program where a variable is visible and accessible. In other words, it defines where the variable can be accessed and manipulated within the program.

In C, variables can have either local or global scope.
global variables are also known as file scope variables in C. When a global variable is declared, it has file scope, which means it is visible and accessible throughout the entire file
*/