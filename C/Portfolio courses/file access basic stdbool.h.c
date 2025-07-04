#include <stdbool.h>
#include <stdio.h>
//Using the stdbool.h header file makes it easier to write clear and readable code that uses boolean values

int main() {
    bool is_sunny = true;   //here true stands for 1
    bool is_raining = false;   //0
                    //true and false is under stdbool.h header file...using true and false instead of 1 and 0 makes code more readable
    
    if (is_sunny) {
        printf("It's a sunny day!\n");
    }
    if (!is_raining) {
        printf("It's not raining!\n");
    }

    int num = 4;

    while(true){    //true =  1; infinity loop

        printf("wow\n");
        if(num==2)
            break;
        num--;
    }


    FILE *ptr;
    ptr = fopen("new.txt", "r");
    int x;
    int line = 0; 
    int numbers[100];
    while(fscanf(ptr, "%d", &x) != EOF){
        numbers[line] = x;
        printf("%d\n", x);
        line++;
    }

    int sum = 0;
    for(int i= 0; i<line; i++){
        sum += numbers[i];
    }
        printf("sum is : %d\n", sum);
        printf("avarage is : %f\n", (float)sum/line);
   
    fclose(ptr);
    
    return 0;
}


