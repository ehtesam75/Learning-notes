/*

*
**
* *
*  *
*****

*/

#include <stdio.h>
int main() {
    int row =5;
    for(int i =1; i<=row; i++){
        for(int j =1; j<=i; j++){
            if(j == 1 || j == i || i == row){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}