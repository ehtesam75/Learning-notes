#include <stdio.h>

int main() {
    int arr[] = {4, 5, 2, 6, 8};
    int *ptr;
    ptr = arr;  // arr is equivalent to &arr[0] here
    int *ptr2 = &arr[0];
    for(int i= 0; i<5; i++){
        printf("%p\n", ptr[i]); //if i use %d here, will print the value of array's element then
    }
    printf("address of 1st value: %p\n", ptr);
    

    return 0;
}