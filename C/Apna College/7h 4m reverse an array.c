//reverse an array
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for(int i=0; i<n/2; i++){
        int temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = temp;
    }

    for(int i =0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}