//recomended to watch the tutorial
//watch the "realloc basic" and "realloc security vulnerabity" video also 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t tic, toc;
    int *a;
    
    tic = clock();
    a = malloc(1000000000*sizeof(int));
    toc = clock();
    printf("malloc: %lf seconds\n", (double)(toc -tic)/(double)CLOCKS_PER_SEC);
    free(a);

    tic = clock();
    a = calloc(1000000000, sizeof(int));
    toc = clock();
    printf("calloc: %lf seconds\n", (double)(toc -tic)/CLOCKS_PER_SEC);
    free(a);
    
    return 0;
}

/*
calloc takes more time than malloc because calloc initializes the memory it allocates to zero, whereas malloc does not. This means that calloc needs to spend additional time setting all the bits in the allocated memory to 0, while malloc simply hands over a block of uninitialized memory.

The time taken by calloc depends on the size of the allocation, as it needs to set each byte of the memory to 0. In contrast, the time taken by malloc is mostly dependent on the size of the allocation request and the availability of memory in the system.
*/
