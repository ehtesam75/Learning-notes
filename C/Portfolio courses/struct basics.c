#include <stdio.h>
#include<stdlib.h>
struct student
{
    char name[40];
    int roll;
} s1, s2, s3, s4; // its an another way of declaring ....

struct data   //this struct holds not an array, it actually holds a a pointer dynamically allocated int array
{
    int *array;  //its a pointer to an array
};

int main()
{
    s2.roll = 5;
    struct student s1 = {"jot", 7};
    struct student s3 = {.name = "aleen", .roll = 99};
    printf("%d\n", s2.roll);
    printf("%s\n", s1.name);
    printf("%d\n", s3.roll);

    s4 = s3;   //memory copy will happen..and all of s3 values will be copied to s4
    printf("%d\n", s4.roll);

    struct data x;
    struct data y;

    x.array = malloc(sizeof(int)*5);
    y.array = malloc (sizeof(int)*5);

    x.array[0] = 1;
    x.array[1] = 2;
    x.array[2] = 3;
    x.array[3] = 4;
    x.array[4] = 5;

    y.array[0] = 8;
    y.array[1] = 8;
    y.array[2] = 8;
    y.array[3] = 8;
    y.array[4] = 8;

    x = y;
    for(int i= 0; i<5;i++)
        printf("x.array[%d] = %d\n", i, x.array[i]);

    x.array[0] = 6;
        printf("\ny.array[%d] = %d\n", 0, y.array[0]);  //see the output?? its the same as x.array[0]...
/*
After x = y is executed, which copies the values of the pointer y.array to the pointer x.array. So now both x.array and y.array point to the same memory location, which contains integer values of 8.
So when the value of the first element of x.array is changed to 6 using the statement x.array[0] = 6;, the same memory location is modified, and the value of the first element of y.array also becomes 6.
Therefore, when the value of y.array[0] is printed using the printf() function, it outputs the updated value of the first element of the y.array array, which is 6.

*/
    return 0;
}