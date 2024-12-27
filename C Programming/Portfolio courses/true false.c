#include <stdio.h>
#include <stdbool.h>        //includes bool datatype

int main() {
    if(45) printf("true\n");
    else printf("false\n");

    int x;
    if(x = 0) printf("true\n");     //i don't necessarily need to add 'x=' to get a false output
    else printf("false\n");


    bool y = true;
    printf("x: %d\n", y);
    if(y) printf("true\n");
    else printf("false\n");

    bool z = -49;     //it will forcefully convert -49 to 1 (true either way)
    printf("z: %d\n", z);

    return 0;
}
/*
false in c: 0
true in c: anydigit that not 0
*/