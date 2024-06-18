#include <stdio.h>
#include <math.h>

void gaussEliminationPivoting(double a[3][4]) {
    int n = 3;

    // Partial pivoting
    for (int i = 0; i < n-1; i++) {
        for (int k = i+1; k < n; k++) {
            if (fabs(a[i][i]) < fabs(a[k][i])) {
                for (int j = 0; j <= n; j++) {
                    double temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }

    // Gauss Elimination
    for (int i = 0; i < n-1; i++) {
        for (int k = i+1; k < n; k++) {
            double t = a[k][i] / a[i][i];
            for (int j = 0; j <= n; j++) {
                a[k][j] = a[k][j] - t * a[i][j];
            }
        }
    }

    // Back substitution
    double x[3];
    for (int i = n-1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i+1; j < n; j++) {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }

    // Printing the solution
    printf("Solution by Gauss Elimination with Pivoting:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = %lf\n", i, x[i]);
    }
}

void gaussJordan(double a[3][4]) {
    int n = 3;

    // Applying Gauss Jordan Elimination
    for (int i = 0; i < n; i++) {
        if (a[i][i] == 0.0) {
            printf("Mathematical Error!\n");
            return;
        }
        for (int j = 0; j < n; j++) {
            if (i != j) {
                double ratio = a[j][i] / a[i][i];
                for (int k = 0; k <= n; k++) {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }

    // Obtaining the solution
    double x[3];
    for (int i = 0; i < n; i++) {
        x[i] = a[i][n] / a[i][i];
    }

    // Printing the solution
    printf("Solution by Gauss-Jordan Method:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = %lf\n", i, x[i]);
    }
}

void printMenu() {
    printf("\nMenu:\n");
    printf("1. Solve using Gauss Elimination with Pivoting\n");
    printf("2. Solve using Gauss-Jordan Method\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double a1[3][4] = {
        {1, 1, 1, 3},
        {2, 3, 1, 6},
        {1, -1, -1, -3}
    };
    double a2[3][4] = {
        {1, 1, 1, 3},
        {2, 3, 1, 6},
        {1, -1, -1, -3}
    };

    do {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                gaussEliminationPivoting(a1);
                break;
            case 2:
                gaussJordan(a2);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
