#include <stdio.h>

#define N 3

void getCofactor(float A[N][N], float temp[N][N], int p, int q, int n) {
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

float determinant(float A[N][N], int n) {
    float D = 0;
    if (n == 1)
        return A[0][0];

    float temp[N][N];
    int sign = 1;
    for (int f = 0; f < n; f++) {
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

void adjoint(float A[N][N], float adj[N][N]) {
    if (N == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1;
    float temp[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            getCofactor(A, temp, i, j, N);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = (sign) * (determinant(temp, N - 1));
        }
    }
}

void inverse(float A[N][N], float inverse[N][N]) {
    float det = determinant(A, N);
    if (det == 0) {
        printf("Singular matrix, can't find its inverse");
        return;
    }

    float adj[N][N];
    adjoint(A, adj);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            inverse[i][j] = adj[i][j] / det;
}

void matrix_inversion(float A[N][N], float B[N]) {
    float inv[N][N];
    inverse(A, inv);

    printf("\nSolution: ");
    for (int i = 0; i < N; i++) {
        float x = 0;
        for (int j = 0; j < N; j++)
            x += inv[i][j] * B[j];
        printf("%f ", x);
    }
    printf("\n");
}

int main() {
    float A[N][N] = {{3, 2, -4}, {2, 3, 3}, {5, -3, 1}};
    float B[N] = {3, 15, 14};
    matrix_inversion(A, B);
    return 0;
}