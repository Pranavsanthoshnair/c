/*
Pranav S Nair
07/02/2025
Purpose - C program to find sum of elements of diagonal elements in matrix
*/
#include<stdio.h>

int main() {
    int row, col, sum = 0;
    printf("Enter no: of rows and columns : ");
    scanf("%d%d", &row, &col);
    if(row == col) {            // checking if square matrix or not
        int mat[row][col];
        printf("Enter Elements:\n");
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(i == j) {
                    sum += mat[i][j];  
                }
            }
        }
        printf("Sum of diagonal elements: %d\n", sum);
    } else {
        printf("No. of rows and columns are not the same.\n");
    }
    
    return 0;
}

