/*
THERE ARE TWO MAIN WAYS IN WHICH MEMORY IS ALLOCATED AND ORGANIZED WITH C (stack and heap):

The stack is a LIFO (Last-In-First-Out) data structure that is used to store local variables and function call information. It is managed automatically by the compiler and the operating system. Each time a function is called, a new block of memory is allocated on the stack to store the function's local variables and parameters. When the function returns, the memory is automatically released. The size of the stack is limited and determined at compile time.

The heap, on the other hand, is a dynamic memory area that is used for allocating memory during runtime. Unlike the stack, the heap is not managed automatically by the compiler or operating system. Instead, the programmer is responsible for allocating and releasing memory from the heap using functions such as malloc() and free(). The heap can grow or shrink dynamically during runtime, and the size is limited only by the amount of available memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 3;
    int *a = calloc(size, sizeof(int));
    for(int i = 0; i<size; i++){
        a[i] = i;
    }

    a = realloc(a, sizeof(int)*(size + 5));
    for(int i = size; i<(size + 5); i++){
        a[i] = 9;
    }

    for(int i = 0; i<(size + 5); i++){
        printf("%d\n", a[i]);
    }

    free(a);
    return 0;
}