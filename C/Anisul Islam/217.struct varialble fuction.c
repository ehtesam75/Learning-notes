#include <stdio.h>
#include <string.h>
    struct person{
        char name[40];
        int age;
    };

    void display(struct person x){
    printf("%s\n", x.name);
    printf("%d\n", x.age);
    }

int main() {
    struct person number1, number2;
    strcpy(number1.name, "aleen");
    number1.age = 34;
    display(number1);
    return 0;
}