#include <stdio.h>

int main() {
    int age =33;
    int *ptr = &age;
    printf("ptr : %u\n", ptr);
    ptr++;
    printf("ptr++ : %u\n", ptr);   //it will print a new address (ptr+1), which would point towords 1 block (for int, 4 bytes; for char, 1 byte) right of 'age' variable. nothing is stored there (right block of 'age') yet.

    printf("%d\n", *ptr);         //After the statement ptr++, the pointer ptr is incremented by the size of an      integer (typically 4 bytes on most systems). This means that ptr now points to a memory location that is one integer size away from the original address of age. Since this new memory location is not initialized with any value, the statement printf("%d", *ptr); will print the value stored at that memory location, which is unknown and may contain any arbitrary value. This behavior is undefined and can lead to unexpected results or even program crashes.

    ptr--;
    printf("ptr-- : %u\n", ptr);

    return 0;

    //more on the tutorial
}