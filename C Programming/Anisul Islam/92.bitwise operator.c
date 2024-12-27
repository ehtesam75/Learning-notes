//bitwise operator only deals with integer, not floating vlaue

/*
& = bitwise and
| = bitwise or
^ = bitwise ExOR
>> = right shift
<< = left shift
~ = bitwise not
*/

#include <stdio.h>

int main() {
    int a = 32, b = 12, c; //bitwise operator only work with binary vlaue
    // 32    = 00100000
    // 12    = 00001100
    
    // 32&12 = 00000000  ('bitwise and' = multiply)
    //32||12 = 00101100  ('bitwise or' = sum; 00101100 in deciaml is 44)
    //32^12  = 00101100  ('same input = output 0)
    c = a&b; 
    printf("a&b = %d\n", c); // but output will be in decimal, not in binary
    c = a|b;
    printf("a|b = %d\n", c);
    c = a^b;
    printf("a^b = %d\n", c);

    return 0;
}