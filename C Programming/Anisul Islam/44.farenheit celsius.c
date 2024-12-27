#include <stdio.h>

int main() {
    float cel , far = 98.3;
    cel = (far - 32)* (float)5/9; //cel = (far - 32)/1.8
    printf("in celsius : %f", cel);
    return 0;
}