#include <stdio.h>
#define LENGTH 5  //prepossor/ one kind of constants

int x = 5;
int len;
//len = x;   [this will show error. cuz i had to initalize the variable with a constant value..in global variable]


int main() {
    int arr[LENGTH] = {3, 5, 6, 2, 1};
    const int num = 5;  //this value won't be changed
    


    return 0;
}

