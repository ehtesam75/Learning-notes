#include <stdio.h>

int main() {
    float cel, far;
    cel = 37.6;
    far = cel * ((float)9/5) + 32;  //or, far = (1.8*cel)+32
    printf("in farenheit : %f", far);
    return 0;
}