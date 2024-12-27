/*
sring is a character array..and array is a pointer..so string is a pointer too

char *str = "hello world";
(here hello world will store in the memory and str would be pointing towards the 0th index/address of str [&str[0] = h]...)

if we use pointer to declare string, we can reinitialize string with a new value...UNLIKE if we use pointer 
*/

#include <stdio.h>

int main() {
    char *str = "aleen";
    puts(str);
    str = "ehtesam";   //see? string re-initilized
    puts(str);

    char str1[] = "jamal";
    puts(str1);
    //str1 = "modhu";     //can NOT re initilized, its showing error..thats why its commented out
    puts(str1);
    return 0;
}