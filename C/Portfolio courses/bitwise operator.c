#include <stdio.h>

int main() {
    /*  9 = 0000 1001   */
    unsigned int x = 9;
    unsigned int y = 8;
    unsigned int z = 24;

    unsigned int r;

    r = x<<2;   //"<<(shift-left operator)" will shift the binary digites of x over 2 digit to the left...and after that it will look like " 0010 0100 ", which represents 36.
    printf("x<<2: %d\n", r);


    r = x>>2;
    printf("x>>2: %d\n", r);    //">>(shift-right operator)" will shift it to the right by 2 digits...0000 0010, which represents 2  (01 will removed) 


    r = ~ x;        //"~" one's compliment operator
    printf("~x: %d\n", r);      //will flip the number; 1111 0110, which represents -10


    r = x & y;
    /*
    x = 0000 1001   (0+9)
    y = 0000 1000
    r = 0000 1000   (0+8)
    */
    printf("x & y: %d\n", r);


    r = x | z;
    /*
    x = 0000 1001
    z = 0001 1000   (16+8)
    r = 0001 1001   (16+9)
    */
    printf("x | y: %d\n", r);


    r = x ^ z;      //xor operator
    /*
    x = 0000 1001
    z = 0001 1000   (16+8)
    r = 0001 0001   //if both of the digits r same, then 0, if not, 1.
    */
    printf("x ^ y: %d\n", r);

    return 0;
}