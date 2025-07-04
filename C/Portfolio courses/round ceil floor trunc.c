#include <stdio.h>
#include <math.h>

int main() {
    double x = 4.49;
    printf("round: %.2lf\n", round(x));
    printf("ceil: %.2lf\n", ceil(x));       //round a floating-point number up to the nearest integer value.
    printf("floor: %.2lf\n", floor(x));     //round a floating-point number down to the nearest integer value.
    printf("trunc: %.2lf\n", trunc(x));     // it truncates a floating-point number to an integer value by discarding the decimal portion of the number

    double y = -4.49;
    printf("round: %.2lf\n", round(y));
    printf("ceil: %.2lf\n", ceil(y));
    printf("floor: %.2lf\n", floor(y));
    printf("trunc: %.2lf\n", trunc(y));
    return 0;
}