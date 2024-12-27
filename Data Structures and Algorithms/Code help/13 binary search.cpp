// First and Last Position of an Element In Sorted Array

#include <bits/stdc++.h>
using namespace std;

int firstOca(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;  //in simple: mid = (start + end)/2...but we wrote like that inorder to avoid error..didn't understand? imagine start and end being 2^30 or something like this..:)
    int minIndex =-1;

    while(start <= end){
        if(arr[mid] == key){
            minIndex = mid;
            end = mid -1;
        }

        else if(arr[mid] > key)
            end = mid -1;

        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return minIndex;
}

int lastOca(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int maxIndex =-1;

    while(start <= end){
        if(arr[mid] == key){
            maxIndex = mid;
            start = mid +1;
        }

        else if(arr[mid] > key)
            end = mid -1;

        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return maxIndex;
}

int main(){
    int arr[6] ={1, 2, 2, 2, 8, 9};
    int res = firstOca(arr, 6, 2);
    int last = lastOca(arr, 6, 2);
    cout<<res<<endl;
    cout<<last<<endl;


}


