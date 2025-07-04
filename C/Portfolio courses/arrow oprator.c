#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point;

int main() {
    point p1;
    p1.x = 5;
    p1.y = 9;
    printf("p1: %d, %d\n", p1.x, p1.y);

    point *p2;
    p2 = &p1;
    p2->x = 66;         //using dot operator
    p2->y = 70;
    printf("p2: %d, %d\n", p2->x, p2->y);
    printf("p1: %d, %d\n", p1.x, p1.y);     //the value of original x  and y is changed

    point *p3;
    p3 = malloc(sizeof(point));
    p3->x = 54;         //using arrrow operator
    p3->y  = 33;
    printf("p3: %d, %d\n", p3->x, p3->y);  
    printf("p1: %d, %d\n", p1.x, p1.y);     //won't change the original value..as we didn't store the in memory address of original value     

    (*p3).x = 4;        //using de-reference operator, followed by a dot operator
    (*p3).y = 6;
    printf("p3: %d, %d\n", (*p3).x, p3->y); 
    return 0;
}