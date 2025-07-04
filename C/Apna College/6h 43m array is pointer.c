/*
ARRAY IS A POINTER

int *ptr = &arr[0];
int *ptr = arr;

here, arr is the same as &arr[0]. it means in 2nd line, 'arr' is pointing the 0th location of that array. so array is a pointer itself
*/

#include <stdio.h>

int main() {
    int rahim[5];
    
    //input
    int *ptr = &rahim[0];
    for(int i =0; i<5; i++){
        printf("index: %d\n", i);
        scanf("%d", (ptr+i));   //don't need to use & here, cuz we are basically using memory address, ptr (not *ptr); more explained below
    }

    //output
    for(int i =0; i<5; i++){
        printf("%d\t", *(ptr+i));
    }

    return 0;
}

/*

When you use the scanf function with the (ptr+i) expression, you are passing a pointer to the ith element of the rahim array. Since ptr points to the first element of the array, adding i to ptr gives you a pointer to the ith element of the array.

Therefore, in this case, you don't need to use the & operator to pass the address of the variable to the scanf function because you are already passing a pointer to the variable (i.e., a pointer to the ith element of the rahim array). The scanf function expects a pointer to the variable that it needs to store the user input into, and that's exactly what you are passing by using (ptr+i).

In summary, you don't need to use the & operator in this code because the array name rahim is equivalent to &rahim[0], and using (ptr+i) gives you a pointer to the ith element of the rahim array, which is what the scanf function expects.

*/