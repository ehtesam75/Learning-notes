#include <stdio.h>

int main() {
    int x =5, y =33;
    printf("value of x : %d\n", x);
    printf("address of x : %d\n", &x);

    int *ptr;  //(* = astric symbol)
    ptr = &x;
    int *ptr2 = &y; // or i could write like this
    printf("%d\n", *ptr);
    printf("%d\n", ptr);
    printf("address of ptr :%d\n", &ptr);
    printf("value of y: %d\n", *ptr2);
    return 0;
}