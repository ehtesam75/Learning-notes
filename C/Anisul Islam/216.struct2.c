#include <stdio.h>
struct student{
    char name[40];
    int age;
};

int main() {
    //student related
    struct student no[2];
    for(int i =0; i<=1; i++){
        printf("Enter info for person %d\n", i+1);
        printf("name: ");
        fflush(stdin); //its used cuz of using fgets/gets..try commenting it and run the program, then u wouldn't be able to scan the 2nd name.... donno how it works tho..theres altrenative method too (more on chatgpt)
        gets(no[i].name); 
        printf("age: ");
        scanf("%d", &no[i].age);     
    }
    printf("%s\t%d\n", no[0].name, no[1].age);

    // person
    struct person{
        int age;
        int salaray;
    };

    struct person number1={23,34343};
    printf("%d\n", number1.salaray); 

    struct person number2, number3;
    number2 = number1;
    printf("%d\n", number2.age);  


    return 0;
}