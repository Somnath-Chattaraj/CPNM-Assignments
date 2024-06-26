#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int line = 1; line <= n; line++) {
        int C = 1; // The first value in a line is always 1
        for (int i = 1; i <= line; i++) {
            printf("%d ", C); // Print the current value
            C = C * (line - i) / i; // Calculate the next value
        }
        printf("\n");
    }

    return 0;
}
