#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp =*x;
    *x =*y;
    *y = temp;
}

int main() {
    int x = 5, y =13;
    swap(&x,&y);
    printf("x = %d\n", x); 
    printf("y = %d\n", y); 
    return 0;
}