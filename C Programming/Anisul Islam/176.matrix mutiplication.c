#include <stdio.h>

int main() {
    int mat1_rows, mat1_cols, mat2_rows, mat2_cols;
    printf("Enter row and col number for matrix 1: ");
    scanf("%d %d", &mat1_rows, &mat1_cols);
    printf("Enter row and col number for matrix 2: ");
    scanf("%d %d", &mat2_rows, &mat2_cols);

    //cheacking wheather the inputed values are correct or not
    while(1){
        if(mat1_cols != mat2_rows){
                printf("\nInvalid input! Enter again\n");
                printf("Enter row and col number for matrix 1: ");
                scanf("%d %d", &mat1_rows, &mat1_cols);
                printf("Enter row and col number for matrix 2: ");
                scanf("%d %d", &mat2_rows, &mat2_cols);
        }
    }

    //scaning the matrixes
    int matrix1[mat1_rows][mat1_cols], matrix2[mat2_rows][mat2_cols], final[mat1_rows][mat2_cols], sum=0;
    printf("Enter matrix 1: \n");
    for(int i =0;i<mat1_rows; i++){
        for(int j =0; j<mat1_cols; j++){
            printf("Matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter matrix 2: \n");
    for(int i =0;i<mat2_rows; i++){
        for(int j =0; j<mat2_cols; j++){
            printf("Matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //getting the result
    for(int i = 0; i<mat1_rows; i++){
        for(int j=0; j<mat2_cols; j++){
            for(int k =0; k<mat1_cols; k++){    //or i could write k < mat2_rows
                sum = sum + matrix1[i][k] * matrix2[k][j];
            }
            final[i][j] = sum;
            sum = 0;
        }
    }

    //printing result
    printf("\nMatrix 1 x Matrix 2: \n");
    for(int i =0; i<mat1_rows; i++){
        printf("\t");
        for(int j =0; j<mat2_cols; j++){
            printf("%d ", final[i][j]);
        }
        printf("\n");
    }
    return 0;
}