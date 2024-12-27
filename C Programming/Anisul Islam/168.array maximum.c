/*
arr[index];
index strts form zero, can't be a negetive value

array can of 2 types:
1. one dimentional array or linear arr
2. multidimensional array: 2 dimentional (matrix array), 2 dimentional array.
*/

#include <stdio.h>

int main() {
    int array[5] = {2386, 534, 2, 1, 999};
    int max = array[0];
    for(int i =1; i<5; i++){
        if(array[i]> max){
            max = array[i];
        }
    }
    printf("Max value is : %d", max);
    return 0;
}