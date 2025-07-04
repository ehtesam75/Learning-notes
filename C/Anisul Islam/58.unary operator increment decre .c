#include <stdio.h>

int main() {
    int x = 10;
    int result = -x; //its an example of unary minus
    printf("%d\n", result);
    //same with unary plus

    int y = x++;
    printf("%d\n", x);
    printf("%d\n", y);

    int a = 10;
    int z = ++a;
    printf("%d\n", a);
    printf("%d\n", z);


    int k = 30;
    printf("\n\n");
    printf("%d\n", k++);
    printf("%d\n", k);
    printf("%d\n", ++k);
    printf("%d\n", k);
    printf("%d\n", k--);
    printf("%d\n", --k);

    return 0;
}

//increment (++) and decrement (--) are also unary operator



