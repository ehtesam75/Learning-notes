#include <stdio.h>
#include <stdarg.h>

int max(int num_args, ...);

int main(){
    int store = max(3, 434,22, 98);
    printf("%d\n", store);
    return 0;
}

int max(int num_args, ...){
    va_list arguments;
    va_start(arguments, num_args);
    int max = 0;
    
    for(int i =0; i<num_args; i++){
        int x = va_arg(arguments, int);
        if(i==0)
            max = x;
        else if(x>max)
            max = x;
    }
    return max;
}
