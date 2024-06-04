#include <stdio.h>

int checkFibonacci(int num) {
    int a = 0, b = 1, c = 0;

    if (num == a || num == b)
        return 1;

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    return num == c;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkFibonacci(num))
        printf("%d is in the Fibonacci series.\n", num);
    else
        printf("%d is not in the Fibonacci series.\n", num);

    return 0;
}