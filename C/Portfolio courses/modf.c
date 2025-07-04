#include <stdio.h>
#include <math.h>

int main() {
    double x = 2.75;
    double fractional_part = 0;
    double integral_part = 0;   //it can also be called by "integer_part"

    fractional_part = modf(x, &integral_part);    //in c, a fucntion can return only one value by default. so The modf() function here returns the fractional part of the argument x, and stores the integral part of x in the memory location pointed to by integral_part. The integral part is stored as a double precision floating-point value.

    printf("frac: %f\n", fractional_part);
    printf("integral: %f\n", integral_part);
    return 0;
}