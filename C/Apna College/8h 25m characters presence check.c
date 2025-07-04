#include <stdio.h>

void check_char(char arr[], char ch);
int main() {
    char arr[] = "ami banglay koth koi";
    check_char(arr, 'z');
    return 0;
}

void check_char(char arr[], char ch){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == ch){
            printf("Charcater is present!\n");
            return;
        }
    }
            printf("Character is not present\n");
}