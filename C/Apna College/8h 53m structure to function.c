#include <stdio.h>

struct student {
    char name[40];
    float cgpa;
};

void printInfo(struct student no);
int main() {

    struct student s1;
    s1.cgpa = 3.2;
    printInfo(s1);
    printf("%f\n", s1.cgpa);  //output is 3.2, not 2.5; it proves that structure pass as call by value
    return 0;
}

void printInfo(struct student no){
    printf("%f\n", no.cgpa);
    no.cgpa = 2.5;   
}