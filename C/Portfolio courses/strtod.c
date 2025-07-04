#include <stdio.h>
#include <stdlib.h>     //contains strtod

int main() {
    char string[] = "233.332 some text after the double value";
    char *ptr;
    double result;

    result = strtod(string, &ptr);      //The function returns the converted value of type double. If the string cannot be converted to a valid double, the function returns 0.0
    printf("double value: %f\n", result);
    printf("remaning portion: %s\n", ptr);

    //to learn more use of it, try chatgpt
    return 0;
}