#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    if (num == 0) return 1;
    long long fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    long long sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }

    printf("Sum of the series is: %lld\n", sum);

    return 0;
}
