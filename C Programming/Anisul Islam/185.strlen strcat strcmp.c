#include <stdio.h>
#include <string.h>
int main() {
    //strlen
    char name[34] ="alenn go";
    int len = strlen(name);
    printf("%d", len);

    //without strlen
    int count = 0;
    for(int i = 0; name[i]!=0; i++){
        count ++;
    }
    printf("\n%d", count);

    //strcpy
    char name_agian[40];
    strcpy(name_agian, name);
    printf("\n%s\n", name_agian);

    // //strcmp
    char new[30] = "aleen";
    int compare = strcmp(new, name);
    printf("%d\n", compare);

    //strcat
    strcat(new, name);
    printf("%s\n", new);
    return 0;

    //concatenation withiout strcat
    char str1[100] = "ehtesam";
    char str2[] = "liel";
    int k = 0, length =0;
    while(str1[k] != '\0'){
        k++;
        length++;
    }

    int m =0;
    while(str2[m] != '\0'){
        str1[length+m] = str2[m];
        m++;
    }
    printf("%s\n", str1);
    //no output is shown for this part..donno why (but it works just fine in a separate c file)
}