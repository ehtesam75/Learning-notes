#include <stdio.h>
#include <stdarg.h>

void print_num(int num_args, ...);      // The ellipsis(...) is used to specify that the function can accept an arbitrary number of arguments of any type.

int main() {
    print_num(4, 3, 5, 3,1);
    return 0;
}

void print_num(int num_args, ...){
    va_list arguments;      //va_list is a veriable type, which is declared in stdarg.h. and "argument" is a variable name

    va_start(arguments, num_args);

    for(int i=0; i<num_args; i++){
        int x = va_arg(arguments, int);     //The va_arg macro returns the next argument from the list, converted to the specified type.
        printf("x: %d\n", x);
    }

    va_end(arguments);


}

/*

stdarg is a header file in C programming language that provides a way to pass a variable number of arguments to a function. It stands for "standard arguments" and is used in conjunction with stdarg.h header file.
The stdarg header file defines a set of macros that allow a function to accept an unspecified number of arguments. These arguments can be of any type and their number is determined at runtime. This is useful for functions like printf() and scanf() which can accept a variable number of arguments depending on the format string.
To use stdarg, you need to define a function with the ellipsis ... as the last parameter. Before the ellipsis, you must include a parameter of type va_list, which is a type that represents the list of arguments. The va_start macro initializes the list, the va_arg macro retrieves the next argument from the list, and the va_end macro ends the list

*/