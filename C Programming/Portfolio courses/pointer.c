#include <stdio.h>
#include <stdlib.h>

int main() {
    int a =0;
    scanf("%d", &a);   //ever wonder how it works?? cuz i already set the value of a to 0 in the begening. the answer to the origianl ques is:  in scanf, we're using '&' (acessing the memory address of 'a')..so any change will directly happen to the memory address of 'a' varialbe
    printf("%d", a);

    int *n;
    n = malloc(5 * sizeof(int));  // i can even cast the value to int, using (int*)..both r accurate
    printf("\nn = %p\n", n);
    for(int i =0; i<5; i++){
        n[i] = i;
        printf("%d\n", n[i]);
    }
    free(n);
    
    return 0;
}