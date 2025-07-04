#include <stdio.h>

int main() {
        printf("Enter an operator (+, -, *, /):");
    char oper;
    scanf("%c", &oper);
    printf("Enter two numbers:");
    double a, b;
    scanf("%lf %lf", &a, &b);

    switch(oper){
        case '+':
            printf("%lf + %lf = %.2lf \n", a, b, a + b);
            break;
        case '-':
            printf("%lf - %lf = %.2lf\n", a, b, a-b);
            break;
        case '*':
            printf("%lf * %lf = %.2lf \n", a, b, a * b);
            break;
        case '/':
            printf("%lf / %lf = %.2lf\n", a, b, a/b);
            break;
        default:
            printf("Not a valid input !\n");
    }
    return 0;
}