#include <stdio.h>

// Function to calculate the sum of factors of a number
int sumOfFactors(int num) {
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    int totalSum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        totalSum += sumOfFactors(i);
    }

    printf("Sum of the series is: %d\n", totalSum);

    return 0;
}
