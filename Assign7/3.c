#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - 9*x + 1;
}

void falsePosition(double a, double b, double tol) {
    double c;
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval\n");
        return;
    }
    do {
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));
        if (f(c) == 0.0)
            break;
        else if (f(c)*f(a) < 0)
            b = c;
        else
            a = c;
    } while (fabs(f(c)) >= tol);
    printf("The root is: %.4lf\n", c);
}

int main() {
    double a = 0, b = 1, tol = 0.0001;
    falsePosition(a, b, tol);
    return 0;
}
