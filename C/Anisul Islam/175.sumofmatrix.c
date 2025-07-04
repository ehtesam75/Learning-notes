#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and cols for matrix a and b: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    //scaning the matrixs from user
    printf("Enter the 1st matrix : \n");
    for(int i =0; i<rows; i++){
        for(int j =0; j<cols; j++){
            printf("Matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter the 2nd matrix : \n");
    for(int i =0; i<rows; i++){
        for(int j =0; j<cols; j++){
            printf("Matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //counting sum
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    //printing result
    printf("\nMatrix1 + Matrix2 =  ");
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
        printf("\t\t     ");
    }
    return 0;
}