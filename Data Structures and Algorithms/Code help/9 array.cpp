#include<iostream>
#include<climits>
using namespace std;

void reverseArray(int array[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
        int n = 3;
        int arrNew[n] = {3, 5, 2}; //bad practise; cuz in this process array size is getting defined in runtime (say n is user inputted)..but array size should be defined in compile time (but why? watch the video 24:00; must watch)

        int arr[5] = {33, 23, 8, 9, 10};
        int maximum = INT_MIN;
        int minimum = INT_MAX;

        for(int i= 0; i<5; i++){
            maximum = max(maximum, arr[i]);
            minimum = min(minimum, arr[i]);
        }

        cout<<maximum<<endl;
        cout<<minimum<<endl;

        cout<<endl<<endl;

        int array[6] = {1, 22, 3, 4, 5, 8};
        reverseArray(array, 6);    //will work as call by reference..cause we're sending "array" (which is also known as &array[0])
        printArray(array, 6);

        cout<<endl;
        int newTechniqe[3] = {1, 2, 3}; 
        for(int i:newTechniqe){    //This is the syntax for a range-based for loop in C++. It is used to iterate over the elements of a container, in this case, v. - This declares a variable i of type int, which will be used to store each element of the container v during each iteration of the loop.
            cout<<i<<" ";
        }

    return 0;
}