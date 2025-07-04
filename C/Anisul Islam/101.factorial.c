#include <stdio.h>

int main() {
    int fact_num = 4;
    int fact_store = 1;
    for(int i = fact_num; i>=1; i--){
        fact_store = fact_store *i ;
    }
        printf("%d factorial is : %d\n", fact_num, fact_store);
    getchar();
}