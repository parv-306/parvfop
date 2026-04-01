

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}



void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}   

void addMatrices(int matrixA[MAX][MAX], int matrixB[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

int main() {
    int matrixA[MAX][MAX], matrixB[MAX][MAX], result[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Matrix A:\n");
    inputMatrix(matrixA, rows, cols);
    printf("Matrix B:\n");
    inputMatrix(matrixB, rows, cols);

    addMatrices(matrixA, matrixB, result, rows, cols);

    printf("Result of Matrix Addition:\n");
    displayMatrix(result, rows, cols);

    return 0;
}




