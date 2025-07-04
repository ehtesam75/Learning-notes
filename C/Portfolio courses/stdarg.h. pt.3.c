#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print(char *placeholders, ...);

int main() {
    print("ddff", 4, 8, 2.9, 1.1);
    return 0;
}

void print(char *placeholders, ...){
    int num_arg = strlen(placeholders);
    va_list argument;
    va_start(argument, placeholders);

    for(int i = 0; i<num_arg; i++){
        if(placeholders[i] == 'd'){
            int x = va_arg(argument, int);
            printf("%d\n", x);
        }
        else if(placeholders[i]=='f'){
            double x = va_arg(argument, double);
            printf("%.2f\n", x);
        }
        
    }

}