#include <stdio.h>
#include <stdlib.h>     //contains atoi, atof, atol

int main() {
    char *double_test = "98.2334";
    char *int_test = "21";
    char *long_int_test = "211258211";

    int int_result = atoi(int_test);
    double double_result = atof(double_test);
    long int long_int_result = atol(long_int_test);

    printf("int: %d\n", int_result);
    printf("double: %f\n", double_result);
    printf("long int: %ld\n", long_int_result);

    return 0;
}