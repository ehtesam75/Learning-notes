#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("text.txt", "w");
    int n = 50;
    int i;
    for(i =0; i<=n; i++){
        if(i%2 != 0){
            fprintf(ptr, "%d\t", i);
            
        }
    }
    fclose(ptr);
    return 0;
}