/*
In C, a delimiter (short for "delimiter character") is a character that is used to separate or distinguish different parts of a string or a sequence of values.

For example, in a CSV (Comma Separated Values) file, commas are used as delimiters to separate different fields of data. In a string that represents a list of words, a space character can be used as a delimiter to separate each word.

C provides various functions that work with delimiters. For example, the strtok function is used to tokenize a string based on a delimiter. The scanf function can be used to read values from input using specified delimiters. The strchr and strrchr functions can be used to search for specific characters (which may also act as delimiters) within a string.

It is important to choose a delimiter that is not a part of the actual data, to avoid confusion or errors. For example, if a CSV file contains a comma within a field of data, it can be enclosed in double quotes to indicate that it is not a delimiter.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "this is the way.";  //here " " is delimiter (in general pov; but we can take differnet one)
    char d[] = " ";  //delimiter

    char *portion1 = strtok(s, d);
    printf("%s\n", portion1);

    char *portion2 = strtok(NULL, d);   //null will tell to look for the rest of previous string 
    printf("%s\n", portion2);

    char *portion3 = strtok(NULL, d);   
    printf("%s\n", portion3);

    char *portion4 = strtok(NULL, d);   
    printf("%s\n", portion4);

    char *fail = strtok(NULL, d);
    if(fail == NULL)
        printf("we're done\n");



    //using strtok in while loop (part 2)
    
    char str[] = "here we go again";
    char dilemiter[] = " ";
    char *portion = strtok(str, dilemiter);

    while(portion != NULL) {
        printf("%s\n", portion);
        portion = strtok(NULL, dilemiter);
    }


    //strtok function in C does not create a new string in the heap

    printf("str: %p\n", str);
    printf("dilemiter: %p\n", dilemiter);   //output: same as str's address. it means it didn't create a new string

    // so the strtok function works by modifying the input string (i.e., the character array) in place, by replacing the delimiter characters with null characters. This means that the original string is modified and split into tokens, rather than creating a new string.

    //lets make a experiment in this topic (comment out upper portion of part2 for a better view in the terminal)
    for(int i = 0; i<13; i++){
        if(str[i]=='\0')
            printf("\\0\n");
        else
            printf("%c\n", str[i]);
    }

    //after analysing the output its clear that: the original string is modified and split into tokens and strtok didn't crate any new string
    return 0;
}