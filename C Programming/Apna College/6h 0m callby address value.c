#include <stdio.h>
void square_address(int *n);
void square_value(int x);

int main() {
    int number = 20;
    int number_2 = 20;
    square_address(&number);
    printf("number_address : %d\n", number);
    square_value(number_2);         //here we only passed a copy of original "number_2" variable
    printf("number_value : %d\n", number_2);
    return 0;
}

void square_address(int *n){
    *n = (*n) * (*n);
    printf("square : %d\n", *n);
}

void square_value(int x){
    x = x *x;
    printf("square (call by value): %d\n", x);
}

/*
brief explaination of some parts (memory):

variable name       :   number            n            
value at variable   :   20                2010            
address of varibale :   2010 (say)        2012 (address of n; it doesn't need here tho)   

so (*n) holds the address of 'number'..so when i wrote, (*n) * (*n)...it's directly accessing the value at 'number' (20)..after multipling them we then stored the result into *n..that means we changed the value directly into the address..
*/