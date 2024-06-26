#include <stdio.h>

void printKite(int size) {
    int n = size;

    // Top half
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf("*");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            printf("*");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main() {
    int n, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        for (j=1; j<=(n*2 - 1); j++) {
            if (j >= n - i + 1 && j <= n + i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (i = 0; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }


    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    printf("\n");
    
    printKite(n);


    return 0;
}
