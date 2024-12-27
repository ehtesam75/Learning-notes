#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3}, {22,43,64}, {3,6,9}}, sumofdiagoanlelement = 0, sum_upper = 0, sum_lower = 0;
    //priting matrix
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            if(i == j){
                sumofdiagoanlelement = sumofdiagoanlelement + a[i][j];
            }
            if(i<j){
                sum_upper = sum_upper + a[i][j];
            }
            if(i>j){
                sum_lower = sum_lower + a[i][j];
            }
        }
    }

    printf("Sum of diagoanal element is %d \n", sumofdiagoanlelement);
    printf("Sum of upper element is %d \n", sum_upper);
    printf("Sum of lower element is %d \n", sum_lower);
    return 0;
}