#include <stdio.h>
#include <math.h>

int main() {
    double a=2, b=-7, c=2, d, x1, x2;
    d = b*b-4*a*c;
    x1 = (-b- sqrt(d))/(2*a);
    x2 = (-b+ sqrt(d))/(2*a);
 
    if(d<0){
        printf("Theres no soluation for this quardratic equa");
    }else{
         printf("1st value of x is : %lf\n", x1);
         printf("2nd value of x is : %lf", x2);
    }
    return 0;
}