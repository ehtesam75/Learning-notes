#include <stdio.h>
#include <unistd.h>

int main() {
    printf("before\n");
    sleep(4);       //will pause for 4 secs
    printf("after\n");
    // usleep(5000000);    (this function is depricated from the version i'm using, but still available in many version; anyway 'usleep' take value in microseconds...5,000,000 = 5secs)
    // printf("after microsec\n");
    return 0;
}