/*
Pranav S Nair
05/02/2025
Purpose - To make diagonal elements of matrix 0
*/

#include<stdio.h>
int main() {
    int row, col;
    printf("Enter no of rows and columns (same): ");
    scanf("%d%d", &row, &col);
    if (row != col) {
        printf("Matrix is not square");
    }
    int mat[row][col];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                mat[i][j] = 0;
            } else {
                printf("Enter elements:");
                scanf("%d", &mat[i][j]);
            }
        }
    }
    printf("\nMatrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

