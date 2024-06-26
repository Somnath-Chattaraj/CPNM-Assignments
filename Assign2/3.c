#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int original = num, sum = 0, n = 0;
    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, n);
        original /= 10;
    }
    return (num == sum);
}

int main() {
    int low, high;
    printf("Enter the range (low high): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);
    for (int i = low; i <= high; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
