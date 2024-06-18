#include <stdio.h>

// Function to calculate the determinant of a 3x3 matrix
double determinant(double matrix[3][3]) {
    double det;
    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
          matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
          matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    return det;
}

// Function to calculate the cofactor matrix
void cofactor(double matrix[3][3], double temp[3][3], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Function to calculate the adjoint of a 3x3 matrix
void adjoint(double matrix[3][3], double adj[3][3]) {
    if (determinant(matrix) == 0) {
        printf("Singular matrix, can't find its inverse\n");
        return;
    }

    double temp[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cofactor(matrix, temp, i, j, 3);
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp);
        }
    }
}

// Function to calculate the inverse of a 3x3 matrix
void inverse(double matrix[3][3], double inverse[3][3]) {
    double det = determinant(matrix);
    if (det == 0) {
        printf("Singular matrix, can't find its inverse\n");
        return;
    }

    double adj[3][3];
    adjoint(matrix, adj);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inverse[i][j] = adj[i][j] / det;
        }
    }
}

// Function to multiply two matrices
void multiply(double matrix1[3][3], double matrix2[3][1], double result[3][1]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    double A[3][3] = {
        {1, 1, 1},
        {1, 1, -1},
        {1, -1, 1}
    };
    double B[3][1] = {
        {6},
        {0},
        {2}
    };
    double invA[3][3];
    double X[3][1];

    inverse(A, invA);
    multiply(invA, B, X);

    printf("Solution using Matrix Inversion Method:\n");
    printf("x = %lf\n", X[0][0]);
    printf("y = %lf\n", X[1][0]);
    printf("z = %lf\n", X[2][0]);

    return 0;
}
