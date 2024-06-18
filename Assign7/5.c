#include <stdio.h>

// Function to calculate the cofactor of matrix A[p][q] in temp[][]
void getCofactor(float A[3][3], float temp[3][3], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = A[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Recursive function for finding determinant of matrix A
float determinant(float A[3][3], int n) {
    float D = 0;
    if (n == 1)
        return A[0][0];
    
    float temp[3][3];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

// Function to get adjoint of matrix A in adj
void adjoint(float A[3][3], float adj[3][3]) {
    if (3 == 1) {
        adj[0][0] = 1;
        return;
    }
    
    int sign = 1;
    float temp[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            getCofactor(A, temp, i, j, 3);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = (sign) * (determinant(temp, 3 - 1));
        }
    }
}

// Function to calculate inverse of matrix A
int inverse(float A[3][3], float inverse[3][3]) {
    float det = determinant(A, 3);
    if (det == 0) {
        printf("Singular matrix, can't find its inverse");
        return 0;
    }

    float adj[3][3];
    adjoint(A, adj);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            inverse[i][j] = adj[i][j] / det;

    return 1;
}

int main() {
    float A[3][3] = { {1, 1, 1}, {1, 1, -1}, {1, -1, 1} };
    float B[3] = {6, 0, 2};
    float invA[3][3];
    float X[3];

    if (inverse(A, invA)) {
        for (int i = 0; i < 3; i++) {
            X[i] = 0;
            for (int j = 0; j < 3; j++) {
                X[i] += invA[i][j] * B[j];
            }
        }
        printf("The solution is: x = %f, y = %f, z = %f\n", X[0], X[1], X[2]);
    }

    return 0;
}
