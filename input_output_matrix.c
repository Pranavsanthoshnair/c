/*
Pranav S Nair
07/02/2025
Purpose - To input and print a 2D matrix
*/

#include<stdio.h>
int main() {
    int row, col;
    printf("Enter no of rows and columns: ");
    scanf("%d%d", &row, &col);
    int mat[row][col];
    printf("Enter elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
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

