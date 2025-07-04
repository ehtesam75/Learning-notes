#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("The value of argc : %d\n", argc);

    if(argc != 4){
        printf("error! Enter only two arguments\n");
        exit(-1);  //exit 0 for succesful result, any value other than 0 means error occurred, -1 for indicating specific type of error and 1 for
    }

    for(int i = 0; i<argc; i++){
        printf("argument at index number %d has a value of %s\n", i, argv[i]);  //at index 0, it has the file name....for output type ".\68_command_line_argu.exe argument2 argumet3 ... ..." 
    }
    
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);  //converting string to integer using atoi, which is under stdlib.h 
    num2 = atoi(argv[3]);

    printf("%s\n", operation);
    printf("%d\n", num1);
    printf("%d\n", num2);


    if(strcmp(operation, "add") == 0)
        printf("sum is :%d", num1 + num2);
    else if(strcmp(operation, "multiply") == 0)
        printf("multiplication is :%d", num1 * num2);
    else if(strcmp(operation, "divide") == 0)
        printf("division is :%d", num1 / num2);
    else if(strcmp(operation, "substrate") == 0)
        printf("substrate is :%d", num1 - num2);
    

    return 0;
}