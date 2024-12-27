#include <stdio.h>
#include <ctype.h>

int main()
{   
    //isalnum
    if (isalnum('a'))    //cheacking wether 'a' is alhpa numeric (a-z, A-Z, 1-9) or not
        printf("alphanumeric\n");
    
    //isalpha
    if(isalpha('s'))            //cheacking wether 's' is alhpabet (a-z, A-Z) or not
        printf("alphabet\n");

    //iscntrl
    if(iscntrl('\n'))            //cheacking wether '\n' is printable or not
        printf("control character (is not printable\n");

    //isdigit
    if(isdigit('7'))            //cheacking wether '7' is a digit or not
        printf("digit\n");

    //isgraph
    if(isgraph(' '))            //cheacking wether ' ' has any graphycal reprasentation or not
        printf("graphically  representable\n");     
    else
        printf("graphically  not representable\n");

    //islower
    if(islower('k'))            //cheacking wether 'k' is in lower case or not
        printf("lower case letter\n");    

    //isupper
    if(isupper('U'))            //cheacking wether 'U' is in UPPER case or not
        printf("upper case letter\n");    
    
    //isprint
    if(isprint(' '))            //cheacking wether ' ' is printable or not  ['\n' is not printable]
        printf("printable\n");  
    
    //ispunct
    if(ispunct(';'))            //cheacking wether ';' is in puncuation char or not
        printf("puncuation char\n");  

    //isspace
    if(isspace(' '))            //can also include other whitespace char ('\t', '\n'...)
        printf("whitespace char\n");  

    //isxdigit
    if(isxdigit('K'))            //checking whether its a hexa decimal (1-9, a-f, A-F) or not
        printf("hexa deciamal\n");  

    //tolower
    char c = tolower('A');
    printf("%c\n", c);

    //toupper
    char t = toupper('a');
    printf("%c\n", t);


    return 0;
}