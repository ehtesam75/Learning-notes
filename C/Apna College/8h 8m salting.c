#include <stdio.h>
#include <string.h>

void salting(char arr[]);

int main() {
    char password[50];
    printf("Enter a password: ");
    scanf("%s", password);
    salting(password);
    
    return 0;
}

void salting(char arr[]){
    char salt[] = "123";
    char new_password[100];
    strcpy(new_password, arr);
    strcat(new_password, salt);
    puts(new_password);

}