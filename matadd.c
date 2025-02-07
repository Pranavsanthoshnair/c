/*
Pranav S Nair
07/02/2025
Purpose - To add 2 matrices
*/

#include <stdio.h>
int main() {
    int row, col;
    printf("Enter No.of rows and columns: ");
    scanf("%d%d", &row, &col);
    int m1[row][col], m2[row][col], sum[row][col];
    printf("\nEnter 1st Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nEnter 2nd Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

