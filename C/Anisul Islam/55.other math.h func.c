#include <stdio.h>
#include <math.h>

int main() {
    printf("%lf\n", round(-3.51));
    printf("%lf\n", trunc(-3.51)); //this will remove the floating value

    printf("%lf\n", ceil(3.51)); //this will return returns the smallest integer that is greater than or equal to the argument.
    printf("%lf\n", floor(3.51)); //this will return the largest integer that is less than or equal to the argument
    printf("%lf\n", ceil(-3.51));
    printf("%lf\n", floor(-3.51));

    // ceil, floor, round , trunc function take a single argument of type double or float
    return 0;
}