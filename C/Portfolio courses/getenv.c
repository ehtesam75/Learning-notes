#include <stdio.h>
#include <stdlib.h>     //contains getenv

int main() {
    char* path = getenv("PATH");
    if (path != NULL) {
        printf("The value of PATH is: %s\n", path);
    } else {
        printf("The PATH environment variable is not set.\n");
    }
    return 0;
}

/*
getenv() is a standard library function that is used to retrieve the value of an environment variable.
An environment variable is a variable that is set in the environment in which a process runs. It can contain information such as system paths, usernames, and other configuration parameters.
The getenv() function takes a string argument representing the name of the environment variable and returns a pointer to a null-terminated string containing the value of the variable. If the specified environment variable does not exist, the function returns a NULL pointer.



ENVIRONMENT VARIABLE: An environment variable is a variable that is set in the environment in which a process runs. It is a named value that can contain information about the operating system, user preferences, system paths, and other configuration parameters. 
Environment variables are used by programs to determine how to behave, such as where to store temporary files, what directories to search for executables, and what language to use for displaying messages. 
In most operating systems, environment variables are managed by the shell or command prompt that launches a program. The shell sets a default set of environment variables when it starts, and programs can modify or add to these variables as needed.
In programming, environment variables can be accessed and modified using standard library functions such as `getenv()` and `setenv()` IN C.

*/