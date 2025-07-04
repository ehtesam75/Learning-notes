#include <stdio.h>

int main() {
    const int matrix1_row = 3, matrix1_cols =3; // use the const keyword to make sure that the values cannot be changed, then why did i use it here?? remove it and find out the reason!!
    int matrix1[3][3] = {{1,2,3}, {22,43,64}, {3,6,9}};
    int transposep[3][3];
    for(int i = 0; i<matrix1_row; i++){
        for(int j =0; j<matrix1_cols; j++){
            transposep[j][i] = matrix1[i][j];
        }
    }

        for(int i = 0; i<matrix1_cols; i++){
        for(int j =0; j<matrix1_row; j++){
            printf("%d ", transposep[i][j]);
        }
        printf("\n");
    }
    return 0;
}