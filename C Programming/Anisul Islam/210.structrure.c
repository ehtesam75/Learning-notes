/*
custom data type:
structure, union, enum, typedef
*/

#include <stdio.h>

//global structure
struct student{
    char name[50];
    int age;
    int salary;
};
int main() {

struct person{      // local structure; this structure can't be used outside of main fucntion
    char name[34];
    int age;
};
    struct student s1, s2;
    s1.age =27;
    s2.salary = 30000;
    printf("Salary of s2 %d\n", s2.salary);
    return 0;
}