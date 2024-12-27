#include <stdio.h>

int main() {
    int x =5, y=8;
    int *ptr1, *ptr2, temp;
    ptr1 = &x;
    ptr2 = &y;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}