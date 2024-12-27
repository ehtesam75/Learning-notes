#include <stdio.h>

int main() {
    int i =1;

    print:  //level
        printf("%d\n", i);
        i++;

    if(i<5)
        goto print;   //level is called
    return 0;
}