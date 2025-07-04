#include <stdio.h>

int main() {
    int num1, num2, larger;
    num1 = 334;
    num2 = 733;
    
    larger = (num1>num2) ? num1 : num2;
    printf("Larger is %d\n", larger);
    return 0;
}