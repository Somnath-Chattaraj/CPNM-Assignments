#include <stdio.h>

double f(double x) {
    return 1.0 / (x + 1);
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        sum += 2.0 * f(a + i * h);
    }

    return (h / 2.0) * sum;
}

double simpsons(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i += 2) {
        sum += 4.0 * f(a + i * h);
    }

    for (int i = 2; i < n - 1; i += 2) {
        sum += 2.0 * f(a + i * h);
    }

    return (h / 3.0) * sum;
}

int main() {
    double a = 0.0;
    double b = 6.0;
    int n = 6;

    double trapezoidal_result = trapezoidal(a, b, n);
    double simpsons_result = simpsons(a, b, n);

    printf("Trapezoidal Rule Result: %f\n", trapezoidal_result);
    printf("Simpson's 1/3 Rule Result: %f\n", simpsons_result);

    return 0;
}
