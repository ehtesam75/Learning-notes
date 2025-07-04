#include <stdio.h>
#include<string.h>

int main() {
    char str1[] = "nahid";
    char str2[] = "rahman";
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1,str2);
    strcpy(str2, temp);

    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}