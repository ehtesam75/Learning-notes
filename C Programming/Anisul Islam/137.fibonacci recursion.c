#include <stdio.h>
int fibonacci(int n){
    if(n ==1 || n ==2){
        if(n == 1){
            return 0;
        } else{
            return 1;
        }
    }
    
    return fibonacci(n-1) + fibonacci(n-2);

}
int main() {
    int x = 8;
    for(int i = 1; i<=x; i++){
        printf("%d\t", fibonacci(i));
    }
    return 0;
}

//hw: write a program for lucas series...its the same as fibonacci series. the only differnece is it starts with 2, 1. the rest are same as fibonacci