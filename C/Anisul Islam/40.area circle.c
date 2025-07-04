#include <stdio.h>
#include <math.h>

int main() {
    float radius = 7.22, area;
    area = M_PI * radius *radius; //M_PI is under math.h header file
    printf("area is %f", area);
    return 0;
}