#include <stdio.h>

void invertMatrix(double a[3][3], double inverse[3][3]) {
    int n = 3;
    double temp;

    double identity[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    for (int i = 0; i < n; i++) {
        temp = a[i][i];
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i][j] / temp;
            identity[i][j] = identity[i][j] / temp;
        }
        for (int k = 0; k < n; k++) {
            if (k != i) {
                temp = a[k][i];
                for (int j = 0; j < n; j++) {
                    a[k][j] = a[k][j] - a[i][j] * temp;
                    identity[k][j] = identity[k][j] - identity[i][j] * temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inverse[i][j] = identity[i][j];
}

void matrixInversionMethod() {
    double a[3][3] = {
        {1, 1, 1},
        {1, 1, -1},
        {1, -1, 1}
    };
    double b[3] = {6, 0, 2};
    double inverse[3][3];
    double x[3];

    invertMatrix(a, inverse);

    for (int i = 0; i < 3; i++) {
        x[i] = 0;
        for (int j = 0; j < 3; j++) {
            x[i] += inverse[i][j] * b[j];
        }
    }

    printf("Solution by Matrix Inversion Method:\n");
    for (int i = 0; i < 3; i++) {
        printf("x[%d] = %lf\n", i, x[i]);
    }
}

int main() {
    matrixInversionMethod();
    return 0;
}
