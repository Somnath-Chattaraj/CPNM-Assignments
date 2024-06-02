#include <stdio.h>

int checkPrime(int n) {
    int i, isPrime = 1;

    if (n == 0 || n == 1) {
        isPrime = 0;
    }
    else {
        for(i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    return isPrime;
}

int main() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; ++i) {
        if (checkPrime(i)) {
            if (checkPrime(num - i)) {
                printf("%d = %d + %d\n", num, i, num - i);
                flag = 1;
            }
        }
    }

    if (!flag) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}