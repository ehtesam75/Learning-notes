#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    a = 3.53;
    b = 4.22;
    c =2.77;

    s = (a+b+c)/2; // s = semiperimeter 
    area = sqrt(s*(s-a)*(s-b)*(s-c)); //sqrt is under math.h header file
    printf("Area %lf", area);
    return 0;
}