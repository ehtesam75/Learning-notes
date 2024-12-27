#include <stdio.h>

int main() {
    for(int i = 0; i<=20; i++){
        if(i%3 == 0){
            continue;  //bypass
        }
        printf("%d\n", i);
        if(i ==10){
            break; //loop terminate
        }
    }
    return 0;
}