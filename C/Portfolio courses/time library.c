#include <stdio.h>
#include <time.h>
#include <unistd.h>     //includes sleep() functon

int main() {
    time_t current_time = time(NULL);   //time(NULL) will count the number of secs since jan 1 1970 midnight, it returns the current time
    printf("%ld\n", current_time);

    //sleep func
    sleep(2);
    time_t two_secs = time(NULL);
    printf("%ld\n", two_secs);

    //time difference
    double difference = difftime(two_secs, current_time);
    printf("differ: %lf \n", difference);


    //current time 
    time_t now = time(NULL);        //This program first calls time(NULL) to get the current time as a time_t value. It then passes this value to the ctime() function to convert it to a human-readable string. Finally, it prints out the current time as both a time_t value and a string.
    char *string_now = ctime(&now);      //ctime return a pointer to a string 
    printf("%s\n", string_now);


    //gm_time
    struct tm *gm_time = gmtime(&now);    //gmtime returns a pointer to struct

    printf("tm_sec: %d\n", gm_time->tm_sec);
    printf("tm_min: %d\n", gm_time->tm_min);
    printf("tm_hour: %d\n", gm_time->tm_hour);  //won't match..cuz its grinich time
    printf("tm_mday: %d\n", gm_time->tm_mday);
    printf("tm_mon: %d\n", gm_time->tm_mon);    //will count 1 less...cuz january will be 0..feb 1..
    printf("tm_year: %d\n", gm_time->tm_year);     //number of years since 1900..so i add 1900 manualy to get exact year
    printf("tm_wday: %d\n", gm_time->tm_wday);      //number of days since sunday
    printf("tm_yday: %d\n", gm_time->tm_yday);
    printf("tm_isdst: %d\n", gm_time->tm_isdst);    //whether its day light saving time or not

    char *other_string = asctime(gm_time);
    printf("%s\n", other_string);
    //see the difference between asctime and ctime?? The difference between ctime() and asctime() is that ctime() takes a time_t value as input and returns a string, while asctime() takes a tm structure as input and returns a string. Also, ctime() is simpler to use since it does not require you to first break down the time value into its component parts. However, if you already have a tm structure representing the calendar time, then asctime() may be more appropriate to use.

    return 0;
}

/*
time_t data type is a built-in type in C's time.h library, and it is used to represent time values. The time() function returns the current time as a time_t value, which represents the number of seconds that have elapsed since the Unix Epoch (January 1st, 1970, 00:00:00 UTC).
*/