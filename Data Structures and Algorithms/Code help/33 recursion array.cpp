#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1]) 
        return false;
    else 
        return isSorted(arr+1, size-1);
}

int getSum(int *arr, int size){
    if(size == 0) return 0;
    return arr[size-1] + getSum(arr, size-1);
}

int getSum2(int *arr, int size){
    if(size == 0) return 0;
    return arr[0] + getSum2(arr+1, size-1);
}

int getSum3(int *arr, int size){
    if(size == 1) return arr[0];
    return arr[0] + getSum3(arr+1, size-1);
}

bool linearSearch(int *arr, int size, int item){
    if(size == 0) return false;
    if(arr[0] == item) return true;
    return linearSearch(arr+1, size-1, item);
}

bool binarySearch(int *arr, int size, int s, int e, int item){
    if(s > e) return false;
    int mid = s + (e-s)/2;
    if(arr[mid] == item) return true;   //this is also a base case
    else if(arr[mid] > item) 
        return binarySearch(arr, size, s, mid-1, item);
    else 
        return binarySearch(arr, size, mid + 1, e, item);
}

int main(){
    int arr[5] = {1, 3, 7, 8, 9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans) cout << "Array is sorted" << endl;
    else cout << "Array is not sorted" << endl;

    cout << "sum is : " << getSum(arr, size) << endl;
    cout << "sum is : " << getSum2(arr, size) << endl;
    cout << "sum is : " << getSum3(arr, size) << endl;

    cout << "isFound :" << linearSearch(arr, size, 6) << endl;

    cout << "is Found : " << binarySearch(arr, size, 0, 4, 6) << endl;
    return 0;
}