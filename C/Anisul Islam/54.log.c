#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    printf("%lf\n", log(10.5));
    printf("%lf\n", log10(5));
    printf("%lf\n", exp(1));
    
    double degree = 60, radians;
    radians = degree * (M_PI /180); //M_PI is under math.h
    printf("%lf", sin(radians));

    //btw i can't write like this : printf("%lf", sin(60))....cuz here 60 would mean in radian, not in degree. so we need to convert 60 in radian. then input in the sin function


    //log , log10, sin , exp take a single argumrnt of float or double

    return 0;
}