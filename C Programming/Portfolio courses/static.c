#include <stdio.h>

void staticv();

int main() {
    staticv();
    staticv();
    staticv();

    return 0;
}

void staticv(){
    int count=1;
    count ++;
    printf("%d\n", count);
}

//When used with a variable declared inside a function, static modifies the storage duration of the variable, making it persistent between function calls. In other words, the variable retains its value between function calls, unlike non-static local variables which are created and destroyed every time the function is called. Additionally, static variables are only visible within the block of code in which they are defined, so they cannot be accessed from outside the function.

//learn about extern keyword