#include <stdio.h>
#include <time.h>

int main() {
    //time in my timezone
    time_t now = time (NULL);
    struct tm *cur_time = localtime(&now);
    printf("tm_min: %d\n", cur_time->tm_min);
    printf("tm_hour: %d\n", cur_time->tm_hour);  //won't match..cuz its grinich time
    printf("tm_year: %d\n", cur_time->tm_year);

    cur_time->tm_sec = cur_time->tm_sec + 1;
    time_t new_time = mktime(cur_time);
    printf("now: %ld\n", now);
    printf("new time: %ld\n", new_time);


    char s[100];
    int length = strftime(s, 100, "%A %B %d", cur_time);   //this fucntion returns the length....but i don't need to use "int length" before tho to print the string
    printf("%s\n", s);
    printf("%d\n", length);


    clock_t start, end;
    start = clock();
    for(int i = 0; i<100000000; i++){}
    end = clock();

    double total = (double) (end - start)/CLOCKS_PER_SEC;    //total will give me the number of secs the program spent of doing that work
    printf("Time : %lfs\n", total);

    return 0;
}

/*

some of format specifiers of strftime function
%a: abbreviated weekday name (e.g., "Sun")
%A: full weekday name (e.g., "Sunday")
%b: abbreviated month name (e.g., "Jan")
%B: full month name (e.g., "January")
%c: date and time representation appropriate for the current locale (e.g., "Sun Jan 1 00:00:00 2006")
%C: century number (the year divided by 100 and truncated to an integer) (e.g., "20" for the year 2023)
%d: day of the month (e.g., "01")
%D: date in the format mm/dd/yy (e.g., "01/01/23")
%e: day of the month, with a leading space for single-digit days (e.g., " 1" or "31")
%F: date in the format yyyy-mm-dd (e.g., "2023-01-01")
%H: hour in 24-hour format (e.g., "00" to "23")
%I: hour in 12-hour format (e.g., "01" to "12")
%j: day of the year (e.g., "001" for January 1st)
%m: month number (e.g., "01" for January)
%M: minute (e.g., "00" to "59")
%n: newline character
%p: "AM" or "PM" in uppercase (e.g., "AM" or "PM")
%r: time in 12-hour format with AM/PM (e.g., "12:00:00 AM")
%R: time in 24-hour format without seconds (e.g., "00:00")
%S: seconds (e.g., "00" to "59")
%t: tab character
%T: time in 24-hour format with seconds (e.g., "00:00:00")
%u: day of the week as a number, where Monday is 1 and Sunday is 7
%U: week number of the year, where Sunday is the first day of the week (e.g., "00" to "53")
%V: ISO week number of the year, where Monday is the first day of the week (e.g., "01" to "53")
%w: day of the week as a number, where Sunday is 0 and Saturday is 6
%W: week number of the year, where Monday is the first day of the week (e.g., "00" to "53")
%x: date representation appropriate for the current locale (e.g., "01/01/23")
%X: time representation appropriate for the current locale (e.g., "00:00:00")
%y: last two digits of the year (e.g., "23")
%Y: year with century (e.g., "2023")
%z: time zone offset from UTC in the format +hhmm or -hhmm (e.g., "+0530")
%Z: time zone name or abbreviation (e.g., "IST" or "GMT")

*/