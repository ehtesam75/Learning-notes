#include <stdio.h>


int main(){
    int data = 153, sum = 0;
    int temp = data;
    while(data>0){
        int digit = data % 10;
        sum = sum + digit;
        data = data /10;
    }

    printf("%d = %d\n",temp,  sum);
}
