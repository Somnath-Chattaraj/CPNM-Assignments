#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += (i * i * (i + 1));
    }

    printf("Sum of the series is: %lld\n", sum);

    return 0;
}
