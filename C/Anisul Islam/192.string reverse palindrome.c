#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "nahid";
    strrev(str);
    printf("%s\n",str);
    
    //without using it
    char str1[] ="madam";
    char str_new[100];
    int i=0, len=0;

    while(str1[i]!=0){
        len++;
        i++;
    }

    for(int j =len-1, i=0; j>=0; j--, i++){
        str_new[i] = str1[j];
    }
    str_new[len] = '\0'; // Terminate str_new with a null character
    

    printf("Reversed string: %s\n", str_new);
    int d = strcmp(str_new, str1);
    if(d== 0){
        printf("its palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}