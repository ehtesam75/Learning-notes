#include <stdio.h>
struct imaginary{
    int real;
    int imag;
};

int main() {
    struct imaginary no1 = {4, 5};
    struct imaginary *ptr = &no1;
    printf("Imagianary part is %d\n", ptr->imag);
    printf("Real part is %d\n", ptr->real);
        
    return 0;
}

