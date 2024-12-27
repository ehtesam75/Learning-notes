#include <stdio.h>

int main() {
    int num = 153;
    int temp = num, count = 0, remainder, result=0;
    while(temp !=0){
        temp = temp/10;
        count++; 
    }

    temp = num;
    while(temp != 0){
        remainder = temp % 10;
        int term=1;
        for(int i =0; i<count; i++){
            term = term * remainder;
        }
        result = result + term;  //nb. i didn't use pow function here. cuz the pow function returns a floating-point value, which can cause precision errors when used in integer arithmetic. so i created my own pow fucntion and stored the value in 'term'
        temp = temp/10;
    }
    if(result == num){
        printf("%d is a armstrong number\n", num);
    }else{
        printf("%d is not a armstrong number\n", num);
    }
    return 0;
}