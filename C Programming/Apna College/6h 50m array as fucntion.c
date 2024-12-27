/*
Syntex:
void printNumber(int arr[]) - square braket method
void printNumber(int *arr) - pointer method
[these function declarations are equivalent, means same]

*/

#include <stdio.h>

void printNumber(int *arr, int n);   //here i could even use arr[]
int main() {
    int number[] = {1, 2, 3, 4, 5};
    printNumber(number, 5);   //here 'number' is equivalent to '&number[0]'
    return 0;
}

void printNumber(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}