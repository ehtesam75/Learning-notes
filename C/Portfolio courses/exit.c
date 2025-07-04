#include <stdio.h>
#include <stdlib.h>      //exit is under stdlib.h

void exit_test();
int main() {
    printf("hi\n");
    exit_test();

    return 0;
}

void exit_test(){
    printf("exit in the func");
    exit(EXIT_SUCCESS);   //it will work like exit(0); or i could use exit_failure or exit(1)
    printf("below the exit func");
}

//exit can work on other fuction than main. in the contrary return 0 only used in main function