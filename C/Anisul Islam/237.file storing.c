#include <stdio.h>
struct student {
    char name[100];
    int age;
    int phone_num;
};
int main() {
    FILE *file;
    file = fopen("test2.txt", "w");
    struct student s[3];
    for(int i = 0; i<3; i++){
        printf("Enter info for student %d \n", i+1);
        printf("Name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Phone Number: ");
        scanf("%d", &s[i].phone_num);
    }
        fprintf(file, "Name\t\tAge\t\tPhone Number\n");
        fprintf(file, "...........\t\t.....\t\t..............\n");
    for(int i =0; i<3; i++){
        fprintf(file, "%s\t\t%d\t\t%d\n", s[i].name, s[i].age,s[i].phone_num);
    }
    fclose(file);
    return 0;
}