#include <iostream>
#include <limits.h>
using namespace std;

/*
When a function has a return type of void, it means that the function doesn't return a value, 
so you don't need to use the return keyword to explicitly return a value. In fact, you can simply 
omit the return keyword when making a recursive call or when exiting the function, and the function will naturally return to the caller without returning a value.
*/

void bubbleSort(int *arr, int n){
    if(n == 0 || n == 1) 
        return;

    bool swaped = false;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            swaped = true;
        }
    }
    if(swaped == false) return;
    bubbleSort(arr, n-1);
}


void selectionSort(int *arr, int n){
    if(n == 0 || n == 1) return;
    int min = INT_MAX, pos = -1;
    for(int i=1; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
            pos = i;
        }
    }
    if(arr[0] > min){
        swap(arr[0], arr[pos]);
    }
    selectionSort(arr+1, n-1);
}


void insertionSort(int *arr, int n, int i){
    if(i == n) return;
    int temp = arr[i];
    int j = i-1;
    while(j >= 0 && arr[j] > temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
    insertionSort(arr, n, i+1);
}

int main(){
    int arr[5] = {3, 9,7, 2, 1};
    bubbleSort(arr, 5);
    for(int i:arr){
        cout << i << " ";
    }
    cout << endl;

    int arr2[5] = {23, 88, 32, 18, 98};
    selectionSort(arr2, 5);
    for(int i:arr2){
        cout << i << " ";
    }
    cout << endl;


    int arr3[5] = {28, 82, 92, 44, 1};
    insertionSort(arr3, 5, 1);
    for(int i:arr3){
        cout << i << " ";
    }
    cout << endl;   
}