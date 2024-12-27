#include <stdio.h>
#include <stdlib.h>     //includes abort

void cleanup();

int main() {
    atexit(cleanup);
    printf("hello world\n");
    abort();
    return 0;
}

void cleanup(){
    printf("cleaning up.....");     //it didn't get printed..cuz i use abort() to terminate the program
}

/*
The abort() function is typically used when a program encounters a fatal error that it cannot recover from

DIFFERNECE BETWEEN ABORT, RETURN , EXIT:

abort() immediately terminates the program without any cleanup.
return is used to return a value from a function to its caller and causes the function to exit.
exit() gracefully terminates the program and allows any registered cleanup functions to be executed before termination, returning an integer value to the operating system to indicate the program's exit status.


*/