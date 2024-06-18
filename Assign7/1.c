#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x + x*x - 1;
}

void bisection(double a, double b, double tol) {
    double c;
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval\n");
        return;
    }
    while ((b-a) >= tol) {
        c = (a+b)/2;
        if (f(c) == 0.0)
            break;
        else if (f(c)*f(a) < 0)
            b = c;
        else
            a = c;
    }
    printf("The root is: %.4lf\n", c);
}

int main() {
    double a = 0, b = 1, tol = 0.0001;
    bisection(a, b, tol);
    return 0;
}
