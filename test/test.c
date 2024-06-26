#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    int i = n;
    int p = 1;
    while (i > 0) {
        p = i*=p;
        i--;
    }
    return p;
}

int nCr(int n, int r) {
    return (factorial(n) / (factorial(r) * factorial((n-r))));
}

int main() {

    int n;
    printf("Enter numbers of row: ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        for (int j=1; j <= ((n-1)*2 + 1); j++) {
            if (j>=n-i+1 && j<=n+i-1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    return 0;

}