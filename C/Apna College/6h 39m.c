#include <stdio.h>

int main()
{
    char star = '*';
    char *ptr = &star;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    /*
    pointer arithmetic:
    we can also subtract one pointer from another
    we can also compare 2 pointers
    */
   
    printf("\n\n");
    int age = 40;
    int *ptr1 = &age;
    int _age = 50;
    int *_ptr1 = &_age;

    printf("%u -%u : difference : %u\n",ptr1, _ptr1, ptr1 - _ptr1); //take a look at the output...difference between these two in bytes is 4, but it won't be shown. difference is 1 in integer (output)
    //but what if we wrote like _ptr1 - ptr1?? would that make any difference? 

    printf("%u - %u: difference : %d\n", _ptr1, ptr, _ptr1 - ptr1); // since _ptr1 points to a memory location that is after ptr1 in memory, the result of the subtraction will be negative. This is because the subtraction is performed in two's complement arithmetic, which means that subtracting a larger address from a smaller address results in a negative value.

    _ptr1 = &age;
    printf("comparison: %d\n", _ptr1 == ptr1); //output is 1 (true), cuz now both _ptr1 and ptr1 is holding the same memory address
    return 0;
}
