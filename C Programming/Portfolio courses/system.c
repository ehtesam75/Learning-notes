#include <stdio.h>
#include <stdlib.h>

int main() {
    system("dir");      // the output of this program would be a list of the files and directories in the current working directory

    system("echo 'some content' > text.txt");       //This command uses the echo command to print the string "some content" to the console, and then redirects the output of the echo command to a file called "text.txt" using the > operator. This creates a new file or overwrites an existing file with the same name, and writes the output of the echo command to the file.
    system("type text.txt");        //type command is used to display the contents of a file on the console
    
    if(system("abc") !=0)       //if command is not valid, then func will return a non zero value
        printf("\nerror executing command\n");

    return 0;
}

/*
The system() function in C is used to execute a command in the shell. It takes a string argument representing the command to be executed, and returns an integer representing the exit status of the command.
Note that the system() function is a relatively low-level function that allows arbitrary shell commands to be executed. This means that it can be used to run potentially dangerous or malicious commands if not used properly. It is therefore important to validate and sanitize any user input before passing it to the system() function, and to use other, more specific functions where possible.
*/