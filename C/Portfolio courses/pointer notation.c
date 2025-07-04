//notataion here means symbol or something like this
#include <stdio.h>

void print(int *a);

int main() {
    int a[3] = {1, 2, 3};
    int *b;  //pointer to integer

    b = a; //array can often be treated like pointer and vice versa..here 'a' decay to a pointer..the memory address of a will be stored in b....so the value will be copied too

    printf("*b: %d\n", *b);    // here we're using pointer notation
    printf("*a: %d\n", *a);       // here we're again using pointer notation
    printf("*(b+1): %d\n", *(b+1));   //its an example of pointer arithmetic

    printf("%p\n", a); 
    printf("%p\n", b); 
    for(int i = 0; i<3; i++){
        printf("%d\t", b[i]);          //here using array notation with pointer
    }
    printf("\n");

    b++;    //pointer arithmetic
    printf("*b: %d\n", *b);
    printf("*(b+1): %d\n", *(b+1)); 

    print(a+1);   //pointer arithmetic

    int c[3] = {4, 5, 6};
    // a = c     [commented out; cuz not legit; cuz i can NOT asign a array to an an array, but can asign to a pointer]

    return 0;
}

void print(int *a){
    printf("a[1] = %d\n", a[1]);
}