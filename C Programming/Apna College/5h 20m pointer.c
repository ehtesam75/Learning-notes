/*
watch the tutorial of apna college ragarding this topic to grasp the very basis of pointer...must watch
*/

#include <stdio.h>
int main() {
    int age = 23;
    int *ptr = &age;   //we use '*' to denotes that this variable (ptr) is containing a memory address
    int age_location = (int)ptr;  //ptr is a pointer variable and cannot be directly assigned to an integer variable.i need to use a typecast to convert the pointer value to an integer inoder to neglet complication error
    int _age = *ptr;
    printf("%p\n", ptr);  //will print the address of age variable
    printf("%p\n", age_location);
    printf("%p\n", &age);
    printf("%d\n", _age);
    printf("%d\n", *(&age));  
    return 0;

    //using %u for all of them will also give the same output for each of them
}

/*
REGARDING THE FORMAT SPECIFIERS OF POINTERS:
the format specifiers %d, %p, and %u have different meanings when used with pointers. Here's a brief explanation of each:

1.%d: This format specifier is used to print a signed integer value using the printf() function. When used with a pointer, %d prints the signed integer representation of the memory address stored in the pointer variable. However, using %d with a pointer may result in undefined behavior, as the size of a pointer and an integer may not be the same on all platforms.

2. %p: This format specifier is used to print the memory address stored in a pointer variable. It prints the address in a platform-dependent format, usually in hexadecimal notation. When used with a pointer, %p prints the memory address stored in the pointer variable.

3. %u: This format specifier is used to print an unsigned integer value using the printf() function. When used with a pointer, %u prints the unsigned integer representation of the memory address stored in the pointer variable. However, using %u with a pointer may also result in undefined behavior, as the size of a pointer and an unsigned integer may not be the same on all platforms.

In general, it is recommended to use the %p format specifier when printing the memory address stored in a pointer variable, as it is designed specifically for this purpose and avoids potential issues with undefined behavior.
*/