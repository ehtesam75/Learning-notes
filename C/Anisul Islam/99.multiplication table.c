#include <stdio.h>

int main() {
    while(1){   //this is keep the output dialog box forever (and will keep asking for inputing a number) utill i close it

    int ml_table; 
    printf("Enter a number: ");
    
    scanf("%d", &ml_table);
    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", ml_table, i , ml_table * i);
    }
    }
    return 0;
}