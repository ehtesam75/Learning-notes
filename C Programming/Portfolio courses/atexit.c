//atexit() is a C library function that is used to register functions that will be called when a program is terminated normally using the exit() function.

#include <stdio.h>
#include <stdlib.h>     //contains atexit
#include <time.h>

time_t start, end;

void cleanup();

int main() {

    time(&start);       //time() function takes a pointer to a time_t variable as an argument, and returns the current time as a time_t value (1)

    atexit(cleanup);        //yes, we can use function as argument
    printf("do some work\n");       //output: why it got printed before atexit? (2)

    int value = 0;
    printf("Enter: ");
    scanf("%d", &value);        //in terminal, wait a bit to enter a value to get a high execusion time
    printf("value: %d\n", value);
    exit(0);
}

void cleanup(){
    time(&end);
    double difference = difftime(end, start);
    printf("Execustion time: %f\n", difference);
}


/*

1.  & operator is called the "address-of" operator, and it is used to obtain the memory address of a variable. When applied to a variable, the & operator returns a pointer to that variable. In this case, the &start expression evaluates to a pointer to the start variable, which is then passed as an argument to the time() function.


2. (in below "cleaning up.." and "progaram runing.." is used in char gpt code...use this idea in this code)
The reason "Cleaning up..." is printed after "Program running..." is because printf() is called immediately after atexit(). This means that "Program running..." is printed to the console before the cleanup() function is registered with atexit(). When the program exits using exit() at the end of main(), the registered cleanup() function is called by atexit(). At this point, "Cleaning up..." is printed to the console.
So, to summarize, the order of execution in your program is as follows:
atexit(cleanup) registers the cleanup() function with atexit().
printf("Program running...\n") is executed and "Program running..." is printed to the console.
exit(0) is called, causing the program to exit.
cleanup() is called by atexit(), causing "Cleaning up..." to be printed to the console.
*/