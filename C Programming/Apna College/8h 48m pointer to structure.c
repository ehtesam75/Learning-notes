/*
struct student s1;
s1.name = "aleen";    //WRONG method....cuz i'm trying to assign a string literal to a character pointer in the struct definition

struct student s1;
strcpy(s1.name, "aleen")  //correct


POINTER TO STRUCTURE:
struct student s1;
struct student *ptr;
ptr = &s1;

*/
#include <stdio.h>
struct student{
    char name[40];
    int roll;
    float cgpa;
};

int main() {
    
    struct student s3 = {"aleen", 10, 3.99};
    printf("student 3 cgpa: %f\n", s3.cgpa);

    struct student *ptr;
    ptr = &s3;
    printf("student 3 cgpa: %f\n", (*ptr).cgpa);
    printf("student 3 roll: %d\n", ptr->roll);  //different method
    return 0;
}