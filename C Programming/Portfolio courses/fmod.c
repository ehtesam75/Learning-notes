#include <stdio.h>
#include <math.h>

int main() {
    double num = 10.3;
    double denom =3;
    double result = fmod(num, denom);
    printf("remainder: %lf\n", result);

    return 0;
}

/*
The fmod() function in C is used to compute the remainder of a division operation between two floating-point numbers. The fmod() function takes two arguments: a dividend (the number being divided) and a divisor (the number the dividend is being divided by). It returns the remainder of the division operation as a floating-point number.

with this function we can now get ramainder in floating value
*/