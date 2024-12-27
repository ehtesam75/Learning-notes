// position of pivot

#include<iostream>
using namespace std;

int main(){
        int arr[7] = {6, 7, 9, 10, 2, 3, 4};
        int start = 0;
        int end = 7-1;
        int mid = start + (end - start)/2;
        while(start<end){
            if(arr[mid] >= arr[0])
                start = mid +1;
            else 
                end = mid -1;
            
            mid = start + (end - start)/2;
        }

        cout<<start<<endl; //or i can return end, same...dry run the code for understanding
}

