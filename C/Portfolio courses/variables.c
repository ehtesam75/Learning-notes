/*
the keywords "short", "long", "unsigned", and "signed" can be used as modifiers for the "int" data type to change the range of values that the variable can hold.

Here's a brief explanation of each modifier:

"short" reduces the range of the variable by cutting its size in half, typically to 2 bytes. This means it can hold smaller numbers than a regular "int". For example, a "short int" can hold values in the range of -32,768 to 32,767 on a 16-bit system.

"long" increases the range of the variable by doubling its size, typically to 4 or 8 bytes, depending on the system. This means it can hold larger numbers than a regular "int". For example, a "long int" can hold values in the range of -2,147,483,648 to 2,147,483,647 on a 32-bit system.

"unsigned" removes the sign from the variable, meaning it can only hold non-negative values. This doubles the range of positive numbers that the variable can hold. For example, an "unsigned int" can hold values in the range of 0 to 4,294,967,295 on a 32-bit system.

"signed" is the default modifier for "int" and is used to explicitly indicate that the variable is a signed integer. It is typically not necessary to use "signed int" because "int" is already assumed to be signed by default. 

*/

#include <stdio.h>

int main() {
    short int a = 1;
    long int b = 343423232;
    unsigned int c = 343242; //the minimum value it can hold, is 0
    return 0;
}