#include <stdio.h>

void printArrray(int arr[]);// or i could use int *arr

int main() {
    int array[5] = {1, 2, 3,4};
    printArrray(array);
    printf("%d\n", array[0]);
    printf("array: %p\n", array);  
    return 0;
}

void printArrray(int arr[]){
    printf("arr: %p\n", arr);  //same as the address of 'array'..what lesson did u learn from this?....:)
    arr[0] = arr[0] +1;
}

/*
 you are passing the array to the function printArray() as a parameter, which means that the function is receiving a pointer to the first element of the array. Inside the function, you are modifying the value of arr[0] by adding 1 to it. Since arr is a pointer to the first element of array, this also modifies the value of array[0].

So when you call printArray(array) in main(), you are actually passing a pointer to the first element of array, which is then modified inside the function. When you print array[0] after the function call, you can see that its value has been updated to 2.

*/