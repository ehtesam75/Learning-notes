#include <stdio.h>
#include <stdlib.h>     //rand, RAND_MAX is within this
#include <time.h>   //includes time(NULL)

int main() {
    srand(time(NULL));       //here at first i wrote srand(2) for experiment purpose to change the seed. it generates a different number one time. then the same shit happens again (generates the previous num). so we could add time(NULL) inside of srand(). time(NULL) is gonna return the current time, which its gonna do is it will give a different number each time the program is called. 

    printf("Random 1: %d\n", rand());
    printf("Random 2: %d\n", rand());
    printf("Random 3: %d\n", rand());
    printf("Random 4: %d\n", rand());
    //if we call it multiple times in the terminal, it still generates the same number as earlier. so its not really "random number"

    // we could use seed to generate differnet random number. by default seed is set to 1. but i could change the seed by calling srand() with different number. 

    printf("RAND_MAX: %d\n", RAND_MAX);

    for(int i =0; i<5; i++){
        int random = 1 + (rand() % 20);     //this will generate 1 to 20 num..."rand() % 20" will always be inbetween 0 to 19...we shift this up by adding a number to it (here 1)..so it will move 1 number rightwards
        printf("%d\n", random);
    }
    return 0;
}