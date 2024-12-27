#include <iostream>
using namespace std;

int main(){
    char ch[5] = "agei";    // null at the end
    cout<< ch <<endl;  // it starts from the first character ('a') and continues until it encounters the null terminator ('\0').

    char *ptr = &ch[0];
    cout<< ptr <<endl;  //It will start from the memory address ptr points to and print characters until it encounters a null terminator ('\0').

    char temp = 'z';
    char *x = &temp;
    cout<< x <<endl;    //this will keep printing starting from 'z', till it find null character 

    char y[5] = "adkc"; //"abkc" will be stored in a temporary memory, then will be copied to 'y' array
    char *c = "ggdc"; //"ggdc" will be stored in a temprary memory, then its 1st block is pointed by 'c';; try ignoring it; Risky prosses

    cout<< c <<endl;
    return 0;
}