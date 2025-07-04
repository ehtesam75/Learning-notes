#include <stdio.h>
typedef struct book{
    int price;
    float income;
}bk;   

struct student{
    int roll;
    float cgpa;
};
int main() {
    typedef char new_name;
    new_name c[34] = "aleen";
    printf("%s\n", c);

    typedef struct student stud;
    stud s1 = {3, 4.2};

    bk no1 = {330, 22.2};

    printf("%d\n", no1.price);
    printf("%f\n", s1.cgpa);

    return 0;
}