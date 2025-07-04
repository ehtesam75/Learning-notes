#include<stdio.h>
#include<string.h>
struct regular_student{
    char name[40];
    float cgpa;
};

struct student{
    char name[50];
    int class_roll;
    float cgpa;
};

struct extra_student{
    char name[50];
    float cgpa;
    int marks;
    char course[50];
};

struct teacher{
    char name[50];
    char position[50];
    int salary;
};

typedef struct other_staff{
    char name[50];
    char position[50];
    int salary;
}os;

struct student s1 = {"Aleen", 3, 3.9};
//s2 is inside the main fucntion 
struct student s3 = {"rahim", 9, 2.2};

struct extra_student no[] = {
        {"aleen", 3.46, 89, "cse"},
        {"nazmul", 3.99, 68, "bba"},
        {"sumon", 3.55, 78, "cse"},
        {"karim", 2.99, 39, "bba"},
        {"rahim", 1.23, 32, "law"}
    };
    int number_student = sizeof(no)/sizeof(no[0]);

struct teacher number [2] ={{"nazrul", "assit. prof", 50000}, {"kamal", "Lacturar", 70000} };

void initialize_staff(os *st, char *name, char *position, int salary){           // here 'os' stands for "struct other_staff"
    strcpy((*st).name, name);
    strcpy(st->position, position);
    st->salary = salary;
}

int main(){

//*****regular_student
    struct regular_student CSE[2] = {0};    //It's a good practice to initialize all variables to a default value before using them, but it's not compulsory. i could even write "...CSE[2];"" 
    for(int i = 0; i<2; i++){
        printf("Enter the name of regular student %d : ", i+1);
        fgets(CSE[i].name, sizeof(CSE[i].name), stdin);  //its a good practise to use fgets instead of scanf
        printf("Enter the cgpa of regular student %d : ", i+1);
        scanf("%f",&CSE[i].cgpa );
        getchar();                      // consume the newline character in the input buffer
        printf("\n");             
    } 

    for(int i = 0; i<2; i++){
        printf("Name: %s\n", CSE[i].name);
        printf("cgpa: %f\n", CSE[i].cgpa);
    }

//******student
    struct student s2;
    strcpy(s2.name, "karim");
    s2.class_roll = 12;
    s2.cgpa = 1.9;

    printf("student 3 cgpa: %f\n", s3.cgpa);
    printf("student 2 name: %s\n", s2.name);

//******extra_student
printf("%-20s%-10s%-10s%-10s\n\n", "Name","cgpa","Marks","course");
        for(int i = 0; i<number_student; i++){
            printf("%-20s %-10.2f %-10d %-10s\n", no[i].name, no[i].cgpa, no[i].marks, no[i].course);
        }

//*****teacher
    printf("teacher 1 name: %s\n", number->name);
    printf("teacher 1 salary: %d\n", (*number).salary); 
    printf("teacher 1 position: %s\n", number[0].position);
    
    printf("teacher 2 name: %s\n", (number+1)->name);
    printf("teacher 2 salary: %d\n", number[1].salary);
    printf("teacher 2 position: %s\n", number[1].position);

//*****staff
    os number1, number2, number3;                        // here 'os' stands for "struct other_staff"
    initialize_staff(&number1, "shah alam", "assis staff", 3000);
    initialize_staff(&number2, "rasid", "genaral staff", 4000);
    initialize_staff(&number3, "boktiar", "extra staff", 2000);
    printf("staff 1 name: %s\n", number1.name);
    printf("staff 3 salary: %d\n", number3.salary);
    printf("staff 2 position: %s\n", number2.position);

    return 0;
}


