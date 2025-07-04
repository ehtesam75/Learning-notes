#define NDEBUG  //sometimes it get frustrated to see our progarm  terminate cuz of assertion fail....this constant(ndebug) will turn off all the assertion the program has; comment it out to see assertion error


#include <stdio.h>
#include <assert.h>     //contains assert function
#include <stdlib.h>     //for dynamicly mem allocation
#include <string.h>


void print_string(char *str);

int main() {
    printf("line 1\n");
    assert(2 == 2);
    printf("line 3\n");
    // assert(2 == 3);
    // printf("line 4\n");      //commented it out, cuz it just terminate the program


    //experinment (use of assert):
    char *string = malloc(sizeof(char) * 10);
    strcpy(string, "abc");

    //print_string(string);

    //char *bad_string;       //portfolio course used this line; not working in my vs code, works on replit tho
    char *bad_string = NULL;  //wrote this line using chatgpt to see assertion error in my vs code  
    print_string(bad_string);

    return 0;
}

void print_string(char *str){
    assert(str != NULL);            
    printf("@@@%s@@@\n", str);          //Before printing the string, the assert function is used to check that the str pointer is not null. If the str pointer is null (i.e., it points to a null character or it is uninitialized), assert will fail and terminate the program with an error message. This ensures that the str pointer is valid and prevents potential crashes or undefined behavior that may occur if a null pointer is dereferenced. If the str pointer is not null, the printf function is called to print the string with a prefix "@@@" and suffix "@@@". Overall, this function ensures that the str pointer is not null before printing the string, which can help prevent crashes and undefined behavior caused by dereferencing a null pointer.
}

/*
 The assert() function is used to test for logical conditions that are expected to be true during program execution. If the condition is false, the assert() function will terminate the program with an error message. If the expression is true, the assert() function does nothing and the program continues executing normally.


 assert() tell us whats going wrong, where is it going wrong (line number)..so we can debug our code using assert(). we can include checks like this (assert(2 == 3)), and when it fails we can then find out what went wrong, and where the error occured
*/