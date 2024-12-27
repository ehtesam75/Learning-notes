#include<iostream>
using namespace std;

void swapAlternative(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        swap(arr[i], arr[i+1]);
        if(n %2 != 0 && i==n-2-1)
            break;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
        int arr[7] = {1, 2, 3, 4, 5, 6, 7};
        swapAlternative(arr, 7);
        printArray(arr, 7);
        
    return 0;
}