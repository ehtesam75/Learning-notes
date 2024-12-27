#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Failed to allocate memory\n");
        exit(1);
    }

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++) {
        printf("%d\t", ptr[i]);
    }
    printf("\n");

    free(ptr);

    ptr = (int*)calloc(3, sizeof(int));
    if (ptr == NULL) {
        printf("Failed to allocate memory\n");
        exit(1);
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\t", ptr[i]);
    }
    printf("\n");

    ptr = (int*)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("Failed to reallocate memory\n");
        exit(1);
    }

    for (int i = 3; i < 5; i++) {
        ptr[i] = 0;  // initialize the new elements to zero
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\t", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}



/*
Dynamic memory allocation in C allows you to allocate and deallocate memory at run time. This means that you can allocate memory as needed during program execution, and then release it when it's no longer needed.

In C, there are four functions that are used for dynamic memory allocation:

malloc(): This function is used to allocate memory at run time. It takes a single argument, which is the number of bytes to allocate. The function returns a pointer to the allocated memory, or NULL if the allocation failed.

calloc(): This function is similar to malloc(), but it initializes the allocated memory to zero. It takes two arguments: the number of elements to allocate, and the size of each element. The function returns a pointer to the allocated memory, or NULL if the allocation failed. (calloc = continious allocation)

realloc(): This function is used to resize a previously allocated block of memory. It takes two arguments: a pointer to the previously allocated memory, and the new size in bytes. The function returns a pointer to the resized block of memory, or NULL if the reallocation failed.

free(): This function is used to deallocate previously allocated memory. It takes a single argument, which is the pointer to the memory to be deallocated.
*/