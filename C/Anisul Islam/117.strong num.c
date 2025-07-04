#include <stdio.h>
int main() {
    int initial_num = 1, end_num = 1000, reminder, fact =1, result = 0; //here initial and end num denotes the range of strong that should be printed 
    for(int i = initial_num; i<=end_num; i++){
    int temp = i; //not initial_num as we're using a for loop outside of origianl code

    result = 0;   //reseting the value of result
    while(temp != 0){
        reminder = temp %10;
        int i = 2;  //used in while loop, started from 2 (not 1) cuz i already counted 1 outside of the loop (fact = 1)
        fact = 1;  //reseting the value of fact
        while(i <= reminder){
            fact = fact *i;
            i++;
        }
        result = result + fact;
        temp = temp /10;
    }
    if(result == i){ //not initial_num as we're using a for loop outside of origianl code
        printf("%d\t", result);
    }

    }


    return 0;
}