#include <stdio.h>
void address(int n);

int main() {
    int n =4;
    printf("%p\n", &n);
    address(4);
    return 0;
}

void address(int n){
    printf("%p\n", &n);
}

//check out the outputs...these aren't the same. its becuz we pass a copy of variable 'n' to address fucntion...so that copied n will have a differnt address than the original 'n' variable's address