#include <stdio.h>

#define N 3

void swap_row(float m[N][N+1], int i, int j) {
    for (int k=0; k<=N; k++) {
        float temp = m[i][k];
        m[i][k] = m[j][k];
        m[j][k] = temp;
    }
}

void gauss_elimination_pivot(float m[N][N+1]) {
    for (int i=0; i<N; i++) {
        int pivot = i;
        for (int j=i+1; j<N; j++) {
            if (m[j][i] > m[pivot][i])
                pivot = j;
        }
        if (pivot != i)
            swap_row(m, i, pivot);

        for (int j=i+1; j<N; j++) {
            float f = m[j][i] / m[i][i];
            for (int k=0; k<=N; k++)
                m[j][k] -= f * m[i][k];
        }
    }

    float x[N];
    for (int i=N-1; i>=0; i--) {
        x[i] = m[i][N];
        for (int j=i+1; j<N; j++) {
            if (i != j)
                x[i] = x[i] - m[i][j]*x[j];
        }
        x[i] = x[i] / m[i][i];
    }

    printf("\nSolution: ");
    for (int i=0; i<N; i++)
        printf("%f ", x[i]);
    printf("\n");
}

void gauss_jordan(float m[N][N+1]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i != j) {
                float ratio = m[j][i] / m[i][i];
                for (int k=0; k<=N; k++)
                    m[j][k] -= ratio * m[i][k];
            }
        }
    }

    printf("\nSolution: ");
    for (int i=0; i<N; i++)
        printf("%f ", m[i][N] / m[i][i]);
    printf("\n");
}

int main() {
    float m[N][N+1] = {{3, 2, -4, 3}, {2, 3, 3, 15}, {5, -3, 1, 14}};
    int choice;
    printf("1. Gauss Elimination with Pivoting\n2. Gauss Jordan\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            gauss_elimination_pivot(m);
            break;
        case 2:
            gauss_jordan(m);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}