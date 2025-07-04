/*
enum is a user difined data type that consists of intregal constants
*/

#include <stdio.h>

enum days_of_week{
    sun, mon, tue, wed, thu, fri, sat  //auto initialize from 0
};

enum traffic_light{
    red=4, green, yellow   // or i can initilize value as of my preference
};

int main() {
    enum days_of_week day1, day2;
    day1 = tue;
    printf("%d\n", day1); 
    enum traffic_light num1;
    num1 = green; 
    printf("%d\n", num1);  
    return 0;
}