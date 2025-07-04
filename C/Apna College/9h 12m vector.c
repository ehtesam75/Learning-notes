#include <stdio.h>
typedef struct vector{
    int x;
    int y;
}vc;

void sumVector(vc v1, vc v2, vc sum);
int main() {
    struct vector v1;
    v1.x = 5;
    v1.y = 10;
    struct vector v2 = {3, 7};
    struct vector sum = {0};
    sumVector(v1, v2, sum);
     
    return 0;
}

void sumVector(vc v1, vc v2, vc sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x); 
    printf("sum of y is : %d\n", sum.y);   //don't print inside the main funtion for this case, cuz its an example of call by value
}