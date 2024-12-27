/*
linear search 
binary seacrh: it'll be discussed in data structure and algorithom topic
*/
#include <stdio.h>

int main() {
    int num[] ={23, 4, 5, 9,20};
    int search_value = 8, count=0;
    for(int i =0; i<=4; i++){
        if(num[i] == search_value){
            printf("%d is found!\n", search_value);
            printf("It's the %dth value of the array\n", i+1);
            break;
        }else{
            count++;
        }
        if(count ==5){
            printf("item is not found\n");
        }
    }
    return 0;
}