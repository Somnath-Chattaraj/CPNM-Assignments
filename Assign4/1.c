#include <stdio.h>


int main() {
    printf("Enter rows and columns of matrix A: ");
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int A[rows][cols];
    printf("Enter elements of matrix A: ");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and columns of matrix B: ");
    int rows2, cols2;
    scanf("%d %d", &rows2, &cols2);
    int B[rows2][cols2];
    printf("Enter elements of matrix B: ");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            scanf("%d", &B[i][j]);
        }
    }
    if (cols != rows2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int C[rows][cols2];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols2; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix A:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix C:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols2; ++j) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;

}