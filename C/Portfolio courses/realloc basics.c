#include <stdio.h>
#include <stdlib.h>

int main() {
//part 1 (comment out everything in part 2 to work with part 1)
    int *a = malloc(3*sizeof(int));
    for(int i = 0; i<3; i++){
        a[i] = i;
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("a before : %p\n", a);
    a = realloc(a, 5* sizeof(int));
    printf("a after : %p\n", a);   //the address of a remains the same...
    for(int i = 3; i<8; i++){
        a[i] = 8;
        printf("a[%d] = %d\n", i, a[i]);
    }
    free(a);

//part 2 (comment out everything in part 1 to work with part 2)
    int *a1 = malloc(5 * sizeof(int));
    int *a2 = malloc(5 * sizeof(int));

    for(int i = 0; i<5; i++) a1[i] = i;
    for(int i = 0; i<5; i++) a2[i] = 6;

    printf("a1: %p\n", a1);
    printf("a2: %p\n", a2);

    for(int i = 0; i<14; i++)
        printf("a[%d]: %d\n", i, a1[i]); 
        // after analysing the output, we can see a2 is stored very close to a1 in the memory

    printf("a1 before: %p\n", a1);
    int *save = a1;
    a1 = realloc(a1, 20 * sizeof(int));
    printf("a1 before: %p\n", a1);  //see in the output???  After calling realloc to increase the size of a previously allocated block of memory, the function tries to find a new block of memory that is large enough to fit the requested size. If a suitable block of memory is available immediately after the old block, it is used. However, in cases where the space immediately after the old block is already occupied by another block of memory, as was the case with a2 in your example (a2 was almost right after a1), there isn't enough space to increase the size of the old block in place. In such cases, realloc allocates a completely new block of memory elsewhere and copies the contents of the old block to the new block before freeing the old block. This is why, in your example, the address of a1 changed after calling realloc to increase its size

    printf("save: %p\n", save); // output: its the same as the memory address of a1

    for(int i = 0; i<5;i++)
        printf("save[%d] = %d\n", i, save[i]);  //watch the video for this part's output..mine is not giving the desired output..save[i] output should be the same as origianl a1[i]'s output...it just means even after realloc copied the data to a new location, the previously written data in a1 is not cleared. and its a security concern as we have now no control over the previous data and the data is still there (imagine it was a sensitive data)

    free(a1);
    free(a2);

    return 0;
}